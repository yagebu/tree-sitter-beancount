/// <reference types="tree-sitter-cli/dsl" />
/**
 * A tree-sitter grammar for Beancount.
 */

const COMMENT = /;.*/;

export default grammar({
  name: "beancount",
  externals: ($) => [$._eol, $._indent],
  extras: () => [/[ \t\r\n]/],
  supertypes: ($) => [$.num_expr],
  // These conflict due to all starting with an INDENT
  conflicts: ($) => [[$.posting], [$.metadata], [$.tags_and_links]],

  rules: {
    // Each Beancount files consists of a list of (un)dated entries, some lines might be skipped.
    beancount_file: ($) =>
      repeat(
        choice($._skipped_lines, $._dated_directives, $._undated_directives),
      ),
    _skipped_lines: () => /[*:!&#?%;].*/,

    // =======================================================================
    // Undated directives
    // =======================================================================
    _undated_directives: ($) =>
      choice(
        $.include,
        $.option,
        $.plugin,
        $.popmeta,
        $.poptag,
        $.pushmeta,
        $.pushtag,
      ),
    include: ($) => seq(alias("include", "INCLUDE"), $.string, $._eol),
    option: ($) =>
      seq(
        alias("option", "OPTION"),
        field("key", $.string),
        field("value", $.string),
        $._eol,
      ),
    plugin: ($) =>
      seq(
        alias("plugin", "PLUGIN"),
        field("name", $.string),
        field("config", optional($.string)),
        $._eol,
      ),
    pushtag: ($) =>
      seq(alias("pushtag", "PUSHTAG"), field("tag", $.tag), $._eol),
    poptag: ($) => seq(alias("poptag", "POPTAG"), field("tag", $.tag), $._eol),
    pushmeta: ($) =>
      seq(
        alias("pushmeta", "PUSHMETA"),
        field("key_value", $.key_value),
        $._eol,
      ),
    popmeta: ($) =>
      seq(alias("popmeta", "POPMETA"), field("key", $.key), $._eol),

    // =======================================================================
    // Dated directives
    // =======================================================================
    _dated_directives: ($) =>
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
    balance: ($) =>
      seq(
        field("date", $.date),
        alias("balance", "BALANCE"),
        field("account", $.account),
        field("amount", choice($.amount, $.amount_with_tolerance)),
        field("metadata", optional($.metadata)),
        $._eol,
      ),
    close: ($) =>
      seq(
        field("date", $.date),
        alias("close", "CLOSE"),
        field("account", $.account),
        field("metadata", optional($.metadata)),
        $._eol,
      ),
    commodity: ($) =>
      seq(
        field("date", $.date),
        alias("commodity", "COMMODITY"),
        field("currency", $.currency),
        field("metadata", optional($.metadata)),
        $._eol,
      ),
    custom: ($) =>
      seq(
        field("date", $.date),
        alias("custom", "CUSTOM"),
        field("name", $.string),
        repeat(
          choice($.string, $.date, $.account, $.bool, $.amount, $.num_expr),
        ),
        field("metadata", optional($.metadata)),
        $._eol,
      ),
    document: ($) =>
      seq(
        field("date", $.date),
        alias("document", "DOCUMENT"),
        field("account", $.account),
        field("filename", $.string),
        field("tags_and_links", optional($.tags_and_links)),
        field("metadata", optional($.metadata)),
        $._eol,
      ),
    event: ($) =>
      seq(
        field("date", $.date),
        alias("event", "EVENT"),
        field("type", $.string),
        field("description", $.string),
        field("metadata", optional($.metadata)),
        $._eol,
      ),
    note: ($) =>
      seq(
        field("date", $.date),
        alias("note", "NOTE"),
        field("account", $.account),
        field("note", $.string),
        field("metadata", optional($.metadata)),
        $._eol,
      ),
    open: ($) =>
      seq(
        field("date", $.date),
        alias("open", "OPEN"),
        field("account", $.account),
        field("currencies", optional($.currency_list)),
        field("booking", optional($.string)),
        field("metadata", optional($.metadata)),
        $._eol,
      ),
    pad: ($) =>
      seq(
        field("date", $.date),
        alias("pad", "PAD"),
        field("account", $.account),
        field("from_account", $.account),
        field("metadata", optional($.metadata)),
        $._eol,
      ),
    price: ($) =>
      seq(
        field("date", $.date),
        alias("price", "PRICE"),
        field("currency", $.currency),
        field("amount", $.amount),
        field("metadata", optional($.metadata)),
        $._eol,
      ),
    transaction: ($) =>
      seq(
        field("date", $.date),
        field("flag", $.flag),
        optional(
          choice(
            seq(field("payee", $.string), field("narration", $.string)),
            seq(field("narration", $.string)),
          ),
        ),
        field("tags_and_links", optional($.tags_and_links)),
        field("metadata", optional($.metadata)),
        field("postings", $.postings),
        $._eol,
      ),
    query: ($) =>
      seq(
        field("date", $.date),
        alias("query", "QUERY"),
        field("name", $.string),
        field("query", $.string),
        field("metadata", optional($.metadata)),
        $._eol,
      ),

    // =======================================================================
    // Postings
    // =======================================================================
    cost: ($) =>
      seq("{", field("cost_comp_list", optional($._cost_comp_list)), "}"),
    total_cost: ($) =>
      seq("{{", field("cost_comp_list", optional($._cost_comp_list)), "}}"),
    _cost_comp_list: ($) => seq($._cost_comp, repeat(seq(",", $._cost_comp))),
    _cost_comp: ($) =>
      choice(
        field("merge", alias("*", $.merge)),
        field("date", $.date),
        field("string", $.string),
        field("compound_amount", $.compound_amount),
      ),
    compound_amount: ($) =>
      choice(
        seq(
          field("number_per", optional($.num_expr)),
          field("currency", $.currency),
        ),
        seq(
          field("number_per", $.num_expr),
          field("currency", optional($.currency)),
        ),
        seq(
          field("number_per", optional($.num_expr)),
          "#",
          field("number_total", optional($.num_expr)),
          field("currency", $.currency),
        ),
      ),
    incomplete_amount: ($) =>
      choice(field("number", $.num_expr), field("currency", $.currency)),
    price_annotation: ($) =>
      seq("@", optional(choice($.amount, $.incomplete_amount))),
    total_price_annotation: ($) =>
      seq("@@", optional(choice($.amount, $.incomplete_amount))),
    posting: ($) =>
      seq(
        $._indent,
        field("flag", optional($.flag)),
        field("account", $.account),
        field("amount", optional(choice($.amount, $.incomplete_amount))),
        field("cost_spec", optional(choice($.cost, $.total_cost))),
        field(
          "price_annotation",
          optional(choice($.price_annotation, $.total_price_annotation)),
        ),
        optional(COMMENT),
        field("metadata", optional($.metadata)),
      ),
    postings: ($) => repeat1(choice($.posting, seq($._indent, COMMENT))),

    // =======================================================================
    // Various building blocks
    // =======================================================================
    tags_and_links: ($) =>
      repeat1(seq(optional($._indent), choice($.tag, $.link))),
    currency_list: ($) => seq($.currency, repeat(seq(",", $.currency))),
    metadata: ($) => repeat1(seq($._indent, $.key_value)),
    key_value: ($) =>
      seq(
        field("key", $.key),
        field(
          "value",
          optional(
            choice(
              $.string,
              $.account,
              $.date,
              $.currency,
              $.tag,
              $.bool,
              $.num_expr,
              $.amount,
            ),
          ),
        ),
      ),
    amount: ($) =>
      seq(field("number", $.num_expr), field("currency", $.currency)),
    amount_with_tolerance: ($) =>
      seq(
        field("number", $.num_expr),
        "~",
        field("tolerance", $.num_expr),
        field("currency", $.currency),
      ),

    // =======================================================================
    // Numerical expressions
    // =======================================================================
    // Since the following node is hidden in the syntax trees, we need to ensure that it
    // always consists of one node. Otherwise, accessing the children by index
    // cannot work.
    num_expr: ($) =>
      choice($.number, $.paren_num_expr, $.unary_num_expr, $.binary_num_expr),
    paren_num_expr: ($) => seq("(", $.num_expr, ")"),
    unary_num_expr: ($) =>
      prec(3, choice(seq("-", $.num_expr), seq("+", $.num_expr))),
    binary_num_expr: ($) =>
      choice(
        prec.left(2, seq($.num_expr, "*", $.num_expr)),
        prec.left(2, seq($.num_expr, "/", $.num_expr)),
        prec.left(1, seq($.num_expr, "+", $.num_expr)),
        prec.left(1, seq($.num_expr, "-", $.num_expr)),
      ),

    // =======================================================================
    // Tokens
    // =======================================================================
    bool: () => token(/TRUE|FALSE/),
    date: () => token(/[0-9][0-9][0-9][0-9][-/][0-9][0-9][-/][0-9][0-9]/),
    key: () => token(/[a-z][a-zA-Z0-9\-_]+:/),
    tag: () => token(/#[A-Za-z0-9\-_/.]+/),
    link: () => token(/\^[A-Za-z0-9\-_/.]+/),
    string: () => token(/"([^"]|\\")*"/),
    currency: () =>
      token(
        choice(
          /[A-Z]/,
          /[A-Z][A-Z0-9'._-]*[A-Z0-9]/,
          /\/[A-Z0-9'._-]*[A-Z]([A-Z0-9'._-]*[A-Z0-9])?/,
        ),
      ),
    number: () => token(/([0-9]+|[0-9][0-9,]+[0-9])(\.[0-9]*)?/),
    flag: () => token(choice(/[A-Z]/, /[!&?%*#]/)),
    account: () =>
      token(
        seq(
          // Account name should start with an uppercase letter:
          /[\p{Lu}]/u,
          // and then any letter or number or dash (`-`):
          repeat(/[\p{L}\p{Nd}-]/u),
          repeat1(
            seq(
              ":",
              // further segments start with uppercase or number
              /[\p{Lu}\p{Nd}]/u,
              // and then any letter or number or dash (`-`):
              repeat(/[\p{L}\p{Nd}-]/u),
            ),
          ),
        ),
      ),
  },
});
