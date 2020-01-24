/**
 * A tree-sitter grammar for Beancount
 */

const CURRENCY = /[A-Z][A-Z0-9\'\._\-]{0,22}[A-Z0-9]/;
const DATE = /[0-9]{4,}[\-/][0-9]+[\-/][0-9]+/;
const NUMBER = /([0-9]+|[0-9][0-9,]+[0-9])(.[0-9]*)?/;
const EOL = /\n/;
const KEY = /[a-z][a-zA-Z0-9\-_]+:/;
const TAG = /#[A-Za-z0-9\-_/.]+/;
const LINK = /\^[A-Za-z0-9\-_/.]+/;
const COMMENT = /;.*/;

// the preceding newline is part of the indent token.
const INDENT = /\n[ \r\t]+/;

const tokens = {
  bool: $ => token(/TRUE|FALSE/),
  date: $ => token(DATE),
  key: $ => token(KEY),
  tag: $ => token(TAG),
  link: $ => token(LINK),
  string: $ => token(/"[^"]*"/),
  currency: $ => token(CURRENCY),
  number: $ => token(NUMBER),
  flag: $ => /[!&?%PSTCURM*#]/,
  account: $ =>
    token(
      seq(
        /[A-Z]|[^\x00-\x7F]/,
        repeat(/[A-Za-z0-9\-]|[^\x00-\x7F]/),
        repeat1(
          seq(
            ":",
            /[A-Z0-9]|[^\x00-\x7F]/,
            repeat(/[A-Za-z0-9\-]|[^\x00-\x7F]/),
          ),
        ),
      ),
    ),
};

// TODO:
// "Correct" UTF-8-aware token rule for accounts. Currently not feasible:
// https://github.com/tree-sitter/tree-sitter/issues/464
// token(seq(/\p{Lu}[0-9\-\p{L}]*/u, repeat1(/:[0-9\p{Lu}][0-9\-\p{L}]*/u)));

/** Numerical expressions. */
const number_expression = {
  _num_expr: $ =>
    choice($.number, $._paren_num_expr, $.unary_num_expr, $.binary_num_expr),
  _paren_num_expr: $ => seq("(", $._num_expr, ")"),
  unary_num_expr: $ =>
    prec(3, choice(seq("-", $._num_expr), seq("+", $._num_expr))),
  binary_num_expr: $ =>
    choice(
      prec.left(2, seq($._num_expr, "*", $._num_expr)),
      prec.left(2, seq($._num_expr, "/", $._num_expr)),
      prec.left(1, seq($._num_expr, "+", $._num_expr)),
      prec.left(1, seq($._num_expr, "-", $._num_expr)),
    ),
};

const posting = {
  cost_spec: $ =>
    choice(
      seq("{", optional($.cost_comp_list), "}"),
      seq("{{", optional($.cost_comp_list), "}}"),
    ),
  cost_comp_list: $ => seq($.cost_comp, repeat(seq(",", $.cost_comp))),
  cost_comp: $ => choice($.compound_amount, $.date, $.string, "*"),
  compound_amount: $ =>
    choice(
      seq(
        field("number_per", optional($._num_expr)),
        field("currency", $.currency),
      ),
      seq(
        field("number_per", $._num_expr),
        field("currency", optional($.currency)),
      ),
      seq(
        field("number_per", optional($._num_expr)),
        "#",
        field("number_total", optional($._num_expr)),
        field("currency", $.currency),
      ),
    ),
  incomplete_amount: $ =>
    choice(seq($._num_expr, $.currency), seq($._num_expr), seq($.currency)),
  price_annotation: $ =>
    choice(
      seq("@@", optional($.incomplete_amount)),
      seq("@", optional($.incomplete_amount)),
    ),
  posting: $ =>
    seq(
      INDENT,
      field("flag", optional($.flag)),
      field("account", $.account),
      field("amount", optional($.incomplete_amount)),
      field("cost_spec", optional($.cost_spec)),
      field("price_annotation", optional($.price_annotation)),
      field("metadata", optional($.metadata)),
    ),
  postings: $ => repeat1(choice($.posting, seq(INDENT, COMMENT))),
};

// A helper function to create dated directive rules
// includes date, name and metadata.
const datedDirective = ($, name, ...fields) =>
  seq(
    field("date", $.date),
    name,
    ...fields,
    field("metadata", optional($.metadata)),
    EOL,
  );

const undated_directives = {
  _undated_directives: $ =>
    choice(
      $.include,
      $.option,
      $.plugin,
      $.popmeta,
      $.poptag,
      $.pushmeta,
      $.pushtag,
    ),
  include: $ => seq("include", $.string, EOL),
  option: $ =>
    seq("option", field("key", $.string), field("value", $.string), EOL),
  plugin: $ =>
    seq(
      "plugin",
      field("name", $.string),
      field("config", optional($.string)),
      EOL,
    ),
  pushtag: $ => seq("pushtag", field("tag", $.tag), EOL),
  poptag: $ => seq("poptag", field("tag", $.tag), EOL),
  pushmeta: $ => seq("pushmeta", field("key_value", $.key_value), EOL),
  popmeta: $ => seq("popmeta", field("key", $.key), EOL),
};

const metadata = {
  _key_value_value: $ =>
    choice(
      $.string,
      $.account,
      $.date,
      $.currency,
      $.tag,
      $.bool,
      $._num_expr,
      $.amount,
    ),
  key_value: $ => seq($.key, optional($._key_value_value)),
  metadata: $ => repeat1(seq(INDENT, $.key_value)),
};

module.exports = grammar({
  name: "beancount",
  extras: $ => [/[ \t\r]/],
  conflicts: $ => [[$.posting], [$.metadata], [$.tags_and_links]],

  rules: {
    beancount_file: $ =>
      repeat(
        choice($._dated_directives, $._undated_directives, $._skipped_lines),
      ),
    _skipped_lines: $ =>
      choice(
        seq($.flag, /.*/, EOL),
        seq(":", /.*/, EOL),
        EOL,
        seq(COMMENT, EOL),
      ),
    ...metadata,
    ...undated_directives,
    _dated_directives: $ =>
      choice(
        $.balance,
        $.close,
        $.commodity,
        $.custom,
        $.document,
        $.event,
        $.note,
        $.open,
        $.pad,
        $.price,
        $.transaction,
        $.query,
      ),
    ...posting,
    /* Dated directives. */
    tags_and_links: $ => repeat1(seq(optional(INDENT), choice($.tag, $.link))),
    txn_strings: $ => seq($.string, optional($.string)),
    transaction: $ =>
      seq(
        field("date", $.date),
        field("flag", $.flag),
        field("txn_strings", optional($.txn_strings)),
        field("tags_and_links", optional($.tags_and_links)),
        field("metadata", optional($.metadata)),
        field("postings", $.postings),
        EOL,
      ),
    balance: $ =>
      datedDirective(
        $,
        "balance",
        field("account", $.account),
        field("amount", choice($.amount, $.amount_with_tolerance)),
      ),
    close: $ => datedDirective($, "close", field("account", $.account)),
    commodity: $ =>
      datedDirective($, "commodity", field("currency", $.currency)),
    custom: $ =>
      datedDirective(
        $,
        "custom",
        field("name", $.string),
        repeat(
          choice($.string, $.date, $.account, $.bool, $.amount, $._num_expr),
        ),
      ),
    document: $ =>
      datedDirective(
        $,
        "document",
        field("account", $.account),
        field("filename", $.string),
        field("tags_and_links", optional($.tags_and_links)),
      ),
    event: $ =>
      datedDirective(
        $,
        "event",
        field("type", $.string),
        field("description", $.string),
      ),
    note: $ =>
      datedDirective(
        $,
        "note",
        field("account", $.account),
        field("note", $.string),
      ),
    open: $ =>
      datedDirective(
        $,
        "open",
        field("account", $.account),
        field("currencies", optional($.currency_list)),
        field("booking", optional($.string)),
      ),
    pad: $ =>
      datedDirective(
        $,
        "pad",
        field("account", $.account),
        field("from_account", $.account),
      ),
    price: $ =>
      datedDirective(
        $,
        "price",
        field("currency", $.currency),
        field("amount", $.amount),
      ),
    query: $ =>
      datedDirective(
        $,
        "query",
        field("name", $.string),
        field("query", $.string),
      ),

    currency_list: $ => seq($.currency, repeat(seq(",", $.currency))),

    amount: $ => seq($._num_expr, $.currency),
    amount_with_tolerance: $ => seq($._num_expr, "~", $._num_expr, $.currency),
    ...number_expression,
    ...tokens,
  },
});
