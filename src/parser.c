#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 224
#define SYMBOL_COUNT 96
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 20
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  aux_sym_comment_token1 = 1,
  aux_sym_comment_token2 = 2,
  aux_sym__skipped_lines_token1 = 3,
  anon_sym_COLON = 4,
  aux_sym_key_value_line_token1 = 5,
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
  sym_cost_comp_list = 17,
  anon_sym_AT_AT = 18,
  anon_sym_AT = 19,
  anon_sym_balance = 20,
  anon_sym_close = 21,
  anon_sym_commodity = 22,
  anon_sym_custom = 23,
  anon_sym_document = 24,
  anon_sym_event = 25,
  anon_sym_note = 26,
  anon_sym_open = 27,
  anon_sym_pad = 28,
  anon_sym_price = 29,
  anon_sym_query = 30,
  anon_sym_COMMA = 31,
  anon_sym_TILDE = 32,
  anon_sym_LPAREN = 33,
  anon_sym_RPAREN = 34,
  anon_sym_DASH = 35,
  anon_sym_PLUS = 36,
  anon_sym_STAR = 37,
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
  sym_comment = 50,
  sym__skipped_lines = 51,
  sym_key_value_value = 52,
  sym_key_value = 53,
  sym_key_value_line = 54,
  sym_metadata = 55,
  sym__undated_directives = 56,
  sym_include = 57,
  sym_option = 58,
  sym_plugin = 59,
  sym_pushtag = 60,
  sym_poptag = 61,
  sym_pushmeta = 62,
  sym_popmeta = 63,
  sym__dated_directives = 64,
  sym_cost_spec = 65,
  sym_incomplete_amount = 66,
  sym_price_annotation = 67,
  sym_posting = 68,
  sym_postings = 69,
  sym_transaction = 70,
  sym_balance = 71,
  sym_close = 72,
  sym_commodity = 73,
  sym_custom = 74,
  sym_document = 75,
  sym_event = 76,
  sym_note = 77,
  sym_open = 78,
  sym_pad = 79,
  sym_price = 80,
  sym_query = 81,
  sym_currency_list = 82,
  sym_amount = 83,
  sym_amount_with_tolerance = 84,
  sym__num_expr = 85,
  sym__paren_num_expr = 86,
  sym_unary_num_expr = 87,
  sym_binary_num_expr = 88,
  sym__tag_or_link = 89,
  aux_sym_beancount_file_repeat1 = 90,
  aux_sym_metadata_repeat1 = 91,
  aux_sym_postings_repeat1 = 92,
  aux_sym_transaction_repeat1 = 93,
  aux_sym_custom_repeat1 = 94,
  aux_sym_currency_list_repeat1 = 95,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [aux_sym__skipped_lines_token1] = "_skipped_lines_token1",
  [anon_sym_COLON] = ":",
  [aux_sym_key_value_line_token1] = "key_value_line_token1",
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
  [sym_cost_comp_list] = "cost_comp_list",
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
  [anon_sym_COMMA] = ",",
  [anon_sym_TILDE] = "~",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
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
  [sym_comment] = "comment",
  [sym__skipped_lines] = "_skipped_lines",
  [sym_key_value_value] = "key_value_value",
  [sym_key_value] = "key_value",
  [sym_key_value_line] = "key_value_line",
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
  [sym_incomplete_amount] = "incomplete_amount",
  [sym_price_annotation] = "price_annotation",
  [sym_posting] = "posting",
  [sym_postings] = "postings",
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
  [aux_sym_postings_repeat1] = "postings_repeat1",
  [aux_sym_transaction_repeat1] = "transaction_repeat1",
  [aux_sym_custom_repeat1] = "custom_repeat1",
  [aux_sym_currency_list_repeat1] = "currency_list_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__skipped_lines_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_key_value_line_token1] = {
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
  [sym_cost_comp_list] = {
    .visible = true,
    .named = true,
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
  [anon_sym_COMMA] = {
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
  [anon_sym_STAR] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__skipped_lines] = {
    .visible = false,
    .named = true,
  },
  [sym_key_value_value] = {
    .visible = true,
    .named = true,
  },
  [sym_key_value] = {
    .visible = true,
    .named = true,
  },
  [sym_key_value_line] = {
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
  [aux_sym_postings_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_transaction_repeat1] = {
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

static const TSFieldMapSlice ts_field_map_slices[] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 3},
  [5] = {.index = 8, .length = 3},
  [6] = {.index = 11, .length = 2},
  [7] = {.index = 13, .length = 3},
  [8] = {.index = 16, .length = 3},
  [9] = {.index = 19, .length = 3},
  [10] = {.index = 22, .length = 3},
  [11] = {.index = 25, .length = 3},
  [12] = {.index = 28, .length = 3},
  [13] = {.index = 31, .length = 3},
  [14] = {.index = 34, .length = 3},
  [15] = {.index = 37, .length = 3},
  [16] = {.index = 40, .length = 1},
  [17] = {.index = 41, .length = 4},
  [18] = {.index = 45, .length = 4},
  [19] = {.index = 49, .length = 3},
  [20] = {.index = 52, .length = 4},
  [21] = {.index = 56, .length = 4},
  [22] = {.index = 60, .length = 4},
  [23] = {.index = 64, .length = 4},
  [24] = {.index = 68, .length = 4},
  [25] = {.index = 72, .length = 4},
  [26] = {.index = 76, .length = 4},
  [27] = {.index = 80, .length = 4},
  [28] = {.index = 84, .length = 4},
  [29] = {.index = 88, .length = 1},
  [30] = {.index = 89, .length = 2},
  [31] = {.index = 91, .length = 2},
  [32] = {.index = 93, .length = 2},
  [33] = {.index = 95, .length = 5},
  [34] = {.index = 100, .length = 5},
  [35] = {.index = 105, .length = 5},
  [36] = {.index = 110, .length = 5},
  [37] = {.index = 115, .length = 2},
  [38] = {.index = 117, .length = 2},
  [39] = {.index = 119, .length = 2},
  [40] = {.index = 121, .length = 3},
  [41] = {.index = 124, .length = 3},
  [42] = {.index = 127, .length = 3},
  [43] = {.index = 130, .length = 6},
  [44] = {.index = 136, .length = 6},
  [45] = {.index = 142, .length = 6},
  [46] = {.index = 148, .length = 3},
  [47] = {.index = 151, .length = 3},
  [48] = {.index = 154, .length = 3},
  [49] = {.index = 157, .length = 4},
  [50] = {.index = 161, .length = 7},
  [51] = {.index = 168, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_account, 2},
    {field_date, 0},
  [2] =
    {field_date, 0},
  [3] =
    {field_date, 0},
    {field_name, 2},
  [5] =
    {field_account, 2},
    {field_amount, 3},
    {field_date, 0},
  [8] =
    {field_account, 2},
    {field_date, 0},
    {field_metadata, 3},
  [11] =
    {field_date, 0},
    {field_metadata, 3},
  [13] =
    {field_date, 0},
    {field_metadata, 3},
    {field_name, 2},
  [16] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
  [19] =
    {field_date, 0},
    {field_description, 3},
    {field_type, 2},
  [22] =
    {field_account, 2},
    {field_date, 0},
    {field_note, 3},
  [25] =
    {field_account, 2},
    {field_booking, 3},
    {field_date, 0},
  [28] =
    {field_account, 2},
    {field_currencies, 3},
    {field_date, 0},
  [31] =
    {field_account, 2},
    {field_date, 0},
    {field_from_account, 3},
  [34] =
    {field_amount, 3},
    {field_currency, 2},
    {field_date, 0},
  [37] =
    {field_date, 0},
    {field_name, 2},
    {field_query, 3},
  [40] =
    {field_account, 1},
  [41] =
    {field_date, 0},
    {field_flag, 1},
    {field_postings, 3},
    {field_txn_strings, 2},
  [45] =
    {field_account, 2},
    {field_amount, 3},
    {field_date, 0},
    {field_metadata, 4},
  [49] =
    {field_date, 0},
    {field_metadata, 4},
    {field_name, 2},
  [52] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
    {field_metadata, 4},
  [56] =
    {field_date, 0},
    {field_description, 3},
    {field_metadata, 4},
    {field_type, 2},
  [60] =
    {field_account, 2},
    {field_date, 0},
    {field_metadata, 4},
    {field_note, 3},
  [64] =
    {field_account, 2},
    {field_booking, 3},
    {field_date, 0},
    {field_metadata, 4},
  [68] =
    {field_account, 2},
    {field_booking, 4},
    {field_currencies, 3},
    {field_date, 0},
  [72] =
    {field_account, 2},
    {field_currencies, 3},
    {field_date, 0},
    {field_metadata, 4},
  [76] =
    {field_account, 2},
    {field_date, 0},
    {field_from_account, 3},
    {field_metadata, 4},
  [80] =
    {field_amount, 3},
    {field_currency, 2},
    {field_date, 0},
    {field_metadata, 4},
  [84] =
    {field_date, 0},
    {field_metadata, 4},
    {field_name, 2},
    {field_query, 3},
  [88] =
    {field_account, 2},
  [89] =
    {field_account, 1},
    {field_cost_spec, 2},
  [91] =
    {field_account, 1},
    {field_amount, 2},
  [93] =
    {field_account, 1},
    {field_price_annotation, 2},
  [95] =
    {field_date, 0},
    {field_flag, 1},
    {field_postings, 4},
    {field_txn_strings, 2},
    {field_txn_strings, 3},
  [100] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 3},
    {field_postings, 4},
    {field_txn_strings, 2},
  [105] =
    {field_date, 0},
    {field_flag, 1},
    {field_postings, 4},
    {field_tags_and_links, 3},
    {field_txn_strings, 2},
  [110] =
    {field_account, 2},
    {field_booking, 4},
    {field_currencies, 3},
    {field_date, 0},
    {field_metadata, 5},
  [115] =
    {field_account, 2},
    {field_cost_spec, 3},
  [117] =
    {field_account, 2},
    {field_amount, 3},
  [119] =
    {field_account, 2},
    {field_price_annotation, 3},
  [121] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_price_annotation, 3},
  [124] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
  [127] =
    {field_account, 1},
    {field_amount, 2},
    {field_price_annotation, 3},
  [130] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 4},
    {field_postings, 5},
    {field_txn_strings, 2},
    {field_txn_strings, 3},
  [136] =
    {field_date, 0},
    {field_flag, 1},
    {field_postings, 5},
    {field_tags_and_links, 4},
    {field_txn_strings, 2},
    {field_txn_strings, 3},
  [142] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 4},
    {field_postings, 5},
    {field_tags_and_links, 3},
    {field_txn_strings, 2},
  [148] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_price_annotation, 4},
  [151] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
  [154] =
    {field_account, 2},
    {field_amount, 3},
    {field_price_annotation, 4},
  [157] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_price_annotation, 4},
  [161] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 5},
    {field_postings, 6},
    {field_tags_and_links, 4},
    {field_txn_strings, 2},
    {field_txn_strings, 3},
  [168] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_price_annotation, 5},
};

static TSSymbol ts_alias_sequences[52][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(158);
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '(') ADVANCE(194);
      if (lookahead == ')') ADVANCE(195);
      if (lookahead == '*') ADVANCE(198);
      if (lookahead == '+') ADVANCE(197);
      if (lookahead == ',') ADVANCE(192);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == ';') ADVANCE(159);
      if (lookahead == '@') ADVANCE(180);
      if (lookahead == '^') ADVANCE(155);
      if (lookahead == 'b') ADVANCE(47);
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead == 'd') ADVANCE(96);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(102);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == 'q') ADVANCE(116);
      if (lookahead == '{') ADVANCE(173);
      if (lookahead == '}') ADVANCE(175);
      if (lookahead == '~') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '?') ADVANCE(268);
      if (lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (lookahead != 0 &&
          (lookahead < '' || '>' < lookahead) &&
          (lookahead < '[' || '' < lookahead)) ADVANCE(39);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(158);
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == ';') ADVANCE(159);
      if (lookahead == 'b') ADVANCE(47);
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead == 'd') ADVANCE(96);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(102);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == 'q') ADVANCE(116);
      if (lookahead == '}') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(268);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '(') ADVANCE(194);
      if (lookahead == ')') ADVANCE(195);
      if (lookahead == '*') ADVANCE(198);
      if (lookahead == '+') ADVANCE(197);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'F') ADVANCE(33);
      if (lookahead == 'T') ADVANCE(36);
      if (lookahead == '^') ADVANCE(155);
      if (lookahead == '}') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (lookahead != 0 &&
          (lookahead < 0 || '@' < lookahead) &&
          (lookahead < '[' || '' < lookahead)) ADVANCE(39);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '(') ADVANCE(194);
      if (lookahead == '*') ADVANCE(198);
      if (lookahead == '+') ADVANCE(197);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'F') ADVANCE(29);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(31);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead)) ADVANCE(39);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '(') ADVANCE(194);
      if (lookahead == '*') ADVANCE(198);
      if (lookahead == '+') ADVANCE(197);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '@') ADVANCE(180);
      if (lookahead == '{') ADVANCE(173);
      if (lookahead == '~') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '(') ADVANCE(194);
      if (lookahead == '+') ADVANCE(197);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == 'F') ADVANCE(29);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(31);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead)) ADVANCE(39);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == ')') ADVANCE(195);
      if (lookahead == '*') ADVANCE(198);
      if (lookahead == '+') ADVANCE(197);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '~') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(207);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == ',') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(236);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(127);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(209);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(130);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(212);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(210);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(214);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(211);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(134);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(216);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(131);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(213);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(133);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(215);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(135);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(217);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(222);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(219);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(224);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(221);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(226);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(223);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(231);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'A') ADVANCE(232);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(147);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(234);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'R') ADVANCE(233);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(147);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(234);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(147);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(234);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(229);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'A') ADVANCE(35);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'E') ADVANCE(202);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'L') ADVANCE(37);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'R') ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'S') ADVANCE(34);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'U') ADVANCE(34);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          (lookahead < '.' || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(235);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == 'D') ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == 'O') ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == 'O') ADVANCE(178);
      END_STATE();
    case 45:
      if (lookahead == 'T') ADVANCE(43);
      if (lookahead == '}') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      END_STATE();
    case 46:
      if (lookahead == 'T') ADVANCE(43);
      if (lookahead == '}') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'l') ADVANCE(115);
      if (lookahead == 'o') ADVANCE(103);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(189);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(170);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(169);
      END_STATE();
    case 74:
      if (lookahead == 'g') ADVANCE(77);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(99);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(184);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(98);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(69);
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(71);
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(86);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 117:
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 119:
      if (lookahead == 'v') ADVANCE(67);
      END_STATE();
    case 120:
      if (lookahead == 'y') ADVANCE(191);
      END_STATE();
    case 121:
      if (lookahead == 'y') ADVANCE(183);
      END_STATE();
    case 122:
      if (lookahead == '}') ADVANCE(177);
      END_STATE();
    case 123:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 124:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(150);
      END_STATE();
    case 125:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(125)
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '?') ADVANCE(268);
      if (lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(269);
      if (lookahead != 0 &&
          (lookahead < 0 || '@' < lookahead) &&
          (lookahead < '[' || '' < lookahead)) ADVANCE(39);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 126:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 127:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(258);
      END_STATE();
    case 128:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(237);
      END_STATE();
    case 129:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(240);
      END_STATE();
    case 130:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      END_STATE();
    case 131:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(242);
      END_STATE();
    case 132:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(239);
      END_STATE();
    case 133:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      END_STATE();
    case 134:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      END_STATE();
    case 135:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(246);
      END_STATE();
    case 136:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(243);
      END_STATE();
    case 137:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(248);
      END_STATE();
    case 138:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(245);
      END_STATE();
    case 139:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(250);
      END_STATE();
    case 140:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(247);
      END_STATE();
    case 141:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 142:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 143:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 144:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(251);
      END_STATE();
    case 145:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(256);
      END_STATE();
    case 146:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(253);
      END_STATE();
    case 147:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(208);
      END_STATE();
    case 154:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 155:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 156:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 157:
      if (lookahead != 0 &&
          (lookahead < 0 || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '' < lookahead)) ADVANCE(270);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(165);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_key_value_line_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_plugin);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_pushtag);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_poptag);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_pushmeta);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_popmeta);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(176);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(177);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_cost_comp_list);
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
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(226);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_date);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_key);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_tag);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_link);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_currency);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(236);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(127);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(209);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(130);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(210);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(211);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(134);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(216);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(131);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(213);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(133);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(215);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(135);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(217);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(219);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(221);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(223);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'E') ADVANCE(201);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(231);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'S') ADVANCE(230);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(231);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(231);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'E') ADVANCE(200);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'L') ADVANCE(228);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(229);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'U') ADVANCE(227);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(229);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(229);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          (lookahead < '.' || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(235);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(258);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(237);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(240);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(239);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(243);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(245);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(247);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(251);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(253);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_currency);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(208);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(266);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(266);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(266);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(266);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(266);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_flag);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_flag);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(39);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(270);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 125},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 125},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 45},
  [155] = {.lex_state = 46},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 2},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 162},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 1},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [aux_sym_comment_token2] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_key_value_line_token1] = ACTIONS(1),
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
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
    [sym_link] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_flag] = ACTIONS(1),
    [sym_account] = ACTIONS(1),
  },
  [1] = {
    [sym_beancount_file] = STATE(205),
    [sym_comment] = STATE(2),
    [sym__skipped_lines] = STATE(2),
    [sym__undated_directives] = STATE(2),
    [sym_include] = STATE(2),
    [sym_option] = STATE(2),
    [sym_plugin] = STATE(2),
    [sym_pushtag] = STATE(2),
    [sym_poptag] = STATE(2),
    [sym_pushmeta] = STATE(2),
    [sym_popmeta] = STATE(2),
    [sym__dated_directives] = STATE(2),
    [sym_transaction] = STATE(2),
    [sym_balance] = STATE(2),
    [sym_close] = STATE(2),
    [sym_commodity] = STATE(2),
    [sym_custom] = STATE(2),
    [sym_document] = STATE(2),
    [sym_event] = STATE(2),
    [sym_note] = STATE(2),
    [sym_open] = STATE(2),
    [sym_pad] = STATE(2),
    [sym_price] = STATE(2),
    [sym_query] = STATE(2),
    [aux_sym_beancount_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_option] = ACTIONS(13),
    [anon_sym_plugin] = ACTIONS(15),
    [anon_sym_pushtag] = ACTIONS(17),
    [anon_sym_poptag] = ACTIONS(19),
    [anon_sym_pushmeta] = ACTIONS(21),
    [anon_sym_popmeta] = ACTIONS(23),
    [sym_date] = ACTIONS(25),
    [sym_flag] = ACTIONS(9),
  },
  [2] = {
    [sym_comment] = STATE(3),
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
    [ts_builtin_sym_end] = ACTIONS(27),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(29),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_option] = ACTIONS(13),
    [anon_sym_plugin] = ACTIONS(15),
    [anon_sym_pushtag] = ACTIONS(17),
    [anon_sym_poptag] = ACTIONS(19),
    [anon_sym_pushmeta] = ACTIONS(21),
    [anon_sym_popmeta] = ACTIONS(23),
    [sym_date] = ACTIONS(25),
    [sym_flag] = ACTIONS(9),
  },
  [3] = {
    [sym_comment] = STATE(3),
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
    [ts_builtin_sym_end] = ACTIONS(31),
    [aux_sym_comment_token1] = ACTIONS(33),
    [aux_sym_comment_token2] = ACTIONS(36),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_include] = ACTIONS(42),
    [anon_sym_option] = ACTIONS(45),
    [anon_sym_plugin] = ACTIONS(48),
    [anon_sym_pushtag] = ACTIONS(51),
    [anon_sym_poptag] = ACTIONS(54),
    [anon_sym_pushmeta] = ACTIONS(57),
    [anon_sym_popmeta] = ACTIONS(60),
    [sym_date] = ACTIONS(63),
    [sym_flag] = ACTIONS(39),
  },
  [4] = {
    [sym_key_value_line] = STATE(137),
    [sym_metadata] = STATE(213),
    [sym_amount] = STATE(10),
    [sym__num_expr] = STATE(44),
    [sym__paren_num_expr] = STATE(44),
    [sym_unary_num_expr] = STATE(44),
    [sym_binary_num_expr] = STATE(44),
    [aux_sym_metadata_repeat1] = STATE(137),
    [aux_sym_custom_repeat1] = STATE(10),
    [aux_sym_comment_token2] = ACTIONS(66),
    [aux_sym_key_value_line_token1] = ACTIONS(68),
    [anon_sym_LPAREN] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_PLUS] = ACTIONS(72),
    [sym_bool] = ACTIONS(74),
    [sym_date] = ACTIONS(76),
    [sym_string] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [sym_account] = ACTIONS(76),
  },
  [5] = {
    [sym_key_value_line] = STATE(137),
    [sym_metadata] = STATE(221),
    [sym_amount] = STATE(4),
    [sym__num_expr] = STATE(44),
    [sym__paren_num_expr] = STATE(44),
    [sym_unary_num_expr] = STATE(44),
    [sym_binary_num_expr] = STATE(44),
    [aux_sym_metadata_repeat1] = STATE(137),
    [aux_sym_custom_repeat1] = STATE(4),
    [aux_sym_comment_token2] = ACTIONS(80),
    [aux_sym_key_value_line_token1] = ACTIONS(68),
    [anon_sym_LPAREN] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_PLUS] = ACTIONS(72),
    [sym_bool] = ACTIONS(82),
    [sym_date] = ACTIONS(84),
    [sym_string] = ACTIONS(84),
    [sym_number] = ACTIONS(78),
    [sym_account] = ACTIONS(84),
  },
  [6] = {
    [sym_key_value_value] = STATE(146),
    [sym_amount] = STATE(145),
    [sym__num_expr] = STATE(98),
    [sym__paren_num_expr] = STATE(98),
    [sym_unary_num_expr] = STATE(98),
    [sym_binary_num_expr] = STATE(98),
    [aux_sym_comment_token2] = ACTIONS(86),
    [aux_sym_key_value_line_token1] = ACTIONS(88),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_DASH] = ACTIONS(92),
    [anon_sym_PLUS] = ACTIONS(92),
    [sym_bool] = ACTIONS(94),
    [sym_date] = ACTIONS(96),
    [sym_tag] = ACTIONS(96),
    [sym_string] = ACTIONS(96),
    [sym_currency] = ACTIONS(94),
    [sym_number] = ACTIONS(98),
    [sym_account] = ACTIONS(96),
  },
  [7] = {
    [sym_cost_spec] = STATE(113),
    [sym_incomplete_amount] = STATE(78),
    [sym_price_annotation] = STATE(158),
    [sym__num_expr] = STATE(68),
    [sym__paren_num_expr] = STATE(68),
    [sym_unary_num_expr] = STATE(68),
    [sym_binary_num_expr] = STATE(68),
    [aux_sym_comment_token2] = ACTIONS(100),
    [aux_sym_key_value_line_token1] = ACTIONS(102),
    [anon_sym_LBRACE] = ACTIONS(104),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(106),
    [anon_sym_AT_AT] = ACTIONS(108),
    [anon_sym_AT] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_DASH] = ACTIONS(92),
    [anon_sym_PLUS] = ACTIONS(92),
    [sym_currency] = ACTIONS(112),
    [sym_number] = ACTIONS(114),
  },
  [8] = {
    [sym_cost_spec] = STATE(115),
    [sym_incomplete_amount] = STATE(83),
    [sym_price_annotation] = STATE(143),
    [sym__num_expr] = STATE(68),
    [sym__paren_num_expr] = STATE(68),
    [sym_unary_num_expr] = STATE(68),
    [sym_binary_num_expr] = STATE(68),
    [aux_sym_comment_token2] = ACTIONS(116),
    [aux_sym_key_value_line_token1] = ACTIONS(118),
    [anon_sym_LBRACE] = ACTIONS(104),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(106),
    [anon_sym_AT_AT] = ACTIONS(108),
    [anon_sym_AT] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_DASH] = ACTIONS(92),
    [anon_sym_PLUS] = ACTIONS(92),
    [sym_currency] = ACTIONS(112),
    [sym_number] = ACTIONS(114),
  },
  [9] = {
    [sym_key_value_value] = STATE(187),
    [sym_amount] = STATE(186),
    [sym__num_expr] = STATE(103),
    [sym__paren_num_expr] = STATE(103),
    [sym_unary_num_expr] = STATE(103),
    [sym_binary_num_expr] = STATE(103),
    [aux_sym_comment_token2] = ACTIONS(88),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(122),
    [sym_bool] = ACTIONS(124),
    [sym_date] = ACTIONS(126),
    [sym_tag] = ACTIONS(126),
    [sym_string] = ACTIONS(126),
    [sym_currency] = ACTIONS(124),
    [sym_number] = ACTIONS(128),
    [sym_account] = ACTIONS(126),
  },
  [10] = {
    [sym_amount] = STATE(10),
    [sym__num_expr] = STATE(44),
    [sym__paren_num_expr] = STATE(44),
    [sym_unary_num_expr] = STATE(44),
    [sym_binary_num_expr] = STATE(44),
    [aux_sym_custom_repeat1] = STATE(10),
    [aux_sym_comment_token2] = ACTIONS(130),
    [aux_sym_key_value_line_token1] = ACTIONS(132),
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(137),
    [anon_sym_PLUS] = ACTIONS(137),
    [sym_bool] = ACTIONS(140),
    [sym_date] = ACTIONS(143),
    [sym_string] = ACTIONS(143),
    [sym_number] = ACTIONS(146),
    [sym_account] = ACTIONS(143),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [aux_sym_comment_token1] = ACTIONS(149),
    [aux_sym_comment_token2] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(149),
    [anon_sym_include] = ACTIONS(149),
    [anon_sym_option] = ACTIONS(149),
    [anon_sym_plugin] = ACTIONS(149),
    [anon_sym_pushtag] = ACTIONS(149),
    [anon_sym_poptag] = ACTIONS(149),
    [anon_sym_pushmeta] = ACTIONS(149),
    [anon_sym_popmeta] = ACTIONS(149),
    [sym_date] = ACTIONS(149),
    [sym_flag] = ACTIONS(149),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [aux_sym_comment_token1] = ACTIONS(151),
    [aux_sym_comment_token2] = ACTIONS(151),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_include] = ACTIONS(151),
    [anon_sym_option] = ACTIONS(151),
    [anon_sym_plugin] = ACTIONS(151),
    [anon_sym_pushtag] = ACTIONS(151),
    [anon_sym_poptag] = ACTIONS(151),
    [anon_sym_pushmeta] = ACTIONS(151),
    [anon_sym_popmeta] = ACTIONS(151),
    [sym_date] = ACTIONS(151),
    [sym_flag] = ACTIONS(151),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [aux_sym_comment_token1] = ACTIONS(153),
    [aux_sym_comment_token2] = ACTIONS(153),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_include] = ACTIONS(153),
    [anon_sym_option] = ACTIONS(153),
    [anon_sym_plugin] = ACTIONS(153),
    [anon_sym_pushtag] = ACTIONS(153),
    [anon_sym_poptag] = ACTIONS(153),
    [anon_sym_pushmeta] = ACTIONS(153),
    [anon_sym_popmeta] = ACTIONS(153),
    [sym_date] = ACTIONS(153),
    [sym_flag] = ACTIONS(153),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [aux_sym_comment_token1] = ACTIONS(155),
    [aux_sym_comment_token2] = ACTIONS(155),
    [anon_sym_COLON] = ACTIONS(155),
    [anon_sym_include] = ACTIONS(155),
    [anon_sym_option] = ACTIONS(155),
    [anon_sym_plugin] = ACTIONS(155),
    [anon_sym_pushtag] = ACTIONS(155),
    [anon_sym_poptag] = ACTIONS(155),
    [anon_sym_pushmeta] = ACTIONS(155),
    [anon_sym_popmeta] = ACTIONS(155),
    [sym_date] = ACTIONS(155),
    [sym_flag] = ACTIONS(155),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(157),
    [aux_sym_comment_token1] = ACTIONS(157),
    [aux_sym_comment_token2] = ACTIONS(157),
    [anon_sym_COLON] = ACTIONS(157),
    [anon_sym_include] = ACTIONS(157),
    [anon_sym_option] = ACTIONS(157),
    [anon_sym_plugin] = ACTIONS(157),
    [anon_sym_pushtag] = ACTIONS(157),
    [anon_sym_poptag] = ACTIONS(157),
    [anon_sym_pushmeta] = ACTIONS(157),
    [anon_sym_popmeta] = ACTIONS(157),
    [sym_date] = ACTIONS(157),
    [sym_flag] = ACTIONS(157),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [aux_sym_comment_token1] = ACTIONS(159),
    [aux_sym_comment_token2] = ACTIONS(159),
    [anon_sym_COLON] = ACTIONS(159),
    [anon_sym_include] = ACTIONS(159),
    [anon_sym_option] = ACTIONS(159),
    [anon_sym_plugin] = ACTIONS(159),
    [anon_sym_pushtag] = ACTIONS(159),
    [anon_sym_poptag] = ACTIONS(159),
    [anon_sym_pushmeta] = ACTIONS(159),
    [anon_sym_popmeta] = ACTIONS(159),
    [sym_date] = ACTIONS(159),
    [sym_flag] = ACTIONS(159),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [aux_sym_comment_token1] = ACTIONS(161),
    [aux_sym_comment_token2] = ACTIONS(161),
    [anon_sym_COLON] = ACTIONS(161),
    [anon_sym_include] = ACTIONS(161),
    [anon_sym_option] = ACTIONS(161),
    [anon_sym_plugin] = ACTIONS(161),
    [anon_sym_pushtag] = ACTIONS(161),
    [anon_sym_poptag] = ACTIONS(161),
    [anon_sym_pushmeta] = ACTIONS(161),
    [anon_sym_popmeta] = ACTIONS(161),
    [sym_date] = ACTIONS(161),
    [sym_flag] = ACTIONS(161),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [aux_sym_comment_token1] = ACTIONS(163),
    [aux_sym_comment_token2] = ACTIONS(163),
    [anon_sym_COLON] = ACTIONS(163),
    [anon_sym_include] = ACTIONS(163),
    [anon_sym_option] = ACTIONS(163),
    [anon_sym_plugin] = ACTIONS(163),
    [anon_sym_pushtag] = ACTIONS(163),
    [anon_sym_poptag] = ACTIONS(163),
    [anon_sym_pushmeta] = ACTIONS(163),
    [anon_sym_popmeta] = ACTIONS(163),
    [sym_date] = ACTIONS(163),
    [sym_flag] = ACTIONS(163),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [aux_sym_comment_token1] = ACTIONS(165),
    [aux_sym_comment_token2] = ACTIONS(165),
    [anon_sym_COLON] = ACTIONS(165),
    [anon_sym_include] = ACTIONS(165),
    [anon_sym_option] = ACTIONS(165),
    [anon_sym_plugin] = ACTIONS(165),
    [anon_sym_pushtag] = ACTIONS(165),
    [anon_sym_poptag] = ACTIONS(165),
    [anon_sym_pushmeta] = ACTIONS(165),
    [anon_sym_popmeta] = ACTIONS(165),
    [sym_date] = ACTIONS(165),
    [sym_flag] = ACTIONS(165),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [aux_sym_comment_token1] = ACTIONS(167),
    [aux_sym_comment_token2] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(167),
    [anon_sym_include] = ACTIONS(167),
    [anon_sym_option] = ACTIONS(167),
    [anon_sym_plugin] = ACTIONS(167),
    [anon_sym_pushtag] = ACTIONS(167),
    [anon_sym_poptag] = ACTIONS(167),
    [anon_sym_pushmeta] = ACTIONS(167),
    [anon_sym_popmeta] = ACTIONS(167),
    [sym_date] = ACTIONS(167),
    [sym_flag] = ACTIONS(167),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [aux_sym_comment_token1] = ACTIONS(169),
    [aux_sym_comment_token2] = ACTIONS(169),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_include] = ACTIONS(169),
    [anon_sym_option] = ACTIONS(169),
    [anon_sym_plugin] = ACTIONS(169),
    [anon_sym_pushtag] = ACTIONS(169),
    [anon_sym_poptag] = ACTIONS(169),
    [anon_sym_pushmeta] = ACTIONS(169),
    [anon_sym_popmeta] = ACTIONS(169),
    [sym_date] = ACTIONS(169),
    [sym_flag] = ACTIONS(169),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [aux_sym_comment_token1] = ACTIONS(171),
    [aux_sym_comment_token2] = ACTIONS(171),
    [anon_sym_COLON] = ACTIONS(171),
    [anon_sym_include] = ACTIONS(171),
    [anon_sym_option] = ACTIONS(171),
    [anon_sym_plugin] = ACTIONS(171),
    [anon_sym_pushtag] = ACTIONS(171),
    [anon_sym_poptag] = ACTIONS(171),
    [anon_sym_pushmeta] = ACTIONS(171),
    [anon_sym_popmeta] = ACTIONS(171),
    [sym_date] = ACTIONS(171),
    [sym_flag] = ACTIONS(171),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [aux_sym_comment_token1] = ACTIONS(173),
    [aux_sym_comment_token2] = ACTIONS(173),
    [anon_sym_COLON] = ACTIONS(173),
    [anon_sym_include] = ACTIONS(173),
    [anon_sym_option] = ACTIONS(173),
    [anon_sym_plugin] = ACTIONS(173),
    [anon_sym_pushtag] = ACTIONS(173),
    [anon_sym_poptag] = ACTIONS(173),
    [anon_sym_pushmeta] = ACTIONS(173),
    [anon_sym_popmeta] = ACTIONS(173),
    [sym_date] = ACTIONS(173),
    [sym_flag] = ACTIONS(173),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [aux_sym_comment_token1] = ACTIONS(175),
    [aux_sym_comment_token2] = ACTIONS(175),
    [anon_sym_COLON] = ACTIONS(175),
    [anon_sym_include] = ACTIONS(175),
    [anon_sym_option] = ACTIONS(175),
    [anon_sym_plugin] = ACTIONS(175),
    [anon_sym_pushtag] = ACTIONS(175),
    [anon_sym_poptag] = ACTIONS(175),
    [anon_sym_pushmeta] = ACTIONS(175),
    [anon_sym_popmeta] = ACTIONS(175),
    [sym_date] = ACTIONS(175),
    [sym_flag] = ACTIONS(175),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [aux_sym_comment_token1] = ACTIONS(177),
    [aux_sym_comment_token2] = ACTIONS(177),
    [anon_sym_COLON] = ACTIONS(177),
    [anon_sym_include] = ACTIONS(177),
    [anon_sym_option] = ACTIONS(177),
    [anon_sym_plugin] = ACTIONS(177),
    [anon_sym_pushtag] = ACTIONS(177),
    [anon_sym_poptag] = ACTIONS(177),
    [anon_sym_pushmeta] = ACTIONS(177),
    [anon_sym_popmeta] = ACTIONS(177),
    [sym_date] = ACTIONS(177),
    [sym_flag] = ACTIONS(177),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [aux_sym_comment_token1] = ACTIONS(179),
    [aux_sym_comment_token2] = ACTIONS(179),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_include] = ACTIONS(179),
    [anon_sym_option] = ACTIONS(179),
    [anon_sym_plugin] = ACTIONS(179),
    [anon_sym_pushtag] = ACTIONS(179),
    [anon_sym_poptag] = ACTIONS(179),
    [anon_sym_pushmeta] = ACTIONS(179),
    [anon_sym_popmeta] = ACTIONS(179),
    [sym_date] = ACTIONS(179),
    [sym_flag] = ACTIONS(179),
  },
  [27] = {
    [aux_sym_comment_token2] = ACTIONS(181),
    [aux_sym_key_value_line_token1] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_PLUS] = ACTIONS(183),
    [anon_sym_STAR] = ACTIONS(183),
    [anon_sym_SLASH] = ACTIONS(183),
    [sym_bool] = ACTIONS(181),
    [sym_date] = ACTIONS(183),
    [sym_string] = ACTIONS(183),
    [sym_currency] = ACTIONS(181),
    [sym_number] = ACTIONS(181),
    [sym_account] = ACTIONS(183),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [aux_sym_comment_token1] = ACTIONS(185),
    [aux_sym_comment_token2] = ACTIONS(185),
    [anon_sym_COLON] = ACTIONS(185),
    [anon_sym_include] = ACTIONS(185),
    [anon_sym_option] = ACTIONS(185),
    [anon_sym_plugin] = ACTIONS(185),
    [anon_sym_pushtag] = ACTIONS(185),
    [anon_sym_poptag] = ACTIONS(185),
    [anon_sym_pushmeta] = ACTIONS(185),
    [anon_sym_popmeta] = ACTIONS(185),
    [sym_date] = ACTIONS(185),
    [sym_flag] = ACTIONS(185),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [aux_sym_comment_token1] = ACTIONS(187),
    [aux_sym_comment_token2] = ACTIONS(187),
    [anon_sym_COLON] = ACTIONS(187),
    [anon_sym_include] = ACTIONS(187),
    [anon_sym_option] = ACTIONS(187),
    [anon_sym_plugin] = ACTIONS(187),
    [anon_sym_pushtag] = ACTIONS(187),
    [anon_sym_poptag] = ACTIONS(187),
    [anon_sym_pushmeta] = ACTIONS(187),
    [anon_sym_popmeta] = ACTIONS(187),
    [sym_date] = ACTIONS(187),
    [sym_flag] = ACTIONS(187),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [aux_sym_comment_token1] = ACTIONS(189),
    [aux_sym_comment_token2] = ACTIONS(189),
    [anon_sym_COLON] = ACTIONS(189),
    [anon_sym_include] = ACTIONS(189),
    [anon_sym_option] = ACTIONS(189),
    [anon_sym_plugin] = ACTIONS(189),
    [anon_sym_pushtag] = ACTIONS(189),
    [anon_sym_poptag] = ACTIONS(189),
    [anon_sym_pushmeta] = ACTIONS(189),
    [anon_sym_popmeta] = ACTIONS(189),
    [sym_date] = ACTIONS(189),
    [sym_flag] = ACTIONS(189),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [aux_sym_comment_token1] = ACTIONS(191),
    [aux_sym_comment_token2] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(191),
    [anon_sym_include] = ACTIONS(191),
    [anon_sym_option] = ACTIONS(191),
    [anon_sym_plugin] = ACTIONS(191),
    [anon_sym_pushtag] = ACTIONS(191),
    [anon_sym_poptag] = ACTIONS(191),
    [anon_sym_pushmeta] = ACTIONS(191),
    [anon_sym_popmeta] = ACTIONS(191),
    [sym_date] = ACTIONS(191),
    [sym_flag] = ACTIONS(191),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [aux_sym_comment_token1] = ACTIONS(193),
    [aux_sym_comment_token2] = ACTIONS(193),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_include] = ACTIONS(193),
    [anon_sym_option] = ACTIONS(193),
    [anon_sym_plugin] = ACTIONS(193),
    [anon_sym_pushtag] = ACTIONS(193),
    [anon_sym_poptag] = ACTIONS(193),
    [anon_sym_pushmeta] = ACTIONS(193),
    [anon_sym_popmeta] = ACTIONS(193),
    [sym_date] = ACTIONS(193),
    [sym_flag] = ACTIONS(193),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [aux_sym_comment_token1] = ACTIONS(195),
    [aux_sym_comment_token2] = ACTIONS(195),
    [anon_sym_COLON] = ACTIONS(195),
    [anon_sym_include] = ACTIONS(195),
    [anon_sym_option] = ACTIONS(195),
    [anon_sym_plugin] = ACTIONS(195),
    [anon_sym_pushtag] = ACTIONS(195),
    [anon_sym_poptag] = ACTIONS(195),
    [anon_sym_pushmeta] = ACTIONS(195),
    [anon_sym_popmeta] = ACTIONS(195),
    [sym_date] = ACTIONS(195),
    [sym_flag] = ACTIONS(195),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [aux_sym_comment_token1] = ACTIONS(197),
    [aux_sym_comment_token2] = ACTIONS(197),
    [anon_sym_COLON] = ACTIONS(197),
    [anon_sym_include] = ACTIONS(197),
    [anon_sym_option] = ACTIONS(197),
    [anon_sym_plugin] = ACTIONS(197),
    [anon_sym_pushtag] = ACTIONS(197),
    [anon_sym_poptag] = ACTIONS(197),
    [anon_sym_pushmeta] = ACTIONS(197),
    [anon_sym_popmeta] = ACTIONS(197),
    [sym_date] = ACTIONS(197),
    [sym_flag] = ACTIONS(197),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [aux_sym_comment_token1] = ACTIONS(199),
    [aux_sym_comment_token2] = ACTIONS(199),
    [anon_sym_COLON] = ACTIONS(199),
    [anon_sym_include] = ACTIONS(199),
    [anon_sym_option] = ACTIONS(199),
    [anon_sym_plugin] = ACTIONS(199),
    [anon_sym_pushtag] = ACTIONS(199),
    [anon_sym_poptag] = ACTIONS(199),
    [anon_sym_pushmeta] = ACTIONS(199),
    [anon_sym_popmeta] = ACTIONS(199),
    [sym_date] = ACTIONS(199),
    [sym_flag] = ACTIONS(199),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [aux_sym_comment_token1] = ACTIONS(201),
    [aux_sym_comment_token2] = ACTIONS(201),
    [anon_sym_COLON] = ACTIONS(201),
    [anon_sym_include] = ACTIONS(201),
    [anon_sym_option] = ACTIONS(201),
    [anon_sym_plugin] = ACTIONS(201),
    [anon_sym_pushtag] = ACTIONS(201),
    [anon_sym_poptag] = ACTIONS(201),
    [anon_sym_pushmeta] = ACTIONS(201),
    [anon_sym_popmeta] = ACTIONS(201),
    [sym_date] = ACTIONS(201),
    [sym_flag] = ACTIONS(201),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [aux_sym_comment_token1] = ACTIONS(203),
    [aux_sym_comment_token2] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(203),
    [anon_sym_include] = ACTIONS(203),
    [anon_sym_option] = ACTIONS(203),
    [anon_sym_plugin] = ACTIONS(203),
    [anon_sym_pushtag] = ACTIONS(203),
    [anon_sym_poptag] = ACTIONS(203),
    [anon_sym_pushmeta] = ACTIONS(203),
    [anon_sym_popmeta] = ACTIONS(203),
    [sym_date] = ACTIONS(203),
    [sym_flag] = ACTIONS(203),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [aux_sym_comment_token1] = ACTIONS(205),
    [aux_sym_comment_token2] = ACTIONS(205),
    [anon_sym_COLON] = ACTIONS(205),
    [anon_sym_include] = ACTIONS(205),
    [anon_sym_option] = ACTIONS(205),
    [anon_sym_plugin] = ACTIONS(205),
    [anon_sym_pushtag] = ACTIONS(205),
    [anon_sym_poptag] = ACTIONS(205),
    [anon_sym_pushmeta] = ACTIONS(205),
    [anon_sym_popmeta] = ACTIONS(205),
    [sym_date] = ACTIONS(205),
    [sym_flag] = ACTIONS(205),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(207),
    [aux_sym_comment_token2] = ACTIONS(207),
    [anon_sym_COLON] = ACTIONS(207),
    [anon_sym_include] = ACTIONS(207),
    [anon_sym_option] = ACTIONS(207),
    [anon_sym_plugin] = ACTIONS(207),
    [anon_sym_pushtag] = ACTIONS(207),
    [anon_sym_poptag] = ACTIONS(207),
    [anon_sym_pushmeta] = ACTIONS(207),
    [anon_sym_popmeta] = ACTIONS(207),
    [sym_date] = ACTIONS(207),
    [sym_flag] = ACTIONS(207),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [aux_sym_comment_token1] = ACTIONS(209),
    [aux_sym_comment_token2] = ACTIONS(209),
    [anon_sym_COLON] = ACTIONS(209),
    [anon_sym_include] = ACTIONS(209),
    [anon_sym_option] = ACTIONS(209),
    [anon_sym_plugin] = ACTIONS(209),
    [anon_sym_pushtag] = ACTIONS(209),
    [anon_sym_poptag] = ACTIONS(209),
    [anon_sym_pushmeta] = ACTIONS(209),
    [anon_sym_popmeta] = ACTIONS(209),
    [sym_date] = ACTIONS(209),
    [sym_flag] = ACTIONS(209),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [aux_sym_comment_token1] = ACTIONS(211),
    [aux_sym_comment_token2] = ACTIONS(211),
    [anon_sym_COLON] = ACTIONS(211),
    [anon_sym_include] = ACTIONS(211),
    [anon_sym_option] = ACTIONS(211),
    [anon_sym_plugin] = ACTIONS(211),
    [anon_sym_pushtag] = ACTIONS(211),
    [anon_sym_poptag] = ACTIONS(211),
    [anon_sym_pushmeta] = ACTIONS(211),
    [anon_sym_popmeta] = ACTIONS(211),
    [sym_date] = ACTIONS(211),
    [sym_flag] = ACTIONS(211),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [aux_sym_comment_token1] = ACTIONS(213),
    [aux_sym_comment_token2] = ACTIONS(213),
    [anon_sym_COLON] = ACTIONS(213),
    [anon_sym_include] = ACTIONS(213),
    [anon_sym_option] = ACTIONS(213),
    [anon_sym_plugin] = ACTIONS(213),
    [anon_sym_pushtag] = ACTIONS(213),
    [anon_sym_poptag] = ACTIONS(213),
    [anon_sym_pushmeta] = ACTIONS(213),
    [anon_sym_popmeta] = ACTIONS(213),
    [sym_date] = ACTIONS(213),
    [sym_flag] = ACTIONS(213),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(215),
    [aux_sym_comment_token1] = ACTIONS(215),
    [aux_sym_comment_token2] = ACTIONS(215),
    [anon_sym_COLON] = ACTIONS(215),
    [anon_sym_include] = ACTIONS(215),
    [anon_sym_option] = ACTIONS(215),
    [anon_sym_plugin] = ACTIONS(215),
    [anon_sym_pushtag] = ACTIONS(215),
    [anon_sym_poptag] = ACTIONS(215),
    [anon_sym_pushmeta] = ACTIONS(215),
    [anon_sym_popmeta] = ACTIONS(215),
    [sym_date] = ACTIONS(215),
    [sym_flag] = ACTIONS(215),
  },
  [44] = {
    [aux_sym_comment_token2] = ACTIONS(217),
    [aux_sym_key_value_line_token1] = ACTIONS(219),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_PLUS] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(223),
    [sym_bool] = ACTIONS(217),
    [sym_date] = ACTIONS(219),
    [sym_string] = ACTIONS(219),
    [sym_currency] = ACTIONS(225),
    [sym_number] = ACTIONS(217),
    [sym_account] = ACTIONS(219),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(227),
    [aux_sym_comment_token1] = ACTIONS(227),
    [aux_sym_comment_token2] = ACTIONS(227),
    [anon_sym_COLON] = ACTIONS(227),
    [anon_sym_include] = ACTIONS(227),
    [anon_sym_option] = ACTIONS(227),
    [anon_sym_plugin] = ACTIONS(227),
    [anon_sym_pushtag] = ACTIONS(227),
    [anon_sym_poptag] = ACTIONS(227),
    [anon_sym_pushmeta] = ACTIONS(227),
    [anon_sym_popmeta] = ACTIONS(227),
    [sym_date] = ACTIONS(227),
    [sym_flag] = ACTIONS(227),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(229),
    [aux_sym_comment_token1] = ACTIONS(229),
    [aux_sym_comment_token2] = ACTIONS(229),
    [anon_sym_COLON] = ACTIONS(229),
    [anon_sym_include] = ACTIONS(229),
    [anon_sym_option] = ACTIONS(229),
    [anon_sym_plugin] = ACTIONS(229),
    [anon_sym_pushtag] = ACTIONS(229),
    [anon_sym_poptag] = ACTIONS(229),
    [anon_sym_pushmeta] = ACTIONS(229),
    [anon_sym_popmeta] = ACTIONS(229),
    [sym_date] = ACTIONS(229),
    [sym_flag] = ACTIONS(229),
  },
  [47] = {
    [aux_sym_comment_token2] = ACTIONS(231),
    [aux_sym_key_value_line_token1] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_STAR] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(233),
    [sym_bool] = ACTIONS(231),
    [sym_date] = ACTIONS(233),
    [sym_string] = ACTIONS(233),
    [sym_currency] = ACTIONS(231),
    [sym_number] = ACTIONS(231),
    [sym_account] = ACTIONS(233),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(235),
    [aux_sym_comment_token1] = ACTIONS(235),
    [aux_sym_comment_token2] = ACTIONS(235),
    [anon_sym_COLON] = ACTIONS(235),
    [anon_sym_include] = ACTIONS(235),
    [anon_sym_option] = ACTIONS(235),
    [anon_sym_plugin] = ACTIONS(235),
    [anon_sym_pushtag] = ACTIONS(235),
    [anon_sym_poptag] = ACTIONS(235),
    [anon_sym_pushmeta] = ACTIONS(235),
    [anon_sym_popmeta] = ACTIONS(235),
    [sym_date] = ACTIONS(235),
    [sym_flag] = ACTIONS(235),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [aux_sym_comment_token1] = ACTIONS(237),
    [aux_sym_comment_token2] = ACTIONS(237),
    [anon_sym_COLON] = ACTIONS(237),
    [anon_sym_include] = ACTIONS(237),
    [anon_sym_option] = ACTIONS(237),
    [anon_sym_plugin] = ACTIONS(237),
    [anon_sym_pushtag] = ACTIONS(237),
    [anon_sym_poptag] = ACTIONS(237),
    [anon_sym_pushmeta] = ACTIONS(237),
    [anon_sym_popmeta] = ACTIONS(237),
    [sym_date] = ACTIONS(237),
    [sym_flag] = ACTIONS(237),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [aux_sym_comment_token1] = ACTIONS(239),
    [aux_sym_comment_token2] = ACTIONS(239),
    [anon_sym_COLON] = ACTIONS(239),
    [anon_sym_include] = ACTIONS(239),
    [anon_sym_option] = ACTIONS(239),
    [anon_sym_plugin] = ACTIONS(239),
    [anon_sym_pushtag] = ACTIONS(239),
    [anon_sym_poptag] = ACTIONS(239),
    [anon_sym_pushmeta] = ACTIONS(239),
    [anon_sym_popmeta] = ACTIONS(239),
    [sym_date] = ACTIONS(239),
    [sym_flag] = ACTIONS(239),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(241),
    [aux_sym_comment_token1] = ACTIONS(241),
    [aux_sym_comment_token2] = ACTIONS(241),
    [anon_sym_COLON] = ACTIONS(241),
    [anon_sym_include] = ACTIONS(241),
    [anon_sym_option] = ACTIONS(241),
    [anon_sym_plugin] = ACTIONS(241),
    [anon_sym_pushtag] = ACTIONS(241),
    [anon_sym_poptag] = ACTIONS(241),
    [anon_sym_pushmeta] = ACTIONS(241),
    [anon_sym_popmeta] = ACTIONS(241),
    [sym_date] = ACTIONS(241),
    [sym_flag] = ACTIONS(241),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(243),
    [aux_sym_comment_token1] = ACTIONS(243),
    [aux_sym_comment_token2] = ACTIONS(243),
    [anon_sym_COLON] = ACTIONS(243),
    [anon_sym_include] = ACTIONS(243),
    [anon_sym_option] = ACTIONS(243),
    [anon_sym_plugin] = ACTIONS(243),
    [anon_sym_pushtag] = ACTIONS(243),
    [anon_sym_poptag] = ACTIONS(243),
    [anon_sym_pushmeta] = ACTIONS(243),
    [anon_sym_popmeta] = ACTIONS(243),
    [sym_date] = ACTIONS(243),
    [sym_flag] = ACTIONS(243),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(245),
    [aux_sym_comment_token1] = ACTIONS(245),
    [aux_sym_comment_token2] = ACTIONS(245),
    [anon_sym_COLON] = ACTIONS(245),
    [anon_sym_include] = ACTIONS(245),
    [anon_sym_option] = ACTIONS(245),
    [anon_sym_plugin] = ACTIONS(245),
    [anon_sym_pushtag] = ACTIONS(245),
    [anon_sym_poptag] = ACTIONS(245),
    [anon_sym_pushmeta] = ACTIONS(245),
    [anon_sym_popmeta] = ACTIONS(245),
    [sym_date] = ACTIONS(245),
    [sym_flag] = ACTIONS(245),
  },
  [54] = {
    [aux_sym_comment_token2] = ACTIONS(247),
    [aux_sym_key_value_line_token1] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(249),
    [sym_bool] = ACTIONS(247),
    [sym_date] = ACTIONS(249),
    [sym_string] = ACTIONS(249),
    [sym_currency] = ACTIONS(247),
    [sym_number] = ACTIONS(247),
    [sym_account] = ACTIONS(249),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(251),
    [aux_sym_comment_token1] = ACTIONS(251),
    [aux_sym_comment_token2] = ACTIONS(251),
    [anon_sym_COLON] = ACTIONS(251),
    [anon_sym_include] = ACTIONS(251),
    [anon_sym_option] = ACTIONS(251),
    [anon_sym_plugin] = ACTIONS(251),
    [anon_sym_pushtag] = ACTIONS(251),
    [anon_sym_poptag] = ACTIONS(251),
    [anon_sym_pushmeta] = ACTIONS(251),
    [anon_sym_popmeta] = ACTIONS(251),
    [sym_date] = ACTIONS(251),
    [sym_flag] = ACTIONS(251),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [aux_sym_comment_token1] = ACTIONS(253),
    [aux_sym_comment_token2] = ACTIONS(253),
    [anon_sym_COLON] = ACTIONS(253),
    [anon_sym_include] = ACTIONS(253),
    [anon_sym_option] = ACTIONS(253),
    [anon_sym_plugin] = ACTIONS(253),
    [anon_sym_pushtag] = ACTIONS(253),
    [anon_sym_poptag] = ACTIONS(253),
    [anon_sym_pushmeta] = ACTIONS(253),
    [anon_sym_popmeta] = ACTIONS(253),
    [sym_date] = ACTIONS(253),
    [sym_flag] = ACTIONS(253),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(255),
    [aux_sym_comment_token1] = ACTIONS(255),
    [aux_sym_comment_token2] = ACTIONS(255),
    [anon_sym_COLON] = ACTIONS(255),
    [anon_sym_include] = ACTIONS(255),
    [anon_sym_option] = ACTIONS(255),
    [anon_sym_plugin] = ACTIONS(255),
    [anon_sym_pushtag] = ACTIONS(255),
    [anon_sym_poptag] = ACTIONS(255),
    [anon_sym_pushmeta] = ACTIONS(255),
    [anon_sym_popmeta] = ACTIONS(255),
    [sym_date] = ACTIONS(255),
    [sym_flag] = ACTIONS(255),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(257),
    [aux_sym_comment_token1] = ACTIONS(257),
    [aux_sym_comment_token2] = ACTIONS(257),
    [anon_sym_COLON] = ACTIONS(257),
    [anon_sym_include] = ACTIONS(257),
    [anon_sym_option] = ACTIONS(257),
    [anon_sym_plugin] = ACTIONS(257),
    [anon_sym_pushtag] = ACTIONS(257),
    [anon_sym_poptag] = ACTIONS(257),
    [anon_sym_pushmeta] = ACTIONS(257),
    [anon_sym_popmeta] = ACTIONS(257),
    [sym_date] = ACTIONS(257),
    [sym_flag] = ACTIONS(257),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(259),
    [aux_sym_comment_token1] = ACTIONS(259),
    [aux_sym_comment_token2] = ACTIONS(259),
    [anon_sym_COLON] = ACTIONS(259),
    [anon_sym_include] = ACTIONS(259),
    [anon_sym_option] = ACTIONS(259),
    [anon_sym_plugin] = ACTIONS(259),
    [anon_sym_pushtag] = ACTIONS(259),
    [anon_sym_poptag] = ACTIONS(259),
    [anon_sym_pushmeta] = ACTIONS(259),
    [anon_sym_popmeta] = ACTIONS(259),
    [sym_date] = ACTIONS(259),
    [sym_flag] = ACTIONS(259),
  },
  [60] = {
    [aux_sym_comment_token2] = ACTIONS(181),
    [aux_sym_key_value_line_token1] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_PLUS] = ACTIONS(183),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(223),
    [sym_bool] = ACTIONS(181),
    [sym_date] = ACTIONS(183),
    [sym_string] = ACTIONS(183),
    [sym_currency] = ACTIONS(181),
    [sym_number] = ACTIONS(181),
    [sym_account] = ACTIONS(183),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [aux_sym_comment_token1] = ACTIONS(261),
    [aux_sym_comment_token2] = ACTIONS(261),
    [anon_sym_COLON] = ACTIONS(261),
    [anon_sym_include] = ACTIONS(261),
    [anon_sym_option] = ACTIONS(261),
    [anon_sym_plugin] = ACTIONS(261),
    [anon_sym_pushtag] = ACTIONS(261),
    [anon_sym_poptag] = ACTIONS(261),
    [anon_sym_pushmeta] = ACTIONS(261),
    [anon_sym_popmeta] = ACTIONS(261),
    [sym_date] = ACTIONS(261),
    [sym_flag] = ACTIONS(261),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(263),
    [aux_sym_comment_token1] = ACTIONS(263),
    [aux_sym_comment_token2] = ACTIONS(263),
    [anon_sym_COLON] = ACTIONS(263),
    [anon_sym_include] = ACTIONS(263),
    [anon_sym_option] = ACTIONS(263),
    [anon_sym_plugin] = ACTIONS(263),
    [anon_sym_pushtag] = ACTIONS(263),
    [anon_sym_poptag] = ACTIONS(263),
    [anon_sym_pushmeta] = ACTIONS(263),
    [anon_sym_popmeta] = ACTIONS(263),
    [sym_date] = ACTIONS(263),
    [sym_flag] = ACTIONS(263),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(265),
    [aux_sym_comment_token1] = ACTIONS(265),
    [aux_sym_comment_token2] = ACTIONS(265),
    [anon_sym_COLON] = ACTIONS(265),
    [anon_sym_include] = ACTIONS(265),
    [anon_sym_option] = ACTIONS(265),
    [anon_sym_plugin] = ACTIONS(265),
    [anon_sym_pushtag] = ACTIONS(265),
    [anon_sym_poptag] = ACTIONS(265),
    [anon_sym_pushmeta] = ACTIONS(265),
    [anon_sym_popmeta] = ACTIONS(265),
    [sym_date] = ACTIONS(265),
    [sym_flag] = ACTIONS(265),
  },
  [64] = {
    [sym_incomplete_amount] = STATE(141),
    [sym__num_expr] = STATE(68),
    [sym__paren_num_expr] = STATE(68),
    [sym_unary_num_expr] = STATE(68),
    [sym_binary_num_expr] = STATE(68),
    [aux_sym_comment_token2] = ACTIONS(267),
    [aux_sym_key_value_line_token1] = ACTIONS(269),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_DASH] = ACTIONS(92),
    [anon_sym_PLUS] = ACTIONS(92),
    [sym_currency] = ACTIONS(112),
    [sym_number] = ACTIONS(114),
  },
  [65] = {
    [anon_sym_balance] = ACTIONS(271),
    [anon_sym_close] = ACTIONS(273),
    [anon_sym_commodity] = ACTIONS(275),
    [anon_sym_custom] = ACTIONS(277),
    [anon_sym_document] = ACTIONS(279),
    [anon_sym_event] = ACTIONS(281),
    [anon_sym_note] = ACTIONS(283),
    [anon_sym_open] = ACTIONS(285),
    [anon_sym_pad] = ACTIONS(287),
    [anon_sym_price] = ACTIONS(289),
    [anon_sym_query] = ACTIONS(291),
    [sym_flag] = ACTIONS(293),
  },
  [66] = {
    [sym_key_value_line] = STATE(102),
    [sym_posting] = STATE(134),
    [sym_postings] = STATE(219),
    [sym__tag_or_link] = STATE(75),
    [aux_sym_metadata_repeat1] = STATE(102),
    [aux_sym_postings_repeat1] = STATE(134),
    [aux_sym_transaction_repeat1] = STATE(75),
    [aux_sym_key_value_line_token1] = ACTIONS(295),
    [sym_tag] = ACTIONS(297),
    [sym_link] = ACTIONS(297),
    [sym_string] = ACTIONS(299),
  },
  [67] = {
    [aux_sym_comment_token2] = ACTIONS(181),
    [aux_sym_key_value_line_token1] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(183),
    [anon_sym_AT_AT] = ACTIONS(183),
    [anon_sym_AT] = ACTIONS(181),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_PLUS] = ACTIONS(183),
    [anon_sym_STAR] = ACTIONS(183),
    [anon_sym_SLASH] = ACTIONS(183),
    [sym_currency] = ACTIONS(183),
  },
  [68] = {
    [aux_sym_comment_token2] = ACTIONS(301),
    [aux_sym_key_value_line_token1] = ACTIONS(303),
    [anon_sym_LBRACE] = ACTIONS(301),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(303),
    [anon_sym_AT_AT] = ACTIONS(303),
    [anon_sym_AT] = ACTIONS(301),
    [anon_sym_DASH] = ACTIONS(305),
    [anon_sym_PLUS] = ACTIONS(305),
    [anon_sym_STAR] = ACTIONS(307),
    [anon_sym_SLASH] = ACTIONS(307),
    [sym_currency] = ACTIONS(309),
  },
  [69] = {
    [aux_sym_comment_token2] = ACTIONS(231),
    [aux_sym_key_value_line_token1] = ACTIONS(233),
    [anon_sym_LBRACE] = ACTIONS(231),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(233),
    [anon_sym_AT_AT] = ACTIONS(233),
    [anon_sym_AT] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_STAR] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(233),
    [sym_currency] = ACTIONS(233),
  },
  [70] = {
    [aux_sym_comment_token2] = ACTIONS(247),
    [aux_sym_key_value_line_token1] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(247),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(249),
    [anon_sym_AT_AT] = ACTIONS(249),
    [anon_sym_AT] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(249),
    [sym_currency] = ACTIONS(249),
  },
  [71] = {
    [aux_sym_comment_token2] = ACTIONS(181),
    [aux_sym_key_value_line_token1] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(183),
    [anon_sym_AT_AT] = ACTIONS(183),
    [anon_sym_AT] = ACTIONS(181),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_PLUS] = ACTIONS(183),
    [anon_sym_STAR] = ACTIONS(307),
    [anon_sym_SLASH] = ACTIONS(307),
    [sym_currency] = ACTIONS(183),
  },
  [72] = {
    [sym_amount] = STATE(120),
    [sym_amount_with_tolerance] = STATE(120),
    [sym__num_expr] = STATE(106),
    [sym__paren_num_expr] = STATE(106),
    [sym_unary_num_expr] = STATE(106),
    [sym_binary_num_expr] = STATE(106),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(122),
    [sym_number] = ACTIONS(311),
  },
  [73] = {
    [sym_key_value_line] = STATE(99),
    [sym_posting] = STATE(134),
    [sym_postings] = STATE(172),
    [sym__tag_or_link] = STATE(109),
    [aux_sym_metadata_repeat1] = STATE(99),
    [aux_sym_postings_repeat1] = STATE(134),
    [aux_sym_transaction_repeat1] = STATE(109),
    [aux_sym_key_value_line_token1] = ACTIONS(295),
    [sym_tag] = ACTIONS(313),
    [sym_link] = ACTIONS(313),
  },
  [74] = {
    [aux_sym_comment_token2] = ACTIONS(315),
    [aux_sym_key_value_line_token1] = ACTIONS(317),
    [anon_sym_LPAREN] = ACTIONS(317),
    [anon_sym_DASH] = ACTIONS(317),
    [anon_sym_PLUS] = ACTIONS(317),
    [sym_bool] = ACTIONS(315),
    [sym_date] = ACTIONS(317),
    [sym_string] = ACTIONS(317),
    [sym_number] = ACTIONS(315),
    [sym_account] = ACTIONS(317),
  },
  [75] = {
    [sym_key_value_line] = STATE(105),
    [sym_posting] = STATE(134),
    [sym_postings] = STATE(182),
    [sym__tag_or_link] = STATE(109),
    [aux_sym_metadata_repeat1] = STATE(105),
    [aux_sym_postings_repeat1] = STATE(134),
    [aux_sym_transaction_repeat1] = STATE(109),
    [aux_sym_key_value_line_token1] = ACTIONS(295),
    [sym_tag] = ACTIONS(313),
    [sym_link] = ACTIONS(313),
  },
  [76] = {
    [sym_key_value_line] = STATE(104),
    [sym_posting] = STATE(134),
    [sym_postings] = STATE(188),
    [sym__tag_or_link] = STATE(73),
    [aux_sym_metadata_repeat1] = STATE(104),
    [aux_sym_postings_repeat1] = STATE(134),
    [aux_sym_transaction_repeat1] = STATE(73),
    [aux_sym_key_value_line_token1] = ACTIONS(295),
    [sym_tag] = ACTIONS(319),
    [sym_link] = ACTIONS(319),
  },
  [77] = {
    [sym_amount] = STATE(111),
    [sym__num_expr] = STATE(112),
    [sym__paren_num_expr] = STATE(112),
    [sym_unary_num_expr] = STATE(112),
    [sym_binary_num_expr] = STATE(112),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(122),
    [sym_number] = ACTIONS(321),
  },
  [78] = {
    [sym_cost_spec] = STATE(125),
    [sym_price_annotation] = STATE(157),
    [aux_sym_comment_token2] = ACTIONS(323),
    [aux_sym_key_value_line_token1] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(104),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(106),
    [anon_sym_AT_AT] = ACTIONS(108),
    [anon_sym_AT] = ACTIONS(110),
  },
  [79] = {
    [sym__num_expr] = STATE(27),
    [sym__paren_num_expr] = STATE(27),
    [sym_unary_num_expr] = STATE(27),
    [sym_binary_num_expr] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_PLUS] = ACTIONS(72),
    [sym_number] = ACTIONS(327),
  },
  [80] = {
    [sym__num_expr] = STATE(116),
    [sym__paren_num_expr] = STATE(116),
    [sym_unary_num_expr] = STATE(116),
    [sym_binary_num_expr] = STATE(116),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(122),
    [sym_number] = ACTIONS(329),
  },
  [81] = {
    [sym__num_expr] = STATE(117),
    [sym__paren_num_expr] = STATE(117),
    [sym_unary_num_expr] = STATE(117),
    [sym_binary_num_expr] = STATE(117),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(122),
    [sym_number] = ACTIONS(331),
  },
  [82] = {
    [sym__num_expr] = STATE(67),
    [sym__paren_num_expr] = STATE(67),
    [sym_unary_num_expr] = STATE(67),
    [sym_binary_num_expr] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_DASH] = ACTIONS(92),
    [anon_sym_PLUS] = ACTIONS(92),
    [sym_number] = ACTIONS(333),
  },
  [83] = {
    [sym_cost_spec] = STATE(128),
    [sym_price_annotation] = STATE(153),
    [aux_sym_comment_token2] = ACTIONS(335),
    [aux_sym_key_value_line_token1] = ACTIONS(337),
    [anon_sym_LBRACE] = ACTIONS(104),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(106),
    [anon_sym_AT_AT] = ACTIONS(108),
    [anon_sym_AT] = ACTIONS(110),
  },
  [84] = {
    [sym__num_expr] = STATE(121),
    [sym__paren_num_expr] = STATE(121),
    [sym_unary_num_expr] = STATE(121),
    [sym_binary_num_expr] = STATE(121),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(122),
    [sym_number] = ACTIONS(339),
  },
  [85] = {
    [sym__num_expr] = STATE(118),
    [sym__paren_num_expr] = STATE(118),
    [sym_unary_num_expr] = STATE(118),
    [sym_binary_num_expr] = STATE(118),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(122),
    [sym_number] = ACTIONS(341),
  },
  [86] = {
    [sym__num_expr] = STATE(94),
    [sym__paren_num_expr] = STATE(94),
    [sym_unary_num_expr] = STATE(94),
    [sym_binary_num_expr] = STATE(94),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(122),
    [sym_number] = ACTIONS(343),
  },
  [87] = {
    [sym__num_expr] = STATE(69),
    [sym__paren_num_expr] = STATE(69),
    [sym_unary_num_expr] = STATE(69),
    [sym_binary_num_expr] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_DASH] = ACTIONS(92),
    [anon_sym_PLUS] = ACTIONS(92),
    [sym_number] = ACTIONS(345),
  },
  [88] = {
    [aux_sym_comment_token2] = ACTIONS(183),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_PLUS] = ACTIONS(183),
    [anon_sym_STAR] = ACTIONS(183),
    [anon_sym_SLASH] = ACTIONS(183),
    [sym_currency] = ACTIONS(183),
  },
  [89] = {
    [aux_sym_comment_token2] = ACTIONS(183),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_PLUS] = ACTIONS(183),
    [anon_sym_STAR] = ACTIONS(347),
    [anon_sym_SLASH] = ACTIONS(347),
    [sym_currency] = ACTIONS(183),
  },
  [90] = {
    [aux_sym_comment_token2] = ACTIONS(249),
    [anon_sym_TILDE] = ACTIONS(249),
    [anon_sym_RPAREN] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(249),
    [sym_currency] = ACTIONS(249),
  },
  [91] = {
    [sym__num_expr] = STATE(47),
    [sym__paren_num_expr] = STATE(47),
    [sym_unary_num_expr] = STATE(47),
    [sym_binary_num_expr] = STATE(47),
    [anon_sym_LPAREN] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_PLUS] = ACTIONS(72),
    [sym_number] = ACTIONS(349),
  },
  [92] = {
    [sym_key_value_line] = STATE(137),
    [sym_metadata] = STATE(220),
    [sym_currency_list] = STATE(100),
    [aux_sym_metadata_repeat1] = STATE(137),
    [aux_sym_comment_token2] = ACTIONS(351),
    [aux_sym_key_value_line_token1] = ACTIONS(68),
    [sym_string] = ACTIONS(353),
    [sym_currency] = ACTIONS(355),
  },
  [93] = {
    [sym__num_expr] = STATE(88),
    [sym__paren_num_expr] = STATE(88),
    [sym_unary_num_expr] = STATE(88),
    [sym_binary_num_expr] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(122),
    [sym_number] = ACTIONS(357),
  },
  [94] = {
    [aux_sym_comment_token2] = ACTIONS(233),
    [anon_sym_TILDE] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_STAR] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(233),
    [sym_currency] = ACTIONS(233),
  },
  [95] = {
    [sym__num_expr] = STATE(71),
    [sym__paren_num_expr] = STATE(71),
    [sym_unary_num_expr] = STATE(71),
    [sym_binary_num_expr] = STATE(71),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_DASH] = ACTIONS(92),
    [anon_sym_PLUS] = ACTIONS(92),
    [sym_number] = ACTIONS(359),
  },
  [96] = {
    [sym__num_expr] = STATE(89),
    [sym__paren_num_expr] = STATE(89),
    [sym_unary_num_expr] = STATE(89),
    [sym_binary_num_expr] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(122),
    [sym_number] = ACTIONS(361),
  },
  [97] = {
    [sym__num_expr] = STATE(60),
    [sym__paren_num_expr] = STATE(60),
    [sym_unary_num_expr] = STATE(60),
    [sym_binary_num_expr] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_PLUS] = ACTIONS(72),
    [sym_number] = ACTIONS(363),
  },
  [98] = {
    [aux_sym_comment_token2] = ACTIONS(365),
    [aux_sym_key_value_line_token1] = ACTIONS(367),
    [anon_sym_DASH] = ACTIONS(305),
    [anon_sym_PLUS] = ACTIONS(305),
    [anon_sym_STAR] = ACTIONS(307),
    [anon_sym_SLASH] = ACTIONS(307),
    [sym_currency] = ACTIONS(369),
  },
  [99] = {
    [sym_key_value_line] = STATE(138),
    [sym_posting] = STATE(134),
    [sym_postings] = STATE(192),
    [aux_sym_metadata_repeat1] = STATE(138),
    [aux_sym_postings_repeat1] = STATE(134),
    [aux_sym_key_value_line_token1] = ACTIONS(295),
  },
  [100] = {
    [sym_key_value_line] = STATE(137),
    [sym_metadata] = STATE(197),
    [aux_sym_metadata_repeat1] = STATE(137),
    [aux_sym_comment_token2] = ACTIONS(371),
    [aux_sym_key_value_line_token1] = ACTIONS(68),
    [sym_string] = ACTIONS(373),
  },
  [101] = {
    [aux_sym_comment_token2] = ACTIONS(375),
    [aux_sym_key_value_line_token1] = ACTIONS(377),
    [anon_sym_LBRACE] = ACTIONS(375),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(377),
    [anon_sym_AT_AT] = ACTIONS(377),
    [anon_sym_AT] = ACTIONS(375),
  },
  [102] = {
    [sym_key_value_line] = STATE(138),
    [sym_posting] = STATE(134),
    [sym_postings] = STATE(185),
    [aux_sym_metadata_repeat1] = STATE(138),
    [aux_sym_postings_repeat1] = STATE(134),
    [aux_sym_key_value_line_token1] = ACTIONS(295),
  },
  [103] = {
    [aux_sym_comment_token2] = ACTIONS(367),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(347),
    [anon_sym_SLASH] = ACTIONS(347),
    [sym_currency] = ACTIONS(381),
  },
  [104] = {
    [sym_key_value_line] = STATE(138),
    [sym_posting] = STATE(134),
    [sym_postings] = STATE(171),
    [aux_sym_metadata_repeat1] = STATE(138),
    [aux_sym_postings_repeat1] = STATE(134),
    [aux_sym_key_value_line_token1] = ACTIONS(295),
  },
  [105] = {
    [sym_key_value_line] = STATE(138),
    [sym_posting] = STATE(134),
    [sym_postings] = STATE(176),
    [aux_sym_metadata_repeat1] = STATE(138),
    [aux_sym_postings_repeat1] = STATE(134),
    [aux_sym_key_value_line_token1] = ACTIONS(295),
  },
  [106] = {
    [anon_sym_TILDE] = ACTIONS(383),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(347),
    [anon_sym_SLASH] = ACTIONS(347),
    [sym_currency] = ACTIONS(369),
  },
  [107] = {
    [aux_sym_comment_token2] = ACTIONS(301),
    [aux_sym_key_value_line_token1] = ACTIONS(303),
    [anon_sym_LBRACE] = ACTIONS(301),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(303),
    [anon_sym_AT_AT] = ACTIONS(303),
    [anon_sym_AT] = ACTIONS(301),
  },
  [108] = {
    [sym_key_value_line] = STATE(137),
    [sym_metadata] = STATE(191),
    [aux_sym_metadata_repeat1] = STATE(137),
    [aux_sym_comment_token2] = ACTIONS(385),
    [aux_sym_key_value_line_token1] = ACTIONS(68),
  },
  [109] = {
    [sym__tag_or_link] = STATE(109),
    [aux_sym_transaction_repeat1] = STATE(109),
    [aux_sym_key_value_line_token1] = ACTIONS(387),
    [sym_tag] = ACTIONS(389),
    [sym_link] = ACTIONS(389),
  },
  [110] = {
    [sym_key_value_line] = STATE(137),
    [sym_metadata] = STATE(195),
    [aux_sym_metadata_repeat1] = STATE(137),
    [aux_sym_comment_token2] = ACTIONS(392),
    [aux_sym_key_value_line_token1] = ACTIONS(68),
  },
  [111] = {
    [sym_key_value_line] = STATE(137),
    [sym_metadata] = STATE(194),
    [aux_sym_metadata_repeat1] = STATE(137),
    [aux_sym_comment_token2] = ACTIONS(394),
    [aux_sym_key_value_line_token1] = ACTIONS(68),
  },
  [112] = {
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(347),
    [anon_sym_SLASH] = ACTIONS(347),
    [sym_currency] = ACTIONS(369),
  },
  [113] = {
    [sym_price_annotation] = STATE(149),
    [aux_sym_comment_token2] = ACTIONS(396),
    [aux_sym_key_value_line_token1] = ACTIONS(398),
    [anon_sym_AT_AT] = ACTIONS(108),
    [anon_sym_AT] = ACTIONS(110),
  },
  [114] = {
    [aux_sym_currency_list_repeat1] = STATE(114),
    [aux_sym_comment_token2] = ACTIONS(400),
    [aux_sym_key_value_line_token1] = ACTIONS(402),
    [anon_sym_COMMA] = ACTIONS(404),
    [sym_string] = ACTIONS(402),
  },
  [115] = {
    [sym_price_annotation] = STATE(148),
    [aux_sym_comment_token2] = ACTIONS(407),
    [aux_sym_key_value_line_token1] = ACTIONS(409),
    [anon_sym_AT_AT] = ACTIONS(108),
    [anon_sym_AT] = ACTIONS(110),
  },
  [116] = {
    [anon_sym_RPAREN] = ACTIONS(411),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(347),
    [anon_sym_SLASH] = ACTIONS(347),
  },
  [117] = {
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(347),
    [anon_sym_SLASH] = ACTIONS(347),
    [sym_currency] = ACTIONS(413),
  },
  [118] = {
    [anon_sym_RPAREN] = ACTIONS(415),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(347),
    [anon_sym_SLASH] = ACTIONS(347),
  },
  [119] = {
    [sym_key_value_line] = STATE(137),
    [sym_metadata] = STATE(159),
    [aux_sym_metadata_repeat1] = STATE(137),
    [aux_sym_comment_token2] = ACTIONS(417),
    [aux_sym_key_value_line_token1] = ACTIONS(68),
  },
  [120] = {
    [sym_key_value_line] = STATE(137),
    [sym_metadata] = STATE(218),
    [aux_sym_metadata_repeat1] = STATE(137),
    [aux_sym_comment_token2] = ACTIONS(419),
    [aux_sym_key_value_line_token1] = ACTIONS(68),
  },
  [121] = {
    [anon_sym_RPAREN] = ACTIONS(421),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(347),
    [anon_sym_SLASH] = ACTIONS(347),
  },
  [122] = {
    [sym_key_value_line] = STATE(137),
    [sym_metadata] = STATE(207),
    [aux_sym_metadata_repeat1] = STATE(137),
    [aux_sym_comment_token2] = ACTIONS(423),
    [aux_sym_key_value_line_token1] = ACTIONS(68),
  },
  [123] = {
    [aux_sym_currency_list_repeat1] = STATE(114),
    [aux_sym_comment_token2] = ACTIONS(425),
    [aux_sym_key_value_line_token1] = ACTIONS(427),
    [anon_sym_COMMA] = ACTIONS(429),
    [sym_string] = ACTIONS(427),
  },
  [124] = {
    [sym_key_value_line] = STATE(137),
    [sym_metadata] = STATE(204),
    [aux_sym_metadata_repeat1] = STATE(137),
    [aux_sym_comment_token2] = ACTIONS(431),
    [aux_sym_key_value_line_token1] = ACTIONS(68),
  },
  [125] = {
    [sym_price_annotation] = STATE(152),
    [aux_sym_comment_token2] = ACTIONS(433),
    [aux_sym_key_value_line_token1] = ACTIONS(435),
    [anon_sym_AT_AT] = ACTIONS(108),
    [anon_sym_AT] = ACTIONS(110),
  },
  [126] = {
    [sym_key_value_line] = STATE(137),
    [sym_metadata] = STATE(165),
    [aux_sym_metadata_repeat1] = STATE(137),
    [aux_sym_comment_token2] = ACTIONS(437),
    [aux_sym_key_value_line_token1] = ACTIONS(68),
  },
  [127] = {
    [sym_key_value_line] = STATE(137),
    [sym_metadata] = STATE(203),
    [aux_sym_metadata_repeat1] = STATE(137),
    [aux_sym_comment_token2] = ACTIONS(439),
    [aux_sym_key_value_line_token1] = ACTIONS(68),
  },
  [128] = {
    [sym_price_annotation] = STATE(140),
    [aux_sym_comment_token2] = ACTIONS(441),
    [aux_sym_key_value_line_token1] = ACTIONS(443),
    [anon_sym_AT_AT] = ACTIONS(108),
    [anon_sym_AT] = ACTIONS(110),
  },
  [129] = {
    [aux_sym_currency_list_repeat1] = STATE(123),
    [aux_sym_comment_token2] = ACTIONS(445),
    [aux_sym_key_value_line_token1] = ACTIONS(447),
    [anon_sym_COMMA] = ACTIONS(429),
    [sym_string] = ACTIONS(447),
  },
  [130] = {
    [sym_key_value_line] = STATE(137),
    [sym_metadata] = STATE(222),
    [aux_sym_metadata_repeat1] = STATE(137),
    [aux_sym_comment_token2] = ACTIONS(449),
    [aux_sym_key_value_line_token1] = ACTIONS(68),
  },
  [131] = {
    [sym_key_value_line] = STATE(137),
    [sym_metadata] = STATE(223),
    [aux_sym_metadata_repeat1] = STATE(137),
    [aux_sym_comment_token2] = ACTIONS(451),
    [aux_sym_key_value_line_token1] = ACTIONS(68),
  },
  [132] = {
    [aux_sym_comment_token2] = ACTIONS(453),
    [aux_sym_key_value_line_token1] = ACTIONS(455),
    [anon_sym_AT_AT] = ACTIONS(455),
    [anon_sym_AT] = ACTIONS(453),
  },
  [133] = {
    [sym_key_value] = STATE(150),
    [sym_key] = ACTIONS(457),
    [sym_flag] = ACTIONS(459),
    [sym_account] = ACTIONS(461),
  },
  [134] = {
    [sym_posting] = STATE(139),
    [aux_sym_postings_repeat1] = STATE(139),
    [aux_sym_comment_token2] = ACTIONS(463),
    [aux_sym_key_value_line_token1] = ACTIONS(465),
  },
  [135] = {
    [aux_sym_comment_token2] = ACTIONS(400),
    [aux_sym_key_value_line_token1] = ACTIONS(402),
    [anon_sym_COMMA] = ACTIONS(402),
    [sym_string] = ACTIONS(402),
  },
  [136] = {
    [aux_sym_comment_token2] = ACTIONS(467),
    [aux_sym_key_value_line_token1] = ACTIONS(469),
    [anon_sym_AT_AT] = ACTIONS(469),
    [anon_sym_AT] = ACTIONS(467),
  },
  [137] = {
    [sym_key_value_line] = STATE(138),
    [aux_sym_metadata_repeat1] = STATE(138),
    [aux_sym_comment_token2] = ACTIONS(471),
    [aux_sym_key_value_line_token1] = ACTIONS(68),
  },
  [138] = {
    [sym_key_value_line] = STATE(138),
    [aux_sym_metadata_repeat1] = STATE(138),
    [aux_sym_comment_token2] = ACTIONS(473),
    [aux_sym_key_value_line_token1] = ACTIONS(475),
  },
  [139] = {
    [sym_posting] = STATE(139),
    [aux_sym_postings_repeat1] = STATE(139),
    [aux_sym_comment_token2] = ACTIONS(478),
    [aux_sym_key_value_line_token1] = ACTIONS(480),
  },
  [140] = {
    [aux_sym_comment_token2] = ACTIONS(483),
    [aux_sym_key_value_line_token1] = ACTIONS(485),
  },
  [141] = {
    [aux_sym_comment_token2] = ACTIONS(487),
    [aux_sym_key_value_line_token1] = ACTIONS(489),
  },
  [142] = {
    [sym_flag] = ACTIONS(459),
    [sym_account] = ACTIONS(461),
  },
  [143] = {
    [aux_sym_comment_token2] = ACTIONS(491),
    [aux_sym_key_value_line_token1] = ACTIONS(493),
  },
  [144] = {
    [aux_sym_comment_token2] = ACTIONS(495),
    [sym_string] = ACTIONS(497),
  },
  [145] = {
    [aux_sym_comment_token2] = ACTIONS(365),
    [aux_sym_key_value_line_token1] = ACTIONS(367),
  },
  [146] = {
    [aux_sym_comment_token2] = ACTIONS(499),
    [aux_sym_key_value_line_token1] = ACTIONS(501),
  },
  [147] = {
    [sym_key_value] = STATE(175),
    [sym_key] = ACTIONS(503),
  },
  [148] = {
    [aux_sym_comment_token2] = ACTIONS(505),
    [aux_sym_key_value_line_token1] = ACTIONS(507),
  },
  [149] = {
    [aux_sym_comment_token2] = ACTIONS(509),
    [aux_sym_key_value_line_token1] = ACTIONS(511),
  },
  [150] = {
    [aux_sym_comment_token2] = ACTIONS(513),
    [aux_sym_key_value_line_token1] = ACTIONS(515),
  },
  [151] = {
    [aux_sym_comment_token2] = ACTIONS(517),
    [aux_sym_key_value_line_token1] = ACTIONS(519),
  },
  [152] = {
    [aux_sym_comment_token2] = ACTIONS(521),
    [aux_sym_key_value_line_token1] = ACTIONS(523),
  },
  [153] = {
    [aux_sym_comment_token2] = ACTIONS(525),
    [aux_sym_key_value_line_token1] = ACTIONS(527),
  },
  [154] = {
    [anon_sym_RBRACE] = ACTIONS(529),
    [sym_cost_comp_list] = ACTIONS(531),
  },
  [155] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(529),
    [sym_cost_comp_list] = ACTIONS(533),
  },
  [156] = {
    [sym_key_value] = STATE(150),
    [sym_key] = ACTIONS(457),
  },
  [157] = {
    [aux_sym_comment_token2] = ACTIONS(535),
    [aux_sym_key_value_line_token1] = ACTIONS(537),
  },
  [158] = {
    [aux_sym_comment_token2] = ACTIONS(539),
    [aux_sym_key_value_line_token1] = ACTIONS(541),
  },
  [159] = {
    [aux_sym_comment_token2] = ACTIONS(543),
  },
  [160] = {
    [sym_string] = ACTIONS(545),
  },
  [161] = {
    [sym_account] = ACTIONS(547),
  },
  [162] = {
    [sym_string] = ACTIONS(549),
  },
  [163] = {
    [sym_currency] = ACTIONS(551),
  },
  [164] = {
    [sym_string] = ACTIONS(553),
  },
  [165] = {
    [aux_sym_comment_token2] = ACTIONS(555),
  },
  [166] = {
    [sym_account] = ACTIONS(557),
  },
  [167] = {
    [sym_currency] = ACTIONS(559),
  },
  [168] = {
    [sym_account] = ACTIONS(561),
  },
  [169] = {
    [sym_account] = ACTIONS(563),
  },
  [170] = {
    [sym_account] = ACTIONS(565),
  },
  [171] = {
    [aux_sym_comment_token2] = ACTIONS(567),
  },
  [172] = {
    [aux_sym_comment_token2] = ACTIONS(569),
  },
  [173] = {
    [sym_account] = ACTIONS(571),
  },
  [174] = {
    [aux_sym_comment_token2] = ACTIONS(573),
  },
  [175] = {
    [aux_sym_comment_token2] = ACTIONS(575),
  },
  [176] = {
    [aux_sym_comment_token2] = ACTIONS(577),
  },
  [177] = {
    [aux_sym_comment_token2] = ACTIONS(317),
  },
  [178] = {
    [aux_sym_comment_token2] = ACTIONS(579),
  },
  [179] = {
    [sym_string] = ACTIONS(581),
  },
  [180] = {
    [aux_sym_comment_token2] = ACTIONS(583),
  },
  [181] = {
    [aux_sym_comment_token2] = ACTIONS(585),
  },
  [182] = {
    [aux_sym_comment_token2] = ACTIONS(587),
  },
  [183] = {
    [anon_sym_RBRACE] = ACTIONS(589),
  },
  [184] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(589),
  },
  [185] = {
    [aux_sym_comment_token2] = ACTIONS(591),
  },
  [186] = {
    [aux_sym_comment_token2] = ACTIONS(367),
  },
  [187] = {
    [aux_sym_comment_token2] = ACTIONS(501),
  },
  [188] = {
    [aux_sym_comment_token2] = ACTIONS(593),
  },
  [189] = {
    [sym_account] = ACTIONS(595),
  },
  [190] = {
    [aux_sym_comment_token2] = ACTIONS(597),
  },
  [191] = {
    [aux_sym_comment_token2] = ACTIONS(599),
  },
  [192] = {
    [aux_sym_comment_token2] = ACTIONS(601),
  },
  [193] = {
    [sym_string] = ACTIONS(603),
  },
  [194] = {
    [aux_sym_comment_token2] = ACTIONS(605),
  },
  [195] = {
    [aux_sym_comment_token2] = ACTIONS(607),
  },
  [196] = {
    [sym_string] = ACTIONS(609),
  },
  [197] = {
    [aux_sym_comment_token2] = ACTIONS(611),
  },
  [198] = {
    [sym_string] = ACTIONS(613),
  },
  [199] = {
    [aux_sym_comment_token2] = ACTIONS(615),
  },
  [200] = {
    [sym_string] = ACTIONS(617),
  },
  [201] = {
    [aux_sym_comment_token2] = ACTIONS(619),
  },
  [202] = {
    [sym_currency] = ACTIONS(621),
  },
  [203] = {
    [aux_sym_comment_token2] = ACTIONS(623),
  },
  [204] = {
    [aux_sym_comment_token2] = ACTIONS(625),
  },
  [205] = {
    [ts_builtin_sym_end] = ACTIONS(627),
  },
  [206] = {
    [sym_account] = ACTIONS(629),
  },
  [207] = {
    [aux_sym_comment_token2] = ACTIONS(631),
  },
  [208] = {
    [sym_key] = ACTIONS(633),
  },
  [209] = {
    [sym_string] = ACTIONS(635),
  },
  [210] = {
    [sym_tag] = ACTIONS(637),
  },
  [211] = {
    [sym_tag] = ACTIONS(639),
  },
  [212] = {
    [sym_string] = ACTIONS(641),
  },
  [213] = {
    [aux_sym_comment_token2] = ACTIONS(643),
  },
  [214] = {
    [aux_sym_comment_token2] = ACTIONS(645),
  },
  [215] = {
    [sym_string] = ACTIONS(647),
  },
  [216] = {
    [sym_string] = ACTIONS(649),
  },
  [217] = {
    [aux_sym__skipped_lines_token1] = ACTIONS(651),
  },
  [218] = {
    [aux_sym_comment_token2] = ACTIONS(653),
  },
  [219] = {
    [aux_sym_comment_token2] = ACTIONS(655),
  },
  [220] = {
    [aux_sym_comment_token2] = ACTIONS(657),
  },
  [221] = {
    [aux_sym_comment_token2] = ACTIONS(659),
  },
  [222] = {
    [aux_sym_comment_token2] = ACTIONS(661),
  },
  [223] = {
    [aux_sym_comment_token2] = ACTIONS(663),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_beancount_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(214),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(217),
  [11] = {.count = 1, .reusable = true}, SHIFT(216),
  [13] = {.count = 1, .reusable = true}, SHIFT(215),
  [15] = {.count = 1, .reusable = true}, SHIFT(212),
  [17] = {.count = 1, .reusable = true}, SHIFT(211),
  [19] = {.count = 1, .reusable = true}, SHIFT(210),
  [21] = {.count = 1, .reusable = true}, SHIFT(147),
  [23] = {.count = 1, .reusable = true}, SHIFT(208),
  [25] = {.count = 1, .reusable = true}, SHIFT(65),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_beancount_file, 1),
  [29] = {.count = 1, .reusable = true}, SHIFT(3),
  [31] = {.count = 1, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2),
  [33] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(214),
  [36] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(3),
  [39] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(217),
  [42] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(216),
  [45] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(215),
  [48] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(212),
  [51] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(211),
  [54] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(210),
  [57] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(147),
  [60] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(208),
  [63] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(65),
  [66] = {.count = 1, .reusable = false}, SHIFT(51),
  [68] = {.count = 1, .reusable = true}, SHIFT(156),
  [70] = {.count = 1, .reusable = true}, SHIFT(84),
  [72] = {.count = 1, .reusable = true}, SHIFT(91),
  [74] = {.count = 1, .reusable = false}, SHIFT(10),
  [76] = {.count = 1, .reusable = true}, SHIFT(10),
  [78] = {.count = 1, .reusable = false}, SHIFT(44),
  [80] = {.count = 1, .reusable = false}, SHIFT(38),
  [82] = {.count = 1, .reusable = false}, SHIFT(4),
  [84] = {.count = 1, .reusable = true}, SHIFT(4),
  [86] = {.count = 1, .reusable = false}, REDUCE(sym_key_value, 1),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym_key_value, 1),
  [90] = {.count = 1, .reusable = true}, SHIFT(80),
  [92] = {.count = 1, .reusable = true}, SHIFT(87),
  [94] = {.count = 1, .reusable = false}, SHIFT(145),
  [96] = {.count = 1, .reusable = true}, SHIFT(145),
  [98] = {.count = 1, .reusable = false}, SHIFT(98),
  [100] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 2, .production_id = 16),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 2, .production_id = 16),
  [104] = {.count = 1, .reusable = false}, SHIFT(154),
  [106] = {.count = 1, .reusable = true}, SHIFT(155),
  [108] = {.count = 1, .reusable = true}, SHIFT(64),
  [110] = {.count = 1, .reusable = false}, SHIFT(64),
  [112] = {.count = 1, .reusable = true}, SHIFT(107),
  [114] = {.count = 1, .reusable = true}, SHIFT(68),
  [116] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 3, .production_id = 29),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 3, .production_id = 29),
  [120] = {.count = 1, .reusable = true}, SHIFT(85),
  [122] = {.count = 1, .reusable = true}, SHIFT(86),
  [124] = {.count = 1, .reusable = false}, SHIFT(186),
  [126] = {.count = 1, .reusable = true}, SHIFT(186),
  [128] = {.count = 1, .reusable = false}, SHIFT(103),
  [130] = {.count = 1, .reusable = false}, REDUCE(aux_sym_custom_repeat1, 2),
  [132] = {.count = 1, .reusable = true}, REDUCE(aux_sym_custom_repeat1, 2),
  [134] = {.count = 2, .reusable = true}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(84),
  [137] = {.count = 2, .reusable = true}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(91),
  [140] = {.count = 2, .reusable = false}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(10),
  [143] = {.count = 2, .reusable = true}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(10),
  [146] = {.count = 2, .reusable = false}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(44),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_document, 6, .production_id = 20),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_transaction, 5, .production_id = 17),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_balance, 5, .production_id = 4),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_commodity, 4, .production_id = 2),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_open, 4, .production_id = 1),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_close, 4, .production_id = 1),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_transaction, 8, .production_id = 50),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_transaction, 7, .production_id = 45),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_transaction, 7, .production_id = 44),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_transaction, 7, .production_id = 43),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_open, 7, .production_id = 36),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_transaction, 6, .production_id = 35),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_transaction, 6, .production_id = 34),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_transaction, 6, .production_id = 33),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_close, 5, .production_id = 5),
  [181] = {.count = 1, .reusable = false}, REDUCE(sym_binary_num_expr, 3),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_binary_num_expr, 3),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_query, 6, .production_id = 28),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_price, 6, .production_id = 27),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_pad, 6, .production_id = 26),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_open, 6, .production_id = 25),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_open, 6, .production_id = 24),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_open, 6, .production_id = 23),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_note, 6, .production_id = 22),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_event, 6, .production_id = 21),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym__skipped_lines, 3),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_include, 3),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_custom, 4, .production_id = 3),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_plugin, 3),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_custom, 6, .production_id = 19),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_pushtag, 3),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_poptag, 3),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_balance, 6, .production_id = 18),
  [217] = {.count = 1, .reusable = false}, REDUCE(aux_sym_custom_repeat1, 1),
  [219] = {.count = 1, .reusable = true}, REDUCE(aux_sym_custom_repeat1, 1),
  [221] = {.count = 1, .reusable = true}, SHIFT(97),
  [223] = {.count = 1, .reusable = true}, SHIFT(79),
  [225] = {.count = 1, .reusable = false}, SHIFT(74),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_commodity, 5, .production_id = 6),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_custom, 5, .production_id = 7),
  [231] = {.count = 1, .reusable = false}, REDUCE(sym_unary_num_expr, 2),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_unary_num_expr, 2),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_query, 5, .production_id = 15),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_pushmeta, 3),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_popmeta, 3),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_custom, 5, .production_id = 3),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_price, 5, .production_id = 14),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_pad, 5, .production_id = 13),
  [247] = {.count = 1, .reusable = false}, REDUCE(sym__paren_num_expr, 3),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym__paren_num_expr, 3),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_open, 5, .production_id = 12),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_open, 5, .production_id = 5),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_open, 5, .production_id = 11),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_note, 5, .production_id = 10),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_event, 5, .production_id = 9),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_document, 5, .production_id = 8),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_plugin, 4),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_option, 4),
  [267] = {.count = 1, .reusable = false}, REDUCE(sym_price_annotation, 1),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_price_annotation, 1),
  [271] = {.count = 1, .reusable = true}, SHIFT(170),
  [273] = {.count = 1, .reusable = true}, SHIFT(169),
  [275] = {.count = 1, .reusable = true}, SHIFT(167),
  [277] = {.count = 1, .reusable = true}, SHIFT(164),
  [279] = {.count = 1, .reusable = true}, SHIFT(161),
  [281] = {.count = 1, .reusable = true}, SHIFT(160),
  [283] = {.count = 1, .reusable = true}, SHIFT(173),
  [285] = {.count = 1, .reusable = true}, SHIFT(168),
  [287] = {.count = 1, .reusable = true}, SHIFT(166),
  [289] = {.count = 1, .reusable = true}, SHIFT(163),
  [291] = {.count = 1, .reusable = true}, SHIFT(162),
  [293] = {.count = 1, .reusable = true}, SHIFT(179),
  [295] = {.count = 1, .reusable = true}, SHIFT(133),
  [297] = {.count = 1, .reusable = true}, SHIFT(75),
  [299] = {.count = 1, .reusable = true}, SHIFT(76),
  [301] = {.count = 1, .reusable = false}, REDUCE(sym_incomplete_amount, 1),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym_incomplete_amount, 1),
  [305] = {.count = 1, .reusable = true}, SHIFT(95),
  [307] = {.count = 1, .reusable = true}, SHIFT(82),
  [309] = {.count = 1, .reusable = true}, SHIFT(101),
  [311] = {.count = 1, .reusable = true}, SHIFT(106),
  [313] = {.count = 1, .reusable = true}, SHIFT(109),
  [315] = {.count = 1, .reusable = false}, REDUCE(sym_amount, 2),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_amount, 2),
  [319] = {.count = 1, .reusable = true}, SHIFT(73),
  [321] = {.count = 1, .reusable = true}, SHIFT(112),
  [323] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 3, .production_id = 31),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 3, .production_id = 31),
  [327] = {.count = 1, .reusable = true}, SHIFT(27),
  [329] = {.count = 1, .reusable = true}, SHIFT(116),
  [331] = {.count = 1, .reusable = true}, SHIFT(117),
  [333] = {.count = 1, .reusable = true}, SHIFT(67),
  [335] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 38),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 38),
  [339] = {.count = 1, .reusable = true}, SHIFT(121),
  [341] = {.count = 1, .reusable = true}, SHIFT(118),
  [343] = {.count = 1, .reusable = true}, SHIFT(94),
  [345] = {.count = 1, .reusable = true}, SHIFT(69),
  [347] = {.count = 1, .reusable = true}, SHIFT(93),
  [349] = {.count = 1, .reusable = true}, SHIFT(47),
  [351] = {.count = 1, .reusable = false}, SHIFT(15),
  [353] = {.count = 1, .reusable = true}, SHIFT(127),
  [355] = {.count = 1, .reusable = true}, SHIFT(129),
  [357] = {.count = 1, .reusable = true}, SHIFT(88),
  [359] = {.count = 1, .reusable = true}, SHIFT(71),
  [361] = {.count = 1, .reusable = true}, SHIFT(89),
  [363] = {.count = 1, .reusable = true}, SHIFT(60),
  [365] = {.count = 1, .reusable = false}, REDUCE(sym_key_value_value, 1),
  [367] = {.count = 1, .reusable = true}, REDUCE(sym_key_value_value, 1),
  [369] = {.count = 1, .reusable = true}, SHIFT(74),
  [371] = {.count = 1, .reusable = false}, SHIFT(55),
  [373] = {.count = 1, .reusable = true}, SHIFT(126),
  [375] = {.count = 1, .reusable = false}, REDUCE(sym_incomplete_amount, 2),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym_incomplete_amount, 2),
  [379] = {.count = 1, .reusable = true}, SHIFT(96),
  [381] = {.count = 1, .reusable = true}, SHIFT(177),
  [383] = {.count = 1, .reusable = true}, SHIFT(81),
  [385] = {.count = 1, .reusable = false}, SHIFT(48),
  [387] = {.count = 1, .reusable = true}, REDUCE(aux_sym_transaction_repeat1, 2),
  [389] = {.count = 2, .reusable = true}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(109),
  [392] = {.count = 1, .reusable = false}, SHIFT(53),
  [394] = {.count = 1, .reusable = false}, SHIFT(52),
  [396] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 3, .production_id = 30),
  [398] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 3, .production_id = 30),
  [400] = {.count = 1, .reusable = false}, REDUCE(aux_sym_currency_list_repeat1, 2),
  [402] = {.count = 1, .reusable = true}, REDUCE(aux_sym_currency_list_repeat1, 2),
  [404] = {.count = 2, .reusable = true}, REDUCE(aux_sym_currency_list_repeat1, 2), SHIFT_REPEAT(202),
  [407] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 37),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 37),
  [411] = {.count = 1, .reusable = true}, SHIFT(70),
  [413] = {.count = 1, .reusable = true}, SHIFT(151),
  [415] = {.count = 1, .reusable = true}, SHIFT(90),
  [417] = {.count = 1, .reusable = false}, SHIFT(61),
  [419] = {.count = 1, .reusable = false}, SHIFT(13),
  [421] = {.count = 1, .reusable = true}, SHIFT(54),
  [423] = {.count = 1, .reusable = false}, SHIFT(59),
  [425] = {.count = 1, .reusable = false}, REDUCE(sym_currency_list, 2),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_currency_list, 2),
  [429] = {.count = 1, .reusable = true}, SHIFT(202),
  [431] = {.count = 1, .reusable = false}, SHIFT(58),
  [433] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 41),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 41),
  [437] = {.count = 1, .reusable = false}, SHIFT(32),
  [439] = {.count = 1, .reusable = false}, SHIFT(57),
  [441] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 47),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 47),
  [445] = {.count = 1, .reusable = false}, REDUCE(sym_currency_list, 1),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym_currency_list, 1),
  [449] = {.count = 1, .reusable = false}, SHIFT(14),
  [451] = {.count = 1, .reusable = false}, SHIFT(16),
  [453] = {.count = 1, .reusable = false}, REDUCE(sym_cost_spec, 2),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym_cost_spec, 2),
  [457] = {.count = 1, .reusable = true}, SHIFT(6),
  [459] = {.count = 1, .reusable = false}, SHIFT(189),
  [461] = {.count = 1, .reusable = true}, SHIFT(7),
  [463] = {.count = 1, .reusable = false}, REDUCE(sym_postings, 1),
  [465] = {.count = 1, .reusable = true}, SHIFT(142),
  [467] = {.count = 1, .reusable = false}, REDUCE(sym_cost_spec, 3),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_cost_spec, 3),
  [471] = {.count = 1, .reusable = false}, REDUCE(sym_metadata, 1),
  [473] = {.count = 1, .reusable = false}, REDUCE(aux_sym_metadata_repeat1, 2),
  [475] = {.count = 2, .reusable = true}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(156),
  [478] = {.count = 1, .reusable = false}, REDUCE(aux_sym_postings_repeat1, 2),
  [480] = {.count = 2, .reusable = true}, REDUCE(aux_sym_postings_repeat1, 2), SHIFT_REPEAT(142),
  [483] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 6, .production_id = 51),
  [485] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 6, .production_id = 51),
  [487] = {.count = 1, .reusable = false}, REDUCE(sym_price_annotation, 2),
  [489] = {.count = 1, .reusable = true}, REDUCE(sym_price_annotation, 2),
  [491] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 39),
  [493] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 39),
  [495] = {.count = 1, .reusable = true}, SHIFT(39),
  [497] = {.count = 1, .reusable = true}, SHIFT(181),
  [499] = {.count = 1, .reusable = false}, REDUCE(sym_key_value, 2),
  [501] = {.count = 1, .reusable = true}, REDUCE(sym_key_value, 2),
  [503] = {.count = 1, .reusable = true}, SHIFT(9),
  [505] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 46),
  [507] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 46),
  [509] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 40),
  [511] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 40),
  [513] = {.count = 1, .reusable = false}, REDUCE(sym_key_value_line, 2),
  [515] = {.count = 1, .reusable = true}, REDUCE(sym_key_value_line, 2),
  [517] = {.count = 1, .reusable = false}, REDUCE(sym_amount_with_tolerance, 4),
  [519] = {.count = 1, .reusable = true}, REDUCE(sym_amount_with_tolerance, 4),
  [521] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 49),
  [523] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 49),
  [525] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 48),
  [527] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 48),
  [529] = {.count = 1, .reusable = true}, SHIFT(132),
  [531] = {.count = 1, .reusable = true}, SHIFT(183),
  [533] = {.count = 1, .reusable = true}, SHIFT(184),
  [535] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 42),
  [537] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 42),
  [539] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 3, .production_id = 32),
  [541] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 3, .production_id = 32),
  [543] = {.count = 1, .reusable = true}, SHIFT(11),
  [545] = {.count = 1, .reusable = true}, SHIFT(198),
  [547] = {.count = 1, .reusable = true}, SHIFT(196),
  [549] = {.count = 1, .reusable = true}, SHIFT(209),
  [551] = {.count = 1, .reusable = true}, SHIFT(77),
  [553] = {.count = 1, .reusable = true}, SHIFT(5),
  [555] = {.count = 1, .reusable = true}, SHIFT(22),
  [557] = {.count = 1, .reusable = true}, SHIFT(206),
  [559] = {.count = 1, .reusable = true}, SHIFT(130),
  [561] = {.count = 1, .reusable = true}, SHIFT(92),
  [563] = {.count = 1, .reusable = true}, SHIFT(131),
  [565] = {.count = 1, .reusable = true}, SHIFT(72),
  [567] = {.count = 1, .reusable = true}, SHIFT(21),
  [569] = {.count = 1, .reusable = true}, SHIFT(20),
  [571] = {.count = 1, .reusable = true}, SHIFT(200),
  [573] = {.count = 1, .reusable = true}, SHIFT(50),
  [575] = {.count = 1, .reusable = true}, SHIFT(49),
  [577] = {.count = 1, .reusable = true}, SHIFT(19),
  [579] = {.count = 1, .reusable = true}, SHIFT(42),
  [581] = {.count = 1, .reusable = true}, SHIFT(66),
  [583] = {.count = 1, .reusable = true}, SHIFT(63),
  [585] = {.count = 1, .reusable = true}, SHIFT(62),
  [587] = {.count = 1, .reusable = true}, SHIFT(23),
  [589] = {.count = 1, .reusable = true}, SHIFT(136),
  [591] = {.count = 1, .reusable = true}, SHIFT(24),
  [593] = {.count = 1, .reusable = true}, SHIFT(25),
  [595] = {.count = 1, .reusable = true}, SHIFT(8),
  [597] = {.count = 1, .reusable = true}, SHIFT(41),
  [599] = {.count = 1, .reusable = true}, SHIFT(28),
  [601] = {.count = 1, .reusable = true}, SHIFT(18),
  [603] = {.count = 1, .reusable = true}, SHIFT(180),
  [605] = {.count = 1, .reusable = true}, SHIFT(29),
  [607] = {.count = 1, .reusable = true}, SHIFT(30),
  [609] = {.count = 1, .reusable = true}, SHIFT(119),
  [611] = {.count = 1, .reusable = true}, SHIFT(31),
  [613] = {.count = 1, .reusable = true}, SHIFT(122),
  [615] = {.count = 1, .reusable = true}, SHIFT(37),
  [617] = {.count = 1, .reusable = true}, SHIFT(124),
  [619] = {.count = 1, .reusable = true}, SHIFT(36),
  [621] = {.count = 1, .reusable = true}, SHIFT(135),
  [623] = {.count = 1, .reusable = true}, SHIFT(33),
  [625] = {.count = 1, .reusable = true}, SHIFT(34),
  [627] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [629] = {.count = 1, .reusable = true}, SHIFT(110),
  [631] = {.count = 1, .reusable = true}, SHIFT(35),
  [633] = {.count = 1, .reusable = true}, SHIFT(174),
  [635] = {.count = 1, .reusable = true}, SHIFT(108),
  [637] = {.count = 1, .reusable = true}, SHIFT(178),
  [639] = {.count = 1, .reusable = true}, SHIFT(190),
  [641] = {.count = 1, .reusable = true}, SHIFT(144),
  [643] = {.count = 1, .reusable = true}, SHIFT(40),
  [645] = {.count = 1, .reusable = true}, SHIFT(17),
  [647] = {.count = 1, .reusable = true}, SHIFT(193),
  [649] = {.count = 1, .reusable = true}, SHIFT(199),
  [651] = {.count = 1, .reusable = true}, SHIFT(201),
  [653] = {.count = 1, .reusable = true}, SHIFT(43),
  [655] = {.count = 1, .reusable = true}, SHIFT(12),
  [657] = {.count = 1, .reusable = true}, SHIFT(56),
  [659] = {.count = 1, .reusable = true}, SHIFT(46),
  [661] = {.count = 1, .reusable = true}, SHIFT(45),
  [663] = {.count = 1, .reusable = true}, SHIFT(26),
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
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
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
