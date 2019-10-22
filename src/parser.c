#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 265
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 100
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 20
#define MAX_ALIAS_SEQUENCE_LENGTH 7

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
  sym__tag_or_link = 92,
  aux_sym_beancount_file_repeat1 = 93,
  aux_sym_metadata_repeat1 = 94,
  aux_sym_cost_comp_list_repeat1 = 95,
  aux_sym_postings_repeat1 = 96,
  aux_sym_tags_and_links_repeat1 = 97,
  aux_sym_custom_repeat1 = 98,
  aux_sym_currency_list_repeat1 = 99,
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
  [sym__tag_or_link] = "_tag_or_link",
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
  [sym__tag_or_link] = sym__tag_or_link,
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
  [sym__tag_or_link] = {
    .visible = false,
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
  field_cost_spec = 4,
  field_currencies = 5,
  field_currency = 6,
  field_date = 7,
  field_description = 8,
  field_filename = 9,
  field_flag = 10,
  field_from_account = 11,
  field_metadata = 12,
  field_name = 13,
  field_note = 14,
  field_postings = 15,
  field_price_annotation = 16,
  field_query = 17,
  field_tags_and_links = 18,
  field_txn_strings = 19,
  field_type = 20,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_account] = "account",
  [field_amount] = "amount",
  [field_booking] = "booking",
  [field_cost_spec] = "cost_spec",
  [field_currencies] = "currencies",
  [field_currency] = "currency",
  [field_date] = "date",
  [field_description] = "description",
  [field_filename] = "filename",
  [field_flag] = "flag",
  [field_from_account] = "from_account",
  [field_metadata] = "metadata",
  [field_name] = "name",
  [field_note] = "note",
  [field_postings] = "postings",
  [field_price_annotation] = "price_annotation",
  [field_query] = "query",
  [field_tags_and_links] = "tags_and_links",
  [field_txn_strings] = "txn_strings",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[70] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 3},
  [6] = {.index = 10, .length = 3},
  [7] = {.index = 13, .length = 3},
  [8] = {.index = 16, .length = 3},
  [9] = {.index = 19, .length = 3},
  [10] = {.index = 22, .length = 3},
  [11] = {.index = 25, .length = 3},
  [12] = {.index = 28, .length = 3},
  [13] = {.index = 31, .length = 3},
  [14] = {.index = 34, .length = 3},
  [15] = {.index = 37, .length = 3},
  [16] = {.index = 40, .length = 3},
  [17] = {.index = 43, .length = 3},
  [18] = {.index = 46, .length = 2},
  [19] = {.index = 48, .length = 2},
  [20] = {.index = 50, .length = 2},
  [21] = {.index = 52, .length = 2},
  [22] = {.index = 54, .length = 2},
  [23] = {.index = 56, .length = 4},
  [24] = {.index = 60, .length = 4},
  [25] = {.index = 64, .length = 4},
  [26] = {.index = 68, .length = 4},
  [27] = {.index = 72, .length = 3},
  [28] = {.index = 75, .length = 4},
  [29] = {.index = 79, .length = 4},
  [30] = {.index = 83, .length = 4},
  [31] = {.index = 87, .length = 4},
  [32] = {.index = 91, .length = 4},
  [33] = {.index = 95, .length = 4},
  [34] = {.index = 99, .length = 4},
  [35] = {.index = 103, .length = 4},
  [36] = {.index = 107, .length = 4},
  [37] = {.index = 111, .length = 4},
  [38] = {.index = 115, .length = 3},
  [39] = {.index = 118, .length = 3},
  [40] = {.index = 121, .length = 3},
  [41] = {.index = 124, .length = 3},
  [42] = {.index = 127, .length = 3},
  [43] = {.index = 130, .length = 3},
  [44] = {.index = 133, .length = 3},
  [45] = {.index = 136, .length = 3},
  [46] = {.index = 139, .length = 3},
  [47] = {.index = 142, .length = 3},
  [48] = {.index = 145, .length = 5},
  [49] = {.index = 150, .length = 5},
  [50] = {.index = 155, .length = 5},
  [51] = {.index = 160, .length = 5},
  [52] = {.index = 165, .length = 5},
  [53] = {.index = 170, .length = 4},
  [54] = {.index = 174, .length = 4},
  [55] = {.index = 178, .length = 4},
  [56] = {.index = 182, .length = 4},
  [57] = {.index = 186, .length = 4},
  [58] = {.index = 190, .length = 4},
  [59] = {.index = 194, .length = 4},
  [60] = {.index = 198, .length = 4},
  [61] = {.index = 202, .length = 4},
  [62] = {.index = 206, .length = 4},
  [63] = {.index = 210, .length = 6},
  [64] = {.index = 216, .length = 5},
  [65] = {.index = 221, .length = 5},
  [66] = {.index = 226, .length = 5},
  [67] = {.index = 231, .length = 5},
  [68] = {.index = 236, .length = 5},
  [69] = {.index = 241, .length = 6},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_account, 2},
    {field_date, 0},
  [2] =
    {field_currency, 2},
    {field_date, 0},
  [4] =
    {field_date, 0},
    {field_name, 2},
  [6] =
    {field_account, 1},
  [7] =
    {field_date, 0},
    {field_flag, 1},
    {field_postings, 2},
  [10] =
    {field_account, 2},
    {field_amount, 3},
    {field_date, 0},
  [13] =
    {field_account, 2},
    {field_date, 0},
    {field_metadata, 3},
  [16] =
    {field_currency, 2},
    {field_date, 0},
    {field_metadata, 3},
  [19] =
    {field_date, 0},
    {field_metadata, 3},
    {field_name, 2},
  [22] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
  [25] =
    {field_date, 0},
    {field_description, 3},
    {field_type, 2},
  [28] =
    {field_account, 2},
    {field_date, 0},
    {field_note, 3},
  [31] =
    {field_account, 2},
    {field_booking, 3},
    {field_date, 0},
  [34] =
    {field_account, 2},
    {field_currencies, 3},
    {field_date, 0},
  [37] =
    {field_account, 2},
    {field_date, 0},
    {field_from_account, 3},
  [40] =
    {field_amount, 3},
    {field_currency, 2},
    {field_date, 0},
  [43] =
    {field_date, 0},
    {field_name, 2},
    {field_query, 3},
  [46] =
    {field_account, 2},
    {field_flag, 1},
  [48] =
    {field_account, 1},
    {field_metadata, 2},
  [50] =
    {field_account, 1},
    {field_cost_spec, 2},
  [52] =
    {field_account, 1},
    {field_amount, 2},
  [54] =
    {field_account, 1},
    {field_price_annotation, 2},
  [56] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 2},
    {field_postings, 3},
  [60] =
    {field_date, 0},
    {field_flag, 1},
    {field_postings, 3},
    {field_tags_and_links, 2},
  [64] =
    {field_date, 0},
    {field_flag, 1},
    {field_postings, 3},
    {field_txn_strings, 2},
  [68] =
    {field_account, 2},
    {field_amount, 3},
    {field_date, 0},
    {field_metadata, 4},
  [72] =
    {field_date, 0},
    {field_metadata, 4},
    {field_name, 2},
  [75] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
    {field_metadata, 4},
  [79] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
    {field_tags_and_links, 4},
  [83] =
    {field_date, 0},
    {field_description, 3},
    {field_metadata, 4},
    {field_type, 2},
  [87] =
    {field_account, 2},
    {field_date, 0},
    {field_metadata, 4},
    {field_note, 3},
  [91] =
    {field_account, 2},
    {field_booking, 3},
    {field_date, 0},
    {field_metadata, 4},
  [95] =
    {field_account, 2},
    {field_booking, 4},
    {field_currencies, 3},
    {field_date, 0},
  [99] =
    {field_account, 2},
    {field_currencies, 3},
    {field_date, 0},
    {field_metadata, 4},
  [103] =
    {field_account, 2},
    {field_date, 0},
    {field_from_account, 3},
    {field_metadata, 4},
  [107] =
    {field_amount, 3},
    {field_currency, 2},
    {field_date, 0},
    {field_metadata, 4},
  [111] =
    {field_date, 0},
    {field_metadata, 4},
    {field_name, 2},
    {field_query, 3},
  [115] =
    {field_account, 2},
    {field_flag, 1},
    {field_metadata, 3},
  [118] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
  [121] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
  [124] =
    {field_account, 2},
    {field_flag, 1},
    {field_price_annotation, 3},
  [127] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_metadata, 3},
  [130] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_price_annotation, 3},
  [133] =
    {field_account, 1},
    {field_amount, 2},
    {field_metadata, 3},
  [136] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
  [139] =
    {field_account, 1},
    {field_amount, 2},
    {field_price_annotation, 3},
  [142] =
    {field_account, 1},
    {field_metadata, 3},
    {field_price_annotation, 2},
  [145] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 3},
    {field_postings, 4},
    {field_tags_and_links, 2},
  [150] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 3},
    {field_postings, 4},
    {field_txn_strings, 2},
  [155] =
    {field_date, 0},
    {field_flag, 1},
    {field_postings, 4},
    {field_tags_and_links, 3},
    {field_txn_strings, 2},
  [160] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
    {field_metadata, 5},
    {field_tags_and_links, 4},
  [165] =
    {field_account, 2},
    {field_booking, 4},
    {field_currencies, 3},
    {field_date, 0},
    {field_metadata, 5},
  [170] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
    {field_metadata, 4},
  [174] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
    {field_price_annotation, 4},
  [178] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
    {field_metadata, 4},
  [182] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
  [186] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
    {field_price_annotation, 4},
  [190] =
    {field_account, 2},
    {field_flag, 1},
    {field_metadata, 4},
    {field_price_annotation, 3},
  [194] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_metadata, 4},
    {field_price_annotation, 3},
  [198] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_metadata, 4},
  [202] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_price_annotation, 4},
  [206] =
    {field_account, 1},
    {field_amount, 2},
    {field_metadata, 4},
    {field_price_annotation, 3},
  [210] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 4},
    {field_postings, 5},
    {field_tags_and_links, 3},
    {field_txn_strings, 2},
  [216] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
    {field_metadata, 5},
    {field_price_annotation, 4},
  [221] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
    {field_metadata, 5},
  [226] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
    {field_price_annotation, 5},
  [231] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
    {field_metadata, 5},
    {field_price_annotation, 4},
  [236] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_metadata, 5},
    {field_price_annotation, 4},
  [241] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
    {field_metadata, 6},
    {field_price_annotation, 5},
};

static TSSymbol ts_alias_sequences[70][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
      if (lookahead == '@') ADVANCE(180);
      if (lookahead == '^') ADVANCE(152);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '}') ADVANCE(120);
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
      if (lookahead == '}') ADVANCE(172);
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
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 155},
  [16] = {.lex_state = 155},
  [17] = {.lex_state = 155},
  [18] = {.lex_state = 155},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 155},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 155},
  [24] = {.lex_state = 155},
  [25] = {.lex_state = 155},
  [26] = {.lex_state = 2},
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
  [37] = {.lex_state = 1},
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
  [55] = {.lex_state = 155},
  [56] = {.lex_state = 155},
  [57] = {.lex_state = 155},
  [58] = {.lex_state = 155},
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
  [69] = {.lex_state = 155},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 155},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 44},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 44},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 155},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 155},
  [202] = {.lex_state = 155},
  [203] = {.lex_state = 155},
  [204] = {.lex_state = 155},
  [205] = {.lex_state = 155},
  [206] = {.lex_state = 155},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 155},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 155},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 155},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 155},
  [222] = {.lex_state = 155},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 155},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 155},
  [227] = {.lex_state = 155},
  [228] = {.lex_state = 155},
  [229] = {.lex_state = 155},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 155},
  [232] = {.lex_state = 155},
  [233] = {.lex_state = 1},
  [234] = {.lex_state = 155},
  [235] = {.lex_state = 155},
  [236] = {.lex_state = 155},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 155},
  [239] = {.lex_state = 1},
  [240] = {.lex_state = 155},
  [241] = {.lex_state = 155},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 157},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 155},
  [246] = {.lex_state = 155},
  [247] = {.lex_state = 155},
  [248] = {.lex_state = 155},
  [249] = {.lex_state = 155},
  [250] = {.lex_state = 155},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 155},
  [253] = {.lex_state = 155},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 1},
  [256] = {.lex_state = 155},
  [257] = {.lex_state = 1},
  [258] = {.lex_state = 1},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 155},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 155},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 155},
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
    [sym_beancount_file] = STATE(254),
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
  [126] = 16,
    ACTIONS(66), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(68), 1,
      aux_sym_metadata_token1,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(75), 1,
      anon_sym_AT_AT,
    ACTIONS(77), 1,
      anon_sym_AT,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      sym_currency,
    ACTIONS(85), 1,
      sym_number,
    STATE(83), 1,
      sym_incomplete_amount,
    STATE(105), 1,
      sym_cost_spec,
    STATE(164), 1,
      sym_price_annotation,
    STATE(175), 1,
      aux_sym_metadata_repeat1,
    STATE(191), 1,
      sym_metadata,
    ACTIONS(81), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(79), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [179] = 16,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(75), 1,
      anon_sym_AT_AT,
    ACTIONS(77), 1,
      anon_sym_AT,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      sym_currency,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(87), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(89), 1,
      aux_sym_metadata_token1,
    STATE(85), 1,
      sym_incomplete_amount,
    STATE(107), 1,
      sym_cost_spec,
    STATE(140), 1,
      sym_price_annotation,
    STATE(175), 1,
      aux_sym_metadata_repeat1,
    STATE(198), 1,
      sym_metadata,
    ACTIONS(81), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(79), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [232] = 9,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(92), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(94), 1,
      aux_sym_metadata_token1,
    ACTIONS(100), 1,
      sym_number,
    ACTIONS(81), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(96), 2,
      sym_bool,
      sym_currency,
    STATE(177), 2,
      sym__key_value_value,
      sym_amount,
    ACTIONS(98), 4,
      sym_date,
      sym_tag,
      sym_string,
      sym_account,
    STATE(110), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [269] = 11,
    ACTIONS(102), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(104), 1,
      aux_sym_metadata_token1,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      sym_bool,
    ACTIONS(114), 1,
      sym_number,
    STATE(171), 1,
      aux_sym_metadata_repeat1,
    STATE(260), 1,
      sym_metadata,
    ACTIONS(108), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(12), 2,
      sym_amount,
      aux_sym_custom_repeat1,
    ACTIONS(112), 3,
      sym_date,
      sym_string,
      sym_account,
    STATE(14), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [310] = 11,
    ACTIONS(104), 1,
      aux_sym_metadata_token1,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      sym_number,
    ACTIONS(116), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(118), 1,
      sym_bool,
    STATE(171), 1,
      aux_sym_metadata_repeat1,
    STATE(232), 1,
      sym_metadata,
    ACTIONS(108), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(7), 2,
      sym_amount,
      aux_sym_custom_repeat1,
    ACTIONS(120), 3,
      sym_date,
      sym_string,
      sym_account,
    STATE(14), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [351] = 11,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    ACTIONS(126), 1,
      anon_sym_POUND,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      sym_currency,
    ACTIONS(134), 1,
      sym_number,
    STATE(136), 1,
      sym_cost_comp,
    STATE(170), 1,
      sym_compound_amount,
    STATE(214), 1,
      sym_cost_comp_list,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(124), 3,
      anon_sym_STAR,
      sym_date,
      sym_string,
    STATE(88), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [391] = 11,
    ACTIONS(122), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(126), 1,
      anon_sym_POUND,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      sym_currency,
    ACTIONS(134), 1,
      sym_number,
    STATE(136), 1,
      sym_cost_comp,
    STATE(170), 1,
      sym_compound_amount,
    STATE(233), 1,
      sym_cost_comp_list,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(124), 3,
      anon_sym_STAR,
      sym_date,
      sym_string,
    STATE(88), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [431] = 8,
    ACTIONS(94), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      sym_number,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(136), 2,
      sym_bool,
      sym_currency,
    STATE(211), 2,
      sym__key_value_value,
      sym_amount,
    ACTIONS(138), 4,
      sym_date,
      sym_tag,
      sym_string,
      sym_account,
    STATE(117), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [465] = 9,
    ACTIONS(142), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(144), 1,
      aux_sym_metadata_token1,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      sym_bool,
    ACTIONS(158), 1,
      sym_number,
    ACTIONS(149), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(12), 2,
      sym_amount,
      aux_sym_custom_repeat1,
    ACTIONS(155), 3,
      sym_date,
      sym_string,
      sym_account,
    STATE(14), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [500] = 9,
    ACTIONS(126), 1,
      anon_sym_POUND,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      sym_currency,
    ACTIONS(134), 1,
      sym_number,
    STATE(165), 1,
      sym_cost_comp,
    STATE(170), 1,
      sym_compound_amount,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(124), 3,
      anon_sym_STAR,
      sym_date,
      sym_string,
    STATE(88), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [534] = 5,
    ACTIONS(169), 1,
      sym_currency,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(161), 3,
      aux_sym__skipped_lines_token2,
      sym_bool,
      sym_number,
    ACTIONS(163), 5,
      aux_sym_metadata_token1,
      anon_sym_LPAREN,
      sym_date,
      sym_string,
      sym_account,
  [558] = 1,
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
  [574] = 1,
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
  [590] = 1,
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
  [606] = 1,
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
  [622] = 3,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(179), 4,
      aux_sym__skipped_lines_token2,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(181), 7,
      aux_sym_metadata_token1,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_date,
      sym_string,
      sym_account,
  [642] = 1,
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
  [658] = 2,
    ACTIONS(179), 4,
      aux_sym__skipped_lines_token2,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(181), 9,
      aux_sym_metadata_token1,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_date,
      sym_string,
      sym_account,
  [676] = 2,
    ACTIONS(185), 4,
      aux_sym__skipped_lines_token2,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(187), 9,
      aux_sym_metadata_token1,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_date,
      sym_string,
      sym_account,
  [694] = 1,
    ACTIONS(189), 13,
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
  [710] = 1,
    ACTIONS(191), 13,
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
  [726] = 1,
    ACTIONS(193), 13,
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
  [742] = 2,
    ACTIONS(195), 4,
      aux_sym__skipped_lines_token2,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(197), 9,
      aux_sym_metadata_token1,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_date,
      sym_string,
      sym_account,
  [760] = 1,
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
  [776] = 1,
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
  [792] = 1,
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
  [808] = 1,
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
  [824] = 1,
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
  [840] = 1,
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
  [856] = 1,
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
  [872] = 1,
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
  [888] = 1,
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
  [904] = 1,
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
  [920] = 10,
    ACTIONS(219), 1,
      aux_sym_metadata_token1,
    ACTIONS(223), 1,
      sym_string,
    STATE(78), 1,
      sym_txn_strings,
    STATE(115), 1,
      sym_tags_and_links,
    STATE(147), 1,
      sym_metadata,
    STATE(175), 1,
      aux_sym_metadata_repeat1,
    STATE(222), 1,
      sym_postings,
    ACTIONS(221), 2,
      sym_tag,
      sym_link,
    STATE(116), 2,
      sym__tag_or_link,
      aux_sym_tags_and_links_repeat1,
    STATE(152), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [954] = 1,
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
  [970] = 1,
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
  [986] = 1,
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
  [1002] = 1,
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
  [1018] = 1,
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
  [1034] = 1,
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
  [1050] = 1,
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
  [1066] = 1,
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
  [1082] = 1,
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
  [1098] = 1,
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
  [1114] = 1,
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
  [1130] = 1,
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
  [1146] = 1,
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
  [1162] = 1,
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
  [1178] = 1,
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
  [1194] = 1,
    ACTIONS(255), 13,
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
  [1210] = 1,
    ACTIONS(257), 13,
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
  [1226] = 1,
    ACTIONS(259), 13,
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
  [1242] = 1,
    ACTIONS(261), 13,
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
  [1258] = 1,
    ACTIONS(263), 13,
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
  [1274] = 1,
    ACTIONS(265), 13,
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
  [1450] = 1,
    ACTIONS(287), 13,
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
  [1466] = 2,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    ACTIONS(187), 11,
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
  [1483] = 8,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      sym_currency,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(289), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(291), 1,
      aux_sym_metadata_token1,
    STATE(182), 1,
      sym_incomplete_amount,
    ACTIONS(81), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(79), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [1512] = 2,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    ACTIONS(197), 11,
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
  [1529] = 2,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    ACTIONS(181), 11,
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
  [1546] = 3,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    ACTIONS(293), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(181), 9,
      aux_sym__skipped_lines_token2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_currency,
  [1565] = 12,
    ACTIONS(295), 1,
      anon_sym_balance,
    ACTIONS(297), 1,
      anon_sym_close,
    ACTIONS(299), 1,
      anon_sym_commodity,
    ACTIONS(301), 1,
      anon_sym_custom,
    ACTIONS(303), 1,
      anon_sym_document,
    ACTIONS(305), 1,
      anon_sym_event,
    ACTIONS(307), 1,
      anon_sym_note,
    ACTIONS(309), 1,
      anon_sym_open,
    ACTIONS(311), 1,
      anon_sym_pad,
    ACTIONS(313), 1,
      anon_sym_price,
    ACTIONS(315), 1,
      anon_sym_query,
    ACTIONS(317), 1,
      sym_flag,
  [1602] = 2,
    ACTIONS(185), 3,
      aux_sym__skipped_lines_token2,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(187), 8,
      aux_sym_metadata_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_STAR,
      anon_sym_AT_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_currency,
  [1618] = 2,
    ACTIONS(195), 3,
      aux_sym__skipped_lines_token2,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(197), 8,
      aux_sym_metadata_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_STAR,
      anon_sym_AT_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_currency,
  [1634] = 8,
    ACTIONS(219), 1,
      aux_sym_metadata_token1,
    STATE(114), 1,
      sym_tags_and_links,
    STATE(135), 1,
      sym_metadata,
    STATE(175), 1,
      aux_sym_metadata_repeat1,
    STATE(238), 1,
      sym_postings,
    ACTIONS(221), 2,
      sym_tag,
      sym_link,
    STATE(116), 2,
      sym__tag_or_link,
      aux_sym_tags_and_links_repeat1,
    STATE(152), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [1662] = 5,
    ACTIONS(327), 1,
      sym_currency,
    ACTIONS(323), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(325), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(319), 3,
      aux_sym__skipped_lines_token2,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(321), 3,
      aux_sym_metadata_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1684] = 3,
    ACTIONS(323), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(179), 3,
      aux_sym__skipped_lines_token2,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(181), 6,
      aux_sym_metadata_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_AT_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_currency,
  [1702] = 2,
    ACTIONS(179), 3,
      aux_sym__skipped_lines_token2,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(181), 8,
      aux_sym_metadata_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_STAR,
      anon_sym_AT_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_currency,
  [1718] = 2,
    ACTIONS(329), 3,
      aux_sym__skipped_lines_token2,
      sym_bool,
      sym_number,
    ACTIONS(331), 7,
      aux_sym_metadata_token1,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_date,
      sym_string,
      sym_account,
  [1733] = 10,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(75), 1,
      anon_sym_AT_AT,
    ACTIONS(77), 1,
      anon_sym_AT,
    ACTIONS(333), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(335), 1,
      aux_sym_metadata_token1,
    STATE(108), 1,
      sym_cost_spec,
    STATE(149), 1,
      sym_price_annotation,
    STATE(175), 1,
      aux_sym_metadata_repeat1,
    STATE(200), 1,
      sym_metadata,
  [1764] = 5,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      sym_number,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(157), 2,
      sym_amount,
      sym_amount_with_tolerance,
    STATE(111), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [1785] = 10,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(75), 1,
      anon_sym_AT_AT,
    ACTIONS(77), 1,
      anon_sym_AT,
    ACTIONS(340), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(342), 1,
      aux_sym_metadata_token1,
    STATE(109), 1,
      sym_cost_spec,
    STATE(144), 1,
      sym_price_annotation,
    STATE(175), 1,
      aux_sym_metadata_repeat1,
    STATE(185), 1,
      sym_metadata,
  [1816] = 5,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_number,
    STATE(156), 1,
      sym_amount,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(129), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [1836] = 5,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(347), 1,
      sym_currency,
    ACTIONS(349), 1,
      sym_number,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(123), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [1856] = 6,
    ACTIONS(351), 1,
      anon_sym_RBRACE,
    ACTIONS(355), 1,
      anon_sym_POUND,
    ACTIONS(359), 1,
      sym_currency,
    ACTIONS(293), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(353), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
    ACTIONS(357), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [1878] = 5,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(359), 1,
      sym_currency,
    ACTIONS(361), 1,
      sym_number,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(124), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [1898] = 7,
    ACTIONS(363), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(365), 1,
      aux_sym_metadata_token1,
    STATE(141), 1,
      sym_tags_and_links,
    STATE(171), 1,
      aux_sym_metadata_repeat1,
    STATE(250), 1,
      sym_metadata,
    ACTIONS(221), 2,
      sym_tag,
      sym_link,
    STATE(116), 2,
      sym__tag_or_link,
      aux_sym_tags_and_links_repeat1,
  [1922] = 4,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_number,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(121), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [1939] = 4,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      sym_number,
    ACTIONS(108), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(21), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [1956] = 4,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      sym_number,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(74), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [1973] = 4,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_number,
    ACTIONS(81), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(80), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [1990] = 4,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      sym_number,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(73), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2007] = 4,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 1,
      sym_number,
    ACTIONS(108), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(19), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2024] = 7,
    ACTIONS(379), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(381), 1,
      sym_key,
    ACTIONS(385), 1,
      sym_flag,
    ACTIONS(387), 1,
      sym_account,
    STATE(137), 1,
      sym__tag_or_link,
    STATE(181), 1,
      sym_key_value,
    ACTIONS(383), 2,
      sym_tag,
      sym_link,
  [2047] = 4,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      sym_number,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(72), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2064] = 4,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      sym_number,
    ACTIONS(108), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(26), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2081] = 4,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      sym_number,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(126), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2098] = 4,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(395), 1,
      sym_number,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(130), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2115] = 4,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(397), 1,
      sym_number,
    ACTIONS(81), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(77), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2132] = 4,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number,
    ACTIONS(130), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(122), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2149] = 4,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      sym_number,
    ACTIONS(81), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(81), 4,
      sym__num_expr,
      sym__paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2166] = 7,
    ACTIONS(75), 1,
      anon_sym_AT_AT,
    ACTIONS(77), 1,
      anon_sym_AT,
    ACTIONS(403), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(405), 1,
      aux_sym_metadata_token1,
    STATE(134), 1,
      sym_price_annotation,
    STATE(175), 1,
      aux_sym_metadata_repeat1,
    STATE(187), 1,
      sym_metadata,
  [2188] = 7,
    ACTIONS(104), 1,
      aux_sym_metadata_token1,
    ACTIONS(408), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(410), 1,
      sym_string,
    ACTIONS(412), 1,
      sym_currency,
    STATE(127), 1,
      sym_currency_list,
    STATE(171), 1,
      aux_sym_metadata_repeat1,
    STATE(202), 1,
      sym_metadata,
  [2210] = 7,
    ACTIONS(75), 1,
      anon_sym_AT_AT,
    ACTIONS(77), 1,
      anon_sym_AT,
    ACTIONS(414), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(416), 1,
      aux_sym_metadata_token1,
    STATE(143), 1,
      sym_price_annotation,
    STATE(175), 1,
      aux_sym_metadata_repeat1,
    STATE(186), 1,
      sym_metadata,
  [2232] = 7,
    ACTIONS(75), 1,
      anon_sym_AT_AT,
    ACTIONS(77), 1,
      anon_sym_AT,
    ACTIONS(419), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(421), 1,
      aux_sym_metadata_token1,
    STATE(161), 1,
      sym_price_annotation,
    STATE(175), 1,
      aux_sym_metadata_repeat1,
    STATE(193), 1,
      sym_metadata,
  [2254] = 7,
    ACTIONS(75), 1,
      anon_sym_AT_AT,
    ACTIONS(77), 1,
      anon_sym_AT,
    ACTIONS(424), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(426), 1,
      aux_sym_metadata_token1,
    STATE(155), 1,
      sym_price_annotation,
    STATE(175), 1,
      aux_sym_metadata_repeat1,
    STATE(188), 1,
      sym_metadata,
  [2276] = 5,
    ACTIONS(429), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(431), 1,
      aux_sym_metadata_token1,
    ACTIONS(433), 1,
      sym_currency,
    ACTIONS(323), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(325), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2294] = 4,
    ACTIONS(433), 1,
      sym_currency,
    ACTIONS(435), 1,
      anon_sym_TILDE,
    ACTIONS(293), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(357), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2309] = 2,
    ACTIONS(437), 3,
      aux_sym__skipped_lines_token2,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(439), 3,
      aux_sym_metadata_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2320] = 2,
    ACTIONS(319), 3,
      aux_sym__skipped_lines_token2,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(321), 3,
      aux_sym_metadata_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2331] = 5,
    ACTIONS(441), 1,
      aux_sym_metadata_token1,
    STATE(159), 1,
      sym_metadata,
    STATE(175), 1,
      aux_sym_metadata_repeat1,
    STATE(227), 1,
      sym_postings,
    STATE(152), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2348] = 5,
    ACTIONS(441), 1,
      aux_sym_metadata_token1,
    STATE(138), 1,
      sym_metadata,
    STATE(175), 1,
      aux_sym_metadata_repeat1,
    STATE(262), 1,
      sym_postings,
    STATE(152), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2365] = 4,
    ACTIONS(443), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(445), 1,
      aux_sym_metadata_token1,
    ACTIONS(448), 2,
      sym_tag,
      sym_link,
    STATE(118), 2,
      sym__tag_or_link,
      aux_sym_tags_and_links_repeat1,
  [2380] = 4,
    ACTIONS(431), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(450), 1,
      sym_currency,
    ACTIONS(293), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(357), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2395] = 4,
    ACTIONS(452), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(454), 1,
      aux_sym_metadata_token1,
    ACTIONS(457), 2,
      sym_tag,
      sym_link,
    STATE(118), 2,
      sym__tag_or_link,
      aux_sym_tags_and_links_repeat1,
  [2410] = 4,
    ACTIONS(381), 1,
      sym_key,
    STATE(137), 1,
      sym__tag_or_link,
    STATE(181), 1,
      sym_key_value,
    ACTIONS(383), 2,
      sym_tag,
      sym_link,
  [2424] = 4,
    ACTIONS(460), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(464), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym_currency_list_repeat1,
    ACTIONS(462), 2,
      aux_sym_metadata_token1,
      sym_string,
  [2438] = 3,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
    ACTIONS(293), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(357), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2450] = 3,
    ACTIONS(469), 1,
      anon_sym_RPAREN,
    ACTIONS(293), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(357), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2462] = 3,
    ACTIONS(471), 1,
      sym_currency,
    ACTIONS(293), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(357), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2474] = 3,
    ACTIONS(347), 1,
      sym_currency,
    ACTIONS(293), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(357), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2486] = 5,
    ACTIONS(379), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(381), 1,
      sym_key,
    ACTIONS(385), 1,
      sym_flag,
    ACTIONS(387), 1,
      sym_account,
    STATE(181), 1,
      sym_key_value,
  [2502] = 3,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    ACTIONS(293), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(357), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2514] = 5,
    ACTIONS(104), 1,
      aux_sym_metadata_token1,
    ACTIONS(475), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(477), 1,
      sym_string,
    STATE(171), 1,
      aux_sym_metadata_repeat1,
    STATE(236), 1,
      sym_metadata,
  [2530] = 4,
    ACTIONS(479), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym_currency_list_repeat1,
    ACTIONS(481), 2,
      aux_sym_metadata_token1,
      sym_string,
  [2544] = 3,
    ACTIONS(433), 1,
      sym_currency,
    ACTIONS(293), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(357), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2556] = 3,
    ACTIONS(485), 1,
      sym_currency,
    ACTIONS(293), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(357), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2568] = 4,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(487), 1,
      aux_sym__skipped_lines_token2,
    STATE(128), 1,
      aux_sym_currency_list_repeat1,
    ACTIONS(489), 2,
      aux_sym_metadata_token1,
      sym_string,
  [2582] = 4,
    ACTIONS(104), 1,
      aux_sym_metadata_token1,
    ACTIONS(491), 1,
      aux_sym__skipped_lines_token2,
    STATE(171), 1,
      aux_sym_metadata_repeat1,
    STATE(229), 1,
      sym_metadata,
  [2595] = 3,
    ACTIONS(493), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(495), 1,
      aux_sym_metadata_token1,
    STATE(133), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2606] = 4,
    ACTIONS(498), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(500), 1,
      aux_sym_metadata_token1,
    STATE(175), 1,
      aux_sym_metadata_repeat1,
    STATE(178), 1,
      sym_metadata,
  [2619] = 3,
    ACTIONS(503), 1,
      aux_sym_metadata_token1,
    STATE(228), 1,
      sym_postings,
    STATE(152), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2630] = 4,
    ACTIONS(505), 1,
      anon_sym_RBRACE,
    ACTIONS(507), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      aux_sym_cost_comp_list_repeat1,
  [2643] = 2,
    ACTIONS(452), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(511), 3,
      aux_sym_metadata_token1,
      sym_tag,
      sym_link,
  [2652] = 3,
    ACTIONS(503), 1,
      aux_sym_metadata_token1,
    STATE(231), 1,
      sym_postings,
    STATE(152), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2663] = 2,
    ACTIONS(513), 2,
      aux_sym__skipped_lines_token2,
      anon_sym_AT,
    ACTIONS(515), 2,
      aux_sym_metadata_token1,
      anon_sym_AT_AT,
  [2672] = 4,
    ACTIONS(517), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(519), 1,
      aux_sym_metadata_token1,
    STATE(175), 1,
      aux_sym_metadata_repeat1,
    STATE(183), 1,
      sym_metadata,
  [2685] = 4,
    ACTIONS(104), 1,
      aux_sym_metadata_token1,
    ACTIONS(522), 1,
      aux_sym__skipped_lines_token2,
    STATE(171), 1,
      aux_sym_metadata_repeat1,
    STATE(224), 1,
      sym_metadata,
  [2698] = 4,
    ACTIONS(104), 1,
      aux_sym_metadata_token1,
    ACTIONS(524), 1,
      aux_sym__skipped_lines_token2,
    STATE(171), 1,
      aux_sym_metadata_repeat1,
    STATE(201), 1,
      sym_metadata,
  [2711] = 4,
    ACTIONS(526), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(528), 1,
      aux_sym_metadata_token1,
    STATE(175), 1,
      aux_sym_metadata_repeat1,
    STATE(190), 1,
      sym_metadata,
  [2724] = 4,
    ACTIONS(531), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(533), 1,
      aux_sym_metadata_token1,
    STATE(175), 1,
      aux_sym_metadata_repeat1,
    STATE(194), 1,
      sym_metadata,
  [2737] = 2,
    ACTIONS(538), 1,
      sym_string,
    ACTIONS(536), 3,
      aux_sym_metadata_token1,
      sym_tag,
      sym_link,
  [2746] = 2,
    ACTIONS(460), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(462), 3,
      aux_sym_metadata_token1,
      anon_sym_COMMA,
      sym_string,
  [2755] = 3,
    ACTIONS(503), 1,
      aux_sym_metadata_token1,
    STATE(256), 1,
      sym_postings,
    STATE(152), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2766] = 4,
    ACTIONS(540), 1,
      anon_sym_RBRACE,
    ACTIONS(542), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    STATE(148), 1,
      aux_sym_cost_comp_list_repeat1,
  [2779] = 4,
    ACTIONS(547), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(549), 1,
      aux_sym_metadata_token1,
    STATE(175), 1,
      aux_sym_metadata_repeat1,
    STATE(189), 1,
      sym_metadata,
  [2792] = 2,
    ACTIONS(552), 2,
      aux_sym__skipped_lines_token2,
      anon_sym_AT,
    ACTIONS(554), 2,
      aux_sym_metadata_token1,
      anon_sym_AT_AT,
  [2801] = 4,
    ACTIONS(104), 1,
      aux_sym_metadata_token1,
    ACTIONS(556), 1,
      aux_sym__skipped_lines_token2,
    STATE(171), 1,
      aux_sym_metadata_repeat1,
    STATE(221), 1,
      sym_metadata,
  [2814] = 3,
    ACTIONS(503), 1,
      aux_sym_metadata_token1,
    ACTIONS(558), 1,
      aux_sym__skipped_lines_token2,
    STATE(133), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2825] = 4,
    ACTIONS(104), 1,
      aux_sym_metadata_token1,
    ACTIONS(560), 1,
      aux_sym__skipped_lines_token2,
    STATE(171), 1,
      aux_sym_metadata_repeat1,
    STATE(204), 1,
      sym_metadata,
  [2838] = 4,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_RBRACE,
    ACTIONS(564), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(148), 1,
      aux_sym_cost_comp_list_repeat1,
  [2851] = 4,
    ACTIONS(566), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(568), 1,
      aux_sym_metadata_token1,
    STATE(175), 1,
      aux_sym_metadata_repeat1,
    STATE(184), 1,
      sym_metadata,
  [2864] = 4,
    ACTIONS(104), 1,
      aux_sym_metadata_token1,
    ACTIONS(571), 1,
      aux_sym__skipped_lines_token2,
    STATE(171), 1,
      aux_sym_metadata_repeat1,
    STATE(234), 1,
      sym_metadata,
  [2877] = 4,
    ACTIONS(104), 1,
      aux_sym_metadata_token1,
    ACTIONS(573), 1,
      aux_sym__skipped_lines_token2,
    STATE(171), 1,
      aux_sym_metadata_repeat1,
    STATE(205), 1,
      sym_metadata,
  [2890] = 4,
    ACTIONS(104), 1,
      aux_sym_metadata_token1,
    ACTIONS(575), 1,
      aux_sym__skipped_lines_token2,
    STATE(171), 1,
      aux_sym_metadata_repeat1,
    STATE(235), 1,
      sym_metadata,
  [2903] = 3,
    ACTIONS(503), 1,
      aux_sym_metadata_token1,
    STATE(209), 1,
      sym_postings,
    STATE(152), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2914] = 4,
    ACTIONS(104), 1,
      aux_sym_metadata_token1,
    ACTIONS(577), 1,
      aux_sym__skipped_lines_token2,
    STATE(171), 1,
      aux_sym_metadata_repeat1,
    STATE(240), 1,
      sym_metadata,
  [2927] = 4,
    ACTIONS(579), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(581), 1,
      aux_sym_metadata_token1,
    STATE(175), 1,
      aux_sym_metadata_repeat1,
    STATE(180), 1,
      sym_metadata,
  [2940] = 4,
    ACTIONS(104), 1,
      aux_sym_metadata_token1,
    ACTIONS(584), 1,
      aux_sym__skipped_lines_token2,
    STATE(171), 1,
      aux_sym_metadata_repeat1,
    STATE(241), 1,
      sym_metadata,
  [2953] = 4,
    ACTIONS(104), 1,
      aux_sym_metadata_token1,
    ACTIONS(586), 1,
      aux_sym__skipped_lines_token2,
    STATE(171), 1,
      aux_sym_metadata_repeat1,
    STATE(245), 1,
      sym_metadata,
  [2966] = 4,
    ACTIONS(588), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(590), 1,
      aux_sym_metadata_token1,
    STATE(175), 1,
      aux_sym_metadata_repeat1,
    STATE(197), 1,
      sym_metadata,
  [2979] = 2,
    ACTIONS(540), 1,
      anon_sym_RBRACE,
    ACTIONS(542), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [2987] = 1,
    ACTIONS(593), 3,
      aux_sym_metadata_token1,
      sym_tag,
      sym_link,
  [2993] = 2,
    ACTIONS(351), 1,
      anon_sym_RBRACE,
    ACTIONS(353), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3001] = 2,
    STATE(137), 1,
      sym__tag_or_link,
    ACTIONS(383), 2,
      sym_tag,
      sym_link,
  [3009] = 3,
    ACTIONS(379), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(385), 1,
      sym_flag,
    ACTIONS(387), 1,
      sym_account,
  [3019] = 2,
    ACTIONS(595), 1,
      anon_sym_RBRACE,
    ACTIONS(597), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3027] = 3,
    ACTIONS(104), 1,
      aux_sym_metadata_token1,
    ACTIONS(599), 1,
      aux_sym__skipped_lines_token2,
    STATE(174), 1,
      aux_sym_metadata_repeat1,
  [3037] = 2,
    ACTIONS(601), 1,
      anon_sym_RBRACE,
    ACTIONS(603), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3045] = 2,
    ACTIONS(605), 1,
      anon_sym_RBRACE,
    ACTIONS(607), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3053] = 3,
    ACTIONS(609), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(611), 1,
      aux_sym_metadata_token1,
    STATE(174), 1,
      aux_sym_metadata_repeat1,
  [3063] = 3,
    ACTIONS(599), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(614), 1,
      aux_sym_metadata_token1,
    STATE(174), 1,
      aux_sym_metadata_repeat1,
  [3073] = 2,
    ACTIONS(617), 1,
      anon_sym_RBRACE,
    ACTIONS(619), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3081] = 2,
    ACTIONS(621), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(623), 1,
      aux_sym_metadata_token1,
  [3088] = 2,
    ACTIONS(625), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(627), 1,
      aux_sym_metadata_token1,
  [3095] = 2,
    ACTIONS(493), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(629), 1,
      aux_sym_metadata_token1,
  [3102] = 2,
    ACTIONS(631), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(633), 1,
      aux_sym_metadata_token1,
  [3109] = 2,
    ACTIONS(609), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(635), 1,
      aux_sym_metadata_token1,
  [3116] = 2,
    ACTIONS(637), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(639), 1,
      aux_sym_metadata_token1,
  [3123] = 2,
    ACTIONS(641), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(643), 1,
      aux_sym_metadata_token1,
  [3130] = 2,
    ACTIONS(645), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(647), 1,
      aux_sym_metadata_token1,
  [3137] = 2,
    ACTIONS(649), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(651), 1,
      aux_sym_metadata_token1,
  [3144] = 2,
    ACTIONS(653), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(655), 1,
      aux_sym_metadata_token1,
  [3151] = 2,
    ACTIONS(657), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(659), 1,
      aux_sym_metadata_token1,
  [3158] = 2,
    ACTIONS(661), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(663), 1,
      aux_sym_metadata_token1,
  [3165] = 2,
    ACTIONS(665), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(667), 1,
      aux_sym_metadata_token1,
  [3172] = 2,
    ACTIONS(669), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(671), 1,
      aux_sym_metadata_token1,
  [3179] = 2,
    ACTIONS(673), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(675), 1,
      aux_sym_metadata_token1,
  [3186] = 2,
    ACTIONS(381), 1,
      sym_key,
    STATE(181), 1,
      sym_key_value,
  [3193] = 2,
    ACTIONS(677), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(679), 1,
      aux_sym_metadata_token1,
  [3200] = 2,
    ACTIONS(681), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(683), 1,
      aux_sym_metadata_token1,
  [3207] = 2,
    ACTIONS(685), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(687), 1,
      aux_sym_metadata_token1,
  [3214] = 2,
    ACTIONS(689), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(691), 1,
      sym_string,
  [3221] = 2,
    ACTIONS(693), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(695), 1,
      aux_sym_metadata_token1,
  [3228] = 2,
    ACTIONS(697), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(699), 1,
      aux_sym_metadata_token1,
  [3235] = 2,
    ACTIONS(701), 1,
      sym_key,
    STATE(247), 1,
      sym_key_value,
  [3242] = 2,
    ACTIONS(703), 1,
      aux_sym__skipped_lines_token2,
    ACTIONS(705), 1,
      aux_sym_metadata_token1,
  [3249] = 1,
    ACTIONS(707), 1,
      aux_sym__skipped_lines_token2,
  [3253] = 1,
    ACTIONS(709), 1,
      aux_sym__skipped_lines_token2,
  [3257] = 1,
    ACTIONS(711), 1,
      aux_sym__skipped_lines_token2,
  [3261] = 1,
    ACTIONS(713), 1,
      aux_sym__skipped_lines_token2,
  [3265] = 1,
    ACTIONS(715), 1,
      aux_sym__skipped_lines_token2,
  [3269] = 1,
    ACTIONS(717), 1,
      aux_sym__skipped_lines_token2,
  [3273] = 1,
    ACTIONS(719), 1,
      sym_string,
  [3277] = 1,
    ACTIONS(721), 1,
      sym_currency,
  [3281] = 1,
    ACTIONS(723), 1,
      aux_sym__skipped_lines_token2,
  [3285] = 1,
    ACTIONS(725), 1,
      sym_account,
  [3289] = 1,
    ACTIONS(623), 1,
      aux_sym__skipped_lines_token2,
  [3293] = 1,
    ACTIONS(727), 1,
      sym_account,
  [3297] = 1,
    ACTIONS(729), 1,
      sym_account,
  [3301] = 1,
    ACTIONS(731), 1,
      anon_sym_RBRACE,
  [3305] = 1,
    ACTIONS(733), 1,
      sym_string,
  [3309] = 1,
    ACTIONS(735), 1,
      sym_string,
  [3313] = 1,
    ACTIONS(737), 1,
      sym_string,
  [3317] = 1,
    ACTIONS(739), 1,
      sym_string,
  [3321] = 1,
    ACTIONS(741), 1,
      sym_account,
  [3325] = 1,
    ACTIONS(743), 1,
      sym_string,
  [3329] = 1,
    ACTIONS(745), 1,
      aux_sym__skipped_lines_token2,
  [3333] = 1,
    ACTIONS(747), 1,
      aux_sym__skipped_lines_token2,
  [3337] = 1,
    ACTIONS(749), 1,
      sym_account,
  [3341] = 1,
    ACTIONS(751), 1,
      aux_sym__skipped_lines_token2,
  [3345] = 1,
    ACTIONS(753), 1,
      sym_string,
  [3349] = 1,
    ACTIONS(331), 1,
      aux_sym__skipped_lines_token2,
  [3353] = 1,
    ACTIONS(755), 1,
      aux_sym__skipped_lines_token2,
  [3357] = 1,
    ACTIONS(757), 1,
      aux_sym__skipped_lines_token2,
  [3361] = 1,
    ACTIONS(759), 1,
      aux_sym__skipped_lines_token2,
  [3365] = 1,
    ACTIONS(761), 1,
      sym_currency,
  [3369] = 1,
    ACTIONS(763), 1,
      aux_sym__skipped_lines_token2,
  [3373] = 1,
    ACTIONS(765), 1,
      aux_sym__skipped_lines_token2,
  [3377] = 1,
    ACTIONS(731), 1,
      anon_sym_RBRACE_RBRACE,
  [3381] = 1,
    ACTIONS(767), 1,
      aux_sym__skipped_lines_token2,
  [3385] = 1,
    ACTIONS(769), 1,
      aux_sym__skipped_lines_token2,
  [3389] = 1,
    ACTIONS(771), 1,
      aux_sym__skipped_lines_token2,
  [3393] = 1,
    ACTIONS(773), 1,
      sym_account,
  [3397] = 1,
    ACTIONS(775), 1,
      aux_sym__skipped_lines_token2,
  [3401] = 1,
    ACTIONS(777), 1,
      sym_currency,
  [3405] = 1,
    ACTIONS(779), 1,
      aux_sym__skipped_lines_token2,
  [3409] = 1,
    ACTIONS(781), 1,
      aux_sym__skipped_lines_token2,
  [3413] = 1,
    ACTIONS(783), 1,
      sym_account,
  [3417] = 1,
    ACTIONS(785), 1,
      aux_sym__skipped_lines_token1,
  [3421] = 1,
    ACTIONS(787), 1,
      sym_account,
  [3425] = 1,
    ACTIONS(789), 1,
      aux_sym__skipped_lines_token2,
  [3429] = 1,
    ACTIONS(791), 1,
      aux_sym__skipped_lines_token2,
  [3433] = 1,
    ACTIONS(793), 1,
      aux_sym__skipped_lines_token2,
  [3437] = 1,
    ACTIONS(795), 1,
      aux_sym__skipped_lines_token2,
  [3441] = 1,
    ACTIONS(797), 1,
      aux_sym__skipped_lines_token2,
  [3445] = 1,
    ACTIONS(799), 1,
      aux_sym__skipped_lines_token2,
  [3449] = 1,
    ACTIONS(801), 1,
      sym_string,
  [3453] = 1,
    ACTIONS(803), 1,
      aux_sym__skipped_lines_token2,
  [3457] = 1,
    ACTIONS(805), 1,
      aux_sym__skipped_lines_token2,
  [3461] = 1,
    ACTIONS(807), 1,
      ts_builtin_sym_end,
  [3465] = 1,
    ACTIONS(809), 1,
      sym_key,
  [3469] = 1,
    ACTIONS(811), 1,
      aux_sym__skipped_lines_token2,
  [3473] = 1,
    ACTIONS(813), 1,
      sym_tag,
  [3477] = 1,
    ACTIONS(815), 1,
      sym_tag,
  [3481] = 1,
    ACTIONS(817), 1,
      sym_string,
  [3485] = 1,
    ACTIONS(819), 1,
      aux_sym__skipped_lines_token2,
  [3489] = 1,
    ACTIONS(821), 1,
      sym_string,
  [3493] = 1,
    ACTIONS(823), 1,
      aux_sym__skipped_lines_token2,
  [3497] = 1,
    ACTIONS(825), 1,
      sym_string,
  [3501] = 1,
    ACTIONS(827), 1,
      aux_sym__skipped_lines_token2,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 63,
  [SMALL_STATE(4)] = 126,
  [SMALL_STATE(5)] = 179,
  [SMALL_STATE(6)] = 232,
  [SMALL_STATE(7)] = 269,
  [SMALL_STATE(8)] = 310,
  [SMALL_STATE(9)] = 351,
  [SMALL_STATE(10)] = 391,
  [SMALL_STATE(11)] = 431,
  [SMALL_STATE(12)] = 465,
  [SMALL_STATE(13)] = 500,
  [SMALL_STATE(14)] = 534,
  [SMALL_STATE(15)] = 558,
  [SMALL_STATE(16)] = 574,
  [SMALL_STATE(17)] = 590,
  [SMALL_STATE(18)] = 606,
  [SMALL_STATE(19)] = 622,
  [SMALL_STATE(20)] = 642,
  [SMALL_STATE(21)] = 658,
  [SMALL_STATE(22)] = 676,
  [SMALL_STATE(23)] = 694,
  [SMALL_STATE(24)] = 710,
  [SMALL_STATE(25)] = 726,
  [SMALL_STATE(26)] = 742,
  [SMALL_STATE(27)] = 760,
  [SMALL_STATE(28)] = 776,
  [SMALL_STATE(29)] = 792,
  [SMALL_STATE(30)] = 808,
  [SMALL_STATE(31)] = 824,
  [SMALL_STATE(32)] = 840,
  [SMALL_STATE(33)] = 856,
  [SMALL_STATE(34)] = 872,
  [SMALL_STATE(35)] = 888,
  [SMALL_STATE(36)] = 904,
  [SMALL_STATE(37)] = 920,
  [SMALL_STATE(38)] = 954,
  [SMALL_STATE(39)] = 970,
  [SMALL_STATE(40)] = 986,
  [SMALL_STATE(41)] = 1002,
  [SMALL_STATE(42)] = 1018,
  [SMALL_STATE(43)] = 1034,
  [SMALL_STATE(44)] = 1050,
  [SMALL_STATE(45)] = 1066,
  [SMALL_STATE(46)] = 1082,
  [SMALL_STATE(47)] = 1098,
  [SMALL_STATE(48)] = 1114,
  [SMALL_STATE(49)] = 1130,
  [SMALL_STATE(50)] = 1146,
  [SMALL_STATE(51)] = 1162,
  [SMALL_STATE(52)] = 1178,
  [SMALL_STATE(53)] = 1194,
  [SMALL_STATE(54)] = 1210,
  [SMALL_STATE(55)] = 1226,
  [SMALL_STATE(56)] = 1242,
  [SMALL_STATE(57)] = 1258,
  [SMALL_STATE(58)] = 1274,
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
  [SMALL_STATE(70)] = 1466,
  [SMALL_STATE(71)] = 1483,
  [SMALL_STATE(72)] = 1512,
  [SMALL_STATE(73)] = 1529,
  [SMALL_STATE(74)] = 1546,
  [SMALL_STATE(75)] = 1565,
  [SMALL_STATE(76)] = 1602,
  [SMALL_STATE(77)] = 1618,
  [SMALL_STATE(78)] = 1634,
  [SMALL_STATE(79)] = 1662,
  [SMALL_STATE(80)] = 1684,
  [SMALL_STATE(81)] = 1702,
  [SMALL_STATE(82)] = 1718,
  [SMALL_STATE(83)] = 1733,
  [SMALL_STATE(84)] = 1764,
  [SMALL_STATE(85)] = 1785,
  [SMALL_STATE(86)] = 1816,
  [SMALL_STATE(87)] = 1836,
  [SMALL_STATE(88)] = 1856,
  [SMALL_STATE(89)] = 1878,
  [SMALL_STATE(90)] = 1898,
  [SMALL_STATE(91)] = 1922,
  [SMALL_STATE(92)] = 1939,
  [SMALL_STATE(93)] = 1956,
  [SMALL_STATE(94)] = 1973,
  [SMALL_STATE(95)] = 1990,
  [SMALL_STATE(96)] = 2007,
  [SMALL_STATE(97)] = 2024,
  [SMALL_STATE(98)] = 2047,
  [SMALL_STATE(99)] = 2064,
  [SMALL_STATE(100)] = 2081,
  [SMALL_STATE(101)] = 2098,
  [SMALL_STATE(102)] = 2115,
  [SMALL_STATE(103)] = 2132,
  [SMALL_STATE(104)] = 2149,
  [SMALL_STATE(105)] = 2166,
  [SMALL_STATE(106)] = 2188,
  [SMALL_STATE(107)] = 2210,
  [SMALL_STATE(108)] = 2232,
  [SMALL_STATE(109)] = 2254,
  [SMALL_STATE(110)] = 2276,
  [SMALL_STATE(111)] = 2294,
  [SMALL_STATE(112)] = 2309,
  [SMALL_STATE(113)] = 2320,
  [SMALL_STATE(114)] = 2331,
  [SMALL_STATE(115)] = 2348,
  [SMALL_STATE(116)] = 2365,
  [SMALL_STATE(117)] = 2380,
  [SMALL_STATE(118)] = 2395,
  [SMALL_STATE(119)] = 2410,
  [SMALL_STATE(120)] = 2424,
  [SMALL_STATE(121)] = 2438,
  [SMALL_STATE(122)] = 2450,
  [SMALL_STATE(123)] = 2462,
  [SMALL_STATE(124)] = 2474,
  [SMALL_STATE(125)] = 2486,
  [SMALL_STATE(126)] = 2502,
  [SMALL_STATE(127)] = 2514,
  [SMALL_STATE(128)] = 2530,
  [SMALL_STATE(129)] = 2544,
  [SMALL_STATE(130)] = 2556,
  [SMALL_STATE(131)] = 2568,
  [SMALL_STATE(132)] = 2582,
  [SMALL_STATE(133)] = 2595,
  [SMALL_STATE(134)] = 2606,
  [SMALL_STATE(135)] = 2619,
  [SMALL_STATE(136)] = 2630,
  [SMALL_STATE(137)] = 2643,
  [SMALL_STATE(138)] = 2652,
  [SMALL_STATE(139)] = 2663,
  [SMALL_STATE(140)] = 2672,
  [SMALL_STATE(141)] = 2685,
  [SMALL_STATE(142)] = 2698,
  [SMALL_STATE(143)] = 2711,
  [SMALL_STATE(144)] = 2724,
  [SMALL_STATE(145)] = 2737,
  [SMALL_STATE(146)] = 2746,
  [SMALL_STATE(147)] = 2755,
  [SMALL_STATE(148)] = 2766,
  [SMALL_STATE(149)] = 2779,
  [SMALL_STATE(150)] = 2792,
  [SMALL_STATE(151)] = 2801,
  [SMALL_STATE(152)] = 2814,
  [SMALL_STATE(153)] = 2825,
  [SMALL_STATE(154)] = 2838,
  [SMALL_STATE(155)] = 2851,
  [SMALL_STATE(156)] = 2864,
  [SMALL_STATE(157)] = 2877,
  [SMALL_STATE(158)] = 2890,
  [SMALL_STATE(159)] = 2903,
  [SMALL_STATE(160)] = 2914,
  [SMALL_STATE(161)] = 2927,
  [SMALL_STATE(162)] = 2940,
  [SMALL_STATE(163)] = 2953,
  [SMALL_STATE(164)] = 2966,
  [SMALL_STATE(165)] = 2979,
  [SMALL_STATE(166)] = 2987,
  [SMALL_STATE(167)] = 2993,
  [SMALL_STATE(168)] = 3001,
  [SMALL_STATE(169)] = 3009,
  [SMALL_STATE(170)] = 3019,
  [SMALL_STATE(171)] = 3027,
  [SMALL_STATE(172)] = 3037,
  [SMALL_STATE(173)] = 3045,
  [SMALL_STATE(174)] = 3053,
  [SMALL_STATE(175)] = 3063,
  [SMALL_STATE(176)] = 3073,
  [SMALL_STATE(177)] = 3081,
  [SMALL_STATE(178)] = 3088,
  [SMALL_STATE(179)] = 3095,
  [SMALL_STATE(180)] = 3102,
  [SMALL_STATE(181)] = 3109,
  [SMALL_STATE(182)] = 3116,
  [SMALL_STATE(183)] = 3123,
  [SMALL_STATE(184)] = 3130,
  [SMALL_STATE(185)] = 3137,
  [SMALL_STATE(186)] = 3144,
  [SMALL_STATE(187)] = 3151,
  [SMALL_STATE(188)] = 3158,
  [SMALL_STATE(189)] = 3165,
  [SMALL_STATE(190)] = 3172,
  [SMALL_STATE(191)] = 3179,
  [SMALL_STATE(192)] = 3186,
  [SMALL_STATE(193)] = 3193,
  [SMALL_STATE(194)] = 3200,
  [SMALL_STATE(195)] = 3207,
  [SMALL_STATE(196)] = 3214,
  [SMALL_STATE(197)] = 3221,
  [SMALL_STATE(198)] = 3228,
  [SMALL_STATE(199)] = 3235,
  [SMALL_STATE(200)] = 3242,
  [SMALL_STATE(201)] = 3249,
  [SMALL_STATE(202)] = 3253,
  [SMALL_STATE(203)] = 3257,
  [SMALL_STATE(204)] = 3261,
  [SMALL_STATE(205)] = 3265,
  [SMALL_STATE(206)] = 3269,
  [SMALL_STATE(207)] = 3273,
  [SMALL_STATE(208)] = 3277,
  [SMALL_STATE(209)] = 3281,
  [SMALL_STATE(210)] = 3285,
  [SMALL_STATE(211)] = 3289,
  [SMALL_STATE(212)] = 3293,
  [SMALL_STATE(213)] = 3297,
  [SMALL_STATE(214)] = 3301,
  [SMALL_STATE(215)] = 3305,
  [SMALL_STATE(216)] = 3309,
  [SMALL_STATE(217)] = 3313,
  [SMALL_STATE(218)] = 3317,
  [SMALL_STATE(219)] = 3321,
  [SMALL_STATE(220)] = 3325,
  [SMALL_STATE(221)] = 3329,
  [SMALL_STATE(222)] = 3333,
  [SMALL_STATE(223)] = 3337,
  [SMALL_STATE(224)] = 3341,
  [SMALL_STATE(225)] = 3345,
  [SMALL_STATE(226)] = 3349,
  [SMALL_STATE(227)] = 3353,
  [SMALL_STATE(228)] = 3357,
  [SMALL_STATE(229)] = 3361,
  [SMALL_STATE(230)] = 3365,
  [SMALL_STATE(231)] = 3369,
  [SMALL_STATE(232)] = 3373,
  [SMALL_STATE(233)] = 3377,
  [SMALL_STATE(234)] = 3381,
  [SMALL_STATE(235)] = 3385,
  [SMALL_STATE(236)] = 3389,
  [SMALL_STATE(237)] = 3393,
  [SMALL_STATE(238)] = 3397,
  [SMALL_STATE(239)] = 3401,
  [SMALL_STATE(240)] = 3405,
  [SMALL_STATE(241)] = 3409,
  [SMALL_STATE(242)] = 3413,
  [SMALL_STATE(243)] = 3417,
  [SMALL_STATE(244)] = 3421,
  [SMALL_STATE(245)] = 3425,
  [SMALL_STATE(246)] = 3429,
  [SMALL_STATE(247)] = 3433,
  [SMALL_STATE(248)] = 3437,
  [SMALL_STATE(249)] = 3441,
  [SMALL_STATE(250)] = 3445,
  [SMALL_STATE(251)] = 3449,
  [SMALL_STATE(252)] = 3453,
  [SMALL_STATE(253)] = 3457,
  [SMALL_STATE(254)] = 3461,
  [SMALL_STATE(255)] = 3465,
  [SMALL_STATE(256)] = 3469,
  [SMALL_STATE(257)] = 3473,
  [SMALL_STATE(258)] = 3477,
  [SMALL_STATE(259)] = 3481,
  [SMALL_STATE(260)] = 3485,
  [SMALL_STATE(261)] = 3489,
  [SMALL_STATE(262)] = 3493,
  [SMALL_STATE(263)] = 3497,
  [SMALL_STATE(264)] = 3501,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_beancount_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(3),
  [7] = {.count = 1, .reusable = true}, SHIFT(243),
  [9] = {.count = 1, .reusable = true}, SHIFT(264),
  [11] = {.count = 1, .reusable = true}, SHIFT(263),
  [13] = {.count = 1, .reusable = true}, SHIFT(261),
  [15] = {.count = 1, .reusable = true}, SHIFT(259),
  [17] = {.count = 1, .reusable = true}, SHIFT(258),
  [19] = {.count = 1, .reusable = true}, SHIFT(257),
  [21] = {.count = 1, .reusable = true}, SHIFT(199),
  [23] = {.count = 1, .reusable = true}, SHIFT(255),
  [25] = {.count = 1, .reusable = true}, SHIFT(75),
  [27] = {.count = 1, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2),
  [29] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(2),
  [32] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(243),
  [35] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(264),
  [38] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(263),
  [41] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(261),
  [44] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(259),
  [47] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(258),
  [50] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(257),
  [53] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(199),
  [56] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(255),
  [59] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(75),
  [62] = {.count = 1, .reusable = true}, REDUCE(sym_beancount_file, 1),
  [64] = {.count = 1, .reusable = true}, SHIFT(2),
  [66] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 2, .production_id = 4),
  [68] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 2, .production_id = 4), SHIFT(192),
  [71] = {.count = 1, .reusable = false}, SHIFT(9),
  [73] = {.count = 1, .reusable = true}, SHIFT(10),
  [75] = {.count = 1, .reusable = true}, SHIFT(71),
  [77] = {.count = 1, .reusable = false}, SHIFT(71),
  [79] = {.count = 1, .reusable = true}, SHIFT(91),
  [81] = {.count = 1, .reusable = true}, SHIFT(102),
  [83] = {.count = 1, .reusable = true}, SHIFT(113),
  [85] = {.count = 1, .reusable = true}, SHIFT(79),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 3, .production_id = 18),
  [89] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 3, .production_id = 18), SHIFT(192),
  [92] = {.count = 1, .reusable = false}, REDUCE(sym_key_value, 1),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym_key_value, 1),
  [96] = {.count = 1, .reusable = false}, SHIFT(177),
  [98] = {.count = 1, .reusable = true}, SHIFT(177),
  [100] = {.count = 1, .reusable = false}, SHIFT(110),
  [102] = {.count = 1, .reusable = false}, SHIFT(24),
  [104] = {.count = 1, .reusable = true}, SHIFT(192),
  [106] = {.count = 1, .reusable = true}, SHIFT(103),
  [108] = {.count = 1, .reusable = true}, SHIFT(99),
  [110] = {.count = 1, .reusable = false}, SHIFT(12),
  [112] = {.count = 1, .reusable = true}, SHIFT(12),
  [114] = {.count = 1, .reusable = false}, SHIFT(14),
  [116] = {.count = 1, .reusable = false}, SHIFT(61),
  [118] = {.count = 1, .reusable = false}, SHIFT(7),
  [120] = {.count = 1, .reusable = true}, SHIFT(7),
  [122] = {.count = 1, .reusable = true}, SHIFT(139),
  [124] = {.count = 1, .reusable = true}, SHIFT(170),
  [126] = {.count = 1, .reusable = true}, SHIFT(89),
  [128] = {.count = 1, .reusable = true}, SHIFT(100),
  [130] = {.count = 1, .reusable = true}, SHIFT(98),
  [132] = {.count = 1, .reusable = true}, SHIFT(167),
  [134] = {.count = 1, .reusable = false}, SHIFT(88),
  [136] = {.count = 1, .reusable = false}, SHIFT(211),
  [138] = {.count = 1, .reusable = true}, SHIFT(211),
  [140] = {.count = 1, .reusable = false}, SHIFT(117),
  [142] = {.count = 1, .reusable = false}, REDUCE(aux_sym_custom_repeat1, 2),
  [144] = {.count = 1, .reusable = true}, REDUCE(aux_sym_custom_repeat1, 2),
  [146] = {.count = 2, .reusable = true}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(103),
  [149] = {.count = 2, .reusable = true}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(99),
  [152] = {.count = 2, .reusable = false}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(12),
  [155] = {.count = 2, .reusable = true}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(12),
  [158] = {.count = 2, .reusable = false}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(14),
  [161] = {.count = 1, .reusable = false}, REDUCE(aux_sym_custom_repeat1, 1),
  [163] = {.count = 1, .reusable = true}, REDUCE(aux_sym_custom_repeat1, 1),
  [165] = {.count = 1, .reusable = true}, SHIFT(92),
  [167] = {.count = 1, .reusable = true}, SHIFT(96),
  [169] = {.count = 1, .reusable = false}, SHIFT(82),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_open, 5, .production_id = 13),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_custom, 5, .production_id = 9),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_close, 4, .production_id = 1),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_commodity, 5, .production_id = 8),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym_binary_num_expr, 3),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_binary_num_expr, 3),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym__skipped_lines, 2),
  [185] = {.count = 1, .reusable = false}, REDUCE(sym__paren_num_expr, 3),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym__paren_num_expr, 3),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_close, 5, .production_id = 7),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_custom, 5, .production_id = 3),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_balance, 5, .production_id = 6),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym_unary_num_expr, 2),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_unary_num_expr, 2),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_transaction, 5, .production_id = 25),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_transaction, 7, .production_id = 63),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_balance, 6, .production_id = 26),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_transaction, 4, .production_id = 5),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_open, 7, .production_id = 52),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_document, 7, .production_id = 51),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_transaction, 6, .production_id = 50),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_transaction, 6, .production_id = 49),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_transaction, 6, .production_id = 48),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_document, 5, .production_id = 10),
  [219] = {.count = 1, .reusable = true}, SHIFT(97),
  [221] = {.count = 1, .reusable = true}, SHIFT(116),
  [223] = {.count = 1, .reusable = true}, SHIFT(145),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym__skipped_lines, 3),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_include, 3),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_event, 5, .production_id = 11),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_plugin, 3),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_note, 5, .production_id = 12),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_pushtag, 3),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_poptag, 3),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_transaction, 5, .production_id = 24),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_open, 5, .production_id = 7),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_open, 5, .production_id = 14),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_pad, 5, .production_id = 15),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_pushmeta, 3),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_popmeta, 3),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_price, 5, .production_id = 16),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_query, 5, .production_id = 17),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_custom, 6, .production_id = 27),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_query, 6, .production_id = 37),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_price, 6, .production_id = 36),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_pad, 6, .production_id = 35),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_open, 4, .production_id = 1),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_open, 6, .production_id = 34),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_plugin, 4),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_open, 6, .production_id = 33),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_custom, 4, .production_id = 3),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_open, 6, .production_id = 32),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_note, 6, .production_id = 31),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_event, 6, .production_id = 30),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_commodity, 4, .production_id = 2),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_transaction, 5, .production_id = 23),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_document, 6, .production_id = 29),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_document, 6, .production_id = 28),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_option, 4),
  [289] = {.count = 1, .reusable = false}, REDUCE(sym_price_annotation, 1),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_price_annotation, 1),
  [293] = {.count = 1, .reusable = true}, SHIFT(95),
  [295] = {.count = 1, .reusable = true}, SHIFT(244),
  [297] = {.count = 1, .reusable = true}, SHIFT(242),
  [299] = {.count = 1, .reusable = true}, SHIFT(230),
  [301] = {.count = 1, .reusable = true}, SHIFT(225),
  [303] = {.count = 1, .reusable = true}, SHIFT(223),
  [305] = {.count = 1, .reusable = true}, SHIFT(217),
  [307] = {.count = 1, .reusable = true}, SHIFT(213),
  [309] = {.count = 1, .reusable = true}, SHIFT(212),
  [311] = {.count = 1, .reusable = true}, SHIFT(210),
  [313] = {.count = 1, .reusable = true}, SHIFT(208),
  [315] = {.count = 1, .reusable = true}, SHIFT(207),
  [317] = {.count = 1, .reusable = true}, SHIFT(37),
  [319] = {.count = 1, .reusable = false}, REDUCE(sym_incomplete_amount, 1),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym_incomplete_amount, 1),
  [323] = {.count = 1, .reusable = true}, SHIFT(104),
  [325] = {.count = 1, .reusable = true}, SHIFT(94),
  [327] = {.count = 1, .reusable = true}, SHIFT(112),
  [329] = {.count = 1, .reusable = false}, REDUCE(sym_amount, 2),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_amount, 2),
  [333] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 3, .production_id = 21),
  [335] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 3, .production_id = 21), SHIFT(192),
  [338] = {.count = 1, .reusable = true}, SHIFT(111),
  [340] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 40),
  [342] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 40), SHIFT(192),
  [345] = {.count = 1, .reusable = true}, SHIFT(129),
  [347] = {.count = 1, .reusable = true}, SHIFT(176),
  [349] = {.count = 1, .reusable = true}, SHIFT(123),
  [351] = {.count = 1, .reusable = false}, REDUCE(sym_compound_amount, 1),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym_compound_amount, 1),
  [355] = {.count = 1, .reusable = true}, SHIFT(87),
  [357] = {.count = 1, .reusable = true}, SHIFT(93),
  [359] = {.count = 1, .reusable = true}, SHIFT(173),
  [361] = {.count = 1, .reusable = true}, SHIFT(124),
  [363] = {.count = 1, .reusable = false}, SHIFT(36),
  [365] = {.count = 1, .reusable = true}, SHIFT(119),
  [367] = {.count = 1, .reusable = true}, SHIFT(121),
  [369] = {.count = 1, .reusable = true}, SHIFT(21),
  [371] = {.count = 1, .reusable = true}, SHIFT(74),
  [373] = {.count = 1, .reusable = true}, SHIFT(80),
  [375] = {.count = 1, .reusable = true}, SHIFT(73),
  [377] = {.count = 1, .reusable = true}, SHIFT(19),
  [379] = {.count = 1, .reusable = true}, SHIFT(179),
  [381] = {.count = 1, .reusable = true}, SHIFT(6),
  [383] = {.count = 1, .reusable = true}, SHIFT(137),
  [385] = {.count = 1, .reusable = false}, SHIFT(237),
  [387] = {.count = 1, .reusable = true}, SHIFT(4),
  [389] = {.count = 1, .reusable = true}, SHIFT(72),
  [391] = {.count = 1, .reusable = true}, SHIFT(26),
  [393] = {.count = 1, .reusable = true}, SHIFT(126),
  [395] = {.count = 1, .reusable = true}, SHIFT(130),
  [397] = {.count = 1, .reusable = true}, SHIFT(77),
  [399] = {.count = 1, .reusable = true}, SHIFT(122),
  [401] = {.count = 1, .reusable = true}, SHIFT(81),
  [403] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 3, .production_id = 20),
  [405] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 3, .production_id = 20), SHIFT(192),
  [408] = {.count = 1, .reusable = false}, SHIFT(57),
  [410] = {.count = 1, .reusable = true}, SHIFT(160),
  [412] = {.count = 1, .reusable = true}, SHIFT(131),
  [414] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 39),
  [416] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 39), SHIFT(192),
  [419] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 45),
  [421] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 45), SHIFT(192),
  [424] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 56),
  [426] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 56), SHIFT(192),
  [429] = {.count = 1, .reusable = false}, REDUCE(sym__key_value_value, 1),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym__key_value_value, 1),
  [433] = {.count = 1, .reusable = true}, SHIFT(82),
  [435] = {.count = 1, .reusable = true}, SHIFT(101),
  [437] = {.count = 1, .reusable = false}, REDUCE(sym_incomplete_amount, 2),
  [439] = {.count = 1, .reusable = true}, REDUCE(sym_incomplete_amount, 2),
  [441] = {.count = 1, .reusable = true}, SHIFT(125),
  [443] = {.count = 1, .reusable = false}, REDUCE(sym_tags_and_links, 1),
  [445] = {.count = 2, .reusable = true}, REDUCE(sym_tags_and_links, 1), SHIFT(168),
  [448] = {.count = 1, .reusable = true}, SHIFT(118),
  [450] = {.count = 1, .reusable = true}, SHIFT(226),
  [452] = {.count = 1, .reusable = false}, REDUCE(aux_sym_tags_and_links_repeat1, 2),
  [454] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tags_and_links_repeat1, 2), SHIFT_REPEAT(168),
  [457] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tags_and_links_repeat1, 2), SHIFT_REPEAT(118),
  [460] = {.count = 1, .reusable = false}, REDUCE(aux_sym_currency_list_repeat1, 2),
  [462] = {.count = 1, .reusable = true}, REDUCE(aux_sym_currency_list_repeat1, 2),
  [464] = {.count = 2, .reusable = true}, REDUCE(aux_sym_currency_list_repeat1, 2), SHIFT_REPEAT(239),
  [467] = {.count = 1, .reusable = true}, SHIFT(76),
  [469] = {.count = 1, .reusable = true}, SHIFT(22),
  [471] = {.count = 1, .reusable = true}, SHIFT(172),
  [473] = {.count = 1, .reusable = true}, SHIFT(70),
  [475] = {.count = 1, .reusable = false}, SHIFT(47),
  [477] = {.count = 1, .reusable = true}, SHIFT(151),
  [479] = {.count = 1, .reusable = false}, REDUCE(sym_currency_list, 2),
  [481] = {.count = 1, .reusable = true}, REDUCE(sym_currency_list, 2),
  [483] = {.count = 1, .reusable = true}, SHIFT(239),
  [485] = {.count = 1, .reusable = true}, SHIFT(195),
  [487] = {.count = 1, .reusable = false}, REDUCE(sym_currency_list, 1),
  [489] = {.count = 1, .reusable = true}, REDUCE(sym_currency_list, 1),
  [491] = {.count = 1, .reusable = false}, SHIFT(17),
  [493] = {.count = 1, .reusable = false}, REDUCE(aux_sym_postings_repeat1, 2),
  [495] = {.count = 2, .reusable = true}, REDUCE(aux_sym_postings_repeat1, 2), SHIFT_REPEAT(169),
  [498] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 43),
  [500] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 43), SHIFT(192),
  [503] = {.count = 1, .reusable = true}, SHIFT(169),
  [505] = {.count = 1, .reusable = false}, REDUCE(sym_cost_comp_list, 1),
  [507] = {.count = 1, .reusable = true}, REDUCE(sym_cost_comp_list, 1),
  [509] = {.count = 1, .reusable = true}, SHIFT(13),
  [511] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tags_and_links_repeat1, 2),
  [513] = {.count = 1, .reusable = false}, REDUCE(sym_cost_spec, 2),
  [515] = {.count = 1, .reusable = true}, REDUCE(sym_cost_spec, 2),
  [517] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 41),
  [519] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 41), SHIFT(192),
  [522] = {.count = 1, .reusable = false}, SHIFT(67),
  [524] = {.count = 1, .reusable = false}, SHIFT(65),
  [526] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 54),
  [528] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 54), SHIFT(192),
  [531] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 57),
  [533] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 57), SHIFT(192),
  [536] = {.count = 1, .reusable = true}, REDUCE(sym_txn_strings, 1),
  [538] = {.count = 1, .reusable = true}, SHIFT(166),
  [540] = {.count = 1, .reusable = false}, REDUCE(aux_sym_cost_comp_list_repeat1, 2),
  [542] = {.count = 1, .reusable = true}, REDUCE(aux_sym_cost_comp_list_repeat1, 2),
  [544] = {.count = 2, .reusable = true}, REDUCE(aux_sym_cost_comp_list_repeat1, 2), SHIFT_REPEAT(13),
  [547] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 46),
  [549] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 46), SHIFT(192),
  [552] = {.count = 1, .reusable = false}, REDUCE(sym_cost_spec, 3),
  [554] = {.count = 1, .reusable = true}, REDUCE(sym_cost_spec, 3),
  [556] = {.count = 1, .reusable = false}, SHIFT(60),
  [558] = {.count = 1, .reusable = false}, REDUCE(sym_postings, 1),
  [560] = {.count = 1, .reusable = false}, SHIFT(52),
  [562] = {.count = 1, .reusable = false}, REDUCE(sym_cost_comp_list, 2),
  [564] = {.count = 1, .reusable = true}, REDUCE(sym_cost_comp_list, 2),
  [566] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 6, .production_id = 66),
  [568] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 6, .production_id = 66), SHIFT(192),
  [571] = {.count = 1, .reusable = false}, SHIFT(51),
  [573] = {.count = 1, .reusable = false}, SHIFT(25),
  [575] = {.count = 1, .reusable = false}, SHIFT(48),
  [577] = {.count = 1, .reusable = false}, SHIFT(15),
  [579] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 61),
  [581] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 61), SHIFT(192),
  [584] = {.count = 1, .reusable = false}, SHIFT(42),
  [586] = {.count = 1, .reusable = false}, SHIFT(40),
  [588] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 3, .production_id = 22),
  [590] = {.count = 2, .reusable = true}, REDUCE(sym_posting, 3, .production_id = 22), SHIFT(192),
  [593] = {.count = 1, .reusable = true}, REDUCE(sym_txn_strings, 2),
  [595] = {.count = 1, .reusable = false}, REDUCE(sym_cost_comp, 1),
  [597] = {.count = 1, .reusable = true}, REDUCE(sym_cost_comp, 1),
  [599] = {.count = 1, .reusable = false}, REDUCE(sym_metadata, 1),
  [601] = {.count = 1, .reusable = false}, REDUCE(sym_compound_amount, 4),
  [603] = {.count = 1, .reusable = true}, REDUCE(sym_compound_amount, 4),
  [605] = {.count = 1, .reusable = false}, REDUCE(sym_compound_amount, 2),
  [607] = {.count = 1, .reusable = true}, REDUCE(sym_compound_amount, 2),
  [609] = {.count = 1, .reusable = false}, REDUCE(aux_sym_metadata_repeat1, 2),
  [611] = {.count = 2, .reusable = true}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(192),
  [614] = {.count = 2, .reusable = true}, REDUCE(sym_metadata, 1), SHIFT(192),
  [617] = {.count = 1, .reusable = false}, REDUCE(sym_compound_amount, 3),
  [619] = {.count = 1, .reusable = true}, REDUCE(sym_compound_amount, 3),
  [621] = {.count = 1, .reusable = false}, REDUCE(sym_key_value, 2),
  [623] = {.count = 1, .reusable = true}, REDUCE(sym_key_value, 2),
  [625] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 59),
  [627] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 59),
  [629] = {.count = 1, .reusable = true}, REDUCE(aux_sym_postings_repeat1, 2),
  [631] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 6, .production_id = 68),
  [633] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 6, .production_id = 68),
  [635] = {.count = 1, .reusable = true}, REDUCE(aux_sym_metadata_repeat1, 2),
  [637] = {.count = 1, .reusable = false}, REDUCE(sym_price_annotation, 2),
  [639] = {.count = 1, .reusable = true}, REDUCE(sym_price_annotation, 2),
  [641] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 58),
  [643] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 58),
  [645] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 7, .production_id = 69),
  [647] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 7, .production_id = 69),
  [649] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 55),
  [651] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 55),
  [653] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 53),
  [655] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 53),
  [657] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 42),
  [659] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 42),
  [661] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 6, .production_id = 65),
  [663] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 6, .production_id = 65),
  [665] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 62),
  [667] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 62),
  [669] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 6, .production_id = 64),
  [671] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 6, .production_id = 64),
  [673] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 3, .production_id = 19),
  [675] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 3, .production_id = 19),
  [677] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 60),
  [679] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 60),
  [681] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 6, .production_id = 67),
  [683] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 6, .production_id = 67),
  [685] = {.count = 1, .reusable = false}, REDUCE(sym_amount_with_tolerance, 4),
  [687] = {.count = 1, .reusable = true}, REDUCE(sym_amount_with_tolerance, 4),
  [689] = {.count = 1, .reusable = true}, SHIFT(41),
  [691] = {.count = 1, .reusable = true}, SHIFT(203),
  [693] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 47),
  [695] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 47),
  [697] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 38),
  [699] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 38),
  [701] = {.count = 1, .reusable = true}, SHIFT(11),
  [703] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 44),
  [705] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 44),
  [707] = {.count = 1, .reusable = true}, SHIFT(18),
  [709] = {.count = 1, .reusable = true}, SHIFT(46),
  [711] = {.count = 1, .reusable = true}, SHIFT(59),
  [713] = {.count = 1, .reusable = true}, SHIFT(54),
  [715] = {.count = 1, .reusable = true}, SHIFT(29),
  [717] = {.count = 1, .reusable = true}, SHIFT(69),
  [719] = {.count = 1, .reusable = true}, SHIFT(220),
  [721] = {.count = 1, .reusable = true}, SHIFT(86),
  [723] = {.count = 1, .reusable = true}, SHIFT(28),
  [725] = {.count = 1, .reusable = true}, SHIFT(219),
  [727] = {.count = 1, .reusable = true}, SHIFT(106),
  [729] = {.count = 1, .reusable = true}, SHIFT(218),
  [731] = {.count = 1, .reusable = true}, SHIFT(150),
  [733] = {.count = 1, .reusable = true}, SHIFT(90),
  [735] = {.count = 1, .reusable = true}, SHIFT(163),
  [737] = {.count = 1, .reusable = true}, SHIFT(216),
  [739] = {.count = 1, .reusable = true}, SHIFT(162),
  [741] = {.count = 1, .reusable = true}, SHIFT(158),
  [743] = {.count = 1, .reusable = true}, SHIFT(153),
  [745] = {.count = 1, .reusable = true}, SHIFT(31),
  [747] = {.count = 1, .reusable = true}, SHIFT(30),
  [749] = {.count = 1, .reusable = true}, SHIFT(215),
  [751] = {.count = 1, .reusable = true}, SHIFT(32),
  [753] = {.count = 1, .reusable = true}, SHIFT(8),
  [755] = {.count = 1, .reusable = true}, SHIFT(33),
  [757] = {.count = 1, .reusable = true}, SHIFT(34),
  [759] = {.count = 1, .reusable = true}, SHIFT(23),
  [761] = {.count = 1, .reusable = true}, SHIFT(142),
  [763] = {.count = 1, .reusable = true}, SHIFT(35),
  [765] = {.count = 1, .reusable = true}, SHIFT(16),
  [767] = {.count = 1, .reusable = true}, SHIFT(55),
  [769] = {.count = 1, .reusable = true}, SHIFT(56),
  [771] = {.count = 1, .reusable = true}, SHIFT(58),
  [773] = {.count = 1, .reusable = true}, SHIFT(5),
  [775] = {.count = 1, .reusable = true}, SHIFT(27),
  [777] = {.count = 1, .reusable = true}, SHIFT(146),
  [779] = {.count = 1, .reusable = true}, SHIFT(62),
  [781] = {.count = 1, .reusable = true}, SHIFT(63),
  [783] = {.count = 1, .reusable = true}, SHIFT(132),
  [785] = {.count = 1, .reusable = true}, SHIFT(253),
  [787] = {.count = 1, .reusable = true}, SHIFT(84),
  [789] = {.count = 1, .reusable = true}, SHIFT(64),
  [791] = {.count = 1, .reusable = true}, SHIFT(50),
  [793] = {.count = 1, .reusable = true}, SHIFT(49),
  [795] = {.count = 1, .reusable = true}, SHIFT(44),
  [797] = {.count = 1, .reusable = true}, SHIFT(43),
  [799] = {.count = 1, .reusable = true}, SHIFT(68),
  [801] = {.count = 1, .reusable = true}, SHIFT(206),
  [803] = {.count = 1, .reusable = true}, SHIFT(39),
  [805] = {.count = 1, .reusable = true}, SHIFT(38),
  [807] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [809] = {.count = 1, .reusable = true}, SHIFT(246),
  [811] = {.count = 1, .reusable = true}, SHIFT(66),
  [813] = {.count = 1, .reusable = true}, SHIFT(248),
  [815] = {.count = 1, .reusable = true}, SHIFT(249),
  [817] = {.count = 1, .reusable = true}, SHIFT(196),
  [819] = {.count = 1, .reusable = true}, SHIFT(53),
  [821] = {.count = 1, .reusable = true}, SHIFT(251),
  [823] = {.count = 1, .reusable = true}, SHIFT(45),
  [825] = {.count = 1, .reusable = true}, SHIFT(252),
  [827] = {.count = 1, .reusable = true}, SHIFT(20),
};

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
