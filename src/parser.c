#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 299
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 99
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 28
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  aux_sym__skipped_lines_token1 = 1,
  aux_sym__skipped_lines_token2 = 2,
  anon_sym_COLON = 3,
  aux_sym__skipped_lines_token3 = 4,
  aux_sym_metadata_token1 = 5,
  anon_sym_include = 6,
  anon_sym_option = 7,
  anon_sym_plugin = 8,
  anon_sym_pushtag = 9,
  anon_sym_poptag = 10,
  anon_sym_pushmeta = 11,
  anon_sym_popmeta = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  anon_sym_LBRACE_LBRACE = 15,
  anon_sym_RBRACE_RBRACE = 16,
  anon_sym_COMMA = 17,
  anon_sym_STAR = 18,
  anon_sym_POUND = 19,
  anon_sym_AT_AT = 20,
  anon_sym_AT = 21,
  anon_sym_balance = 22,
  anon_sym_close = 23,
  anon_sym_commodity = 24,
  anon_sym_custom = 25,
  anon_sym_document = 26,
  anon_sym_event = 27,
  anon_sym_note = 28,
  anon_sym_open = 29,
  anon_sym_pad = 30,
  anon_sym_price = 31,
  anon_sym_query = 32,
  anon_sym_TILDE = 33,
  anon_sym_LPAREN = 34,
  anon_sym_RPAREN = 35,
  anon_sym_DASH = 36,
  anon_sym_PLUS = 37,
  anon_sym_SLASH = 38,
  sym_bool = 39,
  sym_date = 40,
  sym_key = 41,
  sym_tag = 42,
  sym_link = 43,
  sym_string = 44,
  sym_currency = 45,
  sym_number = 46,
  sym_flag = 47,
  sym_account = 48,
  sym_beancount_file = 49,
  sym__skipped_lines = 50,
  sym__key_value_value = 51,
  sym_key_value = 52,
  sym_metadata = 53,
  sym__undated_directives = 54,
  sym_include = 55,
  sym_option = 56,
  sym_plugin = 57,
  sym_pushtag = 58,
  sym_poptag = 59,
  sym_pushmeta = 60,
  sym_popmeta = 61,
  sym__dated_directives = 62,
  sym_cost_spec = 63,
  sym_cost_comp_list = 64,
  sym_cost_comp = 65,
  sym_compound_amount = 66,
  sym_incomplete_amount = 67,
  sym_price_annotation = 68,
  sym_posting = 69,
  sym_postings = 70,
  sym_tags_and_links = 71,
  sym_txn_strings = 72,
  sym_transaction = 73,
  sym_balance = 74,
  sym_close = 75,
  sym_commodity = 76,
  sym_custom = 77,
  sym_document = 78,
  sym_event = 79,
  sym_note = 80,
  sym_open = 81,
  sym_pad = 82,
  sym_price = 83,
  sym_query = 84,
  sym_currency_list = 85,
  sym_amount = 86,
  sym_amount_with_tolerance = 87,
  sym__num_expr = 88,
  sym__paren_num_expr = 89,
  sym_unary_num_expr = 90,
  sym_binary_num_expr = 91,
  aux_sym_beancount_file_repeat1 = 92,
  aux_sym_metadata_repeat1 = 93,
  aux_sym_cost_comp_list_repeat1 = 94,
  aux_sym_postings_repeat1 = 95,
  aux_sym_tags_and_links_repeat1 = 96,
  aux_sym_custom_repeat1 = 97,
  aux_sym_currency_list_repeat1 = 98,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__skipped_lines_token1] = "_skipped_lines_token1",
  [aux_sym__skipped_lines_token2] = "_skipped_lines_token2",
  [anon_sym_COLON] = ":",
  [aux_sym__skipped_lines_token3] = "_skipped_lines_token3",
  [aux_sym_metadata_token1] = "metadata_token1",
  [anon_sym_include] = "include",
  [anon_sym_option] = "option",
  [anon_sym_plugin] = "plugin",
  [anon_sym_pushtag] = "pushtag",
  [anon_sym_poptag] = "poptag",
  [anon_sym_pushmeta] = "pushmeta",
  [anon_sym_popmeta] = "popmeta",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_COMMA] = ",",
  [anon_sym_STAR] = "*",
  [anon_sym_POUND] = "#",
  [anon_sym_AT_AT] = "@@",
  [anon_sym_AT] = "@",
  [anon_sym_balance] = "balance",
  [anon_sym_close] = "close",
  [anon_sym_commodity] = "commodity",
  [anon_sym_custom] = "custom",
  [anon_sym_document] = "document",
  [anon_sym_event] = "event",
  [anon_sym_note] = "note",
  [anon_sym_open] = "open",
  [anon_sym_pad] = "pad",
  [anon_sym_price] = "price",
  [anon_sym_query] = "query",
  [anon_sym_TILDE] = "~",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_SLASH] = "/",
  [sym_bool] = "bool",
  [sym_date] = "date",
  [sym_key] = "key",
  [sym_tag] = "tag",
  [sym_link] = "link",
  [sym_string] = "string",
  [sym_currency] = "currency",
  [sym_number] = "number",
  [sym_flag] = "flag",
  [sym_account] = "account",
  [sym_beancount_file] = "beancount_file",
  [sym__skipped_lines] = "_skipped_lines",
  [sym__key_value_value] = "_key_value_value",
  [sym_key_value] = "key_value",
  [sym_metadata] = "metadata",
  [sym__undated_directives] = "_undated_directives",
  [sym_include] = "include",
  [sym_option] = "option",
  [sym_plugin] = "plugin",
  [sym_pushtag] = "pushtag",
  [sym_poptag] = "poptag",
  [sym_pushmeta] = "pushmeta",
  [sym_popmeta] = "popmeta",
  [sym__dated_directives] = "_dated_directives",
  [sym_cost_spec] = "cost_spec",
  [sym_cost_comp_list] = "cost_comp_list",
  [sym_cost_comp] = "cost_comp",
  [sym_compound_amount] = "compound_amount",
  [sym_incomplete_amount] = "incomplete_amount",
  [sym_price_annotation] = "price_annotation",
  [sym_posting] = "posting",
  [sym_postings] = "postings",
  [sym_tags_and_links] = "tags_and_links",
  [sym_txn_strings] = "txn_strings",
  [sym_transaction] = "transaction",
  [sym_balance] = "balance",
  [sym_close] = "close",
  [sym_commodity] = "commodity",
  [sym_custom] = "custom",
  [sym_document] = "document",
  [sym_event] = "event",
  [sym_note] = "note",
  [sym_open] = "open",
  [sym_pad] = "pad",
  [sym_price] = "price",
  [sym_query] = "query",
  [sym_currency_list] = "currency_list",
  [sym_amount] = "amount",
  [sym_amount_with_tolerance] = "amount_with_tolerance",
  [sym__num_expr] = "_num_expr",
  [sym__paren_num_expr] = "_paren_num_expr",
  [sym_unary_num_expr] = "unary_num_expr",
  [sym_binary_num_expr] = "binary_num_expr",
  [aux_sym_beancount_file_repeat1] = "beancount_file_repeat1",
  [aux_sym_metadata_repeat1] = "metadata_repeat1",
  [aux_sym_cost_comp_list_repeat1] = "cost_comp_list_repeat1",
  [aux_sym_postings_repeat1] = "postings_repeat1",
  [aux_sym_tags_and_links_repeat1] = "tags_and_links_repeat1",
  [aux_sym_custom_repeat1] = "custom_repeat1",
  [aux_sym_currency_list_repeat1] = "currency_list_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__skipped_lines_token1] = aux_sym__skipped_lines_token1,
  [aux_sym__skipped_lines_token2] = aux_sym__skipped_lines_token2,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym__skipped_lines_token3] = aux_sym__skipped_lines_token3,
  [aux_sym_metadata_token1] = aux_sym_metadata_token1,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_option] = anon_sym_option,
  [anon_sym_plugin] = anon_sym_plugin,
  [anon_sym_pushtag] = anon_sym_pushtag,
  [anon_sym_poptag] = anon_sym_poptag,
  [anon_sym_pushmeta] = anon_sym_pushmeta,
  [anon_sym_popmeta] = anon_sym_popmeta,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_balance] = anon_sym_balance,
  [anon_sym_close] = anon_sym_close,
  [anon_sym_commodity] = anon_sym_commodity,
  [anon_sym_custom] = anon_sym_custom,
  [anon_sym_document] = anon_sym_document,
  [anon_sym_event] = anon_sym_event,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_open] = anon_sym_open,
  [anon_sym_pad] = anon_sym_pad,
  [anon_sym_price] = anon_sym_price,
  [anon_sym_query] = anon_sym_query,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_bool] = sym_bool,
  [sym_date] = sym_date,
  [sym_key] = sym_key,
  [sym_tag] = sym_tag,
  [sym_link] = sym_link,
  [sym_string] = sym_string,
  [sym_currency] = sym_currency,
  [sym_number] = sym_number,
  [sym_flag] = sym_flag,
  [sym_account] = sym_account,
  [sym_beancount_file] = sym_beancount_file,
  [sym__skipped_lines] = sym__skipped_lines,
  [sym__key_value_value] = sym__key_value_value,
  [sym_key_value] = sym_key_value,
  [sym_metadata] = sym_metadata,
  [sym__undated_directives] = sym__undated_directives,
  [sym_include] = sym_include,
  [sym_option] = sym_option,
  [sym_plugin] = sym_plugin,
  [sym_pushtag] = sym_pushtag,
  [sym_poptag] = sym_poptag,
  [sym_pushmeta] = sym_pushmeta,
  [sym_popmeta] = sym_popmeta,
  [sym__dated_directives] = sym__dated_directives,
  [sym_cost_spec] = sym_cost_spec,
  [sym_cost_comp_list] = sym_cost_comp_list,
  [sym_cost_comp] = sym_cost_comp,
  [sym_compound_amount] = sym_compound_amount,
  [sym_incomplete_amount] = sym_incomplete_amount,
  [sym_price_annotation] = sym_price_annotation,
  [sym_posting] = sym_posting,
  [sym_postings] = sym_postings,
  [sym_tags_and_links] = sym_tags_and_links,
  [sym_txn_strings] = sym_txn_strings,
  [sym_transaction] = sym_transaction,
  [sym_balance] = sym_balance,
  [sym_close] = sym_close,
  [sym_commodity] = sym_commodity,
  [sym_custom] = sym_custom,
  [sym_document] = sym_document,
  [sym_event] = sym_event,
  [sym_note] = sym_note,
  [sym_open] = sym_open,
  [sym_pad] = sym_pad,
  [sym_price] = sym_price,
  [sym_query] = sym_query,
  [sym_currency_list] = sym_currency_list,
  [sym_amount] = sym_amount,
  [sym_amount_with_tolerance] = sym_amount_with_tolerance,
  [sym__num_expr] = sym__num_expr,
  [sym__paren_num_expr] = sym__paren_num_expr,
  [sym_unary_num_expr] = sym_unary_num_expr,
  [sym_binary_num_expr] = sym_binary_num_expr,
  [aux_sym_beancount_file_repeat1] = aux_sym_beancount_file_repeat1,
  [aux_sym_metadata_repeat1] = aux_sym_metadata_repeat1,
  [aux_sym_cost_comp_list_repeat1] = aux_sym_cost_comp_list_repeat1,
  [aux_sym_postings_repeat1] = aux_sym_postings_repeat1,
  [aux_sym_tags_and_links_repeat1] = aux_sym_tags_and_links_repeat1,
  [aux_sym_custom_repeat1] = aux_sym_custom_repeat1,
  [aux_sym_currency_list_repeat1] = aux_sym_currency_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__skipped_lines_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__skipped_lines_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__skipped_lines_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_metadata_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_option] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_plugin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pushtag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_poptag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pushmeta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_popmeta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_balance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_close] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_commodity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_custom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_document] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_event] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_note] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_open] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_price] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_query] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_link] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_currency] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_flag] = {
    .visible = true,
    .named = true,
  },
  [sym_account] = {
    .visible = true,
    .named = true,
  },
  [sym_beancount_file] = {
    .visible = true,
    .named = true,
  },
  [sym__skipped_lines] = {
    .visible = false,
    .named = true,
  },
  [sym__key_value_value] = {
    .visible = false,
    .named = true,
  },
  [sym_key_value] = {
    .visible = true,
    .named = true,
  },
  [sym_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym__undated_directives] = {
    .visible = false,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_plugin] = {
    .visible = true,
    .named = true,
  },
  [sym_pushtag] = {
    .visible = true,
    .named = true,
  },
  [sym_poptag] = {
    .visible = true,
    .named = true,
  },
  [sym_pushmeta] = {
    .visible = true,
    .named = true,
  },
  [sym_popmeta] = {
    .visible = true,
    .named = true,
  },
  [sym__dated_directives] = {
    .visible = false,
    .named = true,
  },
  [sym_cost_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_cost_comp_list] = {
    .visible = true,
    .named = true,
  },
  [sym_cost_comp] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_incomplete_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_price_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_posting] = {
    .visible = true,
    .named = true,
  },
  [sym_postings] = {
    .visible = true,
    .named = true,
  },
  [sym_tags_and_links] = {
    .visible = true,
    .named = true,
  },
  [sym_txn_strings] = {
    .visible = true,
    .named = true,
  },
  [sym_transaction] = {
    .visible = true,
    .named = true,
  },
  [sym_balance] = {
    .visible = true,
    .named = true,
  },
  [sym_close] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity] = {
    .visible = true,
    .named = true,
  },
  [sym_custom] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_event] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [sym_open] = {
    .visible = true,
    .named = true,
  },
  [sym_pad] = {
    .visible = true,
    .named = true,
  },
  [sym_price] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym_currency_list] = {
    .visible = true,
    .named = true,
  },
  [sym_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_amount_with_tolerance] = {
    .visible = true,
    .named = true,
  },
  [sym__num_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__paren_num_expr] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_num_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_num_expr] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_beancount_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_metadata_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cost_comp_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_postings_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tags_and_links_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_custom_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_currency_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_account = 1,
  field_amount = 2,
  field_booking = 3,
  field_config = 4,
  field_cost_comp_list = 5,
  field_cost_spec = 6,
  field_currencies = 7,
  field_currency = 8,
  field_date = 9,
  field_description = 10,
  field_filename = 11,
  field_flag = 12,
  field_from_account = 13,
  field_key = 14,
  field_key_value = 15,
  field_metadata = 16,
  field_name = 17,
  field_note = 18,
  field_number_per = 19,
  field_number_total = 20,
  field_postings = 21,
  field_price_annotation = 22,
  field_query = 23,
  field_tag = 24,
  field_tags_and_links = 25,
  field_txn_strings = 26,
  field_type = 27,
  field_value = 28,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_account] = "account",
  [field_amount] = "amount",
  [field_booking] = "booking",
  [field_config] = "config",
  [field_cost_comp_list] = "cost_comp_list",
  [field_cost_spec] = "cost_spec",
  [field_currencies] = "currencies",
  [field_currency] = "currency",
  [field_date] = "date",
  [field_description] = "description",
  [field_filename] = "filename",
  [field_flag] = "flag",
  [field_from_account] = "from_account",
  [field_key] = "key",
  [field_key_value] = "key_value",
  [field_metadata] = "metadata",
  [field_name] = "name",
  [field_note] = "note",
  [field_number_per] = "number_per",
  [field_number_total] = "number_total",
  [field_postings] = "postings",
  [field_price_annotation] = "price_annotation",
  [field_query] = "query",
  [field_tag] = "tag",
  [field_tags_and_links] = "tags_and_links",
  [field_txn_strings] = "txn_strings",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[100] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 1},
  [11] = {.index = 15, .length = 3},
  [12] = {.index = 18, .length = 3},
  [13] = {.index = 21, .length = 3},
  [14] = {.index = 24, .length = 3},
  [15] = {.index = 27, .length = 3},
  [16] = {.index = 30, .length = 3},
  [17] = {.index = 33, .length = 3},
  [18] = {.index = 36, .length = 3},
  [19] = {.index = 39, .length = 3},
  [20] = {.index = 42, .length = 3},
  [21] = {.index = 45, .length = 3},
  [22] = {.index = 48, .length = 3},
  [23] = {.index = 51, .length = 3},
  [24] = {.index = 54, .length = 2},
  [25] = {.index = 56, .length = 2},
  [26] = {.index = 58, .length = 2},
  [27] = {.index = 60, .length = 2},
  [28] = {.index = 62, .length = 2},
  [29] = {.index = 64, .length = 4},
  [30] = {.index = 68, .length = 4},
  [31] = {.index = 72, .length = 4},
  [32] = {.index = 76, .length = 4},
  [33] = {.index = 80, .length = 3},
  [34] = {.index = 83, .length = 4},
  [35] = {.index = 87, .length = 4},
  [36] = {.index = 91, .length = 4},
  [37] = {.index = 95, .length = 4},
  [38] = {.index = 99, .length = 4},
  [39] = {.index = 103, .length = 4},
  [40] = {.index = 107, .length = 4},
  [41] = {.index = 111, .length = 4},
  [42] = {.index = 115, .length = 4},
  [43] = {.index = 119, .length = 4},
  [44] = {.index = 123, .length = 3},
  [45] = {.index = 126, .length = 3},
  [46] = {.index = 129, .length = 3},
  [47] = {.index = 132, .length = 3},
  [48] = {.index = 135, .length = 2},
  [49] = {.index = 137, .length = 1},
  [50] = {.index = 138, .length = 1},
  [51] = {.index = 139, .length = 3},
  [52] = {.index = 142, .length = 3},
  [53] = {.index = 145, .length = 3},
  [54] = {.index = 148, .length = 3},
  [55] = {.index = 151, .length = 3},
  [56] = {.index = 154, .length = 3},
  [57] = {.index = 157, .length = 5},
  [58] = {.index = 162, .length = 5},
  [59] = {.index = 167, .length = 5},
  [60] = {.index = 172, .length = 5},
  [61] = {.index = 177, .length = 5},
  [62] = {.index = 182, .length = 3},
  [63] = {.index = 185, .length = 4},
  [64] = {.index = 189, .length = 4},
  [65] = {.index = 193, .length = 4},
  [66] = {.index = 197, .length = 4},
  [67] = {.index = 201, .length = 4},
  [68] = {.index = 205, .length = 4},
  [69] = {.index = 209, .length = 1},
  [70] = {.index = 210, .length = 1},
  [71] = {.index = 211, .length = 2},
  [72] = {.index = 213, .length = 3},
  [73] = {.index = 216, .length = 4},
  [74] = {.index = 220, .length = 3},
  [75] = {.index = 223, .length = 4},
  [76] = {.index = 227, .length = 4},
  [77] = {.index = 231, .length = 4},
  [78] = {.index = 235, .length = 3},
  [79] = {.index = 238, .length = 6},
  [80] = {.index = 244, .length = 4},
  [81] = {.index = 248, .length = 5},
  [82] = {.index = 253, .length = 4},
  [83] = {.index = 257, .length = 5},
  [84] = {.index = 262, .length = 5},
  [85] = {.index = 267, .length = 5},
  [86] = {.index = 272, .length = 4},
  [87] = {.index = 276, .length = 2},
  [88] = {.index = 278, .length = 2},
  [89] = {.index = 280, .length = 4},
  [90] = {.index = 284, .length = 4},
  [91] = {.index = 288, .length = 5},
  [92] = {.index = 293, .length = 4},
  [93] = {.index = 297, .length = 5},
  [94] = {.index = 302, .length = 5},
  [95] = {.index = 307, .length = 6},
  [96] = {.index = 313, .length = 5},
  [97] = {.index = 318, .length = 3},
  [98] = {.index = 321, .length = 5},
  [99] = {.index = 326, .length = 6},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_tag, 1},
  [2] =
    {field_key_value, 1},
  [3] =
    {field_key, 1},
  [4] =
    {field_key, 1},
    {field_value, 2},
  [6] =
    {field_config, 2},
    {field_name, 1},
  [8] =
    {field_account, 2},
    {field_date, 0},
  [10] =
    {field_currency, 2},
    {field_date, 0},
  [12] =
    {field_date, 0},
    {field_name, 2},
  [14] =
    {field_account, 1},
  [15] =
    {field_date, 0},
    {field_flag, 1},
    {field_postings, 2},
  [18] =
    {field_account, 2},
    {field_amount, 3},
    {field_date, 0},
  [21] =
    {field_account, 2},
    {field_date, 0},
    {field_metadata, 3},
  [24] =
    {field_currency, 2},
    {field_date, 0},
    {field_metadata, 3},
  [27] =
    {field_date, 0},
    {field_metadata, 3},
    {field_name, 2},
  [30] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
  [33] =
    {field_date, 0},
    {field_description, 3},
    {field_type, 2},
  [36] =
    {field_account, 2},
    {field_date, 0},
    {field_note, 3},
  [39] =
    {field_account, 2},
    {field_booking, 3},
    {field_date, 0},
  [42] =
    {field_account, 2},
    {field_currencies, 3},
    {field_date, 0},
  [45] =
    {field_account, 2},
    {field_date, 0},
    {field_from_account, 3},
  [48] =
    {field_amount, 3},
    {field_currency, 2},
    {field_date, 0},
  [51] =
    {field_date, 0},
    {field_name, 2},
    {field_query, 3},
  [54] =
    {field_account, 2},
    {field_flag, 1},
  [56] =
    {field_account, 1},
    {field_metadata, 2},
  [58] =
    {field_account, 1},
    {field_cost_spec, 2},
  [60] =
    {field_account, 1},
    {field_amount, 2},
  [62] =
    {field_account, 1},
    {field_price_annotation, 2},
  [64] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 2},
    {field_postings, 3},
  [68] =
    {field_date, 0},
    {field_flag, 1},
    {field_postings, 3},
    {field_tags_and_links, 2},
  [72] =
    {field_date, 0},
    {field_flag, 1},
    {field_postings, 3},
    {field_txn_strings, 2},
  [76] =
    {field_account, 2},
    {field_amount, 3},
    {field_date, 0},
    {field_metadata, 4},
  [80] =
    {field_date, 0},
    {field_metadata, 4},
    {field_name, 2},
  [83] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
    {field_metadata, 4},
  [87] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
    {field_tags_and_links, 4},
  [91] =
    {field_date, 0},
    {field_description, 3},
    {field_metadata, 4},
    {field_type, 2},
  [95] =
    {field_account, 2},
    {field_date, 0},
    {field_metadata, 4},
    {field_note, 3},
  [99] =
    {field_account, 2},
    {field_booking, 3},
    {field_date, 0},
    {field_metadata, 4},
  [103] =
    {field_account, 2},
    {field_booking, 4},
    {field_currencies, 3},
    {field_date, 0},
  [107] =
    {field_account, 2},
    {field_currencies, 3},
    {field_date, 0},
    {field_metadata, 4},
  [111] =
    {field_account, 2},
    {field_date, 0},
    {field_from_account, 3},
    {field_metadata, 4},
  [115] =
    {field_amount, 3},
    {field_currency, 2},
    {field_date, 0},
    {field_metadata, 4},
  [119] =
    {field_date, 0},
    {field_metadata, 4},
    {field_name, 2},
    {field_query, 3},
  [123] =
    {field_account, 2},
    {field_flag, 1},
    {field_metadata, 3},
  [126] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
  [129] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
  [132] =
    {field_account, 2},
    {field_flag, 1},
    {field_price_annotation, 3},
  [135] =
    {field_account, 1},
    {field_metadata, 3},
  [137] =
    {field_currency, 0},
  [138] =
    {field_number_per, 0},
  [139] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_metadata, 3},
  [142] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_price_annotation, 3},
  [145] =
    {field_account, 1},
    {field_amount, 2},
    {field_metadata, 3},
  [148] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
  [151] =
    {field_account, 1},
    {field_amount, 2},
    {field_price_annotation, 3},
  [154] =
    {field_account, 1},
    {field_metadata, 3},
    {field_price_annotation, 2},
  [157] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 3},
    {field_postings, 4},
    {field_tags_and_links, 2},
  [162] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 3},
    {field_postings, 4},
    {field_txn_strings, 2},
  [167] =
    {field_date, 0},
    {field_flag, 1},
    {field_postings, 4},
    {field_tags_and_links, 3},
    {field_txn_strings, 2},
  [172] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
    {field_metadata, 5},
    {field_tags_and_links, 4},
  [177] =
    {field_account, 2},
    {field_booking, 4},
    {field_currencies, 3},
    {field_date, 0},
    {field_metadata, 5},
  [182] =
    {field_account, 2},
    {field_flag, 1},
    {field_metadata, 4},
  [185] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
    {field_metadata, 4},
  [189] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
    {field_price_annotation, 4},
  [193] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
    {field_metadata, 4},
  [197] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
  [201] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
    {field_price_annotation, 4},
  [205] =
    {field_account, 2},
    {field_flag, 1},
    {field_metadata, 4},
    {field_price_annotation, 3},
  [209] =
    {field_currency, 1},
  [210] =
    {field_cost_comp_list, 1},
  [211] =
    {field_currency, 1},
    {field_number_per, 0},
  [213] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_metadata, 4},
  [216] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_metadata, 4},
    {field_price_annotation, 3},
  [220] =
    {field_account, 1},
    {field_amount, 2},
    {field_metadata, 4},
  [223] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_metadata, 4},
  [227] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_price_annotation, 4},
  [231] =
    {field_account, 1},
    {field_amount, 2},
    {field_metadata, 4},
    {field_price_annotation, 3},
  [235] =
    {field_account, 1},
    {field_metadata, 4},
    {field_price_annotation, 2},
  [238] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 4},
    {field_postings, 5},
    {field_tags_and_links, 3},
    {field_txn_strings, 2},
  [244] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
    {field_metadata, 5},
  [248] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
    {field_metadata, 5},
    {field_price_annotation, 4},
  [253] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
    {field_metadata, 5},
  [257] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
    {field_metadata, 5},
  [262] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
    {field_price_annotation, 5},
  [267] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
    {field_metadata, 5},
    {field_price_annotation, 4},
  [272] =
    {field_account, 2},
    {field_flag, 1},
    {field_metadata, 5},
    {field_price_annotation, 3},
  [276] =
    {field_currency, 2},
    {field_number_total, 1},
  [278] =
    {field_currency, 2},
    {field_number_per, 0},
  [280] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_metadata, 5},
    {field_price_annotation, 3},
  [284] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_metadata, 5},
  [288] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_metadata, 5},
    {field_price_annotation, 4},
  [293] =
    {field_account, 1},
    {field_amount, 2},
    {field_metadata, 5},
    {field_price_annotation, 3},
  [297] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
    {field_metadata, 6},
    {field_price_annotation, 4},
  [302] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
    {field_metadata, 6},
  [307] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
    {field_metadata, 6},
    {field_price_annotation, 5},
  [313] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
    {field_metadata, 6},
    {field_price_annotation, 4},
  [318] =
    {field_currency, 3},
    {field_number_per, 0},
    {field_number_total, 2},
  [321] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_metadata, 6},
    {field_price_annotation, 4},
  [326] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
    {field_metadata, 7},
    {field_price_annotation, 5},
};

static TSSymbol ts_alias_sequences[100][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(156);
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '#') ADVANCE(178);
      if (lookahead == '(') ADVANCE(193);
      if (lookahead == ')') ADVANCE(194);
      if (lookahead == '*') ADVANCE(177);
      if (lookahead == '+') ADVANCE(196);
      if (lookahead == ',') ADVANCE(176);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == ':') ADVANCE(161);
      if (lookahead == ';') ADVANCE(162);
      if (lookahead == '@') ADVANCE(180);
      if (lookahead == '^') ADVANCE(152);
      if (lookahead == 'b') ADVANCE(45);
      if (lookahead == 'c') ADVANCE(79);
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(95);
      if (lookahead == 'o') ADVANCE(100);
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead == 'q') ADVANCE(114);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '}') ADVANCE(173);
      if (lookahead == '~') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '?') ADVANCE(266);
      if (lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead != 0 &&
          (lookahead < 0 || '>' < lookahead) &&
          (lookahead < '[' || 127 < lookahead)) ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '#') ADVANCE(153);
      if (lookahead == '(') ADVANCE(193);
      if (lookahead == ')') ADVANCE(194);
      if (lookahead == '*') ADVANCE(177);
      if (lookahead == '+') ADVANCE(196);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == ';') ADVANCE(162);
      if (lookahead == '@') ADVANCE(180);
      if (lookahead == '^') ADVANCE(152);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead == '~') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(143);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '#') ADVANCE(153);
      if (lookahead == '(') ADVANCE(193);
      if (lookahead == '*') ADVANCE(177);
      if (lookahead == '+') ADVANCE(196);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == 'F') ADVANCE(32);
      if (lookahead == 'T') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(34);
      if (lookahead != 0 &&
          (lookahead < 0 || 127 < lookahead)) ADVANCE(41);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '(') ADVANCE(193);
      if (lookahead == '+') ADVANCE(196);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'F') ADVANCE(35);
      if (lookahead == 'T') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead != 0 &&
          (lookahead < 0 || '@' < lookahead) &&
          (lookahead < '[' || 127 < lookahead)) ADVANCE(41);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '#') ADVANCE(178);
      if (lookahead == '(') ADVANCE(193);
      if (lookahead == '*') ADVANCE(177);
      if (lookahead == '+') ADVANCE(196);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(143);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '#') ADVANCE(153);
      if (lookahead == '(') ADVANCE(193);
      if (lookahead == '+') ADVANCE(196);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'F') ADVANCE(32);
      if (lookahead == 'T') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(34);
      if (lookahead != 0 &&
          (lookahead < 0 || 127 < lookahead)) ADVANCE(41);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '#') ADVANCE(178);
      if (lookahead == ')') ADVANCE(194);
      if (lookahead == '*') ADVANCE(177);
      if (lookahead == '+') ADVANCE(196);
      if (lookahead == ',') ADVANCE(176);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == '}') ADVANCE(173);
      if (lookahead == '~') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(143);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '#') ADVANCE(178);
      if (lookahead == '(') ADVANCE(193);
      if (lookahead == '*') ADVANCE(177);
      if (lookahead == '+') ADVANCE(196);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '}') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(143);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == ';') ADVANCE(162);
      if (lookahead == '^') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '?') ADVANCE(266);
      if (lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(267);
      if (lookahead != 0 &&
          (lookahead < 0 || '@' < lookahead) &&
          (lookahead < '[' || 127 < lookahead)) ADVANCE(41);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 10:
      if (lookahead == ',') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(150);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(234);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(124);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(209);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(123);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(211);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(126);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(208);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(127);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(213);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(210);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(215);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(130);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(212);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(131);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(217);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(214);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(133);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(219);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(134);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(216);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(135);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(221);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(223);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(226);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(222);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(232);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == 'A') ADVANCE(227);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(229);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == 'R') ADVANCE(228);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(229);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(229);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == 'A') ADVANCE(37);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == 'E') ADVANCE(200);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == 'L') ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == 'R') ADVANCE(40);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == 'S') ADVANCE(36);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == 'U') ADVANCE(36);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(154);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(154);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          (lookahead < '.' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(233);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == ';') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '?') ADVANCE(266);
      if (lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(267);
      if (lookahead != 0 &&
          (lookahead < 0 || '@' < lookahead) &&
          (lookahead < '[' || 127 < lookahead)) ADVANCE(41);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'l') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(189);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(168);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(167);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(75);
      END_STATE();
    case 73:
      if (lookahead == 'h') ADVANCE(85);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(82);
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(184);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(67);
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(69);
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(84);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 113:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 114:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 117:
      if (lookahead == 'v') ADVANCE(65);
      END_STATE();
    case 118:
      if (lookahead == 'y') ADVANCE(191);
      END_STATE();
    case 119:
      if (lookahead == 'y') ADVANCE(183);
      END_STATE();
    case 120:
      if (lookahead == '}') ADVANCE(175);
      END_STATE();
    case 121:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 122:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(147);
      END_STATE();
    case 123:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(256);
      END_STATE();
    case 124:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(235);
      END_STATE();
    case 125:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      END_STATE();
    case 126:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(236);
      END_STATE();
    case 127:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(240);
      END_STATE();
    case 128:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(237);
      END_STATE();
    case 129:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(242);
      END_STATE();
    case 130:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(239);
      END_STATE();
    case 131:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      END_STATE();
    case 132:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      END_STATE();
    case 133:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(246);
      END_STATE();
    case 134:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(243);
      END_STATE();
    case 135:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(248);
      END_STATE();
    case 136:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(245);
      END_STATE();
    case 137:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(250);
      END_STATE();
    case 138:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(247);
      END_STATE();
    case 139:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 140:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 141:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 142:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(251);
      END_STATE();
    case 143:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 144:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(253);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 151:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 152:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 153:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 154:
      if (lookahead != 0 &&
          (lookahead < 0 || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || 127 < lookahead)) ADVANCE(269);
      END_STATE();
    case 155:
      if (eof) ADVANCE(156);
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == ':') ADVANCE(161);
      if (lookahead == ';') ADVANCE(162);
      if (lookahead == 'b') ADVANCE(45);
      if (lookahead == 'c') ADVANCE(79);
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(95);
      if (lookahead == 'o') ADVANCE(100);
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead == 'q') ADVANCE(114);
      if (lookahead == '}') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(155)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(266);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token2);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(163);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_metadata_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_plugin);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_pushtag);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_poptag);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_pushmeta);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_popmeta);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(174);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(175);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(179);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_balance);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_close);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_document);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_pad);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_price);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(226);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(222);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_date);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_key);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_tag);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_link);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_currency);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(150);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(234);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(124);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(209);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(123);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(126);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(208);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(127);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(210);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(215);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(130);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(212);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(131);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(217);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(214);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(133);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(134);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(216);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(135);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(223);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == 'E') ADVANCE(199);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(226);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(222);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == 'L') ADVANCE(231);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(232);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == 'U') ADVANCE(230);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(232);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(232);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == 'E') ADVANCE(198);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == 'S') ADVANCE(224);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          (lookahead < '.' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(233);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(256);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(235);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(236);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(240);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(237);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(239);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(243);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(245);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(247);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(251);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(253);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_currency);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(262);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(264);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(264);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(264);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(264);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(264);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_flag);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_flag);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_flag);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(269);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 155},
  [2] = {.lex_state = 155},
  [3] = {.lex_state = 155},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 155},
  [15] = {.lex_state = 155},
  [16] = {.lex_state = 155},
  [17] = {.lex_state = 155},
  [18] = {.lex_state = 155},
  [19] = {.lex_state = 155},
  [20] = {.lex_state = 155},
  [21] = {.lex_state = 155},
  [22] = {.lex_state = 155},
  [23] = {.lex_state = 155},
  [24] = {.lex_state = 155},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 155},
  [27] = {.lex_state = 155},
  [28] = {.lex_state = 155},
  [29] = {.lex_state = 155},
  [30] = {.lex_state = 155},
  [31] = {.lex_state = 155},
  [32] = {.lex_state = 155},
  [33] = {.lex_state = 155},
  [34] = {.lex_state = 155},
  [35] = {.lex_state = 155},
  [36] = {.lex_state = 155},
  [37] = {.lex_state = 155},
  [38] = {.lex_state = 155},
  [39] = {.lex_state = 155},
  [40] = {.lex_state = 155},
  [41] = {.lex_state = 155},
  [42] = {.lex_state = 155},
  [43] = {.lex_state = 155},
  [44] = {.lex_state = 155},
  [45] = {.lex_state = 155},
  [46] = {.lex_state = 155},
  [47] = {.lex_state = 155},
  [48] = {.lex_state = 155},
  [49] = {.lex_state = 155},
  [50] = {.lex_state = 155},
  [51] = {.lex_state = 155},
  [52] = {.lex_state = 155},
  [53] = {.lex_state = 155},
  [54] = {.lex_state = 155},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 155},
  [60] = {.lex_state = 155},
  [61] = {.lex_state = 155},
  [62] = {.lex_state = 155},
  [63] = {.lex_state = 155},
  [64] = {.lex_state = 155},
  [65] = {.lex_state = 155},
  [66] = {.lex_state = 155},
  [67] = {.lex_state = 155},
  [68] = {.lex_state = 155},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 155},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 9},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 44},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 44},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 155},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 155},
  [238] = {.lex_state = 1},
  [239] = {.lex_state = 157},
  [240] = {.lex_state = 155},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 155},
  [243] = {.lex_state = 155},
  [244] = {.lex_state = 155},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 155},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 155},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 155},
  [252] = {.lex_state = 155},
  [253] = {.lex_state = 155},
  [254] = {.lex_state = 155},
  [255] = {.lex_state = 155},
  [256] = {.lex_state = 155},
  [257] = {.lex_state = 155},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 155},
  [261] = {.lex_state = 155},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 155},
  [266] = {.lex_state = 155},
  [267] = {.lex_state = 155},
  [268] = {.lex_state = 155},
  [269] = {.lex_state = 155},
  [270] = {.lex_state = 155},
  [271] = {.lex_state = 155},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 155},
  [274] = {.lex_state = 155},
  [275] = {.lex_state = 155},
  [276] = {.lex_state = 155},
  [277] = {.lex_state = 155},
  [278] = {.lex_state = 155},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 1},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 1},
  [284] = {.lex_state = 155},
  [285] = {.lex_state = 1},
  [286] = {.lex_state = 1},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 1},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 155},
  [293] = {.lex_state = 1},
  [294] = {.lex_state = 155},
  [295] = {.lex_state = 155},
  [296] = {.lex_state = 155},
  [297] = {.lex_state = 155},
  [298] = {.lex_state = 155},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__skipped_lines_token2] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym__skipped_lines_token3] = ACTIONS(1),
    [aux_sym_metadata_token1] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_option] = ACTIONS(1),
    [anon_sym_plugin] = ACTIONS(1),
    [anon_sym_pushtag] = ACTIONS(1),
    [anon_sym_poptag] = ACTIONS(1),
    [anon_sym_pushmeta] = ACTIONS(1),
    [anon_sym_popmeta] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_balance] = ACTIONS(1),
    [anon_sym_close] = ACTIONS(1),
    [anon_sym_commodity] = ACTIONS(1),
    [anon_sym_custom] = ACTIONS(1),
    [anon_sym_document] = ACTIONS(1),
    [anon_sym_event] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_open] = ACTIONS(1),
    [anon_sym_pad] = ACTIONS(1),
    [anon_sym_price] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
    [sym_link] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_flag] = ACTIONS(1),
    [sym_account] = ACTIONS(1),
  },
  [1] = {
    [sym_beancount_file] = STATE(280),
    [sym__skipped_lines] = STATE(3),
    [sym__undated_directives] = STATE(3),
    [sym_include] = STATE(3),
    [sym_option] = STATE(3),
    [sym_plugin] = STATE(3),
    [sym_pushtag] = STATE(3),
    [sym_poptag] = STATE(3),
    [sym_pushmeta] = STATE(3),
    [sym_popmeta] = STATE(3),
    [sym__dated_directives] = STATE(3),
    [sym_transaction] = STATE(3),
    [sym_balance] = STATE(3),
    [sym_close] = STATE(3),
    [sym_commodity] = STATE(3),
    [sym_custom] = STATE(3),
    [sym_document] = STATE(3),
    [sym_event] = STATE(3),
    [sym_note] = STATE(3),
    [sym_open] = STATE(3),
    [sym_pad] = STATE(3),
    [sym_price] = STATE(3),
    [sym_query] = STATE(3),
    [aux_sym_beancount_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__skipped_lines_token2] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(7),
    [aux_sym__skipped_lines_token3] = ACTIONS(9),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_option] = ACTIONS(13),
    [anon_sym_plugin] = ACTIONS(15),
    [anon_sym_pushtag] = ACTIONS(17),
    [anon_sym_poptag] = ACTIONS(19),
    [anon_sym_pushmeta] = ACTIONS(21),
    [anon_sym_popmeta] = ACTIONS(23),
    [sym_date] = ACTIONS(25),
    [sym_flag] = ACTIONS(7),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(35), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(38), 1,
      anon_sym_include,
    ACTIONS(41), 1,
      anon_sym_option,
    ACTIONS(44), 1,
      anon_sym_plugin,
    ACTIONS(47), 1,
      anon_sym_pushtag,
    ACTIONS(50), 1,
      anon_sym_poptag,
    ACTIONS(53), 1,
      anon_sym_pushmeta,
    ACTIONS(56), 1,
      anon_sym_popmeta,
    ACTIONS(59), 1,
      sym_date,
    ACTIONS(32), 2,
      anon_sym_COLON,
      sym_flag,
    STATE(2), 23,
      sym__skipped_lines,
      sym__undated_directives,
      sym_include,
      sym_option,
      sym_plugin,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym__dated_directives,
      sym_transaction,
      sym_balance,
      sym_close,
      sym_commodity,
      sym_custom,
      sym_document,
      sym_event,
      sym_note,
      sym_open,
      sym_pad,
      sym_price,
      sym_query,
      aux_sym_beancount_file_repeat1,
  [63] = 13,
    ACTIONS(9), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_option,
    ACTIONS(15), 1,
      anon_sym_plugin,
    ACTIONS(17), 1,
      anon_sym_pushtag,
    ACTIONS(19), 1,
      anon_sym_poptag,
    ACTIONS(21), 1,
      anon_sym_pushmeta,
    ACTIONS(23), 1,
      anon_sym_popmeta,
    ACTIONS(25), 1,
      sym_date,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(7), 2,
      anon_sym_COLON,
      sym_flag,
    STATE(2), 23,
      sym__skipped_lines,
      sym__undated_directives,
      sym_include,
      sym_option,
      sym_plugin,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym__dated_directives,
      sym_transaction,
      sym_balance,
      sym_close,
      sym_commodity,
      sym_custom,
      sym_document,
      sym_event,
      sym_note,
      sym_open,
      sym_pad,
      sym_price,
      sym_query,
      aux_sym_beancount_file_repeat1,
  [126] = 17,
    ACTIONS(66), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(68), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(70), 1,
      aux_sym_metadata_token1,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(77), 1,
      anon_sym_AT_AT,
    ACTIONS(79), 1,
      anon_sym_AT,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      sym_currency,
    ACTIONS(87), 1,
      sym_number,
    STATE(81), 1,
      sym_incomplete_amount,
    STATE(101), 1,
      sym_cost_spec,
    STATE(126), 1,
      sym_price_annotation,
    STATE(191), 1,
      aux_sym_metadata_repeat1,
    STATE(222), 1,
      sym_metadata,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(76), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [182] = 17,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(77), 1,
      anon_sym_AT_AT,
    ACTIONS(79), 1,
      anon_sym_AT,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      sym_currency,
    ACTIONS(87), 1,
      sym_number,
    ACTIONS(89), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(91), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(93), 1,
      aux_sym_metadata_token1,
    STATE(82), 1,
      sym_incomplete_amount,
    STATE(93), 1,
      sym_cost_spec,
    STATE(120), 1,
      sym_price_annotation,
    STATE(191), 1,
      aux_sym_metadata_repeat1,
    STATE(228), 1,
      sym_metadata,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(76), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [238] = 11,
    ACTIONS(96), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(98), 1,
      aux_sym_metadata_token1,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      sym_bool,
    ACTIONS(108), 1,
      sym_number,
    STATE(185), 1,
      aux_sym_metadata_repeat1,
    STATE(254), 1,
      sym_metadata,
    ACTIONS(102), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(12), 2,
      sym_amount,
      aux_sym_custom_repeat1,
    ACTIONS(106), 3,
      sym_date,
      sym_string,
      sym_account,
    STATE(25), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [279] = 11,
    ACTIONS(98), 1,
      aux_sym_metadata_token1,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      sym_number,
    ACTIONS(110), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(112), 1,
      sym_bool,
    STATE(185), 1,
      aux_sym_metadata_repeat1,
    STATE(295), 1,
      sym_metadata,
    ACTIONS(102), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(6), 2,
      sym_amount,
      aux_sym_custom_repeat1,
    ACTIONS(114), 3,
      sym_date,
      sym_string,
      sym_account,
    STATE(25), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [320] = 9,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(116), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(118), 1,
      aux_sym_metadata_token1,
    ACTIONS(124), 1,
      sym_number,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(120), 2,
      sym_bool,
      sym_currency,
    STATE(203), 2,
      sym__key_value_value,
      sym_amount,
    ACTIONS(122), 4,
      sym_date,
      sym_tag,
      sym_string,
      sym_account,
    STATE(112), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [357] = 11,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    ACTIONS(130), 1,
      anon_sym_POUND,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 1,
      sym_currency,
    ACTIONS(138), 1,
      sym_number,
    STATE(171), 1,
      sym_cost_comp,
    STATE(181), 1,
      sym_compound_amount,
    STATE(288), 1,
      sym_cost_comp_list,
    ACTIONS(134), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(128), 3,
      anon_sym_STAR,
      sym_date,
      sym_string,
    STATE(88), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [397] = 11,
    ACTIONS(126), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(130), 1,
      anon_sym_POUND,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 1,
      sym_currency,
    ACTIONS(138), 1,
      sym_number,
    STATE(171), 1,
      sym_cost_comp,
    STATE(181), 1,
      sym_compound_amount,
    STATE(277), 1,
      sym_cost_comp_list,
    ACTIONS(134), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(128), 3,
      anon_sym_STAR,
      sym_date,
      sym_string,
    STATE(88), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [437] = 8,
    ACTIONS(118), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(144), 1,
      sym_number,
    ACTIONS(134), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(140), 2,
      sym_bool,
      sym_currency,
    STATE(275), 2,
      sym__key_value_value,
      sym_amount,
    ACTIONS(142), 4,
      sym_date,
      sym_tag,
      sym_string,
      sym_account,
    STATE(115), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [471] = 9,
    ACTIONS(146), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(148), 1,
      aux_sym_metadata_token1,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      sym_bool,
    ACTIONS(162), 1,
      sym_number,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(12), 2,
      sym_amount,
      aux_sym_custom_repeat1,
    ACTIONS(159), 3,
      sym_date,
      sym_string,
      sym_account,
    STATE(25), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [506] = 9,
    ACTIONS(130), 1,
      anon_sym_POUND,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 1,
      sym_currency,
    ACTIONS(138), 1,
      sym_number,
    STATE(181), 1,
      sym_compound_amount,
    STATE(189), 1,
      sym_cost_comp,
    ACTIONS(134), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(128), 3,
      anon_sym_STAR,
      sym_date,
      sym_string,
    STATE(88), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [540] = 1,
    ACTIONS(165), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [556] = 1,
    ACTIONS(167), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [572] = 1,
    ACTIONS(169), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [588] = 1,
    ACTIONS(171), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [604] = 1,
    ACTIONS(173), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [620] = 1,
    ACTIONS(175), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [636] = 1,
    ACTIONS(177), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [652] = 1,
    ACTIONS(179), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [668] = 1,
    ACTIONS(181), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [684] = 1,
    ACTIONS(183), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [700] = 1,
    ACTIONS(185), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [716] = 5,
    ACTIONS(195), 1,
      sym_currency,
    ACTIONS(191), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(187), 3,
      aux_sym__skipped_lines_token2,
      sym_bool,
      sym_number,
    ACTIONS(189), 5,
      aux_sym_metadata_token1,
      anon_sym_LPAREN,
      sym_date,
      sym_string,
      sym_account,
  [740] = 1,
    ACTIONS(197), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [756] = 1,
    ACTIONS(199), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [772] = 1,
    ACTIONS(201), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [788] = 1,
    ACTIONS(203), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [804] = 1,
    ACTIONS(205), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [820] = 1,
    ACTIONS(207), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [836] = 1,
    ACTIONS(209), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [852] = 1,
    ACTIONS(211), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [868] = 1,
    ACTIONS(213), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [884] = 1,
    ACTIONS(215), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [900] = 1,
    ACTIONS(217), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [916] = 1,
    ACTIONS(219), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [932] = 1,
    ACTIONS(221), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [948] = 1,
    ACTIONS(223), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [964] = 1,
    ACTIONS(225), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [980] = 1,
    ACTIONS(227), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [996] = 1,
    ACTIONS(229), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [1012] = 1,
    ACTIONS(231), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [1028] = 1,
    ACTIONS(233), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [1044] = 1,
    ACTIONS(235), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [1060] = 1,
    ACTIONS(237), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [1076] = 1,
    ACTIONS(239), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [1092] = 1,
    ACTIONS(241), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [1108] = 1,
    ACTIONS(243), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [1124] = 1,
    ACTIONS(245), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [1140] = 1,
    ACTIONS(247), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [1156] = 1,
    ACTIONS(249), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [1172] = 1,
    ACTIONS(251), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [1188] = 1,
    ACTIONS(253), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [1204] = 8,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      sym_currency,
    ACTIONS(87), 1,
      sym_number,
    ACTIONS(255), 1,
      aux_sym__skipped_lines_token2,
    STATE(182), 1,
      sym_incomplete_amount,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(257), 2,
      aux_sym__skipped_lines_token3,
      aux_sym_metadata_token1,
    STATE(76), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [1234] = 3,
    ACTIONS(191), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(259), 4,
      aux_sym__skipped_lines_token2,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(261), 7,
      aux_sym_metadata_token1,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_date,
      sym_string,
      sym_account,
  [1254] = 2,
    ACTIONS(263), 4,
      aux_sym__skipped_lines_token2,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(265), 9,
      aux_sym_metadata_token1,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_date,
      sym_string,
      sym_account,
  [1272] = 2,
    ACTIONS(259), 4,
      aux_sym__skipped_lines_token2,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(261), 9,
      aux_sym_metadata_token1,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_date,
      sym_string,
      sym_account,
  [1290] = 1,
    ACTIONS(267), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [1306] = 1,
    ACTIONS(269), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [1322] = 1,
    ACTIONS(271), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [1338] = 1,
    ACTIONS(273), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [1354] = 1,
    ACTIONS(275), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [1370] = 1,
    ACTIONS(277), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [1386] = 1,
    ACTIONS(279), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [1402] = 1,
    ACTIONS(281), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [1418] = 1,
    ACTIONS(283), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [1434] = 1,
    ACTIONS(285), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token2,
      anon_sym_COLON,
      aux_sym__skipped_lines_token3,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
      sym_flag,
  [1450] = 2,
    ACTIONS(287), 4,
      aux_sym__skipped_lines_token2,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(289), 9,
      aux_sym_metadata_token1,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_date,
      sym_string,
      sym_account,
  [1468] = 2,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    ACTIONS(289), 11,
      aux_sym__skipped_lines_token2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_currency,
  [1485] = 2,
    ACTIONS(287), 3,
      aux_sym__skipped_lines_token2,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(289), 9,
      aux_sym__skipped_lines_token3,
      aux_sym_metadata_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_STAR,
      anon_sym_AT_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_currency,
  [1502] = 2,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    ACTIONS(261), 11,
      aux_sym__skipped_lines_token2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_currency,
  [1519] = 2,
    ACTIONS(263), 3,
      aux_sym__skipped_lines_token2,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(265), 9,
      aux_sym__skipped_lines_token3,
      aux_sym_metadata_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_STAR,
      anon_sym_AT_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_currency,
  [1536] = 3,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    ACTIONS(291), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(261), 9,
      aux_sym__skipped_lines_token2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_currency,
  [1555] = 3,
    ACTIONS(293), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(259), 3,
      aux_sym__skipped_lines_token2,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(261), 7,
      aux_sym__skipped_lines_token3,
      aux_sym_metadata_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_AT_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_currency,
  [1574] = 5,
    ACTIONS(301), 1,
      sym_currency,
    ACTIONS(293), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(299), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(295), 3,
      aux_sym__skipped_lines_token2,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(297), 4,
      aux_sym__skipped_lines_token3,
      aux_sym_metadata_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1597] = 2,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
    ACTIONS(265), 11,
      aux_sym__skipped_lines_token2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_currency,
  [1614] = 10,
    ACTIONS(303), 1,
      aux_sym_metadata_token1,
    ACTIONS(307), 1,
      sym_string,
    STATE(83), 1,
      sym_txn_strings,
    STATE(116), 1,
      sym_tags_and_links,
    STATE(135), 1,
      aux_sym_tags_and_links_repeat1,
    STATE(176), 1,
      sym_metadata,
    STATE(191), 1,
      aux_sym_metadata_repeat1,
    STATE(237), 1,
      sym_postings,
    ACTIONS(305), 2,
      sym_tag,
      sym_link,
    STATE(146), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [1647] = 2,
    ACTIONS(259), 3,
      aux_sym__skipped_lines_token2,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(261), 9,
      aux_sym__skipped_lines_token3,
      aux_sym_metadata_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_STAR,
      anon_sym_AT_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_currency,
  [1664] = 12,
    ACTIONS(309), 1,
      anon_sym_balance,
    ACTIONS(311), 1,
      anon_sym_close,
    ACTIONS(313), 1,
      anon_sym_commodity,
    ACTIONS(315), 1,
      anon_sym_custom,
    ACTIONS(317), 1,
      anon_sym_document,
    ACTIONS(319), 1,
      anon_sym_event,
    ACTIONS(321), 1,
      anon_sym_note,
    ACTIONS(323), 1,
      anon_sym_open,
    ACTIONS(325), 1,
      anon_sym_pad,
    ACTIONS(327), 1,
      anon_sym_price,
    ACTIONS(329), 1,
      anon_sym_query,
    ACTIONS(331), 1,
      sym_flag,
  [1701] = 11,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(77), 1,
      anon_sym_AT_AT,
    ACTIONS(79), 1,
      anon_sym_AT,
    ACTIONS(333), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(335), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(337), 1,
      aux_sym_metadata_token1,
    STATE(100), 1,
      sym_cost_spec,
    STATE(118), 1,
      sym_price_annotation,
    STATE(191), 1,
      aux_sym_metadata_repeat1,
    STATE(208), 1,
      sym_metadata,
  [1735] = 11,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(77), 1,
      anon_sym_AT_AT,
    ACTIONS(79), 1,
      anon_sym_AT,
    ACTIONS(340), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(342), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(344), 1,
      aux_sym_metadata_token1,
    STATE(102), 1,
      sym_cost_spec,
    STATE(133), 1,
      sym_price_annotation,
    STATE(191), 1,
      aux_sym_metadata_repeat1,
    STATE(226), 1,
      sym_metadata,
  [1769] = 8,
    ACTIONS(303), 1,
      aux_sym_metadata_token1,
    STATE(113), 1,
      sym_tags_and_links,
    STATE(135), 1,
      aux_sym_tags_and_links_repeat1,
    STATE(159), 1,
      sym_metadata,
    STATE(191), 1,
      aux_sym_metadata_repeat1,
    STATE(294), 1,
      sym_postings,
    ACTIONS(305), 2,
      sym_tag,
      sym_link,
    STATE(146), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [1796] = 2,
    ACTIONS(347), 3,
      aux_sym__skipped_lines_token2,
      sym_bool,
      sym_number,
    ACTIONS(349), 7,
      aux_sym_metadata_token1,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_date,
      sym_string,
      sym_account,
  [1811] = 5,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      sym_number,
    ACTIONS(134), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_amount,
      sym_amount_with_tolerance,
    STATE(114), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [1832] = 5,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      sym_number,
    STATE(168), 1,
      sym_amount,
    ACTIONS(134), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(129), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [1852] = 5,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      sym_currency,
    ACTIONS(357), 1,
      sym_number,
    ACTIONS(134), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(117), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [1872] = 6,
    ACTIONS(359), 1,
      anon_sym_RBRACE,
    ACTIONS(363), 1,
      anon_sym_POUND,
    ACTIONS(367), 1,
      sym_currency,
    ACTIONS(291), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(361), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
    ACTIONS(365), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [1894] = 5,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      sym_currency,
    ACTIONS(371), 1,
      sym_number,
    ACTIONS(134), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(134), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [1914] = 4,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_number,
    ACTIONS(134), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(72), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [1931] = 4,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      sym_number,
    ACTIONS(102), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(56), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [1948] = 4,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 1,
      sym_number,
    ACTIONS(134), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(122), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [1965] = 8,
    ACTIONS(77), 1,
      anon_sym_AT_AT,
    ACTIONS(79), 1,
      anon_sym_AT,
    ACTIONS(379), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(381), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(383), 1,
      aux_sym_metadata_token1,
    STATE(132), 1,
      sym_price_annotation,
    STATE(191), 1,
      aux_sym_metadata_repeat1,
    STATE(223), 1,
      sym_metadata,
  [1990] = 4,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(386), 1,
      sym_number,
    ACTIONS(134), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(74), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2007] = 4,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      sym_number,
    ACTIONS(134), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(123), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2024] = 4,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(390), 1,
      sym_number,
    ACTIONS(134), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(131), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2041] = 4,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(392), 1,
      sym_number,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(71), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2058] = 4,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(394), 1,
      sym_number,
    ACTIONS(134), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(70), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2075] = 7,
    ACTIONS(396), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(398), 1,
      aux_sym_metadata_token1,
    STATE(135), 1,
      aux_sym_tags_and_links_repeat1,
    STATE(149), 1,
      sym_tags_and_links,
    STATE(185), 1,
      aux_sym_metadata_repeat1,
    STATE(252), 1,
      sym_metadata,
    ACTIONS(305), 2,
      sym_tag,
      sym_link,
  [2098] = 8,
    ACTIONS(77), 1,
      anon_sym_AT_AT,
    ACTIONS(79), 1,
      anon_sym_AT,
    ACTIONS(400), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(402), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(404), 1,
      aux_sym_metadata_token1,
    STATE(138), 1,
      sym_price_annotation,
    STATE(191), 1,
      aux_sym_metadata_repeat1,
    STATE(229), 1,
      sym_metadata,
  [2123] = 8,
    ACTIONS(77), 1,
      anon_sym_AT_AT,
    ACTIONS(79), 1,
      anon_sym_AT,
    ACTIONS(407), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(409), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(411), 1,
      aux_sym_metadata_token1,
    STATE(125), 1,
      sym_price_annotation,
    STATE(191), 1,
      aux_sym_metadata_repeat1,
    STATE(205), 1,
      sym_metadata,
  [2148] = 8,
    ACTIONS(77), 1,
      anon_sym_AT_AT,
    ACTIONS(79), 1,
      anon_sym_AT,
    ACTIONS(414), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(416), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(418), 1,
      aux_sym_metadata_token1,
    STATE(128), 1,
      sym_price_annotation,
    STATE(191), 1,
      aux_sym_metadata_repeat1,
    STATE(219), 1,
      sym_metadata,
  [2173] = 4,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      sym_number,
    ACTIONS(102), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(58), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2190] = 4,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(423), 1,
      sym_number,
    ACTIONS(102), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(69), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2207] = 4,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      sym_number,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(75), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2224] = 4,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(427), 1,
      sym_number,
    ACTIONS(134), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(124), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2241] = 4,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      sym_number,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(79), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2258] = 2,
    ACTIONS(295), 3,
      aux_sym__skipped_lines_token2,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(297), 4,
      aux_sym__skipped_lines_token3,
      aux_sym_metadata_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2270] = 2,
    ACTIONS(431), 3,
      aux_sym__skipped_lines_token2,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(433), 4,
      aux_sym__skipped_lines_token3,
      aux_sym_metadata_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2282] = 7,
    ACTIONS(98), 1,
      aux_sym_metadata_token1,
    ACTIONS(435), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(437), 1,
      sym_string,
    ACTIONS(439), 1,
      sym_currency,
    STATE(136), 1,
      sym_currency_list,
    STATE(185), 1,
      aux_sym_metadata_repeat1,
    STATE(265), 1,
      sym_metadata,
  [2304] = 6,
    ACTIONS(441), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(443), 1,
      sym_key,
    ACTIONS(447), 1,
      sym_flag,
    ACTIONS(449), 1,
      sym_account,
    STATE(200), 1,
      sym_key_value,
    ACTIONS(445), 2,
      sym_tag,
      sym_link,
  [2324] = 5,
    ACTIONS(451), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(453), 1,
      aux_sym_metadata_token1,
    ACTIONS(455), 1,
      sym_currency,
    ACTIONS(293), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(299), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2342] = 5,
    ACTIONS(457), 1,
      aux_sym_metadata_token1,
    STATE(169), 1,
      sym_metadata,
    STATE(191), 1,
      aux_sym_metadata_repeat1,
    STATE(274), 1,
      sym_postings,
    STATE(146), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2359] = 4,
    ACTIONS(455), 1,
      sym_currency,
    ACTIONS(459), 1,
      anon_sym_TILDE,
    ACTIONS(291), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(365), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2374] = 4,
    ACTIONS(453), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(461), 1,
      sym_currency,
    ACTIONS(291), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(365), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2389] = 5,
    ACTIONS(457), 1,
      aux_sym_metadata_token1,
    STATE(179), 1,
      sym_metadata,
    STATE(191), 1,
      aux_sym_metadata_repeat1,
    STATE(270), 1,
      sym_postings,
    STATE(146), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2406] = 3,
    ACTIONS(463), 1,
      sym_currency,
    ACTIONS(291), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(365), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2418] = 5,
    ACTIONS(465), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(467), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(469), 1,
      aux_sym_metadata_token1,
    STATE(191), 1,
      aux_sym_metadata_repeat1,
    STATE(202), 1,
      sym_metadata,
  [2434] = 5,
    ACTIONS(441), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(443), 1,
      sym_key,
    ACTIONS(447), 1,
      sym_flag,
    ACTIONS(449), 1,
      sym_account,
    STATE(200), 1,
      sym_key_value,
  [2450] = 5,
    ACTIONS(472), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(474), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(476), 1,
      aux_sym_metadata_token1,
    STATE(191), 1,
      aux_sym_metadata_repeat1,
    STATE(230), 1,
      sym_metadata,
  [2466] = 2,
    ACTIONS(479), 2,
      aux_sym__skipped_lines_token2,
      anon_sym_AT,
    ACTIONS(481), 3,
      aux_sym__skipped_lines_token3,
      aux_sym_metadata_token1,
      anon_sym_AT_AT,
  [2476] = 3,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
    ACTIONS(291), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(365), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2488] = 3,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
    ACTIONS(291), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(365), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2500] = 3,
    ACTIONS(487), 1,
      sym_currency,
    ACTIONS(291), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(365), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2512] = 5,
    ACTIONS(489), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(491), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(493), 1,
      aux_sym_metadata_token1,
    STATE(191), 1,
      aux_sym_metadata_repeat1,
    STATE(232), 1,
      sym_metadata,
  [2528] = 5,
    ACTIONS(496), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(498), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(500), 1,
      aux_sym_metadata_token1,
    STATE(191), 1,
      aux_sym_metadata_repeat1,
    STATE(212), 1,
      sym_metadata,
  [2544] = 4,
    ACTIONS(503), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(505), 1,
      aux_sym_metadata_token1,
    STATE(127), 1,
      aux_sym_tags_and_links_repeat1,
    ACTIONS(508), 2,
      sym_tag,
      sym_link,
  [2558] = 5,
    ACTIONS(511), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(513), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(515), 1,
      aux_sym_metadata_token1,
    STATE(191), 1,
      aux_sym_metadata_repeat1,
    STATE(207), 1,
      sym_metadata,
  [2574] = 3,
    ACTIONS(455), 1,
      sym_currency,
    ACTIONS(291), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(365), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2586] = 4,
    ACTIONS(518), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(522), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_currency_list_repeat1,
    ACTIONS(520), 2,
      aux_sym_metadata_token1,
      sym_string,
  [2600] = 3,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    ACTIONS(291), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(365), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2612] = 5,
    ACTIONS(527), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(529), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(531), 1,
      aux_sym_metadata_token1,
    STATE(191), 1,
      aux_sym_metadata_repeat1,
    STATE(224), 1,
      sym_metadata,
  [2628] = 5,
    ACTIONS(534), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(536), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(538), 1,
      aux_sym_metadata_token1,
    STATE(191), 1,
      aux_sym_metadata_repeat1,
    STATE(217), 1,
      sym_metadata,
  [2644] = 3,
    ACTIONS(541), 1,
      sym_currency,
    ACTIONS(291), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(365), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2656] = 4,
    ACTIONS(543), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(545), 1,
      aux_sym_metadata_token1,
    STATE(127), 1,
      aux_sym_tags_and_links_repeat1,
    ACTIONS(548), 2,
      sym_tag,
      sym_link,
  [2670] = 5,
    ACTIONS(98), 1,
      aux_sym_metadata_token1,
    ACTIONS(550), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(552), 1,
      sym_string,
    STATE(185), 1,
      aux_sym_metadata_repeat1,
    STATE(268), 1,
      sym_metadata,
  [2686] = 4,
    ACTIONS(554), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      aux_sym_currency_list_repeat1,
    ACTIONS(556), 2,
      aux_sym_metadata_token1,
      sym_string,
  [2700] = 5,
    ACTIONS(560), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(562), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(564), 1,
      aux_sym_metadata_token1,
    STATE(191), 1,
      aux_sym_metadata_repeat1,
    STATE(211), 1,
      sym_metadata,
  [2716] = 2,
    ACTIONS(567), 2,
      aux_sym__skipped_lines_token2,
      anon_sym_AT,
    ACTIONS(569), 3,
      aux_sym__skipped_lines_token3,
      aux_sym_metadata_token1,
      anon_sym_AT_AT,
  [2726] = 4,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    ACTIONS(571), 1,
      aux_sym__skipped_lines_token2,
    STATE(130), 1,
      aux_sym_currency_list_repeat1,
    ACTIONS(573), 2,
      aux_sym_metadata_token1,
      sym_string,
  [2740] = 4,
    ACTIONS(98), 1,
      aux_sym_metadata_token1,
    ACTIONS(575), 1,
      aux_sym__skipped_lines_token2,
    STATE(185), 1,
      aux_sym_metadata_repeat1,
    STATE(267), 1,
      sym_metadata,
  [2753] = 4,
    ACTIONS(98), 1,
      aux_sym_metadata_token1,
    ACTIONS(577), 1,
      aux_sym__skipped_lines_token2,
    STATE(185), 1,
      aux_sym_metadata_repeat1,
    STATE(240), 1,
      sym_metadata,
  [2766] = 4,
    ACTIONS(579), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(581), 1,
      aux_sym_metadata_token1,
    STATE(191), 1,
      aux_sym_metadata_repeat1,
    STATE(216), 1,
      sym_metadata,
  [2779] = 4,
    ACTIONS(584), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(586), 1,
      aux_sym_metadata_token1,
    STATE(191), 1,
      aux_sym_metadata_repeat1,
    STATE(213), 1,
      sym_metadata,
  [2792] = 4,
    ACTIONS(98), 1,
      aux_sym_metadata_token1,
    ACTIONS(589), 1,
      aux_sym__skipped_lines_token2,
    STATE(185), 1,
      aux_sym_metadata_repeat1,
    STATE(273), 1,
      sym_metadata,
  [2805] = 3,
    ACTIONS(591), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(593), 1,
      aux_sym_metadata_token1,
    STATE(167), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2816] = 4,
    ACTIONS(595), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(597), 1,
      aux_sym_metadata_token1,
    STATE(191), 1,
      aux_sym_metadata_repeat1,
    STATE(227), 1,
      sym_metadata,
  [2829] = 4,
    ACTIONS(600), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(602), 1,
      aux_sym_metadata_token1,
    STATE(191), 1,
      aux_sym_metadata_repeat1,
    STATE(210), 1,
      sym_metadata,
  [2842] = 4,
    ACTIONS(98), 1,
      aux_sym_metadata_token1,
    ACTIONS(605), 1,
      aux_sym__skipped_lines_token2,
    STATE(185), 1,
      aux_sym_metadata_repeat1,
    STATE(261), 1,
      sym_metadata,
  [2855] = 4,
    ACTIONS(607), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(609), 1,
      aux_sym_metadata_token1,
    STATE(191), 1,
      aux_sym_metadata_repeat1,
    STATE(209), 1,
      sym_metadata,
  [2868] = 2,
    ACTIONS(503), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(612), 3,
      aux_sym_metadata_token1,
      sym_tag,
      sym_link,
  [2877] = 4,
    ACTIONS(98), 1,
      aux_sym_metadata_token1,
    ACTIONS(614), 1,
      aux_sym__skipped_lines_token2,
    STATE(185), 1,
      aux_sym_metadata_repeat1,
    STATE(255), 1,
      sym_metadata,
  [2890] = 4,
    ACTIONS(616), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(618), 1,
      aux_sym_metadata_token1,
    STATE(191), 1,
      aux_sym_metadata_repeat1,
    STATE(220), 1,
      sym_metadata,
  [2903] = 4,
    ACTIONS(621), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(623), 1,
      aux_sym_metadata_token1,
    STATE(191), 1,
      aux_sym_metadata_repeat1,
    STATE(197), 1,
      sym_metadata,
  [2916] = 4,
    ACTIONS(626), 1,
      anon_sym_RBRACE,
    ACTIONS(628), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(630), 1,
      anon_sym_COMMA,
    STATE(172), 1,
      aux_sym_cost_comp_list_repeat1,
  [2929] = 4,
    ACTIONS(98), 1,
      aux_sym_metadata_token1,
    ACTIONS(632), 1,
      aux_sym__skipped_lines_token2,
    STATE(185), 1,
      aux_sym_metadata_repeat1,
    STATE(243), 1,
      sym_metadata,
  [2942] = 4,
    ACTIONS(634), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(636), 1,
      aux_sym_metadata_token1,
    STATE(191), 1,
      aux_sym_metadata_repeat1,
    STATE(225), 1,
      sym_metadata,
  [2955] = 4,
    ACTIONS(98), 1,
      aux_sym_metadata_token1,
    ACTIONS(639), 1,
      aux_sym__skipped_lines_token2,
    STATE(185), 1,
      aux_sym_metadata_repeat1,
    STATE(297), 1,
      sym_metadata,
  [2968] = 3,
    ACTIONS(593), 1,
      aux_sym_metadata_token1,
    STATE(271), 1,
      sym_postings,
    STATE(146), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2979] = 4,
    ACTIONS(641), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(643), 1,
      aux_sym_metadata_token1,
    STATE(191), 1,
      aux_sym_metadata_repeat1,
    STATE(214), 1,
      sym_metadata,
  [2992] = 3,
    ACTIONS(443), 1,
      sym_key,
    STATE(200), 1,
      sym_key_value,
    ACTIONS(445), 2,
      sym_tag,
      sym_link,
  [3003] = 4,
    ACTIONS(646), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(648), 1,
      aux_sym_metadata_token1,
    STATE(191), 1,
      aux_sym_metadata_repeat1,
    STATE(196), 1,
      sym_metadata,
  [3016] = 4,
    ACTIONS(651), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(653), 1,
      aux_sym_metadata_token1,
    STATE(191), 1,
      aux_sym_metadata_repeat1,
    STATE(204), 1,
      sym_metadata,
  [3029] = 4,
    ACTIONS(98), 1,
      aux_sym_metadata_token1,
    ACTIONS(656), 1,
      aux_sym__skipped_lines_token2,
    STATE(185), 1,
      aux_sym_metadata_repeat1,
    STATE(296), 1,
      sym_metadata,
  [3042] = 4,
    ACTIONS(98), 1,
      aux_sym_metadata_token1,
    ACTIONS(658), 1,
      aux_sym__skipped_lines_token2,
    STATE(185), 1,
      aux_sym_metadata_repeat1,
    STATE(246), 1,
      sym_metadata,
  [3055] = 4,
    ACTIONS(660), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(662), 1,
      aux_sym_metadata_token1,
    STATE(191), 1,
      aux_sym_metadata_repeat1,
    STATE(231), 1,
      sym_metadata,
  [3068] = 3,
    ACTIONS(665), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(667), 1,
      aux_sym_metadata_token1,
    STATE(167), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3079] = 4,
    ACTIONS(98), 1,
      aux_sym_metadata_token1,
    ACTIONS(670), 1,
      aux_sym__skipped_lines_token2,
    STATE(185), 1,
      aux_sym_metadata_repeat1,
    STATE(242), 1,
      sym_metadata,
  [3092] = 3,
    ACTIONS(593), 1,
      aux_sym_metadata_token1,
    STATE(257), 1,
      sym_postings,
    STATE(146), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3103] = 4,
    ACTIONS(672), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(674), 1,
      aux_sym_metadata_token1,
    STATE(191), 1,
      aux_sym_metadata_repeat1,
    STATE(234), 1,
      sym_metadata,
  [3116] = 4,
    ACTIONS(630), 1,
      anon_sym_COMMA,
    ACTIONS(677), 1,
      anon_sym_RBRACE,
    ACTIONS(679), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(155), 1,
      aux_sym_cost_comp_list_repeat1,
  [3129] = 4,
    ACTIONS(681), 1,
      anon_sym_RBRACE,
    ACTIONS(683), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    STATE(172), 1,
      aux_sym_cost_comp_list_repeat1,
  [3142] = 4,
    ACTIONS(98), 1,
      aux_sym_metadata_token1,
    ACTIONS(688), 1,
      aux_sym__skipped_lines_token2,
    STATE(185), 1,
      aux_sym_metadata_repeat1,
    STATE(249), 1,
      sym_metadata,
  [3155] = 2,
    ACTIONS(692), 1,
      sym_string,
    ACTIONS(690), 3,
      aux_sym_metadata_token1,
      sym_tag,
      sym_link,
  [3164] = 4,
    ACTIONS(694), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(696), 1,
      aux_sym_metadata_token1,
    STATE(191), 1,
      aux_sym_metadata_repeat1,
    STATE(195), 1,
      sym_metadata,
  [3177] = 3,
    ACTIONS(593), 1,
      aux_sym_metadata_token1,
    STATE(278), 1,
      sym_postings,
    STATE(146), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3188] = 4,
    ACTIONS(699), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(701), 1,
      aux_sym_metadata_token1,
    STATE(191), 1,
      aux_sym_metadata_repeat1,
    STATE(206), 1,
      sym_metadata,
  [3201] = 4,
    ACTIONS(704), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(706), 1,
      aux_sym_metadata_token1,
    STATE(191), 1,
      aux_sym_metadata_repeat1,
    STATE(221), 1,
      sym_metadata,
  [3214] = 3,
    ACTIONS(593), 1,
      aux_sym_metadata_token1,
    STATE(244), 1,
      sym_postings,
    STATE(146), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3225] = 2,
    ACTIONS(518), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(520), 3,
      aux_sym_metadata_token1,
      anon_sym_COMMA,
      sym_string,
  [3234] = 2,
    ACTIONS(709), 1,
      anon_sym_RBRACE,
    ACTIONS(711), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3242] = 2,
    ACTIONS(713), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(715), 2,
      aux_sym__skipped_lines_token3,
      aux_sym_metadata_token1,
  [3250] = 1,
    ACTIONS(717), 3,
      aux_sym_metadata_token1,
      sym_tag,
      sym_link,
  [3256] = 3,
    ACTIONS(441), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(447), 1,
      sym_flag,
    ACTIONS(449), 1,
      sym_account,
  [3266] = 3,
    ACTIONS(98), 1,
      aux_sym_metadata_token1,
    ACTIONS(719), 1,
      aux_sym__skipped_lines_token2,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
  [3276] = 2,
    ACTIONS(721), 1,
      anon_sym_RBRACE,
    ACTIONS(723), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3284] = 3,
    ACTIONS(725), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(727), 1,
      aux_sym_metadata_token1,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
  [3294] = 2,
    ACTIONS(730), 1,
      anon_sym_RBRACE,
    ACTIONS(732), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3302] = 2,
    ACTIONS(681), 1,
      anon_sym_RBRACE,
    ACTIONS(683), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3310] = 2,
    ACTIONS(734), 1,
      anon_sym_RBRACE,
    ACTIONS(736), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3318] = 3,
    ACTIONS(719), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(738), 1,
      aux_sym_metadata_token1,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
  [3328] = 2,
    ACTIONS(741), 1,
      anon_sym_RBRACE,
    ACTIONS(743), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3336] = 2,
    ACTIONS(745), 1,
      anon_sym_RBRACE,
    ACTIONS(747), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3344] = 2,
    ACTIONS(749), 1,
      anon_sym_RBRACE,
    ACTIONS(751), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3352] = 2,
    ACTIONS(753), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(755), 1,
      aux_sym_metadata_token1,
  [3359] = 2,
    ACTIONS(757), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(759), 1,
      aux_sym_metadata_token1,
  [3366] = 2,
    ACTIONS(761), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(763), 1,
      aux_sym_metadata_token1,
  [3373] = 2,
    ACTIONS(443), 1,
      sym_key,
    STATE(200), 1,
      sym_key_value,
  [3380] = 2,
    ACTIONS(665), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(765), 1,
      aux_sym_metadata_token1,
  [3387] = 2,
    ACTIONS(725), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(767), 1,
      aux_sym_metadata_token1,
  [3394] = 2,
    ACTIONS(769), 1,
      sym_key,
    STATE(256), 1,
      sym_key_value,
  [3401] = 2,
    ACTIONS(771), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(773), 1,
      aux_sym_metadata_token1,
  [3408] = 2,
    ACTIONS(775), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(777), 1,
      aux_sym_metadata_token1,
  [3415] = 2,
    ACTIONS(779), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(781), 1,
      aux_sym_metadata_token1,
  [3422] = 2,
    ACTIONS(783), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(785), 1,
      aux_sym_metadata_token1,
  [3429] = 2,
    ACTIONS(787), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(789), 1,
      aux_sym_metadata_token1,
  [3436] = 2,
    ACTIONS(791), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(793), 1,
      aux_sym_metadata_token1,
  [3443] = 2,
    ACTIONS(795), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(797), 1,
      aux_sym_metadata_token1,
  [3450] = 2,
    ACTIONS(799), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(801), 1,
      aux_sym_metadata_token1,
  [3457] = 2,
    ACTIONS(803), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(805), 1,
      aux_sym_metadata_token1,
  [3464] = 2,
    ACTIONS(807), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(809), 1,
      aux_sym_metadata_token1,
  [3471] = 2,
    ACTIONS(811), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(813), 1,
      aux_sym_metadata_token1,
  [3478] = 2,
    ACTIONS(815), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(817), 1,
      aux_sym_metadata_token1,
  [3485] = 2,
    ACTIONS(819), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(821), 1,
      aux_sym_metadata_token1,
  [3492] = 1,
    ACTIONS(445), 2,
      sym_tag,
      sym_link,
  [3497] = 2,
    ACTIONS(823), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(825), 1,
      aux_sym_metadata_token1,
  [3504] = 2,
    ACTIONS(827), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(829), 1,
      aux_sym_metadata_token1,
  [3511] = 2,
    ACTIONS(831), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(833), 1,
      aux_sym_metadata_token1,
  [3518] = 2,
    ACTIONS(835), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(837), 1,
      aux_sym_metadata_token1,
  [3525] = 2,
    ACTIONS(839), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(841), 1,
      aux_sym_metadata_token1,
  [3532] = 2,
    ACTIONS(843), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(845), 1,
      aux_sym_metadata_token1,
  [3539] = 2,
    ACTIONS(847), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(849), 1,
      aux_sym_metadata_token1,
  [3546] = 2,
    ACTIONS(851), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(853), 1,
      aux_sym_metadata_token1,
  [3553] = 2,
    ACTIONS(855), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(857), 1,
      aux_sym_metadata_token1,
  [3560] = 2,
    ACTIONS(859), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(861), 1,
      aux_sym_metadata_token1,
  [3567] = 2,
    ACTIONS(863), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(865), 1,
      aux_sym_metadata_token1,
  [3574] = 2,
    ACTIONS(867), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(869), 1,
      aux_sym_metadata_token1,
  [3581] = 2,
    ACTIONS(871), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(873), 1,
      aux_sym_metadata_token1,
  [3588] = 2,
    ACTIONS(875), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(877), 1,
      aux_sym_metadata_token1,
  [3595] = 2,
    ACTIONS(879), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(881), 1,
      aux_sym_metadata_token1,
  [3602] = 2,
    ACTIONS(883), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(885), 1,
      aux_sym_metadata_token1,
  [3609] = 2,
    ACTIONS(887), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(889), 1,
      aux_sym_metadata_token1,
  [3616] = 2,
    ACTIONS(891), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(893), 1,
      sym_string,
  [3623] = 2,
    ACTIONS(895), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(897), 1,
      aux_sym_metadata_token1,
  [3630] = 1,
    ACTIONS(899), 1,
      sym_string,
  [3634] = 1,
    ACTIONS(901), 1,
      sym_account,
  [3638] = 1,
    ACTIONS(903), 1,
      aux_sym__skipped_lines_token2,
  [3642] = 1,
    ACTIONS(905), 1,
      sym_currency,
  [3646] = 1,
    ACTIONS(907), 1,
      aux_sym__skipped_lines_token1,
  [3650] = 1,
    ACTIONS(909), 1,
      aux_sym__skipped_lines_token2,
  [3654] = 1,
    ACTIONS(911), 1,
      sym_string,
  [3658] = 1,
    ACTIONS(913), 1,
      aux_sym__skipped_lines_token2,
  [3662] = 1,
    ACTIONS(915), 1,
      aux_sym__skipped_lines_token2,
  [3666] = 1,
    ACTIONS(917), 1,
      aux_sym__skipped_lines_token2,
  [3670] = 1,
    ACTIONS(919), 1,
      sym_account,
  [3674] = 1,
    ACTIONS(921), 1,
      aux_sym__skipped_lines_token2,
  [3678] = 1,
    ACTIONS(923), 1,
      sym_string,
  [3682] = 1,
    ACTIONS(925), 1,
      sym_account,
  [3686] = 1,
    ACTIONS(927), 1,
      aux_sym__skipped_lines_token2,
  [3690] = 1,
    ACTIONS(929), 1,
      sym_string,
  [3694] = 1,
    ACTIONS(931), 1,
      aux_sym__skipped_lines_token2,
  [3698] = 1,
    ACTIONS(933), 1,
      aux_sym__skipped_lines_token2,
  [3702] = 1,
    ACTIONS(935), 1,
      aux_sym__skipped_lines_token2,
  [3706] = 1,
    ACTIONS(937), 1,
      aux_sym__skipped_lines_token2,
  [3710] = 1,
    ACTIONS(939), 1,
      aux_sym__skipped_lines_token2,
  [3714] = 1,
    ACTIONS(941), 1,
      aux_sym__skipped_lines_token2,
  [3718] = 1,
    ACTIONS(943), 1,
      aux_sym__skipped_lines_token2,
  [3722] = 1,
    ACTIONS(945), 1,
      sym_account,
  [3726] = 1,
    ACTIONS(947), 1,
      sym_string,
  [3730] = 1,
    ACTIONS(949), 1,
      aux_sym__skipped_lines_token2,
  [3734] = 1,
    ACTIONS(951), 1,
      aux_sym__skipped_lines_token2,
  [3738] = 1,
    ACTIONS(953), 1,
      sym_account,
  [3742] = 1,
    ACTIONS(955), 1,
      sym_account,
  [3746] = 1,
    ACTIONS(957), 1,
      sym_string,
  [3750] = 1,
    ACTIONS(959), 1,
      aux_sym__skipped_lines_token2,
  [3754] = 1,
    ACTIONS(961), 1,
      aux_sym__skipped_lines_token2,
  [3758] = 1,
    ACTIONS(963), 1,
      aux_sym__skipped_lines_token2,
  [3762] = 1,
    ACTIONS(965), 1,
      aux_sym__skipped_lines_token2,
  [3766] = 1,
    ACTIONS(967), 1,
      aux_sym__skipped_lines_token2,
  [3770] = 1,
    ACTIONS(969), 1,
      aux_sym__skipped_lines_token2,
  [3774] = 1,
    ACTIONS(971), 1,
      aux_sym__skipped_lines_token2,
  [3778] = 1,
    ACTIONS(973), 1,
      sym_string,
  [3782] = 1,
    ACTIONS(975), 1,
      aux_sym__skipped_lines_token2,
  [3786] = 1,
    ACTIONS(977), 1,
      aux_sym__skipped_lines_token2,
  [3790] = 1,
    ACTIONS(777), 1,
      aux_sym__skipped_lines_token2,
  [3794] = 1,
    ACTIONS(979), 1,
      aux_sym__skipped_lines_token2,
  [3798] = 1,
    ACTIONS(981), 1,
      anon_sym_RBRACE_RBRACE,
  [3802] = 1,
    ACTIONS(983), 1,
      aux_sym__skipped_lines_token2,
  [3806] = 1,
    ACTIONS(985), 1,
      sym_account,
  [3810] = 1,
    ACTIONS(987), 1,
      ts_builtin_sym_end,
  [3814] = 1,
    ACTIONS(989), 1,
      sym_currency,
  [3818] = 1,
    ACTIONS(991), 1,
      sym_string,
  [3822] = 1,
    ACTIONS(993), 1,
      sym_key,
  [3826] = 1,
    ACTIONS(995), 1,
      aux_sym__skipped_lines_token2,
  [3830] = 1,
    ACTIONS(997), 1,
      sym_tag,
  [3834] = 1,
    ACTIONS(999), 1,
      sym_tag,
  [3838] = 1,
    ACTIONS(1001), 1,
      sym_string,
  [3842] = 1,
    ACTIONS(981), 1,
      anon_sym_RBRACE,
  [3846] = 1,
    ACTIONS(1003), 1,
      sym_account,
  [3850] = 1,
    ACTIONS(1005), 1,
      sym_string,
  [3854] = 1,
    ACTIONS(1007), 1,
      sym_string,
  [3858] = 1,
    ACTIONS(1009), 1,
      aux_sym__skipped_lines_token2,
  [3862] = 1,
    ACTIONS(1011), 1,
      sym_currency,
  [3866] = 1,
    ACTIONS(1013), 1,
      aux_sym__skipped_lines_token2,
  [3870] = 1,
    ACTIONS(1015), 1,
      aux_sym__skipped_lines_token2,
  [3874] = 1,
    ACTIONS(1017), 1,
      aux_sym__skipped_lines_token2,
  [3878] = 1,
    ACTIONS(1019), 1,
      aux_sym__skipped_lines_token2,
  [3882] = 1,
    ACTIONS(349), 1,
      aux_sym__skipped_lines_token2,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 63,
  [SMALL_STATE(4)] = 126,
  [SMALL_STATE(5)] = 182,
  [SMALL_STATE(6)] = 238,
  [SMALL_STATE(7)] = 279,
  [SMALL_STATE(8)] = 320,
  [SMALL_STATE(9)] = 357,
  [SMALL_STATE(10)] = 397,
  [SMALL_STATE(11)] = 437,
  [SMALL_STATE(12)] = 471,
  [SMALL_STATE(13)] = 506,
  [SMALL_STATE(14)] = 540,
  [SMALL_STATE(15)] = 556,
  [SMALL_STATE(16)] = 572,
  [SMALL_STATE(17)] = 588,
  [SMALL_STATE(18)] = 604,
  [SMALL_STATE(19)] = 620,
  [SMALL_STATE(20)] = 636,
  [SMALL_STATE(21)] = 652,
  [SMALL_STATE(22)] = 668,
  [SMALL_STATE(23)] = 684,
  [SMALL_STATE(24)] = 700,
  [SMALL_STATE(25)] = 716,
  [SMALL_STATE(26)] = 740,
  [SMALL_STATE(27)] = 756,
  [SMALL_STATE(28)] = 772,
  [SMALL_STATE(29)] = 788,
  [SMALL_STATE(30)] = 804,
  [SMALL_STATE(31)] = 820,
  [SMALL_STATE(32)] = 836,
  [SMALL_STATE(33)] = 852,
  [SMALL_STATE(34)] = 868,
  [SMALL_STATE(35)] = 884,
  [SMALL_STATE(36)] = 900,
  [SMALL_STATE(37)] = 916,
  [SMALL_STATE(38)] = 932,
  [SMALL_STATE(39)] = 948,
  [SMALL_STATE(40)] = 964,
  [SMALL_STATE(41)] = 980,
  [SMALL_STATE(42)] = 996,
  [SMALL_STATE(43)] = 1012,
  [SMALL_STATE(44)] = 1028,
  [SMALL_STATE(45)] = 1044,
  [SMALL_STATE(46)] = 1060,
  [SMALL_STATE(47)] = 1076,
  [SMALL_STATE(48)] = 1092,
  [SMALL_STATE(49)] = 1108,
  [SMALL_STATE(50)] = 1124,
  [SMALL_STATE(51)] = 1140,
  [SMALL_STATE(52)] = 1156,
  [SMALL_STATE(53)] = 1172,
  [SMALL_STATE(54)] = 1188,
  [SMALL_STATE(55)] = 1204,
  [SMALL_STATE(56)] = 1234,
  [SMALL_STATE(57)] = 1254,
  [SMALL_STATE(58)] = 1272,
  [SMALL_STATE(59)] = 1290,
  [SMALL_STATE(60)] = 1306,
  [SMALL_STATE(61)] = 1322,
  [SMALL_STATE(62)] = 1338,
  [SMALL_STATE(63)] = 1354,
  [SMALL_STATE(64)] = 1370,
  [SMALL_STATE(65)] = 1386,
  [SMALL_STATE(66)] = 1402,
  [SMALL_STATE(67)] = 1418,
  [SMALL_STATE(68)] = 1434,
  [SMALL_STATE(69)] = 1450,
  [SMALL_STATE(70)] = 1468,
  [SMALL_STATE(71)] = 1485,
  [SMALL_STATE(72)] = 1502,
  [SMALL_STATE(73)] = 1519,
  [SMALL_STATE(74)] = 1536,
  [SMALL_STATE(75)] = 1555,
  [SMALL_STATE(76)] = 1574,
  [SMALL_STATE(77)] = 1597,
  [SMALL_STATE(78)] = 1614,
  [SMALL_STATE(79)] = 1647,
  [SMALL_STATE(80)] = 1664,
  [SMALL_STATE(81)] = 1701,
  [SMALL_STATE(82)] = 1735,
  [SMALL_STATE(83)] = 1769,
  [SMALL_STATE(84)] = 1796,
  [SMALL_STATE(85)] = 1811,
  [SMALL_STATE(86)] = 1832,
  [SMALL_STATE(87)] = 1852,
  [SMALL_STATE(88)] = 1872,
  [SMALL_STATE(89)] = 1894,
  [SMALL_STATE(90)] = 1914,
  [SMALL_STATE(91)] = 1931,
  [SMALL_STATE(92)] = 1948,
  [SMALL_STATE(93)] = 1965,
  [SMALL_STATE(94)] = 1990,
  [SMALL_STATE(95)] = 2007,
  [SMALL_STATE(96)] = 2024,
  [SMALL_STATE(97)] = 2041,
  [SMALL_STATE(98)] = 2058,
  [SMALL_STATE(99)] = 2075,
  [SMALL_STATE(100)] = 2098,
  [SMALL_STATE(101)] = 2123,
  [SMALL_STATE(102)] = 2148,
  [SMALL_STATE(103)] = 2173,
  [SMALL_STATE(104)] = 2190,
  [SMALL_STATE(105)] = 2207,
  [SMALL_STATE(106)] = 2224,
  [SMALL_STATE(107)] = 2241,
  [SMALL_STATE(108)] = 2258,
  [SMALL_STATE(109)] = 2270,
  [SMALL_STATE(110)] = 2282,
  [SMALL_STATE(111)] = 2304,
  [SMALL_STATE(112)] = 2324,
  [SMALL_STATE(113)] = 2342,
  [SMALL_STATE(114)] = 2359,
  [SMALL_STATE(115)] = 2374,
  [SMALL_STATE(116)] = 2389,
  [SMALL_STATE(117)] = 2406,
  [SMALL_STATE(118)] = 2418,
  [SMALL_STATE(119)] = 2434,
  [SMALL_STATE(120)] = 2450,
  [SMALL_STATE(121)] = 2466,
  [SMALL_STATE(122)] = 2476,
  [SMALL_STATE(123)] = 2488,
  [SMALL_STATE(124)] = 2500,
  [SMALL_STATE(125)] = 2512,
  [SMALL_STATE(126)] = 2528,
  [SMALL_STATE(127)] = 2544,
  [SMALL_STATE(128)] = 2558,
  [SMALL_STATE(129)] = 2574,
  [SMALL_STATE(130)] = 2586,
  [SMALL_STATE(131)] = 2600,
  [SMALL_STATE(132)] = 2612,
  [SMALL_STATE(133)] = 2628,
  [SMALL_STATE(134)] = 2644,
  [SMALL_STATE(135)] = 2656,
  [SMALL_STATE(136)] = 2670,
  [SMALL_STATE(137)] = 2686,
  [SMALL_STATE(138)] = 2700,
  [SMALL_STATE(139)] = 2716,
  [SMALL_STATE(140)] = 2726,
  [SMALL_STATE(141)] = 2740,
  [SMALL_STATE(142)] = 2753,
  [SMALL_STATE(143)] = 2766,
  [SMALL_STATE(144)] = 2779,
  [SMALL_STATE(145)] = 2792,
  [SMALL_STATE(146)] = 2805,
  [SMALL_STATE(147)] = 2816,
  [SMALL_STATE(148)] = 2829,
  [SMALL_STATE(149)] = 2842,
  [SMALL_STATE(150)] = 2855,
  [SMALL_STATE(151)] = 2868,
  [SMALL_STATE(152)] = 2877,
  [SMALL_STATE(153)] = 2890,
  [SMALL_STATE(154)] = 2903,
  [SMALL_STATE(155)] = 2916,
  [SMALL_STATE(156)] = 2929,
  [SMALL_STATE(157)] = 2942,
  [SMALL_STATE(158)] = 2955,
  [SMALL_STATE(159)] = 2968,
  [SMALL_STATE(160)] = 2979,
  [SMALL_STATE(161)] = 2992,
  [SMALL_STATE(162)] = 3003,
  [SMALL_STATE(163)] = 3016,
  [SMALL_STATE(164)] = 3029,
  [SMALL_STATE(165)] = 3042,
  [SMALL_STATE(166)] = 3055,
  [SMALL_STATE(167)] = 3068,
  [SMALL_STATE(168)] = 3079,
  [SMALL_STATE(169)] = 3092,
  [SMALL_STATE(170)] = 3103,
  [SMALL_STATE(171)] = 3116,
  [SMALL_STATE(172)] = 3129,
  [SMALL_STATE(173)] = 3142,
  [SMALL_STATE(174)] = 3155,
  [SMALL_STATE(175)] = 3164,
  [SMALL_STATE(176)] = 3177,
  [SMALL_STATE(177)] = 3188,
  [SMALL_STATE(178)] = 3201,
  [SMALL_STATE(179)] = 3214,
  [SMALL_STATE(180)] = 3225,
  [SMALL_STATE(181)] = 3234,
  [SMALL_STATE(182)] = 3242,
  [SMALL_STATE(183)] = 3250,
  [SMALL_STATE(184)] = 3256,
  [SMALL_STATE(185)] = 3266,
  [SMALL_STATE(186)] = 3276,
  [SMALL_STATE(187)] = 3284,
  [SMALL_STATE(188)] = 3294,
  [SMALL_STATE(189)] = 3302,
  [SMALL_STATE(190)] = 3310,
  [SMALL_STATE(191)] = 3318,
  [SMALL_STATE(192)] = 3328,
  [SMALL_STATE(193)] = 3336,
  [SMALL_STATE(194)] = 3344,
  [SMALL_STATE(195)] = 3352,
  [SMALL_STATE(196)] = 3359,
  [SMALL_STATE(197)] = 3366,
  [SMALL_STATE(198)] = 3373,
  [SMALL_STATE(199)] = 3380,
  [SMALL_STATE(200)] = 3387,
  [SMALL_STATE(201)] = 3394,
  [SMALL_STATE(202)] = 3401,
  [SMALL_STATE(203)] = 3408,
  [SMALL_STATE(204)] = 3415,
  [SMALL_STATE(205)] = 3422,
  [SMALL_STATE(206)] = 3429,
  [SMALL_STATE(207)] = 3436,
  [SMALL_STATE(208)] = 3443,
  [SMALL_STATE(209)] = 3450,
  [SMALL_STATE(210)] = 3457,
  [SMALL_STATE(211)] = 3464,
  [SMALL_STATE(212)] = 3471,
  [SMALL_STATE(213)] = 3478,
  [SMALL_STATE(214)] = 3485,
  [SMALL_STATE(215)] = 3492,
  [SMALL_STATE(216)] = 3497,
  [SMALL_STATE(217)] = 3504,
  [SMALL_STATE(218)] = 3511,
  [SMALL_STATE(219)] = 3518,
  [SMALL_STATE(220)] = 3525,
  [SMALL_STATE(221)] = 3532,
  [SMALL_STATE(222)] = 3539,
  [SMALL_STATE(223)] = 3546,
  [SMALL_STATE(224)] = 3553,
  [SMALL_STATE(225)] = 3560,
  [SMALL_STATE(226)] = 3567,
  [SMALL_STATE(227)] = 3574,
  [SMALL_STATE(228)] = 3581,
  [SMALL_STATE(229)] = 3588,
  [SMALL_STATE(230)] = 3595,
  [SMALL_STATE(231)] = 3602,
  [SMALL_STATE(232)] = 3609,
  [SMALL_STATE(233)] = 3616,
  [SMALL_STATE(234)] = 3623,
  [SMALL_STATE(235)] = 3630,
  [SMALL_STATE(236)] = 3634,
  [SMALL_STATE(237)] = 3638,
  [SMALL_STATE(238)] = 3642,
  [SMALL_STATE(239)] = 3646,
  [SMALL_STATE(240)] = 3650,
  [SMALL_STATE(241)] = 3654,
  [SMALL_STATE(242)] = 3658,
  [SMALL_STATE(243)] = 3662,
  [SMALL_STATE(244)] = 3666,
  [SMALL_STATE(245)] = 3670,
  [SMALL_STATE(246)] = 3674,
  [SMALL_STATE(247)] = 3678,
  [SMALL_STATE(248)] = 3682,
  [SMALL_STATE(249)] = 3686,
  [SMALL_STATE(250)] = 3690,
  [SMALL_STATE(251)] = 3694,
  [SMALL_STATE(252)] = 3698,
  [SMALL_STATE(253)] = 3702,
  [SMALL_STATE(254)] = 3706,
  [SMALL_STATE(255)] = 3710,
  [SMALL_STATE(256)] = 3714,
  [SMALL_STATE(257)] = 3718,
  [SMALL_STATE(258)] = 3722,
  [SMALL_STATE(259)] = 3726,
  [SMALL_STATE(260)] = 3730,
  [SMALL_STATE(261)] = 3734,
  [SMALL_STATE(262)] = 3738,
  [SMALL_STATE(263)] = 3742,
  [SMALL_STATE(264)] = 3746,
  [SMALL_STATE(265)] = 3750,
  [SMALL_STATE(266)] = 3754,
  [SMALL_STATE(267)] = 3758,
  [SMALL_STATE(268)] = 3762,
  [SMALL_STATE(269)] = 3766,
  [SMALL_STATE(270)] = 3770,
  [SMALL_STATE(271)] = 3774,
  [SMALL_STATE(272)] = 3778,
  [SMALL_STATE(273)] = 3782,
  [SMALL_STATE(274)] = 3786,
  [SMALL_STATE(275)] = 3790,
  [SMALL_STATE(276)] = 3794,
  [SMALL_STATE(277)] = 3798,
  [SMALL_STATE(278)] = 3802,
  [SMALL_STATE(279)] = 3806,
  [SMALL_STATE(280)] = 3810,
  [SMALL_STATE(281)] = 3814,
  [SMALL_STATE(282)] = 3818,
  [SMALL_STATE(283)] = 3822,
  [SMALL_STATE(284)] = 3826,
  [SMALL_STATE(285)] = 3830,
  [SMALL_STATE(286)] = 3834,
  [SMALL_STATE(287)] = 3838,
  [SMALL_STATE(288)] = 3842,
  [SMALL_STATE(289)] = 3846,
  [SMALL_STATE(290)] = 3850,
  [SMALL_STATE(291)] = 3854,
  [SMALL_STATE(292)] = 3858,
  [SMALL_STATE(293)] = 3862,
  [SMALL_STATE(294)] = 3866,
  [SMALL_STATE(295)] = 3870,
  [SMALL_STATE(296)] = 3874,
  [SMALL_STATE(297)] = 3878,
  [SMALL_STATE(298)] = 3882,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_beancount_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(3),
  [7] = {.count = 1, .reusable = true}, SHIFT(239),
  [9] = {.count = 1, .reusable = true}, SHIFT(292),
  [11] = {.count = 1, .reusable = true}, SHIFT(291),
  [13] = {.count = 1, .reusable = true}, SHIFT(290),
  [15] = {.count = 1, .reusable = true}, SHIFT(287),
  [17] = {.count = 1, .reusable = true}, SHIFT(286),
  [19] = {.count = 1, .reusable = true}, SHIFT(285),
  [21] = {.count = 1, .reusable = true}, SHIFT(201),
  [23] = {.count = 1, .reusable = true}, SHIFT(283),
  [25] = {.count = 1, .reusable = true}, SHIFT(80),
  [27] = {.count = 1, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2),
  [29] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(2),
  [32] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(239),
  [35] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(292),
  [38] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(291),
  [41] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(290),
  [44] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(287),
  [47] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(286),
  [50] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(285),
  [53] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(201),
  [56] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(283),
  [59] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(80),
  [62] = {.count = 1, .reusable = true}, REDUCE(sym_beancount_file, 1),
  [64] = {.count = 1, .reusable = true}, SHIFT(2),
  [66] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 2, .production_id = 10),
  [68] = {.count = 1, .reusable = true}, SHIFT(154),
  [70] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 2, .production_id = 10), SHIFT(198),
  [73] = {.count = 1, .reusable = false}, SHIFT(9),
  [75] = {.count = 1, .reusable = true}, SHIFT(10),
  [77] = {.count = 1, .reusable = true}, SHIFT(55),
  [79] = {.count = 1, .reusable = false}, SHIFT(55),
  [81] = {.count = 1, .reusable = true}, SHIFT(92),
  [83] = {.count = 1, .reusable = true}, SHIFT(97),
  [85] = {.count = 1, .reusable = true}, SHIFT(108),
  [87] = {.count = 1, .reusable = true}, SHIFT(76),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 3, .production_id = 24),
  [91] = {.count = 1, .reusable = true}, SHIFT(178),
  [93] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 3, .production_id = 24), SHIFT(198),
  [96] = {.count = 1, .reusable = false}, SHIFT(36),
  [98] = {.count = 1, .reusable = true}, SHIFT(198),
  [100] = {.count = 1, .reusable = true}, SHIFT(95),
  [102] = {.count = 1, .reusable = true}, SHIFT(104),
  [104] = {.count = 1, .reusable = false}, SHIFT(12),
  [106] = {.count = 1, .reusable = true}, SHIFT(12),
  [108] = {.count = 1, .reusable = false}, SHIFT(25),
  [110] = {.count = 1, .reusable = false}, SHIFT(27),
  [112] = {.count = 1, .reusable = false}, SHIFT(6),
  [114] = {.count = 1, .reusable = true}, SHIFT(6),
  [116] = {.count = 1, .reusable = false}, REDUCE(sym_key_value, 1),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym_key_value, 1),
  [120] = {.count = 1, .reusable = false}, SHIFT(203),
  [122] = {.count = 1, .reusable = true}, SHIFT(203),
  [124] = {.count = 1, .reusable = false}, SHIFT(112),
  [126] = {.count = 1, .reusable = true}, SHIFT(121),
  [128] = {.count = 1, .reusable = true}, SHIFT(181),
  [130] = {.count = 1, .reusable = true}, SHIFT(87),
  [132] = {.count = 1, .reusable = true}, SHIFT(96),
  [134] = {.count = 1, .reusable = true}, SHIFT(98),
  [136] = {.count = 1, .reusable = true}, SHIFT(194),
  [138] = {.count = 1, .reusable = false}, SHIFT(88),
  [140] = {.count = 1, .reusable = false}, SHIFT(275),
  [142] = {.count = 1, .reusable = true}, SHIFT(275),
  [144] = {.count = 1, .reusable = false}, SHIFT(115),
  [146] = {.count = 1, .reusable = false}, REDUCE(aux_sym_custom_repeat1, 2),
  [148] = {.count = 1, .reusable = true}, REDUCE(aux_sym_custom_repeat1, 2),
  [150] = {.count = 2, .reusable = true}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(95),
  [153] = {.count = 2, .reusable = true}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(104),
  [156] = {.count = 2, .reusable = false}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(12),
  [159] = {.count = 2, .reusable = true}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(12),
  [162] = {.count = 2, .reusable = false}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(25),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_custom, 6, .production_id = 33),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_document, 5, .production_id = 16),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_commodity, 5, .production_id = 14),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_transaction, 7, .production_id = 79),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym__skipped_lines, 2),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_close, 5, .production_id = 13),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_open, 7, .production_id = 61),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_document, 7, .production_id = 60),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_transaction, 6, .production_id = 59),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_transaction, 6, .production_id = 58),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_transaction, 6, .production_id = 57),
  [187] = {.count = 1, .reusable = false}, REDUCE(aux_sym_custom_repeat1, 1),
  [189] = {.count = 1, .reusable = true}, REDUCE(aux_sym_custom_repeat1, 1),
  [191] = {.count = 1, .reusable = true}, SHIFT(103),
  [193] = {.count = 1, .reusable = true}, SHIFT(91),
  [195] = {.count = 1, .reusable = false}, SHIFT(84),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_transaction, 4, .production_id = 11),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_custom, 4, .production_id = 9),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_query, 6, .production_id = 43),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_price, 6, .production_id = 42),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_pad, 6, .production_id = 41),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_open, 6, .production_id = 40),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_open, 6, .production_id = 39),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_open, 6, .production_id = 38),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_note, 6, .production_id = 37),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_event, 6, .production_id = 36),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_custom, 5, .production_id = 9),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym__skipped_lines, 3),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_include, 3),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym_document, 6, .production_id = 35),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_plugin, 3, .production_id = 1),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_document, 6, .production_id = 34),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_pushtag, 3, .production_id = 2),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_poptag, 3, .production_id = 2),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_commodity, 4, .production_id = 8),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_balance, 6, .production_id = 32),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_transaction, 5, .production_id = 31),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_transaction, 5, .production_id = 30),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_pushmeta, 3, .production_id = 3),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_popmeta, 3, .production_id = 4),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_custom, 5, .production_id = 15),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_transaction, 5, .production_id = 29),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_balance, 5, .production_id = 12),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_close, 4, .production_id = 7),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_open, 4, .production_id = 7),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym_price_annotation, 1),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_price_annotation, 1),
  [259] = {.count = 1, .reusable = false}, REDUCE(sym_binary_num_expr, 3),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_binary_num_expr, 3),
  [263] = {.count = 1, .reusable = false}, REDUCE(sym__paren_num_expr, 3),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym__paren_num_expr, 3),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_plugin, 4, .production_id = 6),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_query, 5, .production_id = 23),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_price, 5, .production_id = 22),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_pad, 5, .production_id = 21),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_open, 5, .production_id = 20),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_open, 5, .production_id = 13),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_open, 5, .production_id = 19),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_option, 4, .production_id = 5),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_note, 5, .production_id = 18),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_event, 5, .production_id = 17),
  [287] = {.count = 1, .reusable = false}, REDUCE(sym_unary_num_expr, 2),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_unary_num_expr, 2),
  [291] = {.count = 1, .reusable = true}, SHIFT(90),
  [293] = {.count = 1, .reusable = true}, SHIFT(107),
  [295] = {.count = 1, .reusable = false}, REDUCE(sym_incomplete_amount, 1),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_incomplete_amount, 1),
  [299] = {.count = 1, .reusable = true}, SHIFT(105),
  [301] = {.count = 1, .reusable = true}, SHIFT(109),
  [303] = {.count = 1, .reusable = true}, SHIFT(111),
  [305] = {.count = 1, .reusable = true}, SHIFT(135),
  [307] = {.count = 1, .reusable = true}, SHIFT(174),
  [309] = {.count = 1, .reusable = true}, SHIFT(263),
  [311] = {.count = 1, .reusable = true}, SHIFT(245),
  [313] = {.count = 1, .reusable = true}, SHIFT(293),
  [315] = {.count = 1, .reusable = true}, SHIFT(272),
  [317] = {.count = 1, .reusable = true}, SHIFT(258),
  [319] = {.count = 1, .reusable = true}, SHIFT(259),
  [321] = {.count = 1, .reusable = true}, SHIFT(236),
  [323] = {.count = 1, .reusable = true}, SHIFT(262),
  [325] = {.count = 1, .reusable = true}, SHIFT(279),
  [327] = {.count = 1, .reusable = true}, SHIFT(281),
  [329] = {.count = 1, .reusable = true}, SHIFT(282),
  [331] = {.count = 1, .reusable = true}, SHIFT(78),
  [333] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 3, .production_id = 27),
  [335] = {.count = 1, .reusable = true}, SHIFT(166),
  [337] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 3, .production_id = 27), SHIFT(198),
  [340] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 46),
  [342] = {.count = 1, .reusable = true}, SHIFT(153),
  [344] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 46), SHIFT(198),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym_amount, 2),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_amount, 2),
  [351] = {.count = 1, .reusable = true}, SHIFT(114),
  [353] = {.count = 1, .reusable = true}, SHIFT(129),
  [355] = {.count = 1, .reusable = true}, SHIFT(193),
  [357] = {.count = 1, .reusable = true}, SHIFT(117),
  [359] = {.count = 1, .reusable = false}, REDUCE(sym_compound_amount, 1, .production_id = 50),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_compound_amount, 1, .production_id = 50),
  [363] = {.count = 1, .reusable = true}, SHIFT(89),
  [365] = {.count = 1, .reusable = true}, SHIFT(94),
  [367] = {.count = 1, .reusable = true}, SHIFT(192),
  [369] = {.count = 1, .reusable = true}, SHIFT(188),
  [371] = {.count = 1, .reusable = true}, SHIFT(134),
  [373] = {.count = 1, .reusable = true}, SHIFT(72),
  [375] = {.count = 1, .reusable = true}, SHIFT(56),
  [377] = {.count = 1, .reusable = true}, SHIFT(122),
  [379] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 45),
  [381] = {.count = 1, .reusable = true}, SHIFT(157),
  [383] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 45), SHIFT(198),
  [386] = {.count = 1, .reusable = true}, SHIFT(74),
  [388] = {.count = 1, .reusable = true}, SHIFT(123),
  [390] = {.count = 1, .reusable = true}, SHIFT(131),
  [392] = {.count = 1, .reusable = true}, SHIFT(71),
  [394] = {.count = 1, .reusable = true}, SHIFT(70),
  [396] = {.count = 1, .reusable = false}, SHIFT(15),
  [398] = {.count = 1, .reusable = true}, SHIFT(161),
  [400] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 54),
  [402] = {.count = 1, .reusable = true}, SHIFT(144),
  [404] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 54), SHIFT(198),
  [407] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 3, .production_id = 26),
  [409] = {.count = 1, .reusable = true}, SHIFT(170),
  [411] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 3, .production_id = 26), SHIFT(198),
  [414] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 66),
  [416] = {.count = 1, .reusable = true}, SHIFT(175),
  [418] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 66), SHIFT(198),
  [421] = {.count = 1, .reusable = true}, SHIFT(58),
  [423] = {.count = 1, .reusable = true}, SHIFT(69),
  [425] = {.count = 1, .reusable = true}, SHIFT(75),
  [427] = {.count = 1, .reusable = true}, SHIFT(124),
  [429] = {.count = 1, .reusable = true}, SHIFT(79),
  [431] = {.count = 1, .reusable = false}, REDUCE(sym_incomplete_amount, 2),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym_incomplete_amount, 2),
  [435] = {.count = 1, .reusable = false}, SHIFT(54),
  [437] = {.count = 1, .reusable = true}, SHIFT(141),
  [439] = {.count = 1, .reusable = true}, SHIFT(137),
  [441] = {.count = 1, .reusable = true}, SHIFT(199),
  [443] = {.count = 1, .reusable = true}, SHIFT(8),
  [445] = {.count = 1, .reusable = true}, SHIFT(151),
  [447] = {.count = 1, .reusable = false}, SHIFT(289),
  [449] = {.count = 1, .reusable = true}, SHIFT(4),
  [451] = {.count = 1, .reusable = false}, REDUCE(sym__key_value_value, 1),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym__key_value_value, 1),
  [455] = {.count = 1, .reusable = true}, SHIFT(84),
  [457] = {.count = 1, .reusable = true}, SHIFT(119),
  [459] = {.count = 1, .reusable = true}, SHIFT(106),
  [461] = {.count = 1, .reusable = true}, SHIFT(298),
  [463] = {.count = 1, .reusable = true}, SHIFT(190),
  [465] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 55),
  [467] = {.count = 1, .reusable = true}, SHIFT(148),
  [469] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 55), SHIFT(198),
  [472] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 47),
  [474] = {.count = 1, .reusable = true}, SHIFT(143),
  [476] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 47), SHIFT(198),
  [479] = {.count = 1, .reusable = false}, REDUCE(sym_cost_spec, 2),
  [481] = {.count = 1, .reusable = true}, REDUCE(sym_cost_spec, 2),
  [483] = {.count = 1, .reusable = true}, SHIFT(73),
  [485] = {.count = 1, .reusable = true}, SHIFT(57),
  [487] = {.count = 1, .reusable = true}, SHIFT(218),
  [489] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 52),
  [491] = {.count = 1, .reusable = true}, SHIFT(160),
  [493] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 52), SHIFT(198),
  [496] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 3, .production_id = 28),
  [498] = {.count = 1, .reusable = true}, SHIFT(147),
  [500] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 3, .production_id = 28), SHIFT(198),
  [503] = {.count = 1, .reusable = false}, REDUCE(aux_sym_tags_and_links_repeat1, 2),
  [505] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tags_and_links_repeat1, 2), SHIFT_REPEAT(215),
  [508] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tags_and_links_repeat1, 2), SHIFT_REPEAT(127),
  [511] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 6, .production_id = 84),
  [513] = {.count = 1, .reusable = true}, SHIFT(163),
  [515] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 6, .production_id = 84), SHIFT(198),
  [518] = {.count = 1, .reusable = false}, REDUCE(aux_sym_currency_list_repeat1, 2),
  [520] = {.count = 1, .reusable = true}, REDUCE(aux_sym_currency_list_repeat1, 2),
  [522] = {.count = 2, .reusable = true}, REDUCE(aux_sym_currency_list_repeat1, 2), SHIFT_REPEAT(238),
  [525] = {.count = 1, .reusable = true}, SHIFT(77),
  [527] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 64),
  [529] = {.count = 1, .reusable = true}, SHIFT(150),
  [531] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 64), SHIFT(198),
  [534] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 67),
  [536] = {.count = 1, .reusable = true}, SHIFT(162),
  [538] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 67), SHIFT(198),
  [541] = {.count = 1, .reusable = true}, SHIFT(186),
  [543] = {.count = 1, .reusable = false}, REDUCE(sym_tags_and_links, 1),
  [545] = {.count = 2, .reusable = true}, REDUCE(sym_tags_and_links, 1), SHIFT(215),
  [548] = {.count = 1, .reusable = true}, SHIFT(127),
  [550] = {.count = 1, .reusable = false}, SHIFT(63),
  [552] = {.count = 1, .reusable = true}, SHIFT(145),
  [554] = {.count = 1, .reusable = false}, REDUCE(sym_currency_list, 1),
  [556] = {.count = 1, .reusable = true}, REDUCE(sym_currency_list, 1),
  [558] = {.count = 1, .reusable = true}, SHIFT(238),
  [560] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 76),
  [562] = {.count = 1, .reusable = true}, SHIFT(177),
  [564] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 76), SHIFT(198),
  [567] = {.count = 1, .reusable = false}, REDUCE(sym_cost_spec, 3, .production_id = 70),
  [569] = {.count = 1, .reusable = true}, REDUCE(sym_cost_spec, 3, .production_id = 70),
  [571] = {.count = 1, .reusable = false}, REDUCE(sym_currency_list, 2),
  [573] = {.count = 1, .reusable = true}, REDUCE(sym_currency_list, 2),
  [575] = {.count = 1, .reusable = false}, SHIFT(65),
  [577] = {.count = 1, .reusable = false}, SHIFT(62),
  [579] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 47),
  [581] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 47), SHIFT(198),
  [584] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 54),
  [586] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 54), SHIFT(198),
  [589] = {.count = 1, .reusable = false}, SHIFT(32),
  [591] = {.count = 1, .reusable = false}, REDUCE(sym_postings, 1),
  [593] = {.count = 1, .reusable = true}, SHIFT(184),
  [595] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 28),
  [597] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 28), SHIFT(198),
  [600] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 55),
  [602] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 55), SHIFT(198),
  [605] = {.count = 1, .reusable = false}, SHIFT(39),
  [607] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 6, .production_id = 64),
  [609] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 6, .production_id = 64), SHIFT(198),
  [612] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tags_and_links_repeat1, 2),
  [614] = {.count = 1, .reusable = false}, SHIFT(52),
  [616] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 46),
  [618] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 46), SHIFT(198),
  [621] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 3, .production_id = 10),
  [623] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 3, .production_id = 10), SHIFT(198),
  [626] = {.count = 1, .reusable = false}, REDUCE(sym_cost_comp_list, 2),
  [628] = {.count = 1, .reusable = true}, REDUCE(sym_cost_comp_list, 2),
  [630] = {.count = 1, .reusable = true}, SHIFT(13),
  [632] = {.count = 1, .reusable = false}, SHIFT(60),
  [634] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 45),
  [636] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 45), SHIFT(198),
  [639] = {.count = 1, .reusable = false}, SHIFT(53),
  [641] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 52),
  [643] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 52), SHIFT(198),
  [646] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 6, .production_id = 67),
  [648] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 6, .production_id = 67), SHIFT(198),
  [651] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 7, .production_id = 84),
  [653] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 7, .production_id = 84), SHIFT(198),
  [656] = {.count = 1, .reusable = false}, SHIFT(44),
  [658] = {.count = 1, .reusable = false}, SHIFT(67),
  [660] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 27),
  [662] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 27), SHIFT(198),
  [665] = {.count = 1, .reusable = false}, REDUCE(aux_sym_postings_repeat1, 2),
  [667] = {.count = 2, .reusable = true}, REDUCE(aux_sym_postings_repeat1, 2), SHIFT_REPEAT(184),
  [670] = {.count = 1, .reusable = false}, SHIFT(61),
  [672] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 26),
  [674] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 26), SHIFT(198),
  [677] = {.count = 1, .reusable = false}, REDUCE(sym_cost_comp_list, 1),
  [679] = {.count = 1, .reusable = true}, REDUCE(sym_cost_comp_list, 1),
  [681] = {.count = 1, .reusable = false}, REDUCE(aux_sym_cost_comp_list_repeat1, 2),
  [683] = {.count = 1, .reusable = true}, REDUCE(aux_sym_cost_comp_list_repeat1, 2),
  [685] = {.count = 2, .reusable = true}, REDUCE(aux_sym_cost_comp_list_repeat1, 2), SHIFT_REPEAT(13),
  [688] = {.count = 1, .reusable = false}, SHIFT(68),
  [690] = {.count = 1, .reusable = true}, REDUCE(sym_txn_strings, 1),
  [692] = {.count = 1, .reusable = true}, SHIFT(183),
  [694] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 6, .production_id = 66),
  [696] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 6, .production_id = 66), SHIFT(198),
  [699] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 6, .production_id = 76),
  [701] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 6, .production_id = 76), SHIFT(198),
  [704] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 24),
  [706] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 24), SHIFT(198),
  [709] = {.count = 1, .reusable = false}, REDUCE(sym_cost_comp, 1),
  [711] = {.count = 1, .reusable = true}, REDUCE(sym_cost_comp, 1),
  [713] = {.count = 1, .reusable = false}, REDUCE(sym_price_annotation, 2),
  [715] = {.count = 1, .reusable = true}, REDUCE(sym_price_annotation, 2),
  [717] = {.count = 1, .reusable = true}, REDUCE(sym_txn_strings, 2),
  [719] = {.count = 1, .reusable = false}, REDUCE(sym_metadata, 1),
  [721] = {.count = 1, .reusable = false}, REDUCE(sym_compound_amount, 4, .production_id = 97),
  [723] = {.count = 1, .reusable = true}, REDUCE(sym_compound_amount, 4, .production_id = 97),
  [725] = {.count = 1, .reusable = false}, REDUCE(aux_sym_metadata_repeat1, 2),
  [727] = {.count = 2, .reusable = true}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(198),
  [730] = {.count = 1, .reusable = false}, REDUCE(sym_compound_amount, 3, .production_id = 88),
  [732] = {.count = 1, .reusable = true}, REDUCE(sym_compound_amount, 3, .production_id = 88),
  [734] = {.count = 1, .reusable = false}, REDUCE(sym_compound_amount, 3, .production_id = 87),
  [736] = {.count = 1, .reusable = true}, REDUCE(sym_compound_amount, 3, .production_id = 87),
  [738] = {.count = 2, .reusable = true}, REDUCE(sym_metadata, 1), SHIFT(198),
  [741] = {.count = 1, .reusable = false}, REDUCE(sym_compound_amount, 2, .production_id = 71),
  [743] = {.count = 1, .reusable = true}, REDUCE(sym_compound_amount, 2, .production_id = 71),
  [745] = {.count = 1, .reusable = false}, REDUCE(sym_compound_amount, 2, .production_id = 69),
  [747] = {.count = 1, .reusable = true}, REDUCE(sym_compound_amount, 2, .production_id = 69),
  [749] = {.count = 1, .reusable = false}, REDUCE(sym_compound_amount, 1, .production_id = 49),
  [751] = {.count = 1, .reusable = true}, REDUCE(sym_compound_amount, 1, .production_id = 49),
  [753] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 7, .production_id = 94),
  [755] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 7, .production_id = 94),
  [757] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 7, .production_id = 96),
  [759] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 7, .production_id = 96),
  [761] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 48),
  [763] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 48),
  [765] = {.count = 1, .reusable = true}, REDUCE(aux_sym_postings_repeat1, 2),
  [767] = {.count = 1, .reusable = true}, REDUCE(aux_sym_metadata_repeat1, 2),
  [769] = {.count = 1, .reusable = true}, SHIFT(11),
  [771] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 77),
  [773] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 77),
  [775] = {.count = 1, .reusable = false}, REDUCE(sym_key_value, 2),
  [777] = {.count = 1, .reusable = true}, REDUCE(sym_key_value, 2),
  [779] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 8, .production_id = 99),
  [781] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 8, .production_id = 99),
  [783] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 51),
  [785] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 51),
  [787] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 7, .production_id = 98),
  [789] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 7, .production_id = 98),
  [791] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 7, .production_id = 95),
  [793] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 7, .production_id = 95),
  [795] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 53),
  [797] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 53),
  [799] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 7, .production_id = 93),
  [801] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 7, .production_id = 93),
  [803] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 6, .production_id = 92),
  [805] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 6, .production_id = 92),
  [807] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 6, .production_id = 91),
  [809] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 6, .production_id = 91),
  [811] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 56),
  [813] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 56),
  [815] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 6, .production_id = 90),
  [817] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 6, .production_id = 90),
  [819] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 6, .production_id = 89),
  [821] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 6, .production_id = 89),
  [823] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 6, .production_id = 86),
  [825] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 6, .production_id = 86),
  [827] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 6, .production_id = 85),
  [829] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 6, .production_id = 85),
  [831] = {.count = 1, .reusable = false}, REDUCE(sym_amount_with_tolerance, 4),
  [833] = {.count = 1, .reusable = true}, REDUCE(sym_amount_with_tolerance, 4),
  [835] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 6, .production_id = 83),
  [837] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 6, .production_id = 83),
  [839] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 6, .production_id = 82),
  [841] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 6, .production_id = 82),
  [843] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 62),
  [845] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 62),
  [847] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 3, .production_id = 25),
  [849] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 3, .production_id = 25),
  [851] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 63),
  [853] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 63),
  [855] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 6, .production_id = 81),
  [857] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 6, .production_id = 81),
  [859] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 6, .production_id = 80),
  [861] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 6, .production_id = 80),
  [863] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 65),
  [865] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 65),
  [867] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 78),
  [869] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 78),
  [871] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 44),
  [873] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 44),
  [875] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 75),
  [877] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 75),
  [879] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 68),
  [881] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 68),
  [883] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 74),
  [885] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 74),
  [887] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 73),
  [889] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 73),
  [891] = {.count = 1, .reusable = true}, SHIFT(40),
  [893] = {.count = 1, .reusable = true}, SHIFT(284),
  [895] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 72),
  [897] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 72),
  [899] = {.count = 1, .reusable = true}, SHIFT(156),
  [901] = {.count = 1, .reusable = true}, SHIFT(250),
  [903] = {.count = 1, .reusable = true}, SHIFT(26),
  [905] = {.count = 1, .reusable = true}, SHIFT(180),
  [907] = {.count = 1, .reusable = true}, SHIFT(276),
  [909] = {.count = 1, .reusable = true}, SHIFT(30),
  [911] = {.count = 1, .reusable = true}, SHIFT(266),
  [913] = {.count = 1, .reusable = true}, SHIFT(29),
  [915] = {.count = 1, .reusable = true}, SHIFT(28),
  [917] = {.count = 1, .reusable = true}, SHIFT(24),
  [919] = {.count = 1, .reusable = true}, SHIFT(158),
  [921] = {.count = 1, .reusable = true}, SHIFT(34),
  [923] = {.count = 1, .reusable = true}, SHIFT(99),
  [925] = {.count = 1, .reusable = true}, SHIFT(142),
  [927] = {.count = 1, .reusable = true}, SHIFT(35),
  [929] = {.count = 1, .reusable = true}, SHIFT(165),
  [931] = {.count = 1, .reusable = true}, SHIFT(42),
  [933] = {.count = 1, .reusable = true}, SHIFT(41),
  [935] = {.count = 1, .reusable = true}, SHIFT(43),
  [937] = {.count = 1, .reusable = true}, SHIFT(14),
  [939] = {.count = 1, .reusable = true}, SHIFT(45),
  [941] = {.count = 1, .reusable = true}, SHIFT(48),
  [943] = {.count = 1, .reusable = true}, SHIFT(17),
  [945] = {.count = 1, .reusable = true}, SHIFT(247),
  [947] = {.count = 1, .reusable = true}, SHIFT(264),
  [949] = {.count = 1, .reusable = true}, SHIFT(49),
  [951] = {.count = 1, .reusable = true}, SHIFT(21),
  [953] = {.count = 1, .reusable = true}, SHIFT(110),
  [955] = {.count = 1, .reusable = true}, SHIFT(85),
  [957] = {.count = 1, .reusable = true}, SHIFT(173),
  [959] = {.count = 1, .reusable = true}, SHIFT(64),
  [961] = {.count = 1, .reusable = true}, SHIFT(66),
  [963] = {.count = 1, .reusable = true}, SHIFT(33),
  [965] = {.count = 1, .reusable = true}, SHIFT(31),
  [967] = {.count = 1, .reusable = true}, SHIFT(38),
  [969] = {.count = 1, .reusable = true}, SHIFT(47),
  [971] = {.count = 1, .reusable = true}, SHIFT(23),
  [973] = {.count = 1, .reusable = true}, SHIFT(7),
  [975] = {.count = 1, .reusable = true}, SHIFT(20),
  [977] = {.count = 1, .reusable = true}, SHIFT(22),
  [979] = {.count = 1, .reusable = true}, SHIFT(37),
  [981] = {.count = 1, .reusable = true}, SHIFT(139),
  [983] = {.count = 1, .reusable = true}, SHIFT(51),
  [985] = {.count = 1, .reusable = true}, SHIFT(248),
  [987] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [989] = {.count = 1, .reusable = true}, SHIFT(86),
  [991] = {.count = 1, .reusable = true}, SHIFT(235),
  [993] = {.count = 1, .reusable = true}, SHIFT(260),
  [995] = {.count = 1, .reusable = true}, SHIFT(59),
  [997] = {.count = 1, .reusable = true}, SHIFT(253),
  [999] = {.count = 1, .reusable = true}, SHIFT(251),
  [1001] = {.count = 1, .reusable = true}, SHIFT(233),
  [1003] = {.count = 1, .reusable = true}, SHIFT(5),
  [1005] = {.count = 1, .reusable = true}, SHIFT(241),
  [1007] = {.count = 1, .reusable = true}, SHIFT(269),
  [1009] = {.count = 1, .reusable = true}, SHIFT(18),
  [1011] = {.count = 1, .reusable = true}, SHIFT(164),
  [1013] = {.count = 1, .reusable = true}, SHIFT(46),
  [1015] = {.count = 1, .reusable = true}, SHIFT(50),
  [1017] = {.count = 1, .reusable = true}, SHIFT(16),
  [1019] = {.count = 1, .reusable = true}, SHIFT(19),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_beancount(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
