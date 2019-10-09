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
      if (lookahead == 0) ADVANCE(114);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == ')') ADVANCE(151);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '+') ADVANCE(153);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == ':') ADVANCE(120);
      if (lookahead == ';') ADVANCE(115);
      if (lookahead == '@') ADVANCE(136);
      if (lookahead == '^') ADVANCE(111);
      if (lookahead == 'b') ADVANCE(25);
      if (lookahead == 'c') ADVANCE(59);
      if (lookahead == 'd') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead == 'q') ADVANCE(94);
      if (lookahead == '{') ADVANCE(129);
      if (lookahead == '}') ADVANCE(131);
      if (lookahead == '~') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '?') ADVANCE(178);
      if (lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222) ||
          lookahead == 256 ||
          lookahead == 258 ||
          lookahead == 260 ||
          lookahead == 262 ||
          lookahead == 264 ||
          lookahead == 266 ||
          lookahead == 268 ||
          lookahead == 270 ||
          lookahead == 272 ||
          lookahead == 274 ||
          lookahead == 276 ||
          lookahead == 278 ||
          lookahead == 280 ||
          lookahead == 282 ||
          lookahead == 284 ||
          lookahead == 286 ||
          lookahead == 288 ||
          lookahead == 290 ||
          lookahead == 292 ||
          lookahead == 294 ||
          lookahead == 296 ||
          lookahead == 298 ||
          lookahead == 300 ||
          lookahead == 302 ||
          lookahead == 304 ||
          lookahead == 306 ||
          lookahead == 308 ||
          lookahead == 310 ||
          lookahead == 313 ||
          lookahead == 315 ||
          lookahead == 317 ||
          lookahead == 319 ||
          lookahead == 321 ||
          lookahead == 323 ||
          lookahead == 325 ||
          lookahead == 327 ||
          lookahead == 330 ||
          lookahead == 332 ||
          lookahead == 334 ||
          lookahead == 336 ||
          lookahead == 338 ||
          lookahead == 340 ||
          lookahead == 342 ||
          lookahead == 344 ||
          lookahead == 346 ||
          lookahead == 348 ||
          lookahead == 350 ||
          lookahead == 352 ||
          lookahead == 354 ||
          lookahead == 356 ||
          lookahead == 358 ||
          lookahead == 360 ||
          lookahead == 362 ||
          lookahead == 364 ||
          lookahead == 366 ||
          lookahead == 368 ||
          lookahead == 370 ||
          lookahead == 372 ||
          lookahead == 374 ||
          lookahead == 376 ||
          lookahead == 377 ||
          lookahead == 379 ||
          lookahead == 381 ||
          lookahead == 385 ||
          lookahead == 386 ||
          lookahead == 388 ||
          lookahead == 390 ||
          lookahead == 391 ||
          (393 <= lookahead && lookahead <= 395) ||
          (398 <= lookahead && lookahead <= 401) ||
          lookahead == 403 ||
          lookahead == 404 ||
          (406 <= lookahead && lookahead <= 408) ||
          lookahead == 412 ||
          lookahead == 413 ||
          lookahead == 415 ||
          lookahead == 416 ||
          lookahead == 418 ||
          lookahead == 420 ||
          lookahead == 422 ||
          lookahead == 423 ||
          lookahead == 425 ||
          lookahead == 428 ||
          lookahead == 430 ||
          lookahead == 431 ||
          (433 <= lookahead && lookahead <= 435) ||
          lookahead == 437 ||
          lookahead == 439 ||
          lookahead == 440 ||
          lookahead == 444 ||
          lookahead == 452 ||
          lookahead == 455 ||
          lookahead == 458 ||
          lookahead == 461 ||
          lookahead == 463 ||
          lookahead == 465 ||
          lookahead == 467 ||
          lookahead == 469 ||
          lookahead == 471 ||
          lookahead == 473 ||
          lookahead == 475 ||
          lookahead == 478 ||
          lookahead == 480 ||
          lookahead == 482 ||
          lookahead == 484 ||
          lookahead == 486 ||
          lookahead == 488 ||
          lookahead == 490 ||
          lookahead == 492 ||
          lookahead == 494 ||
          lookahead == 497 ||
          lookahead == 500 ||
          (502 <= lookahead && lookahead <= 504) ||
          lookahead == 506 ||
          lookahead == 508 ||
          lookahead == 510 ||
          lookahead == 512 ||
          lookahead == 514 ||
          lookahead == 516 ||
          lookahead == 518 ||
          lookahead == 520 ||
          lookahead == 522 ||
          lookahead == 524 ||
          lookahead == 526 ||
          lookahead == 528 ||
          lookahead == 530 ||
          lookahead == 532 ||
          lookahead == 534 ||
          lookahead == 536 ||
          lookahead == 538 ||
          lookahead == 540 ||
          lookahead == 542 ||
          lookahead == 544 ||
          lookahead == 546 ||
          lookahead == 548 ||
          lookahead == 550 ||
          lookahead == 552 ||
          lookahead == 554 ||
          lookahead == 556 ||
          lookahead == 558 ||
          lookahead == 560 ||
          lookahead == 562 ||
          lookahead == 570 ||
          lookahead == 571 ||
          lookahead == 573 ||
          lookahead == 574 ||
          lookahead == 577 ||
          (579 <= lookahead && lookahead <= 582) ||
          lookahead == 584 ||
          lookahead == 586 ||
          lookahead == 588 ||
          lookahead == 590 ||
          lookahead == 880 ||
          lookahead == 882 ||
          lookahead == 886 ||
          lookahead == 895 ||
          lookahead == 902 ||
          (904 <= lookahead && lookahead <= 906) ||
          lookahead == 908 ||
          lookahead == 910 ||
          lookahead == 911 ||
          (913 <= lookahead && lookahead <= 929) ||
          (931 <= lookahead && lookahead <= 939) ||
          lookahead == 975 ||
          (978 <= lookahead && lookahead <= 980) ||
          lookahead == 984 ||
          lookahead == 986 ||
          lookahead == 988 ||
          lookahead == 990 ||
          lookahead == 992 ||
          lookahead == 994 ||
          lookahead == 996 ||
          lookahead == 998 ||
          lookahead == 1000 ||
          lookahead == 1002 ||
          lookahead == 1004 ||
          lookahead == 1006 ||
          lookahead == 1012 ||
          lookahead == 1015 ||
          lookahead == 1017 ||
          lookahead == 1018 ||
          (1021 <= lookahead && lookahead <= 1071) ||
          lookahead == 1120 ||
          lookahead == 1122 ||
          lookahead == 1124 ||
          lookahead == 1126 ||
          lookahead == 1128 ||
          lookahead == 1130 ||
          lookahead == 1132 ||
          lookahead == 1134 ||
          lookahead == 1136 ||
          lookahead == 1138 ||
          lookahead == 1140 ||
          lookahead == 1142 ||
          lookahead == 1144 ||
          lookahead == 1146 ||
          lookahead == 1148 ||
          lookahead == 1150 ||
          lookahead == 1152 ||
          lookahead == 1162 ||
          lookahead == 1164 ||
          lookahead == 1166 ||
          lookahead == 1168 ||
          lookahead == 1170 ||
          lookahead == 1172 ||
          lookahead == 1174 ||
          lookahead == 1176 ||
          lookahead == 1178 ||
          lookahead == 1180 ||
          lookahead == 1182 ||
          lookahead == 1184 ||
          lookahead == 1186 ||
          lookahead == 1188 ||
          lookahead == 1190 ||
          lookahead == 1192 ||
          lookahead == 1194 ||
          lookahead == 1196 ||
          lookahead == 1198 ||
          lookahead == 1200 ||
          lookahead == 1202 ||
          lookahead == 1204 ||
          lookahead == 1206 ||
          lookahead == 1208 ||
          lookahead == 1210 ||
          lookahead == 1212 ||
          lookahead == 1214 ||
          lookahead == 1216 ||
          lookahead == 1217 ||
          lookahead == 1219 ||
          lookahead == 1221 ||
          lookahead == 1223 ||
          lookahead == 1225 ||
          lookahead == 1227 ||
          lookahead == 1229 ||
          lookahead == 1232 ||
          lookahead == 1234 ||
          lookahead == 1236 ||
          lookahead == 1238 ||
          lookahead == 1240 ||
          lookahead == 1242 ||
          lookahead == 1244 ||
          lookahead == 1246 ||
          lookahead == 1248 ||
          lookahead == 1250 ||
          lookahead == 1252 ||
          lookahead == 1254 ||
          lookahead == 1256 ||
          lookahead == 1258 ||
          lookahead == 1260 ||
          lookahead == 1262 ||
          lookahead == 1264 ||
          lookahead == 1266 ||
          lookahead == 1268 ||
          lookahead == 1270 ||
          lookahead == 1272 ||
          lookahead == 1274 ||
          lookahead == 1276 ||
          lookahead == 1278 ||
          lookahead == 1280 ||
          lookahead == 1282 ||
          lookahead == 1284 ||
          lookahead == 1286 ||
          lookahead == 1288 ||
          lookahead == 1290 ||
          lookahead == 1292 ||
          lookahead == 1294 ||
          lookahead == 1296 ||
          lookahead == 1298 ||
          lookahead == 1300 ||
          lookahead == 1302 ||
          lookahead == 1304 ||
          lookahead == 1306 ||
          lookahead == 1308 ||
          lookahead == 1310 ||
          lookahead == 1312 ||
          lookahead == 1314 ||
          lookahead == 1316 ||
          lookahead == 1318 ||
          lookahead == 1320 ||
          lookahead == 1322 ||
          lookahead == 1324 ||
          lookahead == 1326 ||
          (1329 <= lookahead && lookahead <= 1366) ||
          (4256 <= lookahead && lookahead <= 4293) ||
          lookahead == 4295 ||
          lookahead == 4301 ||
          (5024 <= lookahead && lookahead <= 5109) ||
          (7312 <= lookahead && lookahead <= 7354) ||
          (7357 <= lookahead && lookahead <= 7359) ||
          lookahead == 7680 ||
          lookahead == 7682 ||
          lookahead == 7684 ||
          lookahead == 7686 ||
          lookahead == 7688 ||
          lookahead == 7690 ||
          lookahead == 7692 ||
          lookahead == 7694 ||
          lookahead == 7696 ||
          lookahead == 7698 ||
          lookahead == 7700 ||
          lookahead == 7702 ||
          lookahead == 7704 ||
          lookahead == 7706 ||
          lookahead == 7708 ||
          lookahead == 7710 ||
          lookahead == 7712 ||
          lookahead == 7714 ||
          lookahead == 7716 ||
          lookahead == 7718 ||
          lookahead == 7720 ||
          lookahead == 7722 ||
          lookahead == 7724 ||
          lookahead == 7726 ||
          lookahead == 7728 ||
          lookahead == 7730 ||
          lookahead == 7732 ||
          lookahead == 7734 ||
          lookahead == 7736 ||
          lookahead == 7738 ||
          lookahead == 7740 ||
          lookahead == 7742 ||
          lookahead == 7744 ||
          lookahead == 7746 ||
          lookahead == 7748 ||
          lookahead == 7750 ||
          lookahead == 7752 ||
          lookahead == 7754 ||
          lookahead == 7756 ||
          lookahead == 7758 ||
          lookahead == 7760 ||
          lookahead == 7762 ||
          lookahead == 7764 ||
          lookahead == 7766 ||
          lookahead == 7768 ||
          lookahead == 7770 ||
          lookahead == 7772 ||
          lookahead == 7774 ||
          lookahead == 7776 ||
          lookahead == 7778 ||
          lookahead == 7780 ||
          lookahead == 7782 ||
          lookahead == 7784 ||
          lookahead == 7786 ||
          lookahead == 7788 ||
          lookahead == 7790 ||
          lookahead == 7792 ||
          lookahead == 7794 ||
          lookahead == 7796 ||
          lookahead == 7798 ||
          lookahead == 7800 ||
          lookahead == 7802 ||
          lookahead == 7804 ||
          lookahead == 7806 ||
          lookahead == 7808 ||
          lookahead == 7810 ||
          lookahead == 7812 ||
          lookahead == 7814 ||
          lookahead == 7816 ||
          lookahead == 7818 ||
          lookahead == 7820 ||
          lookahead == 7822 ||
          lookahead == 7824 ||
          lookahead == 7826 ||
          lookahead == 7828 ||
          lookahead == 7838 ||
          lookahead == 7840 ||
          lookahead == 7842 ||
          lookahead == 7844 ||
          lookahead == 7846 ||
          lookahead == 7848 ||
          lookahead == 7850 ||
          lookahead == 7852 ||
          lookahead == 7854 ||
          lookahead == 7856 ||
          lookahead == 7858 ||
          lookahead == 7860 ||
          lookahead == 7862 ||
          lookahead == 7864 ||
          lookahead == 7866 ||
          lookahead == 7868 ||
          lookahead == 7870 ||
          lookahead == 7872 ||
          lookahead == 7874 ||
          lookahead == 7876 ||
          lookahead == 7878 ||
          lookahead == 7880 ||
          lookahead == 7882 ||
          lookahead == 7884 ||
          lookahead == 7886 ||
          lookahead == 7888 ||
          lookahead == 7890 ||
          lookahead == 7892 ||
          lookahead == 7894 ||
          lookahead == 7896 ||
          lookahead == 7898 ||
          lookahead == 7900 ||
          lookahead == 7902 ||
          lookahead == 7904 ||
          lookahead == 7906 ||
          lookahead == 7908 ||
          lookahead == 7910 ||
          lookahead == 7912 ||
          lookahead == 7914 ||
          lookahead == 7916 ||
          lookahead == 7918 ||
          lookahead == 7920 ||
          lookahead == 7922 ||
          lookahead == 7924 ||
          lookahead == 7926 ||
          lookahead == 7928 ||
          lookahead == 7930 ||
          lookahead == 7932 ||
          lookahead == 7934 ||
          (7944 <= lookahead && lookahead <= 7951) ||
          (7960 <= lookahead && lookahead <= 7965) ||
          (7976 <= lookahead && lookahead <= 7983) ||
          (7992 <= lookahead && lookahead <= 7999) ||
          (8008 <= lookahead && lookahead <= 8013) ||
          lookahead == 8025 ||
          lookahead == 8027 ||
          lookahead == 8029 ||
          lookahead == 8031 ||
          (8040 <= lookahead && lookahead <= 8047) ||
          (8120 <= lookahead && lookahead <= 8123) ||
          (8136 <= lookahead && lookahead <= 8139) ||
          (8152 <= lookahead && lookahead <= 8155) ||
          (8168 <= lookahead && lookahead <= 8172) ||
          (8184 <= lookahead && lookahead <= 8187) ||
          lookahead == 8450 ||
          lookahead == 8455 ||
          (8459 <= lookahead && lookahead <= 8461) ||
          (8464 <= lookahead && lookahead <= 8466) ||
          lookahead == 8469 ||
          (8473 <= lookahead && lookahead <= 8477) ||
          lookahead == 8484 ||
          lookahead == 8486 ||
          lookahead == 8488 ||
          (8490 <= lookahead && lookahead <= 8493) ||
          (8496 <= lookahead && lookahead <= 8499) ||
          lookahead == 8510 ||
          lookahead == 8511 ||
          lookahead == 8517 ||
          lookahead == 8579 ||
          (11264 <= lookahead && lookahead <= 11310) ||
          lookahead == 11360 ||
          (11362 <= lookahead && lookahead <= 11364) ||
          lookahead == 11367 ||
          lookahead == 11369 ||
          lookahead == 11371 ||
          (11373 <= lookahead && lookahead <= 11376) ||
          lookahead == 11378 ||
          lookahead == 11381 ||
          (11390 <= lookahead && lookahead <= 11392) ||
          lookahead == 11394 ||
          lookahead == 11396 ||
          lookahead == 11398 ||
          lookahead == 11400 ||
          lookahead == 11402 ||
          lookahead == 11404 ||
          lookahead == 11406 ||
          lookahead == 11408 ||
          lookahead == 11410 ||
          lookahead == 11412 ||
          lookahead == 11414 ||
          lookahead == 11416 ||
          lookahead == 11418 ||
          lookahead == 11420 ||
          lookahead == 11422 ||
          lookahead == 11424 ||
          lookahead == 11426 ||
          lookahead == 11428 ||
          lookahead == 11430 ||
          lookahead == 11432 ||
          lookahead == 11434 ||
          lookahead == 11436 ||
          lookahead == 11438 ||
          lookahead == 11440 ||
          lookahead == 11442 ||
          lookahead == 11444 ||
          lookahead == 11446 ||
          lookahead == 11448 ||
          lookahead == 11450 ||
          lookahead == 11452 ||
          lookahead == 11454 ||
          lookahead == 11456 ||
          lookahead == 11458 ||
          lookahead == 11460 ||
          lookahead == 11462 ||
          lookahead == 11464 ||
          lookahead == 11466 ||
          lookahead == 11468 ||
          lookahead == 11470 ||
          lookahead == 11472 ||
          lookahead == 11474 ||
          lookahead == 11476 ||
          lookahead == 11478 ||
          lookahead == 11480 ||
          lookahead == 11482 ||
          lookahead == 11484 ||
          lookahead == 11486 ||
          lookahead == 11488 ||
          lookahead == 11490 ||
          lookahead == 11499 ||
          lookahead == 11501 ||
          lookahead == 11506 ||
          lookahead == 42560 ||
          lookahead == 42562 ||
          lookahead == 42564 ||
          lookahead == 42566 ||
          lookahead == 42568 ||
          lookahead == 42570 ||
          lookahead == 42572 ||
          lookahead == 42574 ||
          lookahead == 42576 ||
          lookahead == 42578 ||
          lookahead == 42580 ||
          lookahead == 42582 ||
          lookahead == 42584 ||
          lookahead == 42586 ||
          lookahead == 42588 ||
          lookahead == 42590 ||
          lookahead == 42592 ||
          lookahead == 42594 ||
          lookahead == 42596 ||
          lookahead == 42598 ||
          lookahead == 42600 ||
          lookahead == 42602 ||
          lookahead == 42604 ||
          lookahead == 42624 ||
          lookahead == 42626 ||
          lookahead == 42628 ||
          lookahead == 42630 ||
          lookahead == 42632 ||
          lookahead == 42634 ||
          lookahead == 42636 ||
          lookahead == 42638 ||
          lookahead == 42640 ||
          lookahead == 42642 ||
          lookahead == 42644 ||
          lookahead == 42646 ||
          lookahead == 42648 ||
          lookahead == 42650 ||
          lookahead == 42786 ||
          lookahead == 42788 ||
          lookahead == 42790 ||
          lookahead == 42792 ||
          lookahead == 42794 ||
          lookahead == 42796 ||
          lookahead == 42798 ||
          lookahead == 42802 ||
          lookahead == 42804 ||
          lookahead == 42806 ||
          lookahead == 42808 ||
          lookahead == 42810 ||
          lookahead == 42812 ||
          lookahead == 42814 ||
          lookahead == 42816 ||
          lookahead == 42818 ||
          lookahead == 42820 ||
          lookahead == 42822 ||
          lookahead == 42824 ||
          lookahead == 42826 ||
          lookahead == 42828 ||
          lookahead == 42830 ||
          lookahead == 42832 ||
          lookahead == 42834 ||
          lookahead == 42836 ||
          lookahead == 42838 ||
          lookahead == 42840 ||
          lookahead == 42842 ||
          lookahead == 42844 ||
          lookahead == 42846 ||
          lookahead == 42848 ||
          lookahead == 42850 ||
          lookahead == 42852 ||
          lookahead == 42854 ||
          lookahead == 42856 ||
          lookahead == 42858 ||
          lookahead == 42860 ||
          lookahead == 42862 ||
          lookahead == 42873 ||
          lookahead == 42875 ||
          lookahead == 42877 ||
          lookahead == 42878 ||
          lookahead == 42880 ||
          lookahead == 42882 ||
          lookahead == 42884 ||
          lookahead == 42886 ||
          lookahead == 42891 ||
          lookahead == 42893 ||
          lookahead == 42896 ||
          lookahead == 42898 ||
          lookahead == 42902 ||
          lookahead == 42904 ||
          lookahead == 42906 ||
          lookahead == 42908 ||
          lookahead == 42910 ||
          lookahead == 42912 ||
          lookahead == 42914 ||
          lookahead == 42916 ||
          lookahead == 42918 ||
          lookahead == 42920 ||
          (42922 <= lookahead && lookahead <= 42926) ||
          (42928 <= lookahead && lookahead <= 42932) ||
          lookahead == 42934 ||
          lookahead == 42936 ||
          lookahead == 42938 ||
          lookahead == 42940 ||
          lookahead == 42942 ||
          lookahead == 42946 ||
          (42948 <= lookahead && lookahead <= 42950) ||
          (65313 <= lookahead && lookahead <= 65338) ||
          (66560 <= lookahead && lookahead <= 66599) ||
          (66736 <= lookahead && lookahead <= 66771) ||
          (68736 <= lookahead && lookahead <= 68786) ||
          (71840 <= lookahead && lookahead <= 71871) ||
          (93760 <= lookahead && lookahead <= 93791) ||
          (119808 <= lookahead && lookahead <= 119833) ||
          (119860 <= lookahead && lookahead <= 119885) ||
          (119912 <= lookahead && lookahead <= 119937) ||
          lookahead == 119964 ||
          lookahead == 119966 ||
          lookahead == 119967 ||
          lookahead == 119970 ||
          lookahead == 119973 ||
          lookahead == 119974 ||
          (119977 <= lookahead && lookahead <= 119980) ||
          (119982 <= lookahead && lookahead <= 119989) ||
          (120016 <= lookahead && lookahead <= 120041) ||
          lookahead == 120068 ||
          lookahead == 120069 ||
          (120071 <= lookahead && lookahead <= 120074) ||
          (120077 <= lookahead && lookahead <= 120084) ||
          (120086 <= lookahead && lookahead <= 120092) ||
          lookahead == 120120 ||
          lookahead == 120121 ||
          (120123 <= lookahead && lookahead <= 120126) ||
          (120128 <= lookahead && lookahead <= 120132) ||
          lookahead == 120134 ||
          (120138 <= lookahead && lookahead <= 120144) ||
          (120172 <= lookahead && lookahead <= 120197) ||
          (120224 <= lookahead && lookahead <= 120249) ||
          (120276 <= lookahead && lookahead <= 120301) ||
          (120328 <= lookahead && lookahead <= 120353) ||
          (120380 <= lookahead && lookahead <= 120405) ||
          (120432 <= lookahead && lookahead <= 120457) ||
          (120488 <= lookahead && lookahead <= 120512) ||
          (120546 <= lookahead && lookahead <= 120570) ||
          (120604 <= lookahead && lookahead <= 120628) ||
          (120662 <= lookahead && lookahead <= 120686) ||
          (120720 <= lookahead && lookahead <= 120744) ||
          lookahead == 120778 ||
          (125184 <= lookahead && lookahead <= 125217)) ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(114);
      if (lookahead == '\n') ADVANCE(116);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == ':') ADVANCE(120);
      if (lookahead == ';') ADVANCE(115);
      if (lookahead == 'b') ADVANCE(25);
      if (lookahead == 'c') ADVANCE(59);
      if (lookahead == 'd') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead == 'q') ADVANCE(94);
      if (lookahead == '}') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(178);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == ')') ADVANCE(151);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '+') ADVANCE(153);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == 'F') ADVANCE(12);
      if (lookahead == 'T') ADVANCE(15);
      if (lookahead == '^') ADVANCE(111);
      if (lookahead == '}') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222) ||
          lookahead == 256 ||
          lookahead == 258 ||
          lookahead == 260 ||
          lookahead == 262 ||
          lookahead == 264 ||
          lookahead == 266 ||
          lookahead == 268 ||
          lookahead == 270 ||
          lookahead == 272 ||
          lookahead == 274 ||
          lookahead == 276 ||
          lookahead == 278 ||
          lookahead == 280 ||
          lookahead == 282 ||
          lookahead == 284 ||
          lookahead == 286 ||
          lookahead == 288 ||
          lookahead == 290 ||
          lookahead == 292 ||
          lookahead == 294 ||
          lookahead == 296 ||
          lookahead == 298 ||
          lookahead == 300 ||
          lookahead == 302 ||
          lookahead == 304 ||
          lookahead == 306 ||
          lookahead == 308 ||
          lookahead == 310 ||
          lookahead == 313 ||
          lookahead == 315 ||
          lookahead == 317 ||
          lookahead == 319 ||
          lookahead == 321 ||
          lookahead == 323 ||
          lookahead == 325 ||
          lookahead == 327 ||
          lookahead == 330 ||
          lookahead == 332 ||
          lookahead == 334 ||
          lookahead == 336 ||
          lookahead == 338 ||
          lookahead == 340 ||
          lookahead == 342 ||
          lookahead == 344 ||
          lookahead == 346 ||
          lookahead == 348 ||
          lookahead == 350 ||
          lookahead == 352 ||
          lookahead == 354 ||
          lookahead == 356 ||
          lookahead == 358 ||
          lookahead == 360 ||
          lookahead == 362 ||
          lookahead == 364 ||
          lookahead == 366 ||
          lookahead == 368 ||
          lookahead == 370 ||
          lookahead == 372 ||
          lookahead == 374 ||
          lookahead == 376 ||
          lookahead == 377 ||
          lookahead == 379 ||
          lookahead == 381 ||
          lookahead == 385 ||
          lookahead == 386 ||
          lookahead == 388 ||
          lookahead == 390 ||
          lookahead == 391 ||
          (393 <= lookahead && lookahead <= 395) ||
          (398 <= lookahead && lookahead <= 401) ||
          lookahead == 403 ||
          lookahead == 404 ||
          (406 <= lookahead && lookahead <= 408) ||
          lookahead == 412 ||
          lookahead == 413 ||
          lookahead == 415 ||
          lookahead == 416 ||
          lookahead == 418 ||
          lookahead == 420 ||
          lookahead == 422 ||
          lookahead == 423 ||
          lookahead == 425 ||
          lookahead == 428 ||
          lookahead == 430 ||
          lookahead == 431 ||
          (433 <= lookahead && lookahead <= 435) ||
          lookahead == 437 ||
          lookahead == 439 ||
          lookahead == 440 ||
          lookahead == 444 ||
          lookahead == 452 ||
          lookahead == 455 ||
          lookahead == 458 ||
          lookahead == 461 ||
          lookahead == 463 ||
          lookahead == 465 ||
          lookahead == 467 ||
          lookahead == 469 ||
          lookahead == 471 ||
          lookahead == 473 ||
          lookahead == 475 ||
          lookahead == 478 ||
          lookahead == 480 ||
          lookahead == 482 ||
          lookahead == 484 ||
          lookahead == 486 ||
          lookahead == 488 ||
          lookahead == 490 ||
          lookahead == 492 ||
          lookahead == 494 ||
          lookahead == 497 ||
          lookahead == 500 ||
          (502 <= lookahead && lookahead <= 504) ||
          lookahead == 506 ||
          lookahead == 508 ||
          lookahead == 510 ||
          lookahead == 512 ||
          lookahead == 514 ||
          lookahead == 516 ||
          lookahead == 518 ||
          lookahead == 520 ||
          lookahead == 522 ||
          lookahead == 524 ||
          lookahead == 526 ||
          lookahead == 528 ||
          lookahead == 530 ||
          lookahead == 532 ||
          lookahead == 534 ||
          lookahead == 536 ||
          lookahead == 538 ||
          lookahead == 540 ||
          lookahead == 542 ||
          lookahead == 544 ||
          lookahead == 546 ||
          lookahead == 548 ||
          lookahead == 550 ||
          lookahead == 552 ||
          lookahead == 554 ||
          lookahead == 556 ||
          lookahead == 558 ||
          lookahead == 560 ||
          lookahead == 562 ||
          lookahead == 570 ||
          lookahead == 571 ||
          lookahead == 573 ||
          lookahead == 574 ||
          lookahead == 577 ||
          (579 <= lookahead && lookahead <= 582) ||
          lookahead == 584 ||
          lookahead == 586 ||
          lookahead == 588 ||
          lookahead == 590 ||
          lookahead == 880 ||
          lookahead == 882 ||
          lookahead == 886 ||
          lookahead == 895 ||
          lookahead == 902 ||
          (904 <= lookahead && lookahead <= 906) ||
          lookahead == 908 ||
          lookahead == 910 ||
          lookahead == 911 ||
          (913 <= lookahead && lookahead <= 929) ||
          (931 <= lookahead && lookahead <= 939) ||
          lookahead == 975 ||
          (978 <= lookahead && lookahead <= 980) ||
          lookahead == 984 ||
          lookahead == 986 ||
          lookahead == 988 ||
          lookahead == 990 ||
          lookahead == 992 ||
          lookahead == 994 ||
          lookahead == 996 ||
          lookahead == 998 ||
          lookahead == 1000 ||
          lookahead == 1002 ||
          lookahead == 1004 ||
          lookahead == 1006 ||
          lookahead == 1012 ||
          lookahead == 1015 ||
          lookahead == 1017 ||
          lookahead == 1018 ||
          (1021 <= lookahead && lookahead <= 1071) ||
          lookahead == 1120 ||
          lookahead == 1122 ||
          lookahead == 1124 ||
          lookahead == 1126 ||
          lookahead == 1128 ||
          lookahead == 1130 ||
          lookahead == 1132 ||
          lookahead == 1134 ||
          lookahead == 1136 ||
          lookahead == 1138 ||
          lookahead == 1140 ||
          lookahead == 1142 ||
          lookahead == 1144 ||
          lookahead == 1146 ||
          lookahead == 1148 ||
          lookahead == 1150 ||
          lookahead == 1152 ||
          lookahead == 1162 ||
          lookahead == 1164 ||
          lookahead == 1166 ||
          lookahead == 1168 ||
          lookahead == 1170 ||
          lookahead == 1172 ||
          lookahead == 1174 ||
          lookahead == 1176 ||
          lookahead == 1178 ||
          lookahead == 1180 ||
          lookahead == 1182 ||
          lookahead == 1184 ||
          lookahead == 1186 ||
          lookahead == 1188 ||
          lookahead == 1190 ||
          lookahead == 1192 ||
          lookahead == 1194 ||
          lookahead == 1196 ||
          lookahead == 1198 ||
          lookahead == 1200 ||
          lookahead == 1202 ||
          lookahead == 1204 ||
          lookahead == 1206 ||
          lookahead == 1208 ||
          lookahead == 1210 ||
          lookahead == 1212 ||
          lookahead == 1214 ||
          lookahead == 1216 ||
          lookahead == 1217 ||
          lookahead == 1219 ||
          lookahead == 1221 ||
          lookahead == 1223 ||
          lookahead == 1225 ||
          lookahead == 1227 ||
          lookahead == 1229 ||
          lookahead == 1232 ||
          lookahead == 1234 ||
          lookahead == 1236 ||
          lookahead == 1238 ||
          lookahead == 1240 ||
          lookahead == 1242 ||
          lookahead == 1244 ||
          lookahead == 1246 ||
          lookahead == 1248 ||
          lookahead == 1250 ||
          lookahead == 1252 ||
          lookahead == 1254 ||
          lookahead == 1256 ||
          lookahead == 1258 ||
          lookahead == 1260 ||
          lookahead == 1262 ||
          lookahead == 1264 ||
          lookahead == 1266 ||
          lookahead == 1268 ||
          lookahead == 1270 ||
          lookahead == 1272 ||
          lookahead == 1274 ||
          lookahead == 1276 ||
          lookahead == 1278 ||
          lookahead == 1280 ||
          lookahead == 1282 ||
          lookahead == 1284 ||
          lookahead == 1286 ||
          lookahead == 1288 ||
          lookahead == 1290 ||
          lookahead == 1292 ||
          lookahead == 1294 ||
          lookahead == 1296 ||
          lookahead == 1298 ||
          lookahead == 1300 ||
          lookahead == 1302 ||
          lookahead == 1304 ||
          lookahead == 1306 ||
          lookahead == 1308 ||
          lookahead == 1310 ||
          lookahead == 1312 ||
          lookahead == 1314 ||
          lookahead == 1316 ||
          lookahead == 1318 ||
          lookahead == 1320 ||
          lookahead == 1322 ||
          lookahead == 1324 ||
          lookahead == 1326 ||
          (1329 <= lookahead && lookahead <= 1366) ||
          (4256 <= lookahead && lookahead <= 4293) ||
          lookahead == 4295 ||
          lookahead == 4301 ||
          (5024 <= lookahead && lookahead <= 5109) ||
          (7312 <= lookahead && lookahead <= 7354) ||
          (7357 <= lookahead && lookahead <= 7359) ||
          lookahead == 7680 ||
          lookahead == 7682 ||
          lookahead == 7684 ||
          lookahead == 7686 ||
          lookahead == 7688 ||
          lookahead == 7690 ||
          lookahead == 7692 ||
          lookahead == 7694 ||
          lookahead == 7696 ||
          lookahead == 7698 ||
          lookahead == 7700 ||
          lookahead == 7702 ||
          lookahead == 7704 ||
          lookahead == 7706 ||
          lookahead == 7708 ||
          lookahead == 7710 ||
          lookahead == 7712 ||
          lookahead == 7714 ||
          lookahead == 7716 ||
          lookahead == 7718 ||
          lookahead == 7720 ||
          lookahead == 7722 ||
          lookahead == 7724 ||
          lookahead == 7726 ||
          lookahead == 7728 ||
          lookahead == 7730 ||
          lookahead == 7732 ||
          lookahead == 7734 ||
          lookahead == 7736 ||
          lookahead == 7738 ||
          lookahead == 7740 ||
          lookahead == 7742 ||
          lookahead == 7744 ||
          lookahead == 7746 ||
          lookahead == 7748 ||
          lookahead == 7750 ||
          lookahead == 7752 ||
          lookahead == 7754 ||
          lookahead == 7756 ||
          lookahead == 7758 ||
          lookahead == 7760 ||
          lookahead == 7762 ||
          lookahead == 7764 ||
          lookahead == 7766 ||
          lookahead == 7768 ||
          lookahead == 7770 ||
          lookahead == 7772 ||
          lookahead == 7774 ||
          lookahead == 7776 ||
          lookahead == 7778 ||
          lookahead == 7780 ||
          lookahead == 7782 ||
          lookahead == 7784 ||
          lookahead == 7786 ||
          lookahead == 7788 ||
          lookahead == 7790 ||
          lookahead == 7792 ||
          lookahead == 7794 ||
          lookahead == 7796 ||
          lookahead == 7798 ||
          lookahead == 7800 ||
          lookahead == 7802 ||
          lookahead == 7804 ||
          lookahead == 7806 ||
          lookahead == 7808 ||
          lookahead == 7810 ||
          lookahead == 7812 ||
          lookahead == 7814 ||
          lookahead == 7816 ||
          lookahead == 7818 ||
          lookahead == 7820 ||
          lookahead == 7822 ||
          lookahead == 7824 ||
          lookahead == 7826 ||
          lookahead == 7828 ||
          lookahead == 7838 ||
          lookahead == 7840 ||
          lookahead == 7842 ||
          lookahead == 7844 ||
          lookahead == 7846 ||
          lookahead == 7848 ||
          lookahead == 7850 ||
          lookahead == 7852 ||
          lookahead == 7854 ||
          lookahead == 7856 ||
          lookahead == 7858 ||
          lookahead == 7860 ||
          lookahead == 7862 ||
          lookahead == 7864 ||
          lookahead == 7866 ||
          lookahead == 7868 ||
          lookahead == 7870 ||
          lookahead == 7872 ||
          lookahead == 7874 ||
          lookahead == 7876 ||
          lookahead == 7878 ||
          lookahead == 7880 ||
          lookahead == 7882 ||
          lookahead == 7884 ||
          lookahead == 7886 ||
          lookahead == 7888 ||
          lookahead == 7890 ||
          lookahead == 7892 ||
          lookahead == 7894 ||
          lookahead == 7896 ||
          lookahead == 7898 ||
          lookahead == 7900 ||
          lookahead == 7902 ||
          lookahead == 7904 ||
          lookahead == 7906 ||
          lookahead == 7908 ||
          lookahead == 7910 ||
          lookahead == 7912 ||
          lookahead == 7914 ||
          lookahead == 7916 ||
          lookahead == 7918 ||
          lookahead == 7920 ||
          lookahead == 7922 ||
          lookahead == 7924 ||
          lookahead == 7926 ||
          lookahead == 7928 ||
          lookahead == 7930 ||
          lookahead == 7932 ||
          lookahead == 7934 ||
          (7944 <= lookahead && lookahead <= 7951) ||
          (7960 <= lookahead && lookahead <= 7965) ||
          (7976 <= lookahead && lookahead <= 7983) ||
          (7992 <= lookahead && lookahead <= 7999) ||
          (8008 <= lookahead && lookahead <= 8013) ||
          lookahead == 8025 ||
          lookahead == 8027 ||
          lookahead == 8029 ||
          lookahead == 8031 ||
          (8040 <= lookahead && lookahead <= 8047) ||
          (8120 <= lookahead && lookahead <= 8123) ||
          (8136 <= lookahead && lookahead <= 8139) ||
          (8152 <= lookahead && lookahead <= 8155) ||
          (8168 <= lookahead && lookahead <= 8172) ||
          (8184 <= lookahead && lookahead <= 8187) ||
          lookahead == 8450 ||
          lookahead == 8455 ||
          (8459 <= lookahead && lookahead <= 8461) ||
          (8464 <= lookahead && lookahead <= 8466) ||
          lookahead == 8469 ||
          (8473 <= lookahead && lookahead <= 8477) ||
          lookahead == 8484 ||
          lookahead == 8486 ||
          lookahead == 8488 ||
          (8490 <= lookahead && lookahead <= 8493) ||
          (8496 <= lookahead && lookahead <= 8499) ||
          lookahead == 8510 ||
          lookahead == 8511 ||
          lookahead == 8517 ||
          lookahead == 8579 ||
          (11264 <= lookahead && lookahead <= 11310) ||
          lookahead == 11360 ||
          (11362 <= lookahead && lookahead <= 11364) ||
          lookahead == 11367 ||
          lookahead == 11369 ||
          lookahead == 11371 ||
          (11373 <= lookahead && lookahead <= 11376) ||
          lookahead == 11378 ||
          lookahead == 11381 ||
          (11390 <= lookahead && lookahead <= 11392) ||
          lookahead == 11394 ||
          lookahead == 11396 ||
          lookahead == 11398 ||
          lookahead == 11400 ||
          lookahead == 11402 ||
          lookahead == 11404 ||
          lookahead == 11406 ||
          lookahead == 11408 ||
          lookahead == 11410 ||
          lookahead == 11412 ||
          lookahead == 11414 ||
          lookahead == 11416 ||
          lookahead == 11418 ||
          lookahead == 11420 ||
          lookahead == 11422 ||
          lookahead == 11424 ||
          lookahead == 11426 ||
          lookahead == 11428 ||
          lookahead == 11430 ||
          lookahead == 11432 ||
          lookahead == 11434 ||
          lookahead == 11436 ||
          lookahead == 11438 ||
          lookahead == 11440 ||
          lookahead == 11442 ||
          lookahead == 11444 ||
          lookahead == 11446 ||
          lookahead == 11448 ||
          lookahead == 11450 ||
          lookahead == 11452 ||
          lookahead == 11454 ||
          lookahead == 11456 ||
          lookahead == 11458 ||
          lookahead == 11460 ||
          lookahead == 11462 ||
          lookahead == 11464 ||
          lookahead == 11466 ||
          lookahead == 11468 ||
          lookahead == 11470 ||
          lookahead == 11472 ||
          lookahead == 11474 ||
          lookahead == 11476 ||
          lookahead == 11478 ||
          lookahead == 11480 ||
          lookahead == 11482 ||
          lookahead == 11484 ||
          lookahead == 11486 ||
          lookahead == 11488 ||
          lookahead == 11490 ||
          lookahead == 11499 ||
          lookahead == 11501 ||
          lookahead == 11506 ||
          lookahead == 42560 ||
          lookahead == 42562 ||
          lookahead == 42564 ||
          lookahead == 42566 ||
          lookahead == 42568 ||
          lookahead == 42570 ||
          lookahead == 42572 ||
          lookahead == 42574 ||
          lookahead == 42576 ||
          lookahead == 42578 ||
          lookahead == 42580 ||
          lookahead == 42582 ||
          lookahead == 42584 ||
          lookahead == 42586 ||
          lookahead == 42588 ||
          lookahead == 42590 ||
          lookahead == 42592 ||
          lookahead == 42594 ||
          lookahead == 42596 ||
          lookahead == 42598 ||
          lookahead == 42600 ||
          lookahead == 42602 ||
          lookahead == 42604 ||
          lookahead == 42624 ||
          lookahead == 42626 ||
          lookahead == 42628 ||
          lookahead == 42630 ||
          lookahead == 42632 ||
          lookahead == 42634 ||
          lookahead == 42636 ||
          lookahead == 42638 ||
          lookahead == 42640 ||
          lookahead == 42642 ||
          lookahead == 42644 ||
          lookahead == 42646 ||
          lookahead == 42648 ||
          lookahead == 42650 ||
          lookahead == 42786 ||
          lookahead == 42788 ||
          lookahead == 42790 ||
          lookahead == 42792 ||
          lookahead == 42794 ||
          lookahead == 42796 ||
          lookahead == 42798 ||
          lookahead == 42802 ||
          lookahead == 42804 ||
          lookahead == 42806 ||
          lookahead == 42808 ||
          lookahead == 42810 ||
          lookahead == 42812 ||
          lookahead == 42814 ||
          lookahead == 42816 ||
          lookahead == 42818 ||
          lookahead == 42820 ||
          lookahead == 42822 ||
          lookahead == 42824 ||
          lookahead == 42826 ||
          lookahead == 42828 ||
          lookahead == 42830 ||
          lookahead == 42832 ||
          lookahead == 42834 ||
          lookahead == 42836 ||
          lookahead == 42838 ||
          lookahead == 42840 ||
          lookahead == 42842 ||
          lookahead == 42844 ||
          lookahead == 42846 ||
          lookahead == 42848 ||
          lookahead == 42850 ||
          lookahead == 42852 ||
          lookahead == 42854 ||
          lookahead == 42856 ||
          lookahead == 42858 ||
          lookahead == 42860 ||
          lookahead == 42862 ||
          lookahead == 42873 ||
          lookahead == 42875 ||
          lookahead == 42877 ||
          lookahead == 42878 ||
          lookahead == 42880 ||
          lookahead == 42882 ||
          lookahead == 42884 ||
          lookahead == 42886 ||
          lookahead == 42891 ||
          lookahead == 42893 ||
          lookahead == 42896 ||
          lookahead == 42898 ||
          lookahead == 42902 ||
          lookahead == 42904 ||
          lookahead == 42906 ||
          lookahead == 42908 ||
          lookahead == 42910 ||
          lookahead == 42912 ||
          lookahead == 42914 ||
          lookahead == 42916 ||
          lookahead == 42918 ||
          lookahead == 42920 ||
          (42922 <= lookahead && lookahead <= 42926) ||
          (42928 <= lookahead && lookahead <= 42932) ||
          lookahead == 42934 ||
          lookahead == 42936 ||
          lookahead == 42938 ||
          lookahead == 42940 ||
          lookahead == 42942 ||
          lookahead == 42946 ||
          (42948 <= lookahead && lookahead <= 42950) ||
          (65313 <= lookahead && lookahead <= 65338) ||
          (66560 <= lookahead && lookahead <= 66599) ||
          (66736 <= lookahead && lookahead <= 66771) ||
          (68736 <= lookahead && lookahead <= 68786) ||
          (71840 <= lookahead && lookahead <= 71871) ||
          (93760 <= lookahead && lookahead <= 93791) ||
          (119808 <= lookahead && lookahead <= 119833) ||
          (119860 <= lookahead && lookahead <= 119885) ||
          (119912 <= lookahead && lookahead <= 119937) ||
          lookahead == 119964 ||
          lookahead == 119966 ||
          lookahead == 119967 ||
          lookahead == 119970 ||
          lookahead == 119973 ||
          lookahead == 119974 ||
          (119977 <= lookahead && lookahead <= 119980) ||
          (119982 <= lookahead && lookahead <= 119989) ||
          (120016 <= lookahead && lookahead <= 120041) ||
          lookahead == 120068 ||
          lookahead == 120069 ||
          (120071 <= lookahead && lookahead <= 120074) ||
          (120077 <= lookahead && lookahead <= 120084) ||
          (120086 <= lookahead && lookahead <= 120092) ||
          lookahead == 120120 ||
          lookahead == 120121 ||
          (120123 <= lookahead && lookahead <= 120126) ||
          (120128 <= lookahead && lookahead <= 120132) ||
          lookahead == 120134 ||
          (120138 <= lookahead && lookahead <= 120144) ||
          (120172 <= lookahead && lookahead <= 120197) ||
          (120224 <= lookahead && lookahead <= 120249) ||
          (120276 <= lookahead && lookahead <= 120301) ||
          (120328 <= lookahead && lookahead <= 120353) ||
          (120380 <= lookahead && lookahead <= 120405) ||
          (120432 <= lookahead && lookahead <= 120457) ||
          (120488 <= lookahead && lookahead <= 120512) ||
          (120546 <= lookahead && lookahead <= 120570) ||
          (120604 <= lookahead && lookahead <= 120628) ||
          (120662 <= lookahead && lookahead <= 120686) ||
          (120720 <= lookahead && lookahead <= 120744) ||
          lookahead == 120778 ||
          (125184 <= lookahead && lookahead <= 125217)) ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '+') ADVANCE(153);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == 'F') ADVANCE(9);
      if (lookahead == 'T') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(11);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222) ||
          lookahead == 256 ||
          lookahead == 258 ||
          lookahead == 260 ||
          lookahead == 262 ||
          lookahead == 264 ||
          lookahead == 266 ||
          lookahead == 268 ||
          lookahead == 270 ||
          lookahead == 272 ||
          lookahead == 274 ||
          lookahead == 276 ||
          lookahead == 278 ||
          lookahead == 280 ||
          lookahead == 282 ||
          lookahead == 284 ||
          lookahead == 286 ||
          lookahead == 288 ||
          lookahead == 290 ||
          lookahead == 292 ||
          lookahead == 294 ||
          lookahead == 296 ||
          lookahead == 298 ||
          lookahead == 300 ||
          lookahead == 302 ||
          lookahead == 304 ||
          lookahead == 306 ||
          lookahead == 308 ||
          lookahead == 310 ||
          lookahead == 313 ||
          lookahead == 315 ||
          lookahead == 317 ||
          lookahead == 319 ||
          lookahead == 321 ||
          lookahead == 323 ||
          lookahead == 325 ||
          lookahead == 327 ||
          lookahead == 330 ||
          lookahead == 332 ||
          lookahead == 334 ||
          lookahead == 336 ||
          lookahead == 338 ||
          lookahead == 340 ||
          lookahead == 342 ||
          lookahead == 344 ||
          lookahead == 346 ||
          lookahead == 348 ||
          lookahead == 350 ||
          lookahead == 352 ||
          lookahead == 354 ||
          lookahead == 356 ||
          lookahead == 358 ||
          lookahead == 360 ||
          lookahead == 362 ||
          lookahead == 364 ||
          lookahead == 366 ||
          lookahead == 368 ||
          lookahead == 370 ||
          lookahead == 372 ||
          lookahead == 374 ||
          lookahead == 376 ||
          lookahead == 377 ||
          lookahead == 379 ||
          lookahead == 381 ||
          lookahead == 385 ||
          lookahead == 386 ||
          lookahead == 388 ||
          lookahead == 390 ||
          lookahead == 391 ||
          (393 <= lookahead && lookahead <= 395) ||
          (398 <= lookahead && lookahead <= 401) ||
          lookahead == 403 ||
          lookahead == 404 ||
          (406 <= lookahead && lookahead <= 408) ||
          lookahead == 412 ||
          lookahead == 413 ||
          lookahead == 415 ||
          lookahead == 416 ||
          lookahead == 418 ||
          lookahead == 420 ||
          lookahead == 422 ||
          lookahead == 423 ||
          lookahead == 425 ||
          lookahead == 428 ||
          lookahead == 430 ||
          lookahead == 431 ||
          (433 <= lookahead && lookahead <= 435) ||
          lookahead == 437 ||
          lookahead == 439 ||
          lookahead == 440 ||
          lookahead == 444 ||
          lookahead == 452 ||
          lookahead == 455 ||
          lookahead == 458 ||
          lookahead == 461 ||
          lookahead == 463 ||
          lookahead == 465 ||
          lookahead == 467 ||
          lookahead == 469 ||
          lookahead == 471 ||
          lookahead == 473 ||
          lookahead == 475 ||
          lookahead == 478 ||
          lookahead == 480 ||
          lookahead == 482 ||
          lookahead == 484 ||
          lookahead == 486 ||
          lookahead == 488 ||
          lookahead == 490 ||
          lookahead == 492 ||
          lookahead == 494 ||
          lookahead == 497 ||
          lookahead == 500 ||
          (502 <= lookahead && lookahead <= 504) ||
          lookahead == 506 ||
          lookahead == 508 ||
          lookahead == 510 ||
          lookahead == 512 ||
          lookahead == 514 ||
          lookahead == 516 ||
          lookahead == 518 ||
          lookahead == 520 ||
          lookahead == 522 ||
          lookahead == 524 ||
          lookahead == 526 ||
          lookahead == 528 ||
          lookahead == 530 ||
          lookahead == 532 ||
          lookahead == 534 ||
          lookahead == 536 ||
          lookahead == 538 ||
          lookahead == 540 ||
          lookahead == 542 ||
          lookahead == 544 ||
          lookahead == 546 ||
          lookahead == 548 ||
          lookahead == 550 ||
          lookahead == 552 ||
          lookahead == 554 ||
          lookahead == 556 ||
          lookahead == 558 ||
          lookahead == 560 ||
          lookahead == 562 ||
          lookahead == 570 ||
          lookahead == 571 ||
          lookahead == 573 ||
          lookahead == 574 ||
          lookahead == 577 ||
          (579 <= lookahead && lookahead <= 582) ||
          lookahead == 584 ||
          lookahead == 586 ||
          lookahead == 588 ||
          lookahead == 590 ||
          lookahead == 880 ||
          lookahead == 882 ||
          lookahead == 886 ||
          lookahead == 895 ||
          lookahead == 902 ||
          (904 <= lookahead && lookahead <= 906) ||
          lookahead == 908 ||
          lookahead == 910 ||
          lookahead == 911 ||
          (913 <= lookahead && lookahead <= 929) ||
          (931 <= lookahead && lookahead <= 939) ||
          lookahead == 975 ||
          (978 <= lookahead && lookahead <= 980) ||
          lookahead == 984 ||
          lookahead == 986 ||
          lookahead == 988 ||
          lookahead == 990 ||
          lookahead == 992 ||
          lookahead == 994 ||
          lookahead == 996 ||
          lookahead == 998 ||
          lookahead == 1000 ||
          lookahead == 1002 ||
          lookahead == 1004 ||
          lookahead == 1006 ||
          lookahead == 1012 ||
          lookahead == 1015 ||
          lookahead == 1017 ||
          lookahead == 1018 ||
          (1021 <= lookahead && lookahead <= 1071) ||
          lookahead == 1120 ||
          lookahead == 1122 ||
          lookahead == 1124 ||
          lookahead == 1126 ||
          lookahead == 1128 ||
          lookahead == 1130 ||
          lookahead == 1132 ||
          lookahead == 1134 ||
          lookahead == 1136 ||
          lookahead == 1138 ||
          lookahead == 1140 ||
          lookahead == 1142 ||
          lookahead == 1144 ||
          lookahead == 1146 ||
          lookahead == 1148 ||
          lookahead == 1150 ||
          lookahead == 1152 ||
          lookahead == 1162 ||
          lookahead == 1164 ||
          lookahead == 1166 ||
          lookahead == 1168 ||
          lookahead == 1170 ||
          lookahead == 1172 ||
          lookahead == 1174 ||
          lookahead == 1176 ||
          lookahead == 1178 ||
          lookahead == 1180 ||
          lookahead == 1182 ||
          lookahead == 1184 ||
          lookahead == 1186 ||
          lookahead == 1188 ||
          lookahead == 1190 ||
          lookahead == 1192 ||
          lookahead == 1194 ||
          lookahead == 1196 ||
          lookahead == 1198 ||
          lookahead == 1200 ||
          lookahead == 1202 ||
          lookahead == 1204 ||
          lookahead == 1206 ||
          lookahead == 1208 ||
          lookahead == 1210 ||
          lookahead == 1212 ||
          lookahead == 1214 ||
          lookahead == 1216 ||
          lookahead == 1217 ||
          lookahead == 1219 ||
          lookahead == 1221 ||
          lookahead == 1223 ||
          lookahead == 1225 ||
          lookahead == 1227 ||
          lookahead == 1229 ||
          lookahead == 1232 ||
          lookahead == 1234 ||
          lookahead == 1236 ||
          lookahead == 1238 ||
          lookahead == 1240 ||
          lookahead == 1242 ||
          lookahead == 1244 ||
          lookahead == 1246 ||
          lookahead == 1248 ||
          lookahead == 1250 ||
          lookahead == 1252 ||
          lookahead == 1254 ||
          lookahead == 1256 ||
          lookahead == 1258 ||
          lookahead == 1260 ||
          lookahead == 1262 ||
          lookahead == 1264 ||
          lookahead == 1266 ||
          lookahead == 1268 ||
          lookahead == 1270 ||
          lookahead == 1272 ||
          lookahead == 1274 ||
          lookahead == 1276 ||
          lookahead == 1278 ||
          lookahead == 1280 ||
          lookahead == 1282 ||
          lookahead == 1284 ||
          lookahead == 1286 ||
          lookahead == 1288 ||
          lookahead == 1290 ||
          lookahead == 1292 ||
          lookahead == 1294 ||
          lookahead == 1296 ||
          lookahead == 1298 ||
          lookahead == 1300 ||
          lookahead == 1302 ||
          lookahead == 1304 ||
          lookahead == 1306 ||
          lookahead == 1308 ||
          lookahead == 1310 ||
          lookahead == 1312 ||
          lookahead == 1314 ||
          lookahead == 1316 ||
          lookahead == 1318 ||
          lookahead == 1320 ||
          lookahead == 1322 ||
          lookahead == 1324 ||
          lookahead == 1326 ||
          (1329 <= lookahead && lookahead <= 1366) ||
          (4256 <= lookahead && lookahead <= 4293) ||
          lookahead == 4295 ||
          lookahead == 4301 ||
          (5024 <= lookahead && lookahead <= 5109) ||
          (7312 <= lookahead && lookahead <= 7354) ||
          (7357 <= lookahead && lookahead <= 7359) ||
          lookahead == 7680 ||
          lookahead == 7682 ||
          lookahead == 7684 ||
          lookahead == 7686 ||
          lookahead == 7688 ||
          lookahead == 7690 ||
          lookahead == 7692 ||
          lookahead == 7694 ||
          lookahead == 7696 ||
          lookahead == 7698 ||
          lookahead == 7700 ||
          lookahead == 7702 ||
          lookahead == 7704 ||
          lookahead == 7706 ||
          lookahead == 7708 ||
          lookahead == 7710 ||
          lookahead == 7712 ||
          lookahead == 7714 ||
          lookahead == 7716 ||
          lookahead == 7718 ||
          lookahead == 7720 ||
          lookahead == 7722 ||
          lookahead == 7724 ||
          lookahead == 7726 ||
          lookahead == 7728 ||
          lookahead == 7730 ||
          lookahead == 7732 ||
          lookahead == 7734 ||
          lookahead == 7736 ||
          lookahead == 7738 ||
          lookahead == 7740 ||
          lookahead == 7742 ||
          lookahead == 7744 ||
          lookahead == 7746 ||
          lookahead == 7748 ||
          lookahead == 7750 ||
          lookahead == 7752 ||
          lookahead == 7754 ||
          lookahead == 7756 ||
          lookahead == 7758 ||
          lookahead == 7760 ||
          lookahead == 7762 ||
          lookahead == 7764 ||
          lookahead == 7766 ||
          lookahead == 7768 ||
          lookahead == 7770 ||
          lookahead == 7772 ||
          lookahead == 7774 ||
          lookahead == 7776 ||
          lookahead == 7778 ||
          lookahead == 7780 ||
          lookahead == 7782 ||
          lookahead == 7784 ||
          lookahead == 7786 ||
          lookahead == 7788 ||
          lookahead == 7790 ||
          lookahead == 7792 ||
          lookahead == 7794 ||
          lookahead == 7796 ||
          lookahead == 7798 ||
          lookahead == 7800 ||
          lookahead == 7802 ||
          lookahead == 7804 ||
          lookahead == 7806 ||
          lookahead == 7808 ||
          lookahead == 7810 ||
          lookahead == 7812 ||
          lookahead == 7814 ||
          lookahead == 7816 ||
          lookahead == 7818 ||
          lookahead == 7820 ||
          lookahead == 7822 ||
          lookahead == 7824 ||
          lookahead == 7826 ||
          lookahead == 7828 ||
          lookahead == 7838 ||
          lookahead == 7840 ||
          lookahead == 7842 ||
          lookahead == 7844 ||
          lookahead == 7846 ||
          lookahead == 7848 ||
          lookahead == 7850 ||
          lookahead == 7852 ||
          lookahead == 7854 ||
          lookahead == 7856 ||
          lookahead == 7858 ||
          lookahead == 7860 ||
          lookahead == 7862 ||
          lookahead == 7864 ||
          lookahead == 7866 ||
          lookahead == 7868 ||
          lookahead == 7870 ||
          lookahead == 7872 ||
          lookahead == 7874 ||
          lookahead == 7876 ||
          lookahead == 7878 ||
          lookahead == 7880 ||
          lookahead == 7882 ||
          lookahead == 7884 ||
          lookahead == 7886 ||
          lookahead == 7888 ||
          lookahead == 7890 ||
          lookahead == 7892 ||
          lookahead == 7894 ||
          lookahead == 7896 ||
          lookahead == 7898 ||
          lookahead == 7900 ||
          lookahead == 7902 ||
          lookahead == 7904 ||
          lookahead == 7906 ||
          lookahead == 7908 ||
          lookahead == 7910 ||
          lookahead == 7912 ||
          lookahead == 7914 ||
          lookahead == 7916 ||
          lookahead == 7918 ||
          lookahead == 7920 ||
          lookahead == 7922 ||
          lookahead == 7924 ||
          lookahead == 7926 ||
          lookahead == 7928 ||
          lookahead == 7930 ||
          lookahead == 7932 ||
          lookahead == 7934 ||
          (7944 <= lookahead && lookahead <= 7951) ||
          (7960 <= lookahead && lookahead <= 7965) ||
          (7976 <= lookahead && lookahead <= 7983) ||
          (7992 <= lookahead && lookahead <= 7999) ||
          (8008 <= lookahead && lookahead <= 8013) ||
          lookahead == 8025 ||
          lookahead == 8027 ||
          lookahead == 8029 ||
          lookahead == 8031 ||
          (8040 <= lookahead && lookahead <= 8047) ||
          (8120 <= lookahead && lookahead <= 8123) ||
          (8136 <= lookahead && lookahead <= 8139) ||
          (8152 <= lookahead && lookahead <= 8155) ||
          (8168 <= lookahead && lookahead <= 8172) ||
          (8184 <= lookahead && lookahead <= 8187) ||
          lookahead == 8450 ||
          lookahead == 8455 ||
          (8459 <= lookahead && lookahead <= 8461) ||
          (8464 <= lookahead && lookahead <= 8466) ||
          lookahead == 8469 ||
          (8473 <= lookahead && lookahead <= 8477) ||
          lookahead == 8484 ||
          lookahead == 8486 ||
          lookahead == 8488 ||
          (8490 <= lookahead && lookahead <= 8493) ||
          (8496 <= lookahead && lookahead <= 8499) ||
          lookahead == 8510 ||
          lookahead == 8511 ||
          lookahead == 8517 ||
          lookahead == 8579 ||
          (11264 <= lookahead && lookahead <= 11310) ||
          lookahead == 11360 ||
          (11362 <= lookahead && lookahead <= 11364) ||
          lookahead == 11367 ||
          lookahead == 11369 ||
          lookahead == 11371 ||
          (11373 <= lookahead && lookahead <= 11376) ||
          lookahead == 11378 ||
          lookahead == 11381 ||
          (11390 <= lookahead && lookahead <= 11392) ||
          lookahead == 11394 ||
          lookahead == 11396 ||
          lookahead == 11398 ||
          lookahead == 11400 ||
          lookahead == 11402 ||
          lookahead == 11404 ||
          lookahead == 11406 ||
          lookahead == 11408 ||
          lookahead == 11410 ||
          lookahead == 11412 ||
          lookahead == 11414 ||
          lookahead == 11416 ||
          lookahead == 11418 ||
          lookahead == 11420 ||
          lookahead == 11422 ||
          lookahead == 11424 ||
          lookahead == 11426 ||
          lookahead == 11428 ||
          lookahead == 11430 ||
          lookahead == 11432 ||
          lookahead == 11434 ||
          lookahead == 11436 ||
          lookahead == 11438 ||
          lookahead == 11440 ||
          lookahead == 11442 ||
          lookahead == 11444 ||
          lookahead == 11446 ||
          lookahead == 11448 ||
          lookahead == 11450 ||
          lookahead == 11452 ||
          lookahead == 11454 ||
          lookahead == 11456 ||
          lookahead == 11458 ||
          lookahead == 11460 ||
          lookahead == 11462 ||
          lookahead == 11464 ||
          lookahead == 11466 ||
          lookahead == 11468 ||
          lookahead == 11470 ||
          lookahead == 11472 ||
          lookahead == 11474 ||
          lookahead == 11476 ||
          lookahead == 11478 ||
          lookahead == 11480 ||
          lookahead == 11482 ||
          lookahead == 11484 ||
          lookahead == 11486 ||
          lookahead == 11488 ||
          lookahead == 11490 ||
          lookahead == 11499 ||
          lookahead == 11501 ||
          lookahead == 11506 ||
          lookahead == 42560 ||
          lookahead == 42562 ||
          lookahead == 42564 ||
          lookahead == 42566 ||
          lookahead == 42568 ||
          lookahead == 42570 ||
          lookahead == 42572 ||
          lookahead == 42574 ||
          lookahead == 42576 ||
          lookahead == 42578 ||
          lookahead == 42580 ||
          lookahead == 42582 ||
          lookahead == 42584 ||
          lookahead == 42586 ||
          lookahead == 42588 ||
          lookahead == 42590 ||
          lookahead == 42592 ||
          lookahead == 42594 ||
          lookahead == 42596 ||
          lookahead == 42598 ||
          lookahead == 42600 ||
          lookahead == 42602 ||
          lookahead == 42604 ||
          lookahead == 42624 ||
          lookahead == 42626 ||
          lookahead == 42628 ||
          lookahead == 42630 ||
          lookahead == 42632 ||
          lookahead == 42634 ||
          lookahead == 42636 ||
          lookahead == 42638 ||
          lookahead == 42640 ||
          lookahead == 42642 ||
          lookahead == 42644 ||
          lookahead == 42646 ||
          lookahead == 42648 ||
          lookahead == 42650 ||
          lookahead == 42786 ||
          lookahead == 42788 ||
          lookahead == 42790 ||
          lookahead == 42792 ||
          lookahead == 42794 ||
          lookahead == 42796 ||
          lookahead == 42798 ||
          lookahead == 42802 ||
          lookahead == 42804 ||
          lookahead == 42806 ||
          lookahead == 42808 ||
          lookahead == 42810 ||
          lookahead == 42812 ||
          lookahead == 42814 ||
          lookahead == 42816 ||
          lookahead == 42818 ||
          lookahead == 42820 ||
          lookahead == 42822 ||
          lookahead == 42824 ||
          lookahead == 42826 ||
          lookahead == 42828 ||
          lookahead == 42830 ||
          lookahead == 42832 ||
          lookahead == 42834 ||
          lookahead == 42836 ||
          lookahead == 42838 ||
          lookahead == 42840 ||
          lookahead == 42842 ||
          lookahead == 42844 ||
          lookahead == 42846 ||
          lookahead == 42848 ||
          lookahead == 42850 ||
          lookahead == 42852 ||
          lookahead == 42854 ||
          lookahead == 42856 ||
          lookahead == 42858 ||
          lookahead == 42860 ||
          lookahead == 42862 ||
          lookahead == 42873 ||
          lookahead == 42875 ||
          lookahead == 42877 ||
          lookahead == 42878 ||
          lookahead == 42880 ||
          lookahead == 42882 ||
          lookahead == 42884 ||
          lookahead == 42886 ||
          lookahead == 42891 ||
          lookahead == 42893 ||
          lookahead == 42896 ||
          lookahead == 42898 ||
          lookahead == 42902 ||
          lookahead == 42904 ||
          lookahead == 42906 ||
          lookahead == 42908 ||
          lookahead == 42910 ||
          lookahead == 42912 ||
          lookahead == 42914 ||
          lookahead == 42916 ||
          lookahead == 42918 ||
          lookahead == 42920 ||
          (42922 <= lookahead && lookahead <= 42926) ||
          (42928 <= lookahead && lookahead <= 42932) ||
          lookahead == 42934 ||
          lookahead == 42936 ||
          lookahead == 42938 ||
          lookahead == 42940 ||
          lookahead == 42942 ||
          lookahead == 42946 ||
          (42948 <= lookahead && lookahead <= 42950) ||
          (65313 <= lookahead && lookahead <= 65338) ||
          (66560 <= lookahead && lookahead <= 66599) ||
          (66736 <= lookahead && lookahead <= 66771) ||
          (68736 <= lookahead && lookahead <= 68786) ||
          (71840 <= lookahead && lookahead <= 71871) ||
          (93760 <= lookahead && lookahead <= 93791) ||
          (119808 <= lookahead && lookahead <= 119833) ||
          (119860 <= lookahead && lookahead <= 119885) ||
          (119912 <= lookahead && lookahead <= 119937) ||
          lookahead == 119964 ||
          lookahead == 119966 ||
          lookahead == 119967 ||
          lookahead == 119970 ||
          lookahead == 119973 ||
          lookahead == 119974 ||
          (119977 <= lookahead && lookahead <= 119980) ||
          (119982 <= lookahead && lookahead <= 119989) ||
          (120016 <= lookahead && lookahead <= 120041) ||
          lookahead == 120068 ||
          lookahead == 120069 ||
          (120071 <= lookahead && lookahead <= 120074) ||
          (120077 <= lookahead && lookahead <= 120084) ||
          (120086 <= lookahead && lookahead <= 120092) ||
          lookahead == 120120 ||
          lookahead == 120121 ||
          (120123 <= lookahead && lookahead <= 120126) ||
          (120128 <= lookahead && lookahead <= 120132) ||
          lookahead == 120134 ||
          (120138 <= lookahead && lookahead <= 120144) ||
          (120172 <= lookahead && lookahead <= 120197) ||
          (120224 <= lookahead && lookahead <= 120249) ||
          (120276 <= lookahead && lookahead <= 120301) ||
          (120328 <= lookahead && lookahead <= 120353) ||
          (120380 <= lookahead && lookahead <= 120405) ||
          (120432 <= lookahead && lookahead <= 120457) ||
          (120488 <= lookahead && lookahead <= 120512) ||
          (120546 <= lookahead && lookahead <= 120570) ||
          (120604 <= lookahead && lookahead <= 120628) ||
          (120662 <= lookahead && lookahead <= 120686) ||
          (120720 <= lookahead && lookahead <= 120744) ||
          lookahead == 120778 ||
          (125184 <= lookahead && lookahead <= 125217)) ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '+') ADVANCE(153);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '@') ADVANCE(136);
      if (lookahead == '{') ADVANCE(129);
      if (lookahead == '~') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(104);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(116);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == '+') ADVANCE(153);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == 'F') ADVANCE(9);
      if (lookahead == 'T') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(11);
      if ((192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222) ||
          lookahead == 256 ||
          lookahead == 258 ||
          lookahead == 260 ||
          lookahead == 262 ||
          lookahead == 264 ||
          lookahead == 266 ||
          lookahead == 268 ||
          lookahead == 270 ||
          lookahead == 272 ||
          lookahead == 274 ||
          lookahead == 276 ||
          lookahead == 278 ||
          lookahead == 280 ||
          lookahead == 282 ||
          lookahead == 284 ||
          lookahead == 286 ||
          lookahead == 288 ||
          lookahead == 290 ||
          lookahead == 292 ||
          lookahead == 294 ||
          lookahead == 296 ||
          lookahead == 298 ||
          lookahead == 300 ||
          lookahead == 302 ||
          lookahead == 304 ||
          lookahead == 306 ||
          lookahead == 308 ||
          lookahead == 310 ||
          lookahead == 313 ||
          lookahead == 315 ||
          lookahead == 317 ||
          lookahead == 319 ||
          lookahead == 321 ||
          lookahead == 323 ||
          lookahead == 325 ||
          lookahead == 327 ||
          lookahead == 330 ||
          lookahead == 332 ||
          lookahead == 334 ||
          lookahead == 336 ||
          lookahead == 338 ||
          lookahead == 340 ||
          lookahead == 342 ||
          lookahead == 344 ||
          lookahead == 346 ||
          lookahead == 348 ||
          lookahead == 350 ||
          lookahead == 352 ||
          lookahead == 354 ||
          lookahead == 356 ||
          lookahead == 358 ||
          lookahead == 360 ||
          lookahead == 362 ||
          lookahead == 364 ||
          lookahead == 366 ||
          lookahead == 368 ||
          lookahead == 370 ||
          lookahead == 372 ||
          lookahead == 374 ||
          lookahead == 376 ||
          lookahead == 377 ||
          lookahead == 379 ||
          lookahead == 381 ||
          lookahead == 385 ||
          lookahead == 386 ||
          lookahead == 388 ||
          lookahead == 390 ||
          lookahead == 391 ||
          (393 <= lookahead && lookahead <= 395) ||
          (398 <= lookahead && lookahead <= 401) ||
          lookahead == 403 ||
          lookahead == 404 ||
          (406 <= lookahead && lookahead <= 408) ||
          lookahead == 412 ||
          lookahead == 413 ||
          lookahead == 415 ||
          lookahead == 416 ||
          lookahead == 418 ||
          lookahead == 420 ||
          lookahead == 422 ||
          lookahead == 423 ||
          lookahead == 425 ||
          lookahead == 428 ||
          lookahead == 430 ||
          lookahead == 431 ||
          (433 <= lookahead && lookahead <= 435) ||
          lookahead == 437 ||
          lookahead == 439 ||
          lookahead == 440 ||
          lookahead == 444 ||
          lookahead == 452 ||
          lookahead == 455 ||
          lookahead == 458 ||
          lookahead == 461 ||
          lookahead == 463 ||
          lookahead == 465 ||
          lookahead == 467 ||
          lookahead == 469 ||
          lookahead == 471 ||
          lookahead == 473 ||
          lookahead == 475 ||
          lookahead == 478 ||
          lookahead == 480 ||
          lookahead == 482 ||
          lookahead == 484 ||
          lookahead == 486 ||
          lookahead == 488 ||
          lookahead == 490 ||
          lookahead == 492 ||
          lookahead == 494 ||
          lookahead == 497 ||
          lookahead == 500 ||
          (502 <= lookahead && lookahead <= 504) ||
          lookahead == 506 ||
          lookahead == 508 ||
          lookahead == 510 ||
          lookahead == 512 ||
          lookahead == 514 ||
          lookahead == 516 ||
          lookahead == 518 ||
          lookahead == 520 ||
          lookahead == 522 ||
          lookahead == 524 ||
          lookahead == 526 ||
          lookahead == 528 ||
          lookahead == 530 ||
          lookahead == 532 ||
          lookahead == 534 ||
          lookahead == 536 ||
          lookahead == 538 ||
          lookahead == 540 ||
          lookahead == 542 ||
          lookahead == 544 ||
          lookahead == 546 ||
          lookahead == 548 ||
          lookahead == 550 ||
          lookahead == 552 ||
          lookahead == 554 ||
          lookahead == 556 ||
          lookahead == 558 ||
          lookahead == 560 ||
          lookahead == 562 ||
          lookahead == 570 ||
          lookahead == 571 ||
          lookahead == 573 ||
          lookahead == 574 ||
          lookahead == 577 ||
          (579 <= lookahead && lookahead <= 582) ||
          lookahead == 584 ||
          lookahead == 586 ||
          lookahead == 588 ||
          lookahead == 590 ||
          lookahead == 880 ||
          lookahead == 882 ||
          lookahead == 886 ||
          lookahead == 895 ||
          lookahead == 902 ||
          (904 <= lookahead && lookahead <= 906) ||
          lookahead == 908 ||
          lookahead == 910 ||
          lookahead == 911 ||
          (913 <= lookahead && lookahead <= 929) ||
          (931 <= lookahead && lookahead <= 939) ||
          lookahead == 975 ||
          (978 <= lookahead && lookahead <= 980) ||
          lookahead == 984 ||
          lookahead == 986 ||
          lookahead == 988 ||
          lookahead == 990 ||
          lookahead == 992 ||
          lookahead == 994 ||
          lookahead == 996 ||
          lookahead == 998 ||
          lookahead == 1000 ||
          lookahead == 1002 ||
          lookahead == 1004 ||
          lookahead == 1006 ||
          lookahead == 1012 ||
          lookahead == 1015 ||
          lookahead == 1017 ||
          lookahead == 1018 ||
          (1021 <= lookahead && lookahead <= 1071) ||
          lookahead == 1120 ||
          lookahead == 1122 ||
          lookahead == 1124 ||
          lookahead == 1126 ||
          lookahead == 1128 ||
          lookahead == 1130 ||
          lookahead == 1132 ||
          lookahead == 1134 ||
          lookahead == 1136 ||
          lookahead == 1138 ||
          lookahead == 1140 ||
          lookahead == 1142 ||
          lookahead == 1144 ||
          lookahead == 1146 ||
          lookahead == 1148 ||
          lookahead == 1150 ||
          lookahead == 1152 ||
          lookahead == 1162 ||
          lookahead == 1164 ||
          lookahead == 1166 ||
          lookahead == 1168 ||
          lookahead == 1170 ||
          lookahead == 1172 ||
          lookahead == 1174 ||
          lookahead == 1176 ||
          lookahead == 1178 ||
          lookahead == 1180 ||
          lookahead == 1182 ||
          lookahead == 1184 ||
          lookahead == 1186 ||
          lookahead == 1188 ||
          lookahead == 1190 ||
          lookahead == 1192 ||
          lookahead == 1194 ||
          lookahead == 1196 ||
          lookahead == 1198 ||
          lookahead == 1200 ||
          lookahead == 1202 ||
          lookahead == 1204 ||
          lookahead == 1206 ||
          lookahead == 1208 ||
          lookahead == 1210 ||
          lookahead == 1212 ||
          lookahead == 1214 ||
          lookahead == 1216 ||
          lookahead == 1217 ||
          lookahead == 1219 ||
          lookahead == 1221 ||
          lookahead == 1223 ||
          lookahead == 1225 ||
          lookahead == 1227 ||
          lookahead == 1229 ||
          lookahead == 1232 ||
          lookahead == 1234 ||
          lookahead == 1236 ||
          lookahead == 1238 ||
          lookahead == 1240 ||
          lookahead == 1242 ||
          lookahead == 1244 ||
          lookahead == 1246 ||
          lookahead == 1248 ||
          lookahead == 1250 ||
          lookahead == 1252 ||
          lookahead == 1254 ||
          lookahead == 1256 ||
          lookahead == 1258 ||
          lookahead == 1260 ||
          lookahead == 1262 ||
          lookahead == 1264 ||
          lookahead == 1266 ||
          lookahead == 1268 ||
          lookahead == 1270 ||
          lookahead == 1272 ||
          lookahead == 1274 ||
          lookahead == 1276 ||
          lookahead == 1278 ||
          lookahead == 1280 ||
          lookahead == 1282 ||
          lookahead == 1284 ||
          lookahead == 1286 ||
          lookahead == 1288 ||
          lookahead == 1290 ||
          lookahead == 1292 ||
          lookahead == 1294 ||
          lookahead == 1296 ||
          lookahead == 1298 ||
          lookahead == 1300 ||
          lookahead == 1302 ||
          lookahead == 1304 ||
          lookahead == 1306 ||
          lookahead == 1308 ||
          lookahead == 1310 ||
          lookahead == 1312 ||
          lookahead == 1314 ||
          lookahead == 1316 ||
          lookahead == 1318 ||
          lookahead == 1320 ||
          lookahead == 1322 ||
          lookahead == 1324 ||
          lookahead == 1326 ||
          (1329 <= lookahead && lookahead <= 1366) ||
          (4256 <= lookahead && lookahead <= 4293) ||
          lookahead == 4295 ||
          lookahead == 4301 ||
          (5024 <= lookahead && lookahead <= 5109) ||
          (7312 <= lookahead && lookahead <= 7354) ||
          (7357 <= lookahead && lookahead <= 7359) ||
          lookahead == 7680 ||
          lookahead == 7682 ||
          lookahead == 7684 ||
          lookahead == 7686 ||
          lookahead == 7688 ||
          lookahead == 7690 ||
          lookahead == 7692 ||
          lookahead == 7694 ||
          lookahead == 7696 ||
          lookahead == 7698 ||
          lookahead == 7700 ||
          lookahead == 7702 ||
          lookahead == 7704 ||
          lookahead == 7706 ||
          lookahead == 7708 ||
          lookahead == 7710 ||
          lookahead == 7712 ||
          lookahead == 7714 ||
          lookahead == 7716 ||
          lookahead == 7718 ||
          lookahead == 7720 ||
          lookahead == 7722 ||
          lookahead == 7724 ||
          lookahead == 7726 ||
          lookahead == 7728 ||
          lookahead == 7730 ||
          lookahead == 7732 ||
          lookahead == 7734 ||
          lookahead == 7736 ||
          lookahead == 7738 ||
          lookahead == 7740 ||
          lookahead == 7742 ||
          lookahead == 7744 ||
          lookahead == 7746 ||
          lookahead == 7748 ||
          lookahead == 7750 ||
          lookahead == 7752 ||
          lookahead == 7754 ||
          lookahead == 7756 ||
          lookahead == 7758 ||
          lookahead == 7760 ||
          lookahead == 7762 ||
          lookahead == 7764 ||
          lookahead == 7766 ||
          lookahead == 7768 ||
          lookahead == 7770 ||
          lookahead == 7772 ||
          lookahead == 7774 ||
          lookahead == 7776 ||
          lookahead == 7778 ||
          lookahead == 7780 ||
          lookahead == 7782 ||
          lookahead == 7784 ||
          lookahead == 7786 ||
          lookahead == 7788 ||
          lookahead == 7790 ||
          lookahead == 7792 ||
          lookahead == 7794 ||
          lookahead == 7796 ||
          lookahead == 7798 ||
          lookahead == 7800 ||
          lookahead == 7802 ||
          lookahead == 7804 ||
          lookahead == 7806 ||
          lookahead == 7808 ||
          lookahead == 7810 ||
          lookahead == 7812 ||
          lookahead == 7814 ||
          lookahead == 7816 ||
          lookahead == 7818 ||
          lookahead == 7820 ||
          lookahead == 7822 ||
          lookahead == 7824 ||
          lookahead == 7826 ||
          lookahead == 7828 ||
          lookahead == 7838 ||
          lookahead == 7840 ||
          lookahead == 7842 ||
          lookahead == 7844 ||
          lookahead == 7846 ||
          lookahead == 7848 ||
          lookahead == 7850 ||
          lookahead == 7852 ||
          lookahead == 7854 ||
          lookahead == 7856 ||
          lookahead == 7858 ||
          lookahead == 7860 ||
          lookahead == 7862 ||
          lookahead == 7864 ||
          lookahead == 7866 ||
          lookahead == 7868 ||
          lookahead == 7870 ||
          lookahead == 7872 ||
          lookahead == 7874 ||
          lookahead == 7876 ||
          lookahead == 7878 ||
          lookahead == 7880 ||
          lookahead == 7882 ||
          lookahead == 7884 ||
          lookahead == 7886 ||
          lookahead == 7888 ||
          lookahead == 7890 ||
          lookahead == 7892 ||
          lookahead == 7894 ||
          lookahead == 7896 ||
          lookahead == 7898 ||
          lookahead == 7900 ||
          lookahead == 7902 ||
          lookahead == 7904 ||
          lookahead == 7906 ||
          lookahead == 7908 ||
          lookahead == 7910 ||
          lookahead == 7912 ||
          lookahead == 7914 ||
          lookahead == 7916 ||
          lookahead == 7918 ||
          lookahead == 7920 ||
          lookahead == 7922 ||
          lookahead == 7924 ||
          lookahead == 7926 ||
          lookahead == 7928 ||
          lookahead == 7930 ||
          lookahead == 7932 ||
          lookahead == 7934 ||
          (7944 <= lookahead && lookahead <= 7951) ||
          (7960 <= lookahead && lookahead <= 7965) ||
          (7976 <= lookahead && lookahead <= 7983) ||
          (7992 <= lookahead && lookahead <= 7999) ||
          (8008 <= lookahead && lookahead <= 8013) ||
          lookahead == 8025 ||
          lookahead == 8027 ||
          lookahead == 8029 ||
          lookahead == 8031 ||
          (8040 <= lookahead && lookahead <= 8047) ||
          (8120 <= lookahead && lookahead <= 8123) ||
          (8136 <= lookahead && lookahead <= 8139) ||
          (8152 <= lookahead && lookahead <= 8155) ||
          (8168 <= lookahead && lookahead <= 8172) ||
          (8184 <= lookahead && lookahead <= 8187) ||
          lookahead == 8450 ||
          lookahead == 8455 ||
          (8459 <= lookahead && lookahead <= 8461) ||
          (8464 <= lookahead && lookahead <= 8466) ||
          lookahead == 8469 ||
          (8473 <= lookahead && lookahead <= 8477) ||
          lookahead == 8484 ||
          lookahead == 8486 ||
          lookahead == 8488 ||
          (8490 <= lookahead && lookahead <= 8493) ||
          (8496 <= lookahead && lookahead <= 8499) ||
          lookahead == 8510 ||
          lookahead == 8511 ||
          lookahead == 8517 ||
          lookahead == 8579 ||
          (11264 <= lookahead && lookahead <= 11310) ||
          lookahead == 11360 ||
          (11362 <= lookahead && lookahead <= 11364) ||
          lookahead == 11367 ||
          lookahead == 11369 ||
          lookahead == 11371 ||
          (11373 <= lookahead && lookahead <= 11376) ||
          lookahead == 11378 ||
          lookahead == 11381 ||
          (11390 <= lookahead && lookahead <= 11392) ||
          lookahead == 11394 ||
          lookahead == 11396 ||
          lookahead == 11398 ||
          lookahead == 11400 ||
          lookahead == 11402 ||
          lookahead == 11404 ||
          lookahead == 11406 ||
          lookahead == 11408 ||
          lookahead == 11410 ||
          lookahead == 11412 ||
          lookahead == 11414 ||
          lookahead == 11416 ||
          lookahead == 11418 ||
          lookahead == 11420 ||
          lookahead == 11422 ||
          lookahead == 11424 ||
          lookahead == 11426 ||
          lookahead == 11428 ||
          lookahead == 11430 ||
          lookahead == 11432 ||
          lookahead == 11434 ||
          lookahead == 11436 ||
          lookahead == 11438 ||
          lookahead == 11440 ||
          lookahead == 11442 ||
          lookahead == 11444 ||
          lookahead == 11446 ||
          lookahead == 11448 ||
          lookahead == 11450 ||
          lookahead == 11452 ||
          lookahead == 11454 ||
          lookahead == 11456 ||
          lookahead == 11458 ||
          lookahead == 11460 ||
          lookahead == 11462 ||
          lookahead == 11464 ||
          lookahead == 11466 ||
          lookahead == 11468 ||
          lookahead == 11470 ||
          lookahead == 11472 ||
          lookahead == 11474 ||
          lookahead == 11476 ||
          lookahead == 11478 ||
          lookahead == 11480 ||
          lookahead == 11482 ||
          lookahead == 11484 ||
          lookahead == 11486 ||
          lookahead == 11488 ||
          lookahead == 11490 ||
          lookahead == 11499 ||
          lookahead == 11501 ||
          lookahead == 11506 ||
          lookahead == 42560 ||
          lookahead == 42562 ||
          lookahead == 42564 ||
          lookahead == 42566 ||
          lookahead == 42568 ||
          lookahead == 42570 ||
          lookahead == 42572 ||
          lookahead == 42574 ||
          lookahead == 42576 ||
          lookahead == 42578 ||
          lookahead == 42580 ||
          lookahead == 42582 ||
          lookahead == 42584 ||
          lookahead == 42586 ||
          lookahead == 42588 ||
          lookahead == 42590 ||
          lookahead == 42592 ||
          lookahead == 42594 ||
          lookahead == 42596 ||
          lookahead == 42598 ||
          lookahead == 42600 ||
          lookahead == 42602 ||
          lookahead == 42604 ||
          lookahead == 42624 ||
          lookahead == 42626 ||
          lookahead == 42628 ||
          lookahead == 42630 ||
          lookahead == 42632 ||
          lookahead == 42634 ||
          lookahead == 42636 ||
          lookahead == 42638 ||
          lookahead == 42640 ||
          lookahead == 42642 ||
          lookahead == 42644 ||
          lookahead == 42646 ||
          lookahead == 42648 ||
          lookahead == 42650 ||
          lookahead == 42786 ||
          lookahead == 42788 ||
          lookahead == 42790 ||
          lookahead == 42792 ||
          lookahead == 42794 ||
          lookahead == 42796 ||
          lookahead == 42798 ||
          lookahead == 42802 ||
          lookahead == 42804 ||
          lookahead == 42806 ||
          lookahead == 42808 ||
          lookahead == 42810 ||
          lookahead == 42812 ||
          lookahead == 42814 ||
          lookahead == 42816 ||
          lookahead == 42818 ||
          lookahead == 42820 ||
          lookahead == 42822 ||
          lookahead == 42824 ||
          lookahead == 42826 ||
          lookahead == 42828 ||
          lookahead == 42830 ||
          lookahead == 42832 ||
          lookahead == 42834 ||
          lookahead == 42836 ||
          lookahead == 42838 ||
          lookahead == 42840 ||
          lookahead == 42842 ||
          lookahead == 42844 ||
          lookahead == 42846 ||
          lookahead == 42848 ||
          lookahead == 42850 ||
          lookahead == 42852 ||
          lookahead == 42854 ||
          lookahead == 42856 ||
          lookahead == 42858 ||
          lookahead == 42860 ||
          lookahead == 42862 ||
          lookahead == 42873 ||
          lookahead == 42875 ||
          lookahead == 42877 ||
          lookahead == 42878 ||
          lookahead == 42880 ||
          lookahead == 42882 ||
          lookahead == 42884 ||
          lookahead == 42886 ||
          lookahead == 42891 ||
          lookahead == 42893 ||
          lookahead == 42896 ||
          lookahead == 42898 ||
          lookahead == 42902 ||
          lookahead == 42904 ||
          lookahead == 42906 ||
          lookahead == 42908 ||
          lookahead == 42910 ||
          lookahead == 42912 ||
          lookahead == 42914 ||
          lookahead == 42916 ||
          lookahead == 42918 ||
          lookahead == 42920 ||
          (42922 <= lookahead && lookahead <= 42926) ||
          (42928 <= lookahead && lookahead <= 42932) ||
          lookahead == 42934 ||
          lookahead == 42936 ||
          lookahead == 42938 ||
          lookahead == 42940 ||
          lookahead == 42942 ||
          lookahead == 42946 ||
          (42948 <= lookahead && lookahead <= 42950) ||
          (65313 <= lookahead && lookahead <= 65338) ||
          (66560 <= lookahead && lookahead <= 66599) ||
          (66736 <= lookahead && lookahead <= 66771) ||
          (68736 <= lookahead && lookahead <= 68786) ||
          (71840 <= lookahead && lookahead <= 71871) ||
          (93760 <= lookahead && lookahead <= 93791) ||
          (119808 <= lookahead && lookahead <= 119833) ||
          (119860 <= lookahead && lookahead <= 119885) ||
          (119912 <= lookahead && lookahead <= 119937) ||
          lookahead == 119964 ||
          lookahead == 119966 ||
          lookahead == 119967 ||
          lookahead == 119970 ||
          lookahead == 119973 ||
          lookahead == 119974 ||
          (119977 <= lookahead && lookahead <= 119980) ||
          (119982 <= lookahead && lookahead <= 119989) ||
          (120016 <= lookahead && lookahead <= 120041) ||
          lookahead == 120068 ||
          lookahead == 120069 ||
          (120071 <= lookahead && lookahead <= 120074) ||
          (120077 <= lookahead && lookahead <= 120084) ||
          (120086 <= lookahead && lookahead <= 120092) ||
          lookahead == 120120 ||
          lookahead == 120121 ||
          (120123 <= lookahead && lookahead <= 120126) ||
          (120128 <= lookahead && lookahead <= 120132) ||
          lookahead == 120134 ||
          (120138 <= lookahead && lookahead <= 120144) ||
          (120172 <= lookahead && lookahead <= 120197) ||
          (120224 <= lookahead && lookahead <= 120249) ||
          (120276 <= lookahead && lookahead <= 120301) ||
          (120328 <= lookahead && lookahead <= 120353) ||
          (120380 <= lookahead && lookahead <= 120405) ||
          (120432 <= lookahead && lookahead <= 120457) ||
          (120488 <= lookahead && lookahead <= 120512) ||
          (120546 <= lookahead && lookahead <= 120570) ||
          (120604 <= lookahead && lookahead <= 120628) ||
          (120662 <= lookahead && lookahead <= 120686) ||
          (120720 <= lookahead && lookahead <= 120744) ||
          lookahead == 120778 ||
          (125184 <= lookahead && lookahead <= 125217)) ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(116);
      if (lookahead == ')') ADVANCE(151);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '+') ADVANCE(153);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '~') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(104);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(162);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == ',') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'A') ADVANCE(164);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 170 ||
          lookahead == 181 ||
          lookahead == 186 ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 705) ||
          (710 <= lookahead && lookahead <= 721) ||
          (736 <= lookahead && lookahead <= 740) ||
          lookahead == 748 ||
          lookahead == 750 ||
          (880 <= lookahead && lookahead <= 884) ||
          lookahead == 886 ||
          lookahead == 887 ||
          (890 <= lookahead && lookahead <= 893) ||
          lookahead == 895 ||
          lookahead == 902 ||
          (904 <= lookahead && lookahead <= 906) ||
          lookahead == 908 ||
          (910 <= lookahead && lookahead <= 929) ||
          (931 <= lookahead && lookahead <= 1013) ||
          (1015 <= lookahead && lookahead <= 1153) ||
          (1162 <= lookahead && lookahead <= 1327) ||
          (1329 <= lookahead && lookahead <= 1366) ||
          lookahead == 1369 ||
          (1376 <= lookahead && lookahead <= 1416) ||
          (1488 <= lookahead && lookahead <= 1514) ||
          (1519 <= lookahead && lookahead <= 1522) ||
          (1568 <= lookahead && lookahead <= 1610) ||
          lookahead == 1646 ||
          lookahead == 1647 ||
          (1649 <= lookahead && lookahead <= 1747) ||
          lookahead == 1749 ||
          lookahead == 1765 ||
          lookahead == 1766 ||
          lookahead == 1774 ||
          lookahead == 1775 ||
          (1786 <= lookahead && lookahead <= 1788) ||
          lookahead == 1791 ||
          lookahead == 1808 ||
          (1810 <= lookahead && lookahead <= 1839) ||
          (1869 <= lookahead && lookahead <= 1957) ||
          lookahead == 1969 ||
          (1994 <= lookahead && lookahead <= 2026) ||
          lookahead == 2036 ||
          lookahead == 2037 ||
          lookahead == 2042 ||
          (2048 <= lookahead && lookahead <= 2069) ||
          lookahead == 2074 ||
          lookahead == 2084 ||
          lookahead == 2088 ||
          (2112 <= lookahead && lookahead <= 2136) ||
          (2144 <= lookahead && lookahead <= 2154) ||
          (2208 <= lookahead && lookahead <= 2228) ||
          (2230 <= lookahead && lookahead <= 2237) ||
          (2308 <= lookahead && lookahead <= 2361) ||
          lookahead == 2365 ||
          lookahead == 2384 ||
          (2392 <= lookahead && lookahead <= 2401) ||
          (2417 <= lookahead && lookahead <= 2432) ||
          (2437 <= lookahead && lookahead <= 2444) ||
          lookahead == 2447 ||
          lookahead == 2448 ||
          (2451 <= lookahead && lookahead <= 2472) ||
          (2474 <= lookahead && lookahead <= 2480) ||
          lookahead == 2482 ||
          (2486 <= lookahead && lookahead <= 2489) ||
          lookahead == 2493 ||
          lookahead == 2510 ||
          lookahead == 2524 ||
          lookahead == 2525 ||
          (2527 <= lookahead && lookahead <= 2529) ||
          lookahead == 2544 ||
          lookahead == 2545 ||
          lookahead == 2556 ||
          (2565 <= lookahead && lookahead <= 2570) ||
          lookahead == 2575 ||
          lookahead == 2576 ||
          (2579 <= lookahead && lookahead <= 2600) ||
          (2602 <= lookahead && lookahead <= 2608) ||
          lookahead == 2610 ||
          lookahead == 2611 ||
          lookahead == 2613 ||
          lookahead == 2614 ||
          lookahead == 2616 ||
          lookahead == 2617 ||
          (2649 <= lookahead && lookahead <= 2652) ||
          lookahead == 2654 ||
          (2674 <= lookahead && lookahead <= 2676) ||
          (2693 <= lookahead && lookahead <= 2701) ||
          (2703 <= lookahead && lookahead <= 2705) ||
          (2707 <= lookahead && lookahead <= 2728) ||
          (2730 <= lookahead && lookahead <= 2736) ||
          lookahead == 2738 ||
          lookahead == 2739 ||
          (2741 <= lookahead && lookahead <= 2745) ||
          lookahead == 2749 ||
          lookahead == 2768 ||
          lookahead == 2784 ||
          lookahead == 2785 ||
          lookahead == 2809 ||
          (2821 <= lookahead && lookahead <= 2828) ||
          lookahead == 2831 ||
          lookahead == 2832 ||
          (2835 <= lookahead && lookahead <= 2856) ||
          (2858 <= lookahead && lookahead <= 2864) ||
          lookahead == 2866 ||
          lookahead == 2867 ||
          (2869 <= lookahead && lookahead <= 2873) ||
          lookahead == 2877 ||
          lookahead == 2908 ||
          lookahead == 2909 ||
          (2911 <= lookahead && lookahead <= 2913) ||
          lookahead == 2929 ||
          lookahead == 2947 ||
          (2949 <= lookahead && lookahead <= 2954) ||
          (2958 <= lookahead && lookahead <= 2960) ||
          (2962 <= lookahead && lookahead <= 2965) ||
          lookahead == 2969 ||
          lookahead == 2970 ||
          lookahead == 2972 ||
          lookahead == 2974 ||
          lookahead == 2975 ||
          lookahead == 2979 ||
          lookahead == 2980 ||
          (2984 <= lookahead && lookahead <= 2986) ||
          (2990 <= lookahead && lookahead <= 3001) ||
          lookahead == 3024 ||
          (3077 <= lookahead && lookahead <= 3084) ||
          (3086 <= lookahead && lookahead <= 3088) ||
          (3090 <= lookahead && lookahead <= 3112) ||
          (3114 <= lookahead && lookahead <= 3129) ||
          lookahead == 3133 ||
          (3160 <= lookahead && lookahead <= 3162) ||
          lookahead == 3168 ||
          lookahead == 3169 ||
          lookahead == 3200 ||
          (3205 <= lookahead && lookahead <= 3212) ||
          (3214 <= lookahead && lookahead <= 3216) ||
          (3218 <= lookahead && lookahead <= 3240) ||
          (3242 <= lookahead && lookahead <= 3251) ||
          (3253 <= lookahead && lookahead <= 3257) ||
          lookahead == 3261 ||
          lookahead == 3294 ||
          lookahead == 3296 ||
          lookahead == 3297 ||
          lookahead == 3313 ||
          lookahead == 3314 ||
          (3333 <= lookahead && lookahead <= 3340) ||
          (3342 <= lookahead && lookahead <= 3344) ||
          (3346 <= lookahead && lookahead <= 3386) ||
          lookahead == 3389 ||
          lookahead == 3406 ||
          (3412 <= lookahead && lookahead <= 3414) ||
          (3423 <= lookahead && lookahead <= 3425) ||
          (3450 <= lookahead && lookahead <= 3455) ||
          (3461 <= lookahead && lookahead <= 3478) ||
          (3482 <= lookahead && lookahead <= 3505) ||
          (3507 <= lookahead && lookahead <= 3515) ||
          lookahead == 3517 ||
          (3520 <= lookahead && lookahead <= 3526) ||
          (3585 <= lookahead && lookahead <= 3632) ||
          lookahead == 3634 ||
          lookahead == 3635 ||
          (3648 <= lookahead && lookahead <= 3654) ||
          lookahead == 3713 ||
          lookahead == 3714 ||
          lookahead == 3716 ||
          (3718 <= lookahead && lookahead <= 3722) ||
          (3724 <= lookahead && lookahead <= 3747) ||
          lookahead == 3749 ||
          (3751 <= lookahead && lookahead <= 3760) ||
          lookahead == 3762 ||
          lookahead == 3763 ||
          lookahead == 3773 ||
          (3776 <= lookahead && lookahead <= 3780) ||
          lookahead == 3782 ||
          (3804 <= lookahead && lookahead <= 3807) ||
          lookahead == 3840 ||
          (3904 <= lookahead && lookahead <= 3911) ||
          (3913 <= lookahead && lookahead <= 3948) ||
          (3976 <= lookahead && lookahead <= 3980) ||
          (4096 <= lookahead && lookahead <= 4138) ||
          lookahead == 4159 ||
          (4176 <= lookahead && lookahead <= 4181) ||
          (4186 <= lookahead && lookahead <= 4189) ||
          lookahead == 4193 ||
          lookahead == 4197 ||
          lookahead == 4198 ||
          (4206 <= lookahead && lookahead <= 4208) ||
          (4213 <= lookahead && lookahead <= 4225) ||
          lookahead == 4238 ||
          (4256 <= lookahead && lookahead <= 4293) ||
          lookahead == 4295 ||
          lookahead == 4301 ||
          (4304 <= lookahead && lookahead <= 4346) ||
          (4348 <= lookahead && lookahead <= 4680) ||
          (4682 <= lookahead && lookahead <= 4685) ||
          (4688 <= lookahead && lookahead <= 4694) ||
          lookahead == 4696 ||
          (4698 <= lookahead && lookahead <= 4701) ||
          (4704 <= lookahead && lookahead <= 4744) ||
          (4746 <= lookahead && lookahead <= 4749) ||
          (4752 <= lookahead && lookahead <= 4784) ||
          (4786 <= lookahead && lookahead <= 4789) ||
          (4792 <= lookahead && lookahead <= 4798) ||
          lookahead == 4800 ||
          (4802 <= lookahead && lookahead <= 4805) ||
          (4808 <= lookahead && lookahead <= 4822) ||
          (4824 <= lookahead && lookahead <= 4880) ||
          (4882 <= lookahead && lookahead <= 4885) ||
          (4888 <= lookahead && lookahead <= 4954) ||
          (4992 <= lookahead && lookahead <= 5007) ||
          (5024 <= lookahead && lookahead <= 5109) ||
          (5112 <= lookahead && lookahead <= 5117) ||
          (5121 <= lookahead && lookahead <= 5740) ||
          (5743 <= lookahead && lookahead <= 5759) ||
          (5761 <= lookahead && lookahead <= 5786) ||
          (5792 <= lookahead && lookahead <= 5866) ||
          (5873 <= lookahead && lookahead <= 5880) ||
          (5888 <= lookahead && lookahead <= 5900) ||
          (5902 <= lookahead && lookahead <= 5905) ||
          (5920 <= lookahead && lookahead <= 5937) ||
          (5952 <= lookahead && lookahead <= 5969) ||
          (5984 <= lookahead && lookahead <= 5996) ||
          (5998 <= lookahead && lookahead <= 6000) ||
          (6016 <= lookahead && lookahead <= 6067) ||
          lookahead == 6103 ||
          lookahead == 6108 ||
          (6176 <= lookahead && lookahead <= 6264) ||
          (6272 <= lookahead && lookahead <= 6276) ||
          (6279 <= lookahead && lookahead <= 6312) ||
          lookahead == 6314 ||
          (6320 <= lookahead && lookahead <= 6389) ||
          (6400 <= lookahead && lookahead <= 6430) ||
          (6480 <= lookahead && lookahead <= 6509) ||
          (6512 <= lookahead && lookahead <= 6516) ||
          (6528 <= lookahead && lookahead <= 6571) ||
          (6576 <= lookahead && lookahead <= 6601) ||
          (6656 <= lookahead && lookahead <= 6678) ||
          (6688 <= lookahead && lookahead <= 6740) ||
          lookahead == 6823 ||
          (6917 <= lookahead && lookahead <= 6963) ||
          (6981 <= lookahead && lookahead <= 6987) ||
          (7043 <= lookahead && lookahead <= 7072) ||
          lookahead == 7086 ||
          lookahead == 7087 ||
          (7098 <= lookahead && lookahead <= 7141) ||
          (7168 <= lookahead && lookahead <= 7203) ||
          (7245 <= lookahead && lookahead <= 7247) ||
          (7258 <= lookahead && lookahead <= 7293) ||
          (7296 <= lookahead && lookahead <= 7304) ||
          (7312 <= lookahead && lookahead <= 7354) ||
          (7357 <= lookahead && lookahead <= 7359) ||
          (7401 <= lookahead && lookahead <= 7404) ||
          (7406 <= lookahead && lookahead <= 7411) ||
          lookahead == 7413 ||
          lookahead == 7414 ||
          lookahead == 7418 ||
          (7424 <= lookahead && lookahead <= 7615) ||
          (7680 <= lookahead && lookahead <= 7957) ||
          (7960 <= lookahead && lookahead <= 7965) ||
          (7968 <= lookahead && lookahead <= 8005) ||
          (8008 <= lookahead && lookahead <= 8013) ||
          (8016 <= lookahead && lookahead <= 8023) ||
          lookahead == 8025 ||
          lookahead == 8027 ||
          lookahead == 8029 ||
          (8031 <= lookahead && lookahead <= 8061) ||
          (8064 <= lookahead && lookahead <= 8116) ||
          (8118 <= lookahead && lookahead <= 8124) ||
          lookahead == 8126 ||
          (8130 <= lookahead && lookahead <= 8132) ||
          (8134 <= lookahead && lookahead <= 8140) ||
          (8144 <= lookahead && lookahead <= 8147) ||
          (8150 <= lookahead && lookahead <= 8155) ||
          (8160 <= lookahead && lookahead <= 8172) ||
          (8178 <= lookahead && lookahead <= 8180) ||
          (8182 <= lookahead && lookahead <= 8188) ||
          lookahead == 8305 ||
          lookahead == 8319 ||
          (8336 <= lookahead && lookahead <= 8348) ||
          lookahead == 8450 ||
          lookahead == 8455 ||
          (8458 <= lookahead && lookahead <= 8467) ||
          lookahead == 8469 ||
          (8473 <= lookahead && lookahead <= 8477) ||
          lookahead == 8484 ||
          lookahead == 8486 ||
          lookahead == 8488 ||
          (8490 <= lookahead && lookahead <= 8493) ||
          (8495 <= lookahead && lookahead <= 8505) ||
          (8508 <= lookahead && lookahead <= 8511) ||
          (8517 <= lookahead && lookahead <= 8521) ||
          lookahead == 8526 ||
          lookahead == 8579 ||
          lookahead == 8580 ||
          (11264 <= lookahead && lookahead <= 11310) ||
          (11312 <= lookahead && lookahead <= 11358) ||
          (11360 <= lookahead && lookahead <= 11492) ||
          (11499 <= lookahead && lookahead <= 11502) ||
          lookahead == 11506 ||
          lookahead == 11507 ||
          (11520 <= lookahead && lookahead <= 11557) ||
          lookahead == 11559 ||
          lookahead == 11565 ||
          (11568 <= lookahead && lookahead <= 11623) ||
          lookahead == 11631 ||
          (11648 <= lookahead && lookahead <= 11670) ||
          (11680 <= lookahead && lookahead <= 11686) ||
          (11688 <= lookahead && lookahead <= 11694) ||
          (11696 <= lookahead && lookahead <= 11702) ||
          (11704 <= lookahead && lookahead <= 11710) ||
          (11712 <= lookahead && lookahead <= 11718) ||
          (11720 <= lookahead && lookahead <= 11726) ||
          (11728 <= lookahead && lookahead <= 11734) ||
          (11736 <= lookahead && lookahead <= 11742) ||
          lookahead == 11823 ||
          lookahead == 12293 ||
          lookahead == 12294 ||
          (12337 <= lookahead && lookahead <= 12341) ||
          lookahead == 12347 ||
          lookahead == 12348 ||
          (12353 <= lookahead && lookahead <= 12438) ||
          (12445 <= lookahead && lookahead <= 12447) ||
          (12449 <= lookahead && lookahead <= 12538) ||
          (12540 <= lookahead && lookahead <= 12543) ||
          (12549 <= lookahead && lookahead <= 12591) ||
          (12593 <= lookahead && lookahead <= 12686) ||
          (12704 <= lookahead && lookahead <= 12730) ||
          (12784 <= lookahead && lookahead <= 12799) ||
          (13312 <= lookahead && lookahead <= 19893) ||
          (19968 <= lookahead && lookahead <= 40943) ||
          (40960 <= lookahead && lookahead <= 42124) ||
          (42192 <= lookahead && lookahead <= 42237) ||
          (42240 <= lookahead && lookahead <= 42508) ||
          (42512 <= lookahead && lookahead <= 42527) ||
          lookahead == 42538 ||
          lookahead == 42539 ||
          (42560 <= lookahead && lookahead <= 42606) ||
          (42623 <= lookahead && lookahead <= 42653) ||
          (42656 <= lookahead && lookahead <= 42725) ||
          (42775 <= lookahead && lookahead <= 42783) ||
          (42786 <= lookahead && lookahead <= 42888) ||
          (42891 <= lookahead && lookahead <= 42943) ||
          (42946 <= lookahead && lookahead <= 42950) ||
          (42999 <= lookahead && lookahead <= 43009) ||
          (43011 <= lookahead && lookahead <= 43013) ||
          (43015 <= lookahead && lookahead <= 43018) ||
          (43020 <= lookahead && lookahead <= 43042) ||
          (43072 <= lookahead && lookahead <= 43123) ||
          (43138 <= lookahead && lookahead <= 43187) ||
          (43250 <= lookahead && lookahead <= 43255) ||
          lookahead == 43259 ||
          lookahead == 43261 ||
          lookahead == 43262 ||
          (43274 <= lookahead && lookahead <= 43301) ||
          (43312 <= lookahead && lookahead <= 43334) ||
          (43360 <= lookahead && lookahead <= 43388) ||
          (43396 <= lookahead && lookahead <= 43442) ||
          lookahead == 43471 ||
          (43488 <= lookahead && lookahead <= 43492) ||
          (43494 <= lookahead && lookahead <= 43503) ||
          (43514 <= lookahead && lookahead <= 43518) ||
          (43520 <= lookahead && lookahead <= 43560) ||
          (43584 <= lookahead && lookahead <= 43586) ||
          (43588 <= lookahead && lookahead <= 43595) ||
          (43616 <= lookahead && lookahead <= 43638) ||
          lookahead == 43642 ||
          (43646 <= lookahead && lookahead <= 43695) ||
          lookahead == 43697 ||
          lookahead == 43701 ||
          lookahead == 43702 ||
          (43705 <= lookahead && lookahead <= 43709) ||
          lookahead == 43712 ||
          lookahead == 43714 ||
          (43739 <= lookahead && lookahead <= 43741) ||
          (43744 <= lookahead && lookahead <= 43754) ||
          (43762 <= lookahead && lookahead <= 43764) ||
          (43777 <= lookahead && lookahead <= 43782) ||
          (43785 <= lookahead && lookahead <= 43790) ||
          (43793 <= lookahead && lookahead <= 43798) ||
          (43808 <= lookahead && lookahead <= 43814) ||
          (43816 <= lookahead && lookahead <= 43822) ||
          (43824 <= lookahead && lookahead <= 43866) ||
          (43868 <= lookahead && lookahead <= 43879) ||
          (43888 <= lookahead && lookahead <= 44002) ||
          (44032 <= lookahead && lookahead <= 55203) ||
          (55216 <= lookahead && lookahead <= 55238) ||
          (55243 <= lookahead && lookahead <= 55291) ||
          (63744 <= lookahead && lookahead <= 64109) ||
          (64112 <= lookahead && lookahead <= 64217) ||
          (64256 <= lookahead && lookahead <= 64262) ||
          (64275 <= lookahead && lookahead <= 64279) ||
          lookahead == 64285 ||
          (64287 <= lookahead && lookahead <= 64296) ||
          (64298 <= lookahead && lookahead <= 64310) ||
          (64312 <= lookahead && lookahead <= 64316) ||
          lookahead == 64318 ||
          lookahead == 64320 ||
          lookahead == 64321 ||
          lookahead == 64323 ||
          lookahead == 64324 ||
          (64326 <= lookahead && lookahead <= 64433) ||
          (64467 <= lookahead && lookahead <= 64829) ||
          (64848 <= lookahead && lookahead <= 64911) ||
          (64914 <= lookahead && lookahead <= 64967) ||
          (65008 <= lookahead && lookahead <= 65019) ||
          (65136 <= lookahead && lookahead <= 65140) ||
          (65142 <= lookahead && lookahead <= 65276) ||
          (65313 <= lookahead && lookahead <= 65338) ||
          (65345 <= lookahead && lookahead <= 65370) ||
          (65382 <= lookahead && lookahead <= 65470) ||
          (65474 <= lookahead && lookahead <= 65479) ||
          (65482 <= lookahead && lookahead <= 65487) ||
          (65490 <= lookahead && lookahead <= 65495) ||
          (65498 <= lookahead && lookahead <= 65500) ||
          (65536 <= lookahead && lookahead <= 65547) ||
          (65549 <= lookahead && lookahead <= 65574) ||
          (65576 <= lookahead && lookahead <= 65594) ||
          lookahead == 65596 ||
          lookahead == 65597 ||
          (65599 <= lookahead && lookahead <= 65613) ||
          (65616 <= lookahead && lookahead <= 65629) ||
          (65664 <= lookahead && lookahead <= 65786) ||
          (66176 <= lookahead && lookahead <= 66204) ||
          (66208 <= lookahead && lookahead <= 66256) ||
          (66304 <= lookahead && lookahead <= 66335) ||
          (66349 <= lookahead && lookahead <= 66368) ||
          (66370 <= lookahead && lookahead <= 66377) ||
          (66384 <= lookahead && lookahead <= 66421) ||
          (66432 <= lookahead && lookahead <= 66461) ||
          (66464 <= lookahead && lookahead <= 66499) ||
          (66504 <= lookahead && lookahead <= 66511) ||
          (66560 <= lookahead && lookahead <= 66717) ||
          (66736 <= lookahead && lookahead <= 66771) ||
          (66776 <= lookahead && lookahead <= 66811) ||
          (66816 <= lookahead && lookahead <= 66855) ||
          (66864 <= lookahead && lookahead <= 66915) ||
          (67072 <= lookahead && lookahead <= 67382) ||
          (67392 <= lookahead && lookahead <= 67413) ||
          (67424 <= lookahead && lookahead <= 67431) ||
          (67584 <= lookahead && lookahead <= 67589) ||
          lookahead == 67592 ||
          (67594 <= lookahead && lookahead <= 67637) ||
          lookahead == 67639 ||
          lookahead == 67640 ||
          lookahead == 67644 ||
          (67647 <= lookahead && lookahead <= 67669) ||
          (67680 <= lookahead && lookahead <= 67702) ||
          (67712 <= lookahead && lookahead <= 67742) ||
          (67808 <= lookahead && lookahead <= 67826) ||
          lookahead == 67828 ||
          lookahead == 67829 ||
          (67840 <= lookahead && lookahead <= 67861) ||
          (67872 <= lookahead && lookahead <= 67897) ||
          (67968 <= lookahead && lookahead <= 68023) ||
          lookahead == 68030 ||
          lookahead == 68031 ||
          lookahead == 68096 ||
          (68112 <= lookahead && lookahead <= 68115) ||
          (68117 <= lookahead && lookahead <= 68119) ||
          (68121 <= lookahead && lookahead <= 68149) ||
          (68192 <= lookahead && lookahead <= 68220) ||
          (68224 <= lookahead && lookahead <= 68252) ||
          (68288 <= lookahead && lookahead <= 68295) ||
          (68297 <= lookahead && lookahead <= 68324) ||
          (68352 <= lookahead && lookahead <= 68405) ||
          (68416 <= lookahead && lookahead <= 68437) ||
          (68448 <= lookahead && lookahead <= 68466) ||
          (68480 <= lookahead && lookahead <= 68497) ||
          (68608 <= lookahead && lookahead <= 68680) ||
          (68736 <= lookahead && lookahead <= 68786) ||
          (68800 <= lookahead && lookahead <= 68850) ||
          (68864 <= lookahead && lookahead <= 68899) ||
          (69376 <= lookahead && lookahead <= 69404) ||
          lookahead == 69415 ||
          (69424 <= lookahead && lookahead <= 69445) ||
          (69600 <= lookahead && lookahead <= 69622) ||
          (69635 <= lookahead && lookahead <= 69687) ||
          (69763 <= lookahead && lookahead <= 69807) ||
          (69840 <= lookahead && lookahead <= 69864) ||
          (69891 <= lookahead && lookahead <= 69926) ||
          lookahead == 69956 ||
          (69968 <= lookahead && lookahead <= 70002) ||
          lookahead == 70006 ||
          (70019 <= lookahead && lookahead <= 70066) ||
          (70081 <= lookahead && lookahead <= 70084) ||
          lookahead == 70106 ||
          lookahead == 70108 ||
          (70144 <= lookahead && lookahead <= 70161) ||
          (70163 <= lookahead && lookahead <= 70187) ||
          (70272 <= lookahead && lookahead <= 70278) ||
          lookahead == 70280 ||
          (70282 <= lookahead && lookahead <= 70285) ||
          (70287 <= lookahead && lookahead <= 70301) ||
          (70303 <= lookahead && lookahead <= 70312) ||
          (70320 <= lookahead && lookahead <= 70366) ||
          (70405 <= lookahead && lookahead <= 70412) ||
          lookahead == 70415 ||
          lookahead == 70416 ||
          (70419 <= lookahead && lookahead <= 70440) ||
          (70442 <= lookahead && lookahead <= 70448) ||
          lookahead == 70450 ||
          lookahead == 70451 ||
          (70453 <= lookahead && lookahead <= 70457) ||
          lookahead == 70461 ||
          lookahead == 70480 ||
          (70493 <= lookahead && lookahead <= 70497) ||
          (70656 <= lookahead && lookahead <= 70708) ||
          (70727 <= lookahead && lookahead <= 70730) ||
          lookahead == 70751 ||
          (70784 <= lookahead && lookahead <= 70831) ||
          lookahead == 70852 ||
          lookahead == 70853 ||
          lookahead == 70855 ||
          (71040 <= lookahead && lookahead <= 71086) ||
          (71128 <= lookahead && lookahead <= 71131) ||
          (71168 <= lookahead && lookahead <= 71215) ||
          lookahead == 71236 ||
          (71296 <= lookahead && lookahead <= 71338) ||
          lookahead == 71352 ||
          (71424 <= lookahead && lookahead <= 71450) ||
          (71680 <= lookahead && lookahead <= 71723) ||
          (71840 <= lookahead && lookahead <= 71903) ||
          lookahead == 71935 ||
          (72096 <= lookahead && lookahead <= 72103) ||
          (72106 <= lookahead && lookahead <= 72144) ||
          lookahead == 72161 ||
          lookahead == 72163 ||
          lookahead == 72192 ||
          (72203 <= lookahead && lookahead <= 72242) ||
          lookahead == 72250 ||
          lookahead == 72272 ||
          (72284 <= lookahead && lookahead <= 72329) ||
          lookahead == 72349 ||
          (72384 <= lookahead && lookahead <= 72440) ||
          (72704 <= lookahead && lookahead <= 72712) ||
          (72714 <= lookahead && lookahead <= 72750) ||
          lookahead == 72768 ||
          (72818 <= lookahead && lookahead <= 72847) ||
          (72960 <= lookahead && lookahead <= 72966) ||
          lookahead == 72968 ||
          lookahead == 72969 ||
          (72971 <= lookahead && lookahead <= 73008) ||
          lookahead == 73030 ||
          (73056 <= lookahead && lookahead <= 73061) ||
          lookahead == 73063 ||
          lookahead == 73064 ||
          (73066 <= lookahead && lookahead <= 73097) ||
          lookahead == 73112 ||
          (73440 <= lookahead && lookahead <= 73458) ||
          (73728 <= lookahead && lookahead <= 74649) ||
          (74880 <= lookahead && lookahead <= 75075) ||
          (77824 <= lookahead && lookahead <= 78894) ||
          (82944 <= lookahead && lookahead <= 83526) ||
          (92160 <= lookahead && lookahead <= 92728) ||
          (92736 <= lookahead && lookahead <= 92766) ||
          (92880 <= lookahead && lookahead <= 92909) ||
          (92928 <= lookahead && lookahead <= 92975) ||
          (92992 <= lookahead && lookahead <= 92995) ||
          (93027 <= lookahead && lookahead <= 93047) ||
          (93053 <= lookahead && lookahead <= 93071) ||
          (93760 <= lookahead && lookahead <= 93823) ||
          (93952 <= lookahead && lookahead <= 94026) ||
          lookahead == 94032 ||
          (94099 <= lookahead && lookahead <= 94111) ||
          lookahead == 94176 ||
          lookahead == 94177 ||
          lookahead == 94179 ||
          (94208 <= lookahead && lookahead <= 100343) ||
          (100352 <= lookahead && lookahead <= 101106) ||
          (110592 <= lookahead && lookahead <= 110878) ||
          (110928 <= lookahead && lookahead <= 110930) ||
          (110948 <= lookahead && lookahead <= 110951) ||
          (110960 <= lookahead && lookahead <= 111355) ||
          (113664 <= lookahead && lookahead <= 113770) ||
          (113776 <= lookahead && lookahead <= 113788) ||
          (113792 <= lookahead && lookahead <= 113800) ||
          (113808 <= lookahead && lookahead <= 113817) ||
          (119808 <= lookahead && lookahead <= 119892) ||
          (119894 <= lookahead && lookahead <= 119964) ||
          lookahead == 119966 ||
          lookahead == 119967 ||
          lookahead == 119970 ||
          lookahead == 119973 ||
          lookahead == 119974 ||
          (119977 <= lookahead && lookahead <= 119980) ||
          (119982 <= lookahead && lookahead <= 119993) ||
          lookahead == 119995 ||
          (119997 <= lookahead && lookahead <= 120003) ||
          (120005 <= lookahead && lookahead <= 120069) ||
          (120071 <= lookahead && lookahead <= 120074) ||
          (120077 <= lookahead && lookahead <= 120084) ||
          (120086 <= lookahead && lookahead <= 120092) ||
          (120094 <= lookahead && lookahead <= 120121) ||
          (120123 <= lookahead && lookahead <= 120126) ||
          (120128 <= lookahead && lookahead <= 120132) ||
          lookahead == 120134 ||
          (120138 <= lookahead && lookahead <= 120144) ||
          (120146 <= lookahead && lookahead <= 120485) ||
          (120488 <= lookahead && lookahead <= 120512) ||
          (120514 <= lookahead && lookahead <= 120538) ||
          (120540 <= lookahead && lookahead <= 120570) ||
          (120572 <= lookahead && lookahead <= 120596) ||
          (120598 <= lookahead && lookahead <= 120628) ||
          (120630 <= lookahead && lookahead <= 120654) ||
          (120656 <= lookahead && lookahead <= 120686) ||
          (120688 <= lookahead && lookahead <= 120712) ||
          (120714 <= lookahead && lookahead <= 120744) ||
          (120746 <= lookahead && lookahead <= 120770) ||
          (120772 <= lookahead && lookahead <= 120779) ||
          (123136 <= lookahead && lookahead <= 123180) ||
          (123191 <= lookahead && lookahead <= 123197) ||
          lookahead == 123214 ||
          (123584 <= lookahead && lookahead <= 123627) ||
          (124928 <= lookahead && lookahead <= 125124) ||
          (125184 <= lookahead && lookahead <= 125251) ||
          lookahead == 125259 ||
          (126464 <= lookahead && lookahead <= 126467) ||
          (126469 <= lookahead && lookahead <= 126495) ||
          lookahead == 126497 ||
          lookahead == 126498 ||
          lookahead == 126500 ||
          lookahead == 126503 ||
          (126505 <= lookahead && lookahead <= 126514) ||
          (126516 <= lookahead && lookahead <= 126519) ||
          lookahead == 126521 ||
          lookahead == 126523 ||
          lookahead == 126530 ||
          lookahead == 126535 ||
          lookahead == 126537 ||
          lookahead == 126539 ||
          (126541 <= lookahead && lookahead <= 126543) ||
          lookahead == 126545 ||
          lookahead == 126546 ||
          lookahead == 126548 ||
          lookahead == 126551 ||
          lookahead == 126553 ||
          lookahead == 126555 ||
          lookahead == 126557 ||
          lookahead == 126559 ||
          lookahead == 126561 ||
          lookahead == 126562 ||
          lookahead == 126564 ||
          (126567 <= lookahead && lookahead <= 126570) ||
          (126572 <= lookahead && lookahead <= 126578) ||
          (126580 <= lookahead && lookahead <= 126583) ||
          (126585 <= lookahead && lookahead <= 126588) ||
          lookahead == 126590 ||
          (126592 <= lookahead && lookahead <= 126601) ||
          (126603 <= lookahead && lookahead <= 126619) ||
          (126625 <= lookahead && lookahead <= 126627) ||
          (126629 <= lookahead && lookahead <= 126633) ||
          (126635 <= lookahead && lookahead <= 126651) ||
          (131072 <= lookahead && lookahead <= 173782) ||
          (173824 <= lookahead && lookahead <= 177972) ||
          (177984 <= lookahead && lookahead <= 178205) ||
          (178208 <= lookahead && lookahead <= 183969) ||
          (183984 <= lookahead && lookahead <= 191456) ||
          (194560 <= lookahead && lookahead <= 195101)) ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'R') ADVANCE(166);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 170 ||
          lookahead == 181 ||
          lookahead == 186 ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 705) ||
          (710 <= lookahead && lookahead <= 721) ||
          (736 <= lookahead && lookahead <= 740) ||
          lookahead == 748 ||
          lookahead == 750 ||
          (880 <= lookahead && lookahead <= 884) ||
          lookahead == 886 ||
          lookahead == 887 ||
          (890 <= lookahead && lookahead <= 893) ||
          lookahead == 895 ||
          lookahead == 902 ||
          (904 <= lookahead && lookahead <= 906) ||
          lookahead == 908 ||
          (910 <= lookahead && lookahead <= 929) ||
          (931 <= lookahead && lookahead <= 1013) ||
          (1015 <= lookahead && lookahead <= 1153) ||
          (1162 <= lookahead && lookahead <= 1327) ||
          (1329 <= lookahead && lookahead <= 1366) ||
          lookahead == 1369 ||
          (1376 <= lookahead && lookahead <= 1416) ||
          (1488 <= lookahead && lookahead <= 1514) ||
          (1519 <= lookahead && lookahead <= 1522) ||
          (1568 <= lookahead && lookahead <= 1610) ||
          lookahead == 1646 ||
          lookahead == 1647 ||
          (1649 <= lookahead && lookahead <= 1747) ||
          lookahead == 1749 ||
          lookahead == 1765 ||
          lookahead == 1766 ||
          lookahead == 1774 ||
          lookahead == 1775 ||
          (1786 <= lookahead && lookahead <= 1788) ||
          lookahead == 1791 ||
          lookahead == 1808 ||
          (1810 <= lookahead && lookahead <= 1839) ||
          (1869 <= lookahead && lookahead <= 1957) ||
          lookahead == 1969 ||
          (1994 <= lookahead && lookahead <= 2026) ||
          lookahead == 2036 ||
          lookahead == 2037 ||
          lookahead == 2042 ||
          (2048 <= lookahead && lookahead <= 2069) ||
          lookahead == 2074 ||
          lookahead == 2084 ||
          lookahead == 2088 ||
          (2112 <= lookahead && lookahead <= 2136) ||
          (2144 <= lookahead && lookahead <= 2154) ||
          (2208 <= lookahead && lookahead <= 2228) ||
          (2230 <= lookahead && lookahead <= 2237) ||
          (2308 <= lookahead && lookahead <= 2361) ||
          lookahead == 2365 ||
          lookahead == 2384 ||
          (2392 <= lookahead && lookahead <= 2401) ||
          (2417 <= lookahead && lookahead <= 2432) ||
          (2437 <= lookahead && lookahead <= 2444) ||
          lookahead == 2447 ||
          lookahead == 2448 ||
          (2451 <= lookahead && lookahead <= 2472) ||
          (2474 <= lookahead && lookahead <= 2480) ||
          lookahead == 2482 ||
          (2486 <= lookahead && lookahead <= 2489) ||
          lookahead == 2493 ||
          lookahead == 2510 ||
          lookahead == 2524 ||
          lookahead == 2525 ||
          (2527 <= lookahead && lookahead <= 2529) ||
          lookahead == 2544 ||
          lookahead == 2545 ||
          lookahead == 2556 ||
          (2565 <= lookahead && lookahead <= 2570) ||
          lookahead == 2575 ||
          lookahead == 2576 ||
          (2579 <= lookahead && lookahead <= 2600) ||
          (2602 <= lookahead && lookahead <= 2608) ||
          lookahead == 2610 ||
          lookahead == 2611 ||
          lookahead == 2613 ||
          lookahead == 2614 ||
          lookahead == 2616 ||
          lookahead == 2617 ||
          (2649 <= lookahead && lookahead <= 2652) ||
          lookahead == 2654 ||
          (2674 <= lookahead && lookahead <= 2676) ||
          (2693 <= lookahead && lookahead <= 2701) ||
          (2703 <= lookahead && lookahead <= 2705) ||
          (2707 <= lookahead && lookahead <= 2728) ||
          (2730 <= lookahead && lookahead <= 2736) ||
          lookahead == 2738 ||
          lookahead == 2739 ||
          (2741 <= lookahead && lookahead <= 2745) ||
          lookahead == 2749 ||
          lookahead == 2768 ||
          lookahead == 2784 ||
          lookahead == 2785 ||
          lookahead == 2809 ||
          (2821 <= lookahead && lookahead <= 2828) ||
          lookahead == 2831 ||
          lookahead == 2832 ||
          (2835 <= lookahead && lookahead <= 2856) ||
          (2858 <= lookahead && lookahead <= 2864) ||
          lookahead == 2866 ||
          lookahead == 2867 ||
          (2869 <= lookahead && lookahead <= 2873) ||
          lookahead == 2877 ||
          lookahead == 2908 ||
          lookahead == 2909 ||
          (2911 <= lookahead && lookahead <= 2913) ||
          lookahead == 2929 ||
          lookahead == 2947 ||
          (2949 <= lookahead && lookahead <= 2954) ||
          (2958 <= lookahead && lookahead <= 2960) ||
          (2962 <= lookahead && lookahead <= 2965) ||
          lookahead == 2969 ||
          lookahead == 2970 ||
          lookahead == 2972 ||
          lookahead == 2974 ||
          lookahead == 2975 ||
          lookahead == 2979 ||
          lookahead == 2980 ||
          (2984 <= lookahead && lookahead <= 2986) ||
          (2990 <= lookahead && lookahead <= 3001) ||
          lookahead == 3024 ||
          (3077 <= lookahead && lookahead <= 3084) ||
          (3086 <= lookahead && lookahead <= 3088) ||
          (3090 <= lookahead && lookahead <= 3112) ||
          (3114 <= lookahead && lookahead <= 3129) ||
          lookahead == 3133 ||
          (3160 <= lookahead && lookahead <= 3162) ||
          lookahead == 3168 ||
          lookahead == 3169 ||
          lookahead == 3200 ||
          (3205 <= lookahead && lookahead <= 3212) ||
          (3214 <= lookahead && lookahead <= 3216) ||
          (3218 <= lookahead && lookahead <= 3240) ||
          (3242 <= lookahead && lookahead <= 3251) ||
          (3253 <= lookahead && lookahead <= 3257) ||
          lookahead == 3261 ||
          lookahead == 3294 ||
          lookahead == 3296 ||
          lookahead == 3297 ||
          lookahead == 3313 ||
          lookahead == 3314 ||
          (3333 <= lookahead && lookahead <= 3340) ||
          (3342 <= lookahead && lookahead <= 3344) ||
          (3346 <= lookahead && lookahead <= 3386) ||
          lookahead == 3389 ||
          lookahead == 3406 ||
          (3412 <= lookahead && lookahead <= 3414) ||
          (3423 <= lookahead && lookahead <= 3425) ||
          (3450 <= lookahead && lookahead <= 3455) ||
          (3461 <= lookahead && lookahead <= 3478) ||
          (3482 <= lookahead && lookahead <= 3505) ||
          (3507 <= lookahead && lookahead <= 3515) ||
          lookahead == 3517 ||
          (3520 <= lookahead && lookahead <= 3526) ||
          (3585 <= lookahead && lookahead <= 3632) ||
          lookahead == 3634 ||
          lookahead == 3635 ||
          (3648 <= lookahead && lookahead <= 3654) ||
          lookahead == 3713 ||
          lookahead == 3714 ||
          lookahead == 3716 ||
          (3718 <= lookahead && lookahead <= 3722) ||
          (3724 <= lookahead && lookahead <= 3747) ||
          lookahead == 3749 ||
          (3751 <= lookahead && lookahead <= 3760) ||
          lookahead == 3762 ||
          lookahead == 3763 ||
          lookahead == 3773 ||
          (3776 <= lookahead && lookahead <= 3780) ||
          lookahead == 3782 ||
          (3804 <= lookahead && lookahead <= 3807) ||
          lookahead == 3840 ||
          (3904 <= lookahead && lookahead <= 3911) ||
          (3913 <= lookahead && lookahead <= 3948) ||
          (3976 <= lookahead && lookahead <= 3980) ||
          (4096 <= lookahead && lookahead <= 4138) ||
          lookahead == 4159 ||
          (4176 <= lookahead && lookahead <= 4181) ||
          (4186 <= lookahead && lookahead <= 4189) ||
          lookahead == 4193 ||
          lookahead == 4197 ||
          lookahead == 4198 ||
          (4206 <= lookahead && lookahead <= 4208) ||
          (4213 <= lookahead && lookahead <= 4225) ||
          lookahead == 4238 ||
          (4256 <= lookahead && lookahead <= 4293) ||
          lookahead == 4295 ||
          lookahead == 4301 ||
          (4304 <= lookahead && lookahead <= 4346) ||
          (4348 <= lookahead && lookahead <= 4680) ||
          (4682 <= lookahead && lookahead <= 4685) ||
          (4688 <= lookahead && lookahead <= 4694) ||
          lookahead == 4696 ||
          (4698 <= lookahead && lookahead <= 4701) ||
          (4704 <= lookahead && lookahead <= 4744) ||
          (4746 <= lookahead && lookahead <= 4749) ||
          (4752 <= lookahead && lookahead <= 4784) ||
          (4786 <= lookahead && lookahead <= 4789) ||
          (4792 <= lookahead && lookahead <= 4798) ||
          lookahead == 4800 ||
          (4802 <= lookahead && lookahead <= 4805) ||
          (4808 <= lookahead && lookahead <= 4822) ||
          (4824 <= lookahead && lookahead <= 4880) ||
          (4882 <= lookahead && lookahead <= 4885) ||
          (4888 <= lookahead && lookahead <= 4954) ||
          (4992 <= lookahead && lookahead <= 5007) ||
          (5024 <= lookahead && lookahead <= 5109) ||
          (5112 <= lookahead && lookahead <= 5117) ||
          (5121 <= lookahead && lookahead <= 5740) ||
          (5743 <= lookahead && lookahead <= 5759) ||
          (5761 <= lookahead && lookahead <= 5786) ||
          (5792 <= lookahead && lookahead <= 5866) ||
          (5873 <= lookahead && lookahead <= 5880) ||
          (5888 <= lookahead && lookahead <= 5900) ||
          (5902 <= lookahead && lookahead <= 5905) ||
          (5920 <= lookahead && lookahead <= 5937) ||
          (5952 <= lookahead && lookahead <= 5969) ||
          (5984 <= lookahead && lookahead <= 5996) ||
          (5998 <= lookahead && lookahead <= 6000) ||
          (6016 <= lookahead && lookahead <= 6067) ||
          lookahead == 6103 ||
          lookahead == 6108 ||
          (6176 <= lookahead && lookahead <= 6264) ||
          (6272 <= lookahead && lookahead <= 6276) ||
          (6279 <= lookahead && lookahead <= 6312) ||
          lookahead == 6314 ||
          (6320 <= lookahead && lookahead <= 6389) ||
          (6400 <= lookahead && lookahead <= 6430) ||
          (6480 <= lookahead && lookahead <= 6509) ||
          (6512 <= lookahead && lookahead <= 6516) ||
          (6528 <= lookahead && lookahead <= 6571) ||
          (6576 <= lookahead && lookahead <= 6601) ||
          (6656 <= lookahead && lookahead <= 6678) ||
          (6688 <= lookahead && lookahead <= 6740) ||
          lookahead == 6823 ||
          (6917 <= lookahead && lookahead <= 6963) ||
          (6981 <= lookahead && lookahead <= 6987) ||
          (7043 <= lookahead && lookahead <= 7072) ||
          lookahead == 7086 ||
          lookahead == 7087 ||
          (7098 <= lookahead && lookahead <= 7141) ||
          (7168 <= lookahead && lookahead <= 7203) ||
          (7245 <= lookahead && lookahead <= 7247) ||
          (7258 <= lookahead && lookahead <= 7293) ||
          (7296 <= lookahead && lookahead <= 7304) ||
          (7312 <= lookahead && lookahead <= 7354) ||
          (7357 <= lookahead && lookahead <= 7359) ||
          (7401 <= lookahead && lookahead <= 7404) ||
          (7406 <= lookahead && lookahead <= 7411) ||
          lookahead == 7413 ||
          lookahead == 7414 ||
          lookahead == 7418 ||
          (7424 <= lookahead && lookahead <= 7615) ||
          (7680 <= lookahead && lookahead <= 7957) ||
          (7960 <= lookahead && lookahead <= 7965) ||
          (7968 <= lookahead && lookahead <= 8005) ||
          (8008 <= lookahead && lookahead <= 8013) ||
          (8016 <= lookahead && lookahead <= 8023) ||
          lookahead == 8025 ||
          lookahead == 8027 ||
          lookahead == 8029 ||
          (8031 <= lookahead && lookahead <= 8061) ||
          (8064 <= lookahead && lookahead <= 8116) ||
          (8118 <= lookahead && lookahead <= 8124) ||
          lookahead == 8126 ||
          (8130 <= lookahead && lookahead <= 8132) ||
          (8134 <= lookahead && lookahead <= 8140) ||
          (8144 <= lookahead && lookahead <= 8147) ||
          (8150 <= lookahead && lookahead <= 8155) ||
          (8160 <= lookahead && lookahead <= 8172) ||
          (8178 <= lookahead && lookahead <= 8180) ||
          (8182 <= lookahead && lookahead <= 8188) ||
          lookahead == 8305 ||
          lookahead == 8319 ||
          (8336 <= lookahead && lookahead <= 8348) ||
          lookahead == 8450 ||
          lookahead == 8455 ||
          (8458 <= lookahead && lookahead <= 8467) ||
          lookahead == 8469 ||
          (8473 <= lookahead && lookahead <= 8477) ||
          lookahead == 8484 ||
          lookahead == 8486 ||
          lookahead == 8488 ||
          (8490 <= lookahead && lookahead <= 8493) ||
          (8495 <= lookahead && lookahead <= 8505) ||
          (8508 <= lookahead && lookahead <= 8511) ||
          (8517 <= lookahead && lookahead <= 8521) ||
          lookahead == 8526 ||
          lookahead == 8579 ||
          lookahead == 8580 ||
          (11264 <= lookahead && lookahead <= 11310) ||
          (11312 <= lookahead && lookahead <= 11358) ||
          (11360 <= lookahead && lookahead <= 11492) ||
          (11499 <= lookahead && lookahead <= 11502) ||
          lookahead == 11506 ||
          lookahead == 11507 ||
          (11520 <= lookahead && lookahead <= 11557) ||
          lookahead == 11559 ||
          lookahead == 11565 ||
          (11568 <= lookahead && lookahead <= 11623) ||
          lookahead == 11631 ||
          (11648 <= lookahead && lookahead <= 11670) ||
          (11680 <= lookahead && lookahead <= 11686) ||
          (11688 <= lookahead && lookahead <= 11694) ||
          (11696 <= lookahead && lookahead <= 11702) ||
          (11704 <= lookahead && lookahead <= 11710) ||
          (11712 <= lookahead && lookahead <= 11718) ||
          (11720 <= lookahead && lookahead <= 11726) ||
          (11728 <= lookahead && lookahead <= 11734) ||
          (11736 <= lookahead && lookahead <= 11742) ||
          lookahead == 11823 ||
          lookahead == 12293 ||
          lookahead == 12294 ||
          (12337 <= lookahead && lookahead <= 12341) ||
          lookahead == 12347 ||
          lookahead == 12348 ||
          (12353 <= lookahead && lookahead <= 12438) ||
          (12445 <= lookahead && lookahead <= 12447) ||
          (12449 <= lookahead && lookahead <= 12538) ||
          (12540 <= lookahead && lookahead <= 12543) ||
          (12549 <= lookahead && lookahead <= 12591) ||
          (12593 <= lookahead && lookahead <= 12686) ||
          (12704 <= lookahead && lookahead <= 12730) ||
          (12784 <= lookahead && lookahead <= 12799) ||
          (13312 <= lookahead && lookahead <= 19893) ||
          (19968 <= lookahead && lookahead <= 40943) ||
          (40960 <= lookahead && lookahead <= 42124) ||
          (42192 <= lookahead && lookahead <= 42237) ||
          (42240 <= lookahead && lookahead <= 42508) ||
          (42512 <= lookahead && lookahead <= 42527) ||
          lookahead == 42538 ||
          lookahead == 42539 ||
          (42560 <= lookahead && lookahead <= 42606) ||
          (42623 <= lookahead && lookahead <= 42653) ||
          (42656 <= lookahead && lookahead <= 42725) ||
          (42775 <= lookahead && lookahead <= 42783) ||
          (42786 <= lookahead && lookahead <= 42888) ||
          (42891 <= lookahead && lookahead <= 42943) ||
          (42946 <= lookahead && lookahead <= 42950) ||
          (42999 <= lookahead && lookahead <= 43009) ||
          (43011 <= lookahead && lookahead <= 43013) ||
          (43015 <= lookahead && lookahead <= 43018) ||
          (43020 <= lookahead && lookahead <= 43042) ||
          (43072 <= lookahead && lookahead <= 43123) ||
          (43138 <= lookahead && lookahead <= 43187) ||
          (43250 <= lookahead && lookahead <= 43255) ||
          lookahead == 43259 ||
          lookahead == 43261 ||
          lookahead == 43262 ||
          (43274 <= lookahead && lookahead <= 43301) ||
          (43312 <= lookahead && lookahead <= 43334) ||
          (43360 <= lookahead && lookahead <= 43388) ||
          (43396 <= lookahead && lookahead <= 43442) ||
          lookahead == 43471 ||
          (43488 <= lookahead && lookahead <= 43492) ||
          (43494 <= lookahead && lookahead <= 43503) ||
          (43514 <= lookahead && lookahead <= 43518) ||
          (43520 <= lookahead && lookahead <= 43560) ||
          (43584 <= lookahead && lookahead <= 43586) ||
          (43588 <= lookahead && lookahead <= 43595) ||
          (43616 <= lookahead && lookahead <= 43638) ||
          lookahead == 43642 ||
          (43646 <= lookahead && lookahead <= 43695) ||
          lookahead == 43697 ||
          lookahead == 43701 ||
          lookahead == 43702 ||
          (43705 <= lookahead && lookahead <= 43709) ||
          lookahead == 43712 ||
          lookahead == 43714 ||
          (43739 <= lookahead && lookahead <= 43741) ||
          (43744 <= lookahead && lookahead <= 43754) ||
          (43762 <= lookahead && lookahead <= 43764) ||
          (43777 <= lookahead && lookahead <= 43782) ||
          (43785 <= lookahead && lookahead <= 43790) ||
          (43793 <= lookahead && lookahead <= 43798) ||
          (43808 <= lookahead && lookahead <= 43814) ||
          (43816 <= lookahead && lookahead <= 43822) ||
          (43824 <= lookahead && lookahead <= 43866) ||
          (43868 <= lookahead && lookahead <= 43879) ||
          (43888 <= lookahead && lookahead <= 44002) ||
          (44032 <= lookahead && lookahead <= 55203) ||
          (55216 <= lookahead && lookahead <= 55238) ||
          (55243 <= lookahead && lookahead <= 55291) ||
          (63744 <= lookahead && lookahead <= 64109) ||
          (64112 <= lookahead && lookahead <= 64217) ||
          (64256 <= lookahead && lookahead <= 64262) ||
          (64275 <= lookahead && lookahead <= 64279) ||
          lookahead == 64285 ||
          (64287 <= lookahead && lookahead <= 64296) ||
          (64298 <= lookahead && lookahead <= 64310) ||
          (64312 <= lookahead && lookahead <= 64316) ||
          lookahead == 64318 ||
          lookahead == 64320 ||
          lookahead == 64321 ||
          lookahead == 64323 ||
          lookahead == 64324 ||
          (64326 <= lookahead && lookahead <= 64433) ||
          (64467 <= lookahead && lookahead <= 64829) ||
          (64848 <= lookahead && lookahead <= 64911) ||
          (64914 <= lookahead && lookahead <= 64967) ||
          (65008 <= lookahead && lookahead <= 65019) ||
          (65136 <= lookahead && lookahead <= 65140) ||
          (65142 <= lookahead && lookahead <= 65276) ||
          (65313 <= lookahead && lookahead <= 65338) ||
          (65345 <= lookahead && lookahead <= 65370) ||
          (65382 <= lookahead && lookahead <= 65470) ||
          (65474 <= lookahead && lookahead <= 65479) ||
          (65482 <= lookahead && lookahead <= 65487) ||
          (65490 <= lookahead && lookahead <= 65495) ||
          (65498 <= lookahead && lookahead <= 65500) ||
          (65536 <= lookahead && lookahead <= 65547) ||
          (65549 <= lookahead && lookahead <= 65574) ||
          (65576 <= lookahead && lookahead <= 65594) ||
          lookahead == 65596 ||
          lookahead == 65597 ||
          (65599 <= lookahead && lookahead <= 65613) ||
          (65616 <= lookahead && lookahead <= 65629) ||
          (65664 <= lookahead && lookahead <= 65786) ||
          (66176 <= lookahead && lookahead <= 66204) ||
          (66208 <= lookahead && lookahead <= 66256) ||
          (66304 <= lookahead && lookahead <= 66335) ||
          (66349 <= lookahead && lookahead <= 66368) ||
          (66370 <= lookahead && lookahead <= 66377) ||
          (66384 <= lookahead && lookahead <= 66421) ||
          (66432 <= lookahead && lookahead <= 66461) ||
          (66464 <= lookahead && lookahead <= 66499) ||
          (66504 <= lookahead && lookahead <= 66511) ||
          (66560 <= lookahead && lookahead <= 66717) ||
          (66736 <= lookahead && lookahead <= 66771) ||
          (66776 <= lookahead && lookahead <= 66811) ||
          (66816 <= lookahead && lookahead <= 66855) ||
          (66864 <= lookahead && lookahead <= 66915) ||
          (67072 <= lookahead && lookahead <= 67382) ||
          (67392 <= lookahead && lookahead <= 67413) ||
          (67424 <= lookahead && lookahead <= 67431) ||
          (67584 <= lookahead && lookahead <= 67589) ||
          lookahead == 67592 ||
          (67594 <= lookahead && lookahead <= 67637) ||
          lookahead == 67639 ||
          lookahead == 67640 ||
          lookahead == 67644 ||
          (67647 <= lookahead && lookahead <= 67669) ||
          (67680 <= lookahead && lookahead <= 67702) ||
          (67712 <= lookahead && lookahead <= 67742) ||
          (67808 <= lookahead && lookahead <= 67826) ||
          lookahead == 67828 ||
          lookahead == 67829 ||
          (67840 <= lookahead && lookahead <= 67861) ||
          (67872 <= lookahead && lookahead <= 67897) ||
          (67968 <= lookahead && lookahead <= 68023) ||
          lookahead == 68030 ||
          lookahead == 68031 ||
          lookahead == 68096 ||
          (68112 <= lookahead && lookahead <= 68115) ||
          (68117 <= lookahead && lookahead <= 68119) ||
          (68121 <= lookahead && lookahead <= 68149) ||
          (68192 <= lookahead && lookahead <= 68220) ||
          (68224 <= lookahead && lookahead <= 68252) ||
          (68288 <= lookahead && lookahead <= 68295) ||
          (68297 <= lookahead && lookahead <= 68324) ||
          (68352 <= lookahead && lookahead <= 68405) ||
          (68416 <= lookahead && lookahead <= 68437) ||
          (68448 <= lookahead && lookahead <= 68466) ||
          (68480 <= lookahead && lookahead <= 68497) ||
          (68608 <= lookahead && lookahead <= 68680) ||
          (68736 <= lookahead && lookahead <= 68786) ||
          (68800 <= lookahead && lookahead <= 68850) ||
          (68864 <= lookahead && lookahead <= 68899) ||
          (69376 <= lookahead && lookahead <= 69404) ||
          lookahead == 69415 ||
          (69424 <= lookahead && lookahead <= 69445) ||
          (69600 <= lookahead && lookahead <= 69622) ||
          (69635 <= lookahead && lookahead <= 69687) ||
          (69763 <= lookahead && lookahead <= 69807) ||
          (69840 <= lookahead && lookahead <= 69864) ||
          (69891 <= lookahead && lookahead <= 69926) ||
          lookahead == 69956 ||
          (69968 <= lookahead && lookahead <= 70002) ||
          lookahead == 70006 ||
          (70019 <= lookahead && lookahead <= 70066) ||
          (70081 <= lookahead && lookahead <= 70084) ||
          lookahead == 70106 ||
          lookahead == 70108 ||
          (70144 <= lookahead && lookahead <= 70161) ||
          (70163 <= lookahead && lookahead <= 70187) ||
          (70272 <= lookahead && lookahead <= 70278) ||
          lookahead == 70280 ||
          (70282 <= lookahead && lookahead <= 70285) ||
          (70287 <= lookahead && lookahead <= 70301) ||
          (70303 <= lookahead && lookahead <= 70312) ||
          (70320 <= lookahead && lookahead <= 70366) ||
          (70405 <= lookahead && lookahead <= 70412) ||
          lookahead == 70415 ||
          lookahead == 70416 ||
          (70419 <= lookahead && lookahead <= 70440) ||
          (70442 <= lookahead && lookahead <= 70448) ||
          lookahead == 70450 ||
          lookahead == 70451 ||
          (70453 <= lookahead && lookahead <= 70457) ||
          lookahead == 70461 ||
          lookahead == 70480 ||
          (70493 <= lookahead && lookahead <= 70497) ||
          (70656 <= lookahead && lookahead <= 70708) ||
          (70727 <= lookahead && lookahead <= 70730) ||
          lookahead == 70751 ||
          (70784 <= lookahead && lookahead <= 70831) ||
          lookahead == 70852 ||
          lookahead == 70853 ||
          lookahead == 70855 ||
          (71040 <= lookahead && lookahead <= 71086) ||
          (71128 <= lookahead && lookahead <= 71131) ||
          (71168 <= lookahead && lookahead <= 71215) ||
          lookahead == 71236 ||
          (71296 <= lookahead && lookahead <= 71338) ||
          lookahead == 71352 ||
          (71424 <= lookahead && lookahead <= 71450) ||
          (71680 <= lookahead && lookahead <= 71723) ||
          (71840 <= lookahead && lookahead <= 71903) ||
          lookahead == 71935 ||
          (72096 <= lookahead && lookahead <= 72103) ||
          (72106 <= lookahead && lookahead <= 72144) ||
          lookahead == 72161 ||
          lookahead == 72163 ||
          lookahead == 72192 ||
          (72203 <= lookahead && lookahead <= 72242) ||
          lookahead == 72250 ||
          lookahead == 72272 ||
          (72284 <= lookahead && lookahead <= 72329) ||
          lookahead == 72349 ||
          (72384 <= lookahead && lookahead <= 72440) ||
          (72704 <= lookahead && lookahead <= 72712) ||
          (72714 <= lookahead && lookahead <= 72750) ||
          lookahead == 72768 ||
          (72818 <= lookahead && lookahead <= 72847) ||
          (72960 <= lookahead && lookahead <= 72966) ||
          lookahead == 72968 ||
          lookahead == 72969 ||
          (72971 <= lookahead && lookahead <= 73008) ||
          lookahead == 73030 ||
          (73056 <= lookahead && lookahead <= 73061) ||
          lookahead == 73063 ||
          lookahead == 73064 ||
          (73066 <= lookahead && lookahead <= 73097) ||
          lookahead == 73112 ||
          (73440 <= lookahead && lookahead <= 73458) ||
          (73728 <= lookahead && lookahead <= 74649) ||
          (74880 <= lookahead && lookahead <= 75075) ||
          (77824 <= lookahead && lookahead <= 78894) ||
          (82944 <= lookahead && lookahead <= 83526) ||
          (92160 <= lookahead && lookahead <= 92728) ||
          (92736 <= lookahead && lookahead <= 92766) ||
          (92880 <= lookahead && lookahead <= 92909) ||
          (92928 <= lookahead && lookahead <= 92975) ||
          (92992 <= lookahead && lookahead <= 92995) ||
          (93027 <= lookahead && lookahead <= 93047) ||
          (93053 <= lookahead && lookahead <= 93071) ||
          (93760 <= lookahead && lookahead <= 93823) ||
          (93952 <= lookahead && lookahead <= 94026) ||
          lookahead == 94032 ||
          (94099 <= lookahead && lookahead <= 94111) ||
          lookahead == 94176 ||
          lookahead == 94177 ||
          lookahead == 94179 ||
          (94208 <= lookahead && lookahead <= 100343) ||
          (100352 <= lookahead && lookahead <= 101106) ||
          (110592 <= lookahead && lookahead <= 110878) ||
          (110928 <= lookahead && lookahead <= 110930) ||
          (110948 <= lookahead && lookahead <= 110951) ||
          (110960 <= lookahead && lookahead <= 111355) ||
          (113664 <= lookahead && lookahead <= 113770) ||
          (113776 <= lookahead && lookahead <= 113788) ||
          (113792 <= lookahead && lookahead <= 113800) ||
          (113808 <= lookahead && lookahead <= 113817) ||
          (119808 <= lookahead && lookahead <= 119892) ||
          (119894 <= lookahead && lookahead <= 119964) ||
          lookahead == 119966 ||
          lookahead == 119967 ||
          lookahead == 119970 ||
          lookahead == 119973 ||
          lookahead == 119974 ||
          (119977 <= lookahead && lookahead <= 119980) ||
          (119982 <= lookahead && lookahead <= 119993) ||
          lookahead == 119995 ||
          (119997 <= lookahead && lookahead <= 120003) ||
          (120005 <= lookahead && lookahead <= 120069) ||
          (120071 <= lookahead && lookahead <= 120074) ||
          (120077 <= lookahead && lookahead <= 120084) ||
          (120086 <= lookahead && lookahead <= 120092) ||
          (120094 <= lookahead && lookahead <= 120121) ||
          (120123 <= lookahead && lookahead <= 120126) ||
          (120128 <= lookahead && lookahead <= 120132) ||
          lookahead == 120134 ||
          (120138 <= lookahead && lookahead <= 120144) ||
          (120146 <= lookahead && lookahead <= 120485) ||
          (120488 <= lookahead && lookahead <= 120512) ||
          (120514 <= lookahead && lookahead <= 120538) ||
          (120540 <= lookahead && lookahead <= 120570) ||
          (120572 <= lookahead && lookahead <= 120596) ||
          (120598 <= lookahead && lookahead <= 120628) ||
          (120630 <= lookahead && lookahead <= 120654) ||
          (120656 <= lookahead && lookahead <= 120686) ||
          (120688 <= lookahead && lookahead <= 120712) ||
          (120714 <= lookahead && lookahead <= 120744) ||
          (120746 <= lookahead && lookahead <= 120770) ||
          (120772 <= lookahead && lookahead <= 120779) ||
          (123136 <= lookahead && lookahead <= 123180) ||
          (123191 <= lookahead && lookahead <= 123197) ||
          lookahead == 123214 ||
          (123584 <= lookahead && lookahead <= 123627) ||
          (124928 <= lookahead && lookahead <= 125124) ||
          (125184 <= lookahead && lookahead <= 125251) ||
          lookahead == 125259 ||
          (126464 <= lookahead && lookahead <= 126467) ||
          (126469 <= lookahead && lookahead <= 126495) ||
          lookahead == 126497 ||
          lookahead == 126498 ||
          lookahead == 126500 ||
          lookahead == 126503 ||
          (126505 <= lookahead && lookahead <= 126514) ||
          (126516 <= lookahead && lookahead <= 126519) ||
          lookahead == 126521 ||
          lookahead == 126523 ||
          lookahead == 126530 ||
          lookahead == 126535 ||
          lookahead == 126537 ||
          lookahead == 126539 ||
          (126541 <= lookahead && lookahead <= 126543) ||
          lookahead == 126545 ||
          lookahead == 126546 ||
          lookahead == 126548 ||
          lookahead == 126551 ||
          lookahead == 126553 ||
          lookahead == 126555 ||
          lookahead == 126557 ||
          lookahead == 126559 ||
          lookahead == 126561 ||
          lookahead == 126562 ||
          lookahead == 126564 ||
          (126567 <= lookahead && lookahead <= 126570) ||
          (126572 <= lookahead && lookahead <= 126578) ||
          (126580 <= lookahead && lookahead <= 126583) ||
          (126585 <= lookahead && lookahead <= 126588) ||
          lookahead == 126590 ||
          (126592 <= lookahead && lookahead <= 126601) ||
          (126603 <= lookahead && lookahead <= 126619) ||
          (126625 <= lookahead && lookahead <= 126627) ||
          (126629 <= lookahead && lookahead <= 126633) ||
          (126635 <= lookahead && lookahead <= 126651) ||
          (131072 <= lookahead && lookahead <= 173782) ||
          (173824 <= lookahead && lookahead <= 177972) ||
          (177984 <= lookahead && lookahead <= 178205) ||
          (178208 <= lookahead && lookahead <= 183969) ||
          (183984 <= lookahead && lookahead <= 191456) ||
          (194560 <= lookahead && lookahead <= 195101)) ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 170 ||
          lookahead == 181 ||
          lookahead == 186 ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 705) ||
          (710 <= lookahead && lookahead <= 721) ||
          (736 <= lookahead && lookahead <= 740) ||
          lookahead == 748 ||
          lookahead == 750 ||
          (880 <= lookahead && lookahead <= 884) ||
          lookahead == 886 ||
          lookahead == 887 ||
          (890 <= lookahead && lookahead <= 893) ||
          lookahead == 895 ||
          lookahead == 902 ||
          (904 <= lookahead && lookahead <= 906) ||
          lookahead == 908 ||
          (910 <= lookahead && lookahead <= 929) ||
          (931 <= lookahead && lookahead <= 1013) ||
          (1015 <= lookahead && lookahead <= 1153) ||
          (1162 <= lookahead && lookahead <= 1327) ||
          (1329 <= lookahead && lookahead <= 1366) ||
          lookahead == 1369 ||
          (1376 <= lookahead && lookahead <= 1416) ||
          (1488 <= lookahead && lookahead <= 1514) ||
          (1519 <= lookahead && lookahead <= 1522) ||
          (1568 <= lookahead && lookahead <= 1610) ||
          lookahead == 1646 ||
          lookahead == 1647 ||
          (1649 <= lookahead && lookahead <= 1747) ||
          lookahead == 1749 ||
          lookahead == 1765 ||
          lookahead == 1766 ||
          lookahead == 1774 ||
          lookahead == 1775 ||
          (1786 <= lookahead && lookahead <= 1788) ||
          lookahead == 1791 ||
          lookahead == 1808 ||
          (1810 <= lookahead && lookahead <= 1839) ||
          (1869 <= lookahead && lookahead <= 1957) ||
          lookahead == 1969 ||
          (1994 <= lookahead && lookahead <= 2026) ||
          lookahead == 2036 ||
          lookahead == 2037 ||
          lookahead == 2042 ||
          (2048 <= lookahead && lookahead <= 2069) ||
          lookahead == 2074 ||
          lookahead == 2084 ||
          lookahead == 2088 ||
          (2112 <= lookahead && lookahead <= 2136) ||
          (2144 <= lookahead && lookahead <= 2154) ||
          (2208 <= lookahead && lookahead <= 2228) ||
          (2230 <= lookahead && lookahead <= 2237) ||
          (2308 <= lookahead && lookahead <= 2361) ||
          lookahead == 2365 ||
          lookahead == 2384 ||
          (2392 <= lookahead && lookahead <= 2401) ||
          (2417 <= lookahead && lookahead <= 2432) ||
          (2437 <= lookahead && lookahead <= 2444) ||
          lookahead == 2447 ||
          lookahead == 2448 ||
          (2451 <= lookahead && lookahead <= 2472) ||
          (2474 <= lookahead && lookahead <= 2480) ||
          lookahead == 2482 ||
          (2486 <= lookahead && lookahead <= 2489) ||
          lookahead == 2493 ||
          lookahead == 2510 ||
          lookahead == 2524 ||
          lookahead == 2525 ||
          (2527 <= lookahead && lookahead <= 2529) ||
          lookahead == 2544 ||
          lookahead == 2545 ||
          lookahead == 2556 ||
          (2565 <= lookahead && lookahead <= 2570) ||
          lookahead == 2575 ||
          lookahead == 2576 ||
          (2579 <= lookahead && lookahead <= 2600) ||
          (2602 <= lookahead && lookahead <= 2608) ||
          lookahead == 2610 ||
          lookahead == 2611 ||
          lookahead == 2613 ||
          lookahead == 2614 ||
          lookahead == 2616 ||
          lookahead == 2617 ||
          (2649 <= lookahead && lookahead <= 2652) ||
          lookahead == 2654 ||
          (2674 <= lookahead && lookahead <= 2676) ||
          (2693 <= lookahead && lookahead <= 2701) ||
          (2703 <= lookahead && lookahead <= 2705) ||
          (2707 <= lookahead && lookahead <= 2728) ||
          (2730 <= lookahead && lookahead <= 2736) ||
          lookahead == 2738 ||
          lookahead == 2739 ||
          (2741 <= lookahead && lookahead <= 2745) ||
          lookahead == 2749 ||
          lookahead == 2768 ||
          lookahead == 2784 ||
          lookahead == 2785 ||
          lookahead == 2809 ||
          (2821 <= lookahead && lookahead <= 2828) ||
          lookahead == 2831 ||
          lookahead == 2832 ||
          (2835 <= lookahead && lookahead <= 2856) ||
          (2858 <= lookahead && lookahead <= 2864) ||
          lookahead == 2866 ||
          lookahead == 2867 ||
          (2869 <= lookahead && lookahead <= 2873) ||
          lookahead == 2877 ||
          lookahead == 2908 ||
          lookahead == 2909 ||
          (2911 <= lookahead && lookahead <= 2913) ||
          lookahead == 2929 ||
          lookahead == 2947 ||
          (2949 <= lookahead && lookahead <= 2954) ||
          (2958 <= lookahead && lookahead <= 2960) ||
          (2962 <= lookahead && lookahead <= 2965) ||
          lookahead == 2969 ||
          lookahead == 2970 ||
          lookahead == 2972 ||
          lookahead == 2974 ||
          lookahead == 2975 ||
          lookahead == 2979 ||
          lookahead == 2980 ||
          (2984 <= lookahead && lookahead <= 2986) ||
          (2990 <= lookahead && lookahead <= 3001) ||
          lookahead == 3024 ||
          (3077 <= lookahead && lookahead <= 3084) ||
          (3086 <= lookahead && lookahead <= 3088) ||
          (3090 <= lookahead && lookahead <= 3112) ||
          (3114 <= lookahead && lookahead <= 3129) ||
          lookahead == 3133 ||
          (3160 <= lookahead && lookahead <= 3162) ||
          lookahead == 3168 ||
          lookahead == 3169 ||
          lookahead == 3200 ||
          (3205 <= lookahead && lookahead <= 3212) ||
          (3214 <= lookahead && lookahead <= 3216) ||
          (3218 <= lookahead && lookahead <= 3240) ||
          (3242 <= lookahead && lookahead <= 3251) ||
          (3253 <= lookahead && lookahead <= 3257) ||
          lookahead == 3261 ||
          lookahead == 3294 ||
          lookahead == 3296 ||
          lookahead == 3297 ||
          lookahead == 3313 ||
          lookahead == 3314 ||
          (3333 <= lookahead && lookahead <= 3340) ||
          (3342 <= lookahead && lookahead <= 3344) ||
          (3346 <= lookahead && lookahead <= 3386) ||
          lookahead == 3389 ||
          lookahead == 3406 ||
          (3412 <= lookahead && lookahead <= 3414) ||
          (3423 <= lookahead && lookahead <= 3425) ||
          (3450 <= lookahead && lookahead <= 3455) ||
          (3461 <= lookahead && lookahead <= 3478) ||
          (3482 <= lookahead && lookahead <= 3505) ||
          (3507 <= lookahead && lookahead <= 3515) ||
          lookahead == 3517 ||
          (3520 <= lookahead && lookahead <= 3526) ||
          (3585 <= lookahead && lookahead <= 3632) ||
          lookahead == 3634 ||
          lookahead == 3635 ||
          (3648 <= lookahead && lookahead <= 3654) ||
          lookahead == 3713 ||
          lookahead == 3714 ||
          lookahead == 3716 ||
          (3718 <= lookahead && lookahead <= 3722) ||
          (3724 <= lookahead && lookahead <= 3747) ||
          lookahead == 3749 ||
          (3751 <= lookahead && lookahead <= 3760) ||
          lookahead == 3762 ||
          lookahead == 3763 ||
          lookahead == 3773 ||
          (3776 <= lookahead && lookahead <= 3780) ||
          lookahead == 3782 ||
          (3804 <= lookahead && lookahead <= 3807) ||
          lookahead == 3840 ||
          (3904 <= lookahead && lookahead <= 3911) ||
          (3913 <= lookahead && lookahead <= 3948) ||
          (3976 <= lookahead && lookahead <= 3980) ||
          (4096 <= lookahead && lookahead <= 4138) ||
          lookahead == 4159 ||
          (4176 <= lookahead && lookahead <= 4181) ||
          (4186 <= lookahead && lookahead <= 4189) ||
          lookahead == 4193 ||
          lookahead == 4197 ||
          lookahead == 4198 ||
          (4206 <= lookahead && lookahead <= 4208) ||
          (4213 <= lookahead && lookahead <= 4225) ||
          lookahead == 4238 ||
          (4256 <= lookahead && lookahead <= 4293) ||
          lookahead == 4295 ||
          lookahead == 4301 ||
          (4304 <= lookahead && lookahead <= 4346) ||
          (4348 <= lookahead && lookahead <= 4680) ||
          (4682 <= lookahead && lookahead <= 4685) ||
          (4688 <= lookahead && lookahead <= 4694) ||
          lookahead == 4696 ||
          (4698 <= lookahead && lookahead <= 4701) ||
          (4704 <= lookahead && lookahead <= 4744) ||
          (4746 <= lookahead && lookahead <= 4749) ||
          (4752 <= lookahead && lookahead <= 4784) ||
          (4786 <= lookahead && lookahead <= 4789) ||
          (4792 <= lookahead && lookahead <= 4798) ||
          lookahead == 4800 ||
          (4802 <= lookahead && lookahead <= 4805) ||
          (4808 <= lookahead && lookahead <= 4822) ||
          (4824 <= lookahead && lookahead <= 4880) ||
          (4882 <= lookahead && lookahead <= 4885) ||
          (4888 <= lookahead && lookahead <= 4954) ||
          (4992 <= lookahead && lookahead <= 5007) ||
          (5024 <= lookahead && lookahead <= 5109) ||
          (5112 <= lookahead && lookahead <= 5117) ||
          (5121 <= lookahead && lookahead <= 5740) ||
          (5743 <= lookahead && lookahead <= 5759) ||
          (5761 <= lookahead && lookahead <= 5786) ||
          (5792 <= lookahead && lookahead <= 5866) ||
          (5873 <= lookahead && lookahead <= 5880) ||
          (5888 <= lookahead && lookahead <= 5900) ||
          (5902 <= lookahead && lookahead <= 5905) ||
          (5920 <= lookahead && lookahead <= 5937) ||
          (5952 <= lookahead && lookahead <= 5969) ||
          (5984 <= lookahead && lookahead <= 5996) ||
          (5998 <= lookahead && lookahead <= 6000) ||
          (6016 <= lookahead && lookahead <= 6067) ||
          lookahead == 6103 ||
          lookahead == 6108 ||
          (6176 <= lookahead && lookahead <= 6264) ||
          (6272 <= lookahead && lookahead <= 6276) ||
          (6279 <= lookahead && lookahead <= 6312) ||
          lookahead == 6314 ||
          (6320 <= lookahead && lookahead <= 6389) ||
          (6400 <= lookahead && lookahead <= 6430) ||
          (6480 <= lookahead && lookahead <= 6509) ||
          (6512 <= lookahead && lookahead <= 6516) ||
          (6528 <= lookahead && lookahead <= 6571) ||
          (6576 <= lookahead && lookahead <= 6601) ||
          (6656 <= lookahead && lookahead <= 6678) ||
          (6688 <= lookahead && lookahead <= 6740) ||
          lookahead == 6823 ||
          (6917 <= lookahead && lookahead <= 6963) ||
          (6981 <= lookahead && lookahead <= 6987) ||
          (7043 <= lookahead && lookahead <= 7072) ||
          lookahead == 7086 ||
          lookahead == 7087 ||
          (7098 <= lookahead && lookahead <= 7141) ||
          (7168 <= lookahead && lookahead <= 7203) ||
          (7245 <= lookahead && lookahead <= 7247) ||
          (7258 <= lookahead && lookahead <= 7293) ||
          (7296 <= lookahead && lookahead <= 7304) ||
          (7312 <= lookahead && lookahead <= 7354) ||
          (7357 <= lookahead && lookahead <= 7359) ||
          (7401 <= lookahead && lookahead <= 7404) ||
          (7406 <= lookahead && lookahead <= 7411) ||
          lookahead == 7413 ||
          lookahead == 7414 ||
          lookahead == 7418 ||
          (7424 <= lookahead && lookahead <= 7615) ||
          (7680 <= lookahead && lookahead <= 7957) ||
          (7960 <= lookahead && lookahead <= 7965) ||
          (7968 <= lookahead && lookahead <= 8005) ||
          (8008 <= lookahead && lookahead <= 8013) ||
          (8016 <= lookahead && lookahead <= 8023) ||
          lookahead == 8025 ||
          lookahead == 8027 ||
          lookahead == 8029 ||
          (8031 <= lookahead && lookahead <= 8061) ||
          (8064 <= lookahead && lookahead <= 8116) ||
          (8118 <= lookahead && lookahead <= 8124) ||
          lookahead == 8126 ||
          (8130 <= lookahead && lookahead <= 8132) ||
          (8134 <= lookahead && lookahead <= 8140) ||
          (8144 <= lookahead && lookahead <= 8147) ||
          (8150 <= lookahead && lookahead <= 8155) ||
          (8160 <= lookahead && lookahead <= 8172) ||
          (8178 <= lookahead && lookahead <= 8180) ||
          (8182 <= lookahead && lookahead <= 8188) ||
          lookahead == 8305 ||
          lookahead == 8319 ||
          (8336 <= lookahead && lookahead <= 8348) ||
          lookahead == 8450 ||
          lookahead == 8455 ||
          (8458 <= lookahead && lookahead <= 8467) ||
          lookahead == 8469 ||
          (8473 <= lookahead && lookahead <= 8477) ||
          lookahead == 8484 ||
          lookahead == 8486 ||
          lookahead == 8488 ||
          (8490 <= lookahead && lookahead <= 8493) ||
          (8495 <= lookahead && lookahead <= 8505) ||
          (8508 <= lookahead && lookahead <= 8511) ||
          (8517 <= lookahead && lookahead <= 8521) ||
          lookahead == 8526 ||
          lookahead == 8579 ||
          lookahead == 8580 ||
          (11264 <= lookahead && lookahead <= 11310) ||
          (11312 <= lookahead && lookahead <= 11358) ||
          (11360 <= lookahead && lookahead <= 11492) ||
          (11499 <= lookahead && lookahead <= 11502) ||
          lookahead == 11506 ||
          lookahead == 11507 ||
          (11520 <= lookahead && lookahead <= 11557) ||
          lookahead == 11559 ||
          lookahead == 11565 ||
          (11568 <= lookahead && lookahead <= 11623) ||
          lookahead == 11631 ||
          (11648 <= lookahead && lookahead <= 11670) ||
          (11680 <= lookahead && lookahead <= 11686) ||
          (11688 <= lookahead && lookahead <= 11694) ||
          (11696 <= lookahead && lookahead <= 11702) ||
          (11704 <= lookahead && lookahead <= 11710) ||
          (11712 <= lookahead && lookahead <= 11718) ||
          (11720 <= lookahead && lookahead <= 11726) ||
          (11728 <= lookahead && lookahead <= 11734) ||
          (11736 <= lookahead && lookahead <= 11742) ||
          lookahead == 11823 ||
          lookahead == 12293 ||
          lookahead == 12294 ||
          (12337 <= lookahead && lookahead <= 12341) ||
          lookahead == 12347 ||
          lookahead == 12348 ||
          (12353 <= lookahead && lookahead <= 12438) ||
          (12445 <= lookahead && lookahead <= 12447) ||
          (12449 <= lookahead && lookahead <= 12538) ||
          (12540 <= lookahead && lookahead <= 12543) ||
          (12549 <= lookahead && lookahead <= 12591) ||
          (12593 <= lookahead && lookahead <= 12686) ||
          (12704 <= lookahead && lookahead <= 12730) ||
          (12784 <= lookahead && lookahead <= 12799) ||
          (13312 <= lookahead && lookahead <= 19893) ||
          (19968 <= lookahead && lookahead <= 40943) ||
          (40960 <= lookahead && lookahead <= 42124) ||
          (42192 <= lookahead && lookahead <= 42237) ||
          (42240 <= lookahead && lookahead <= 42508) ||
          (42512 <= lookahead && lookahead <= 42527) ||
          lookahead == 42538 ||
          lookahead == 42539 ||
          (42560 <= lookahead && lookahead <= 42606) ||
          (42623 <= lookahead && lookahead <= 42653) ||
          (42656 <= lookahead && lookahead <= 42725) ||
          (42775 <= lookahead && lookahead <= 42783) ||
          (42786 <= lookahead && lookahead <= 42888) ||
          (42891 <= lookahead && lookahead <= 42943) ||
          (42946 <= lookahead && lookahead <= 42950) ||
          (42999 <= lookahead && lookahead <= 43009) ||
          (43011 <= lookahead && lookahead <= 43013) ||
          (43015 <= lookahead && lookahead <= 43018) ||
          (43020 <= lookahead && lookahead <= 43042) ||
          (43072 <= lookahead && lookahead <= 43123) ||
          (43138 <= lookahead && lookahead <= 43187) ||
          (43250 <= lookahead && lookahead <= 43255) ||
          lookahead == 43259 ||
          lookahead == 43261 ||
          lookahead == 43262 ||
          (43274 <= lookahead && lookahead <= 43301) ||
          (43312 <= lookahead && lookahead <= 43334) ||
          (43360 <= lookahead && lookahead <= 43388) ||
          (43396 <= lookahead && lookahead <= 43442) ||
          lookahead == 43471 ||
          (43488 <= lookahead && lookahead <= 43492) ||
          (43494 <= lookahead && lookahead <= 43503) ||
          (43514 <= lookahead && lookahead <= 43518) ||
          (43520 <= lookahead && lookahead <= 43560) ||
          (43584 <= lookahead && lookahead <= 43586) ||
          (43588 <= lookahead && lookahead <= 43595) ||
          (43616 <= lookahead && lookahead <= 43638) ||
          lookahead == 43642 ||
          (43646 <= lookahead && lookahead <= 43695) ||
          lookahead == 43697 ||
          lookahead == 43701 ||
          lookahead == 43702 ||
          (43705 <= lookahead && lookahead <= 43709) ||
          lookahead == 43712 ||
          lookahead == 43714 ||
          (43739 <= lookahead && lookahead <= 43741) ||
          (43744 <= lookahead && lookahead <= 43754) ||
          (43762 <= lookahead && lookahead <= 43764) ||
          (43777 <= lookahead && lookahead <= 43782) ||
          (43785 <= lookahead && lookahead <= 43790) ||
          (43793 <= lookahead && lookahead <= 43798) ||
          (43808 <= lookahead && lookahead <= 43814) ||
          (43816 <= lookahead && lookahead <= 43822) ||
          (43824 <= lookahead && lookahead <= 43866) ||
          (43868 <= lookahead && lookahead <= 43879) ||
          (43888 <= lookahead && lookahead <= 44002) ||
          (44032 <= lookahead && lookahead <= 55203) ||
          (55216 <= lookahead && lookahead <= 55238) ||
          (55243 <= lookahead && lookahead <= 55291) ||
          (63744 <= lookahead && lookahead <= 64109) ||
          (64112 <= lookahead && lookahead <= 64217) ||
          (64256 <= lookahead && lookahead <= 64262) ||
          (64275 <= lookahead && lookahead <= 64279) ||
          lookahead == 64285 ||
          (64287 <= lookahead && lookahead <= 64296) ||
          (64298 <= lookahead && lookahead <= 64310) ||
          (64312 <= lookahead && lookahead <= 64316) ||
          lookahead == 64318 ||
          lookahead == 64320 ||
          lookahead == 64321 ||
          lookahead == 64323 ||
          lookahead == 64324 ||
          (64326 <= lookahead && lookahead <= 64433) ||
          (64467 <= lookahead && lookahead <= 64829) ||
          (64848 <= lookahead && lookahead <= 64911) ||
          (64914 <= lookahead && lookahead <= 64967) ||
          (65008 <= lookahead && lookahead <= 65019) ||
          (65136 <= lookahead && lookahead <= 65140) ||
          (65142 <= lookahead && lookahead <= 65276) ||
          (65313 <= lookahead && lookahead <= 65338) ||
          (65345 <= lookahead && lookahead <= 65370) ||
          (65382 <= lookahead && lookahead <= 65470) ||
          (65474 <= lookahead && lookahead <= 65479) ||
          (65482 <= lookahead && lookahead <= 65487) ||
          (65490 <= lookahead && lookahead <= 65495) ||
          (65498 <= lookahead && lookahead <= 65500) ||
          (65536 <= lookahead && lookahead <= 65547) ||
          (65549 <= lookahead && lookahead <= 65574) ||
          (65576 <= lookahead && lookahead <= 65594) ||
          lookahead == 65596 ||
          lookahead == 65597 ||
          (65599 <= lookahead && lookahead <= 65613) ||
          (65616 <= lookahead && lookahead <= 65629) ||
          (65664 <= lookahead && lookahead <= 65786) ||
          (66176 <= lookahead && lookahead <= 66204) ||
          (66208 <= lookahead && lookahead <= 66256) ||
          (66304 <= lookahead && lookahead <= 66335) ||
          (66349 <= lookahead && lookahead <= 66368) ||
          (66370 <= lookahead && lookahead <= 66377) ||
          (66384 <= lookahead && lookahead <= 66421) ||
          (66432 <= lookahead && lookahead <= 66461) ||
          (66464 <= lookahead && lookahead <= 66499) ||
          (66504 <= lookahead && lookahead <= 66511) ||
          (66560 <= lookahead && lookahead <= 66717) ||
          (66736 <= lookahead && lookahead <= 66771) ||
          (66776 <= lookahead && lookahead <= 66811) ||
          (66816 <= lookahead && lookahead <= 66855) ||
          (66864 <= lookahead && lookahead <= 66915) ||
          (67072 <= lookahead && lookahead <= 67382) ||
          (67392 <= lookahead && lookahead <= 67413) ||
          (67424 <= lookahead && lookahead <= 67431) ||
          (67584 <= lookahead && lookahead <= 67589) ||
          lookahead == 67592 ||
          (67594 <= lookahead && lookahead <= 67637) ||
          lookahead == 67639 ||
          lookahead == 67640 ||
          lookahead == 67644 ||
          (67647 <= lookahead && lookahead <= 67669) ||
          (67680 <= lookahead && lookahead <= 67702) ||
          (67712 <= lookahead && lookahead <= 67742) ||
          (67808 <= lookahead && lookahead <= 67826) ||
          lookahead == 67828 ||
          lookahead == 67829 ||
          (67840 <= lookahead && lookahead <= 67861) ||
          (67872 <= lookahead && lookahead <= 67897) ||
          (67968 <= lookahead && lookahead <= 68023) ||
          lookahead == 68030 ||
          lookahead == 68031 ||
          lookahead == 68096 ||
          (68112 <= lookahead && lookahead <= 68115) ||
          (68117 <= lookahead && lookahead <= 68119) ||
          (68121 <= lookahead && lookahead <= 68149) ||
          (68192 <= lookahead && lookahead <= 68220) ||
          (68224 <= lookahead && lookahead <= 68252) ||
          (68288 <= lookahead && lookahead <= 68295) ||
          (68297 <= lookahead && lookahead <= 68324) ||
          (68352 <= lookahead && lookahead <= 68405) ||
          (68416 <= lookahead && lookahead <= 68437) ||
          (68448 <= lookahead && lookahead <= 68466) ||
          (68480 <= lookahead && lookahead <= 68497) ||
          (68608 <= lookahead && lookahead <= 68680) ||
          (68736 <= lookahead && lookahead <= 68786) ||
          (68800 <= lookahead && lookahead <= 68850) ||
          (68864 <= lookahead && lookahead <= 68899) ||
          (69376 <= lookahead && lookahead <= 69404) ||
          lookahead == 69415 ||
          (69424 <= lookahead && lookahead <= 69445) ||
          (69600 <= lookahead && lookahead <= 69622) ||
          (69635 <= lookahead && lookahead <= 69687) ||
          (69763 <= lookahead && lookahead <= 69807) ||
          (69840 <= lookahead && lookahead <= 69864) ||
          (69891 <= lookahead && lookahead <= 69926) ||
          lookahead == 69956 ||
          (69968 <= lookahead && lookahead <= 70002) ||
          lookahead == 70006 ||
          (70019 <= lookahead && lookahead <= 70066) ||
          (70081 <= lookahead && lookahead <= 70084) ||
          lookahead == 70106 ||
          lookahead == 70108 ||
          (70144 <= lookahead && lookahead <= 70161) ||
          (70163 <= lookahead && lookahead <= 70187) ||
          (70272 <= lookahead && lookahead <= 70278) ||
          lookahead == 70280 ||
          (70282 <= lookahead && lookahead <= 70285) ||
          (70287 <= lookahead && lookahead <= 70301) ||
          (70303 <= lookahead && lookahead <= 70312) ||
          (70320 <= lookahead && lookahead <= 70366) ||
          (70405 <= lookahead && lookahead <= 70412) ||
          lookahead == 70415 ||
          lookahead == 70416 ||
          (70419 <= lookahead && lookahead <= 70440) ||
          (70442 <= lookahead && lookahead <= 70448) ||
          lookahead == 70450 ||
          lookahead == 70451 ||
          (70453 <= lookahead && lookahead <= 70457) ||
          lookahead == 70461 ||
          lookahead == 70480 ||
          (70493 <= lookahead && lookahead <= 70497) ||
          (70656 <= lookahead && lookahead <= 70708) ||
          (70727 <= lookahead && lookahead <= 70730) ||
          lookahead == 70751 ||
          (70784 <= lookahead && lookahead <= 70831) ||
          lookahead == 70852 ||
          lookahead == 70853 ||
          lookahead == 70855 ||
          (71040 <= lookahead && lookahead <= 71086) ||
          (71128 <= lookahead && lookahead <= 71131) ||
          (71168 <= lookahead && lookahead <= 71215) ||
          lookahead == 71236 ||
          (71296 <= lookahead && lookahead <= 71338) ||
          lookahead == 71352 ||
          (71424 <= lookahead && lookahead <= 71450) ||
          (71680 <= lookahead && lookahead <= 71723) ||
          (71840 <= lookahead && lookahead <= 71903) ||
          lookahead == 71935 ||
          (72096 <= lookahead && lookahead <= 72103) ||
          (72106 <= lookahead && lookahead <= 72144) ||
          lookahead == 72161 ||
          lookahead == 72163 ||
          lookahead == 72192 ||
          (72203 <= lookahead && lookahead <= 72242) ||
          lookahead == 72250 ||
          lookahead == 72272 ||
          (72284 <= lookahead && lookahead <= 72329) ||
          lookahead == 72349 ||
          (72384 <= lookahead && lookahead <= 72440) ||
          (72704 <= lookahead && lookahead <= 72712) ||
          (72714 <= lookahead && lookahead <= 72750) ||
          lookahead == 72768 ||
          (72818 <= lookahead && lookahead <= 72847) ||
          (72960 <= lookahead && lookahead <= 72966) ||
          lookahead == 72968 ||
          lookahead == 72969 ||
          (72971 <= lookahead && lookahead <= 73008) ||
          lookahead == 73030 ||
          (73056 <= lookahead && lookahead <= 73061) ||
          lookahead == 73063 ||
          lookahead == 73064 ||
          (73066 <= lookahead && lookahead <= 73097) ||
          lookahead == 73112 ||
          (73440 <= lookahead && lookahead <= 73458) ||
          (73728 <= lookahead && lookahead <= 74649) ||
          (74880 <= lookahead && lookahead <= 75075) ||
          (77824 <= lookahead && lookahead <= 78894) ||
          (82944 <= lookahead && lookahead <= 83526) ||
          (92160 <= lookahead && lookahead <= 92728) ||
          (92736 <= lookahead && lookahead <= 92766) ||
          (92880 <= lookahead && lookahead <= 92909) ||
          (92928 <= lookahead && lookahead <= 92975) ||
          (92992 <= lookahead && lookahead <= 92995) ||
          (93027 <= lookahead && lookahead <= 93047) ||
          (93053 <= lookahead && lookahead <= 93071) ||
          (93760 <= lookahead && lookahead <= 93823) ||
          (93952 <= lookahead && lookahead <= 94026) ||
          lookahead == 94032 ||
          (94099 <= lookahead && lookahead <= 94111) ||
          lookahead == 94176 ||
          lookahead == 94177 ||
          lookahead == 94179 ||
          (94208 <= lookahead && lookahead <= 100343) ||
          (100352 <= lookahead && lookahead <= 101106) ||
          (110592 <= lookahead && lookahead <= 110878) ||
          (110928 <= lookahead && lookahead <= 110930) ||
          (110948 <= lookahead && lookahead <= 110951) ||
          (110960 <= lookahead && lookahead <= 111355) ||
          (113664 <= lookahead && lookahead <= 113770) ||
          (113776 <= lookahead && lookahead <= 113788) ||
          (113792 <= lookahead && lookahead <= 113800) ||
          (113808 <= lookahead && lookahead <= 113817) ||
          (119808 <= lookahead && lookahead <= 119892) ||
          (119894 <= lookahead && lookahead <= 119964) ||
          lookahead == 119966 ||
          lookahead == 119967 ||
          lookahead == 119970 ||
          lookahead == 119973 ||
          lookahead == 119974 ||
          (119977 <= lookahead && lookahead <= 119980) ||
          (119982 <= lookahead && lookahead <= 119993) ||
          lookahead == 119995 ||
          (119997 <= lookahead && lookahead <= 120003) ||
          (120005 <= lookahead && lookahead <= 120069) ||
          (120071 <= lookahead && lookahead <= 120074) ||
          (120077 <= lookahead && lookahead <= 120084) ||
          (120086 <= lookahead && lookahead <= 120092) ||
          (120094 <= lookahead && lookahead <= 120121) ||
          (120123 <= lookahead && lookahead <= 120126) ||
          (120128 <= lookahead && lookahead <= 120132) ||
          lookahead == 120134 ||
          (120138 <= lookahead && lookahead <= 120144) ||
          (120146 <= lookahead && lookahead <= 120485) ||
          (120488 <= lookahead && lookahead <= 120512) ||
          (120514 <= lookahead && lookahead <= 120538) ||
          (120540 <= lookahead && lookahead <= 120570) ||
          (120572 <= lookahead && lookahead <= 120596) ||
          (120598 <= lookahead && lookahead <= 120628) ||
          (120630 <= lookahead && lookahead <= 120654) ||
          (120656 <= lookahead && lookahead <= 120686) ||
          (120688 <= lookahead && lookahead <= 120712) ||
          (120714 <= lookahead && lookahead <= 120744) ||
          (120746 <= lookahead && lookahead <= 120770) ||
          (120772 <= lookahead && lookahead <= 120779) ||
          (123136 <= lookahead && lookahead <= 123180) ||
          (123191 <= lookahead && lookahead <= 123197) ||
          lookahead == 123214 ||
          (123584 <= lookahead && lookahead <= 123627) ||
          (124928 <= lookahead && lookahead <= 125124) ||
          (125184 <= lookahead && lookahead <= 125251) ||
          lookahead == 125259 ||
          (126464 <= lookahead && lookahead <= 126467) ||
          (126469 <= lookahead && lookahead <= 126495) ||
          lookahead == 126497 ||
          lookahead == 126498 ||
          lookahead == 126500 ||
          lookahead == 126503 ||
          (126505 <= lookahead && lookahead <= 126514) ||
          (126516 <= lookahead && lookahead <= 126519) ||
          lookahead == 126521 ||
          lookahead == 126523 ||
          lookahead == 126530 ||
          lookahead == 126535 ||
          lookahead == 126537 ||
          lookahead == 126539 ||
          (126541 <= lookahead && lookahead <= 126543) ||
          lookahead == 126545 ||
          lookahead == 126546 ||
          lookahead == 126548 ||
          lookahead == 126551 ||
          lookahead == 126553 ||
          lookahead == 126555 ||
          lookahead == 126557 ||
          lookahead == 126559 ||
          lookahead == 126561 ||
          lookahead == 126562 ||
          lookahead == 126564 ||
          (126567 <= lookahead && lookahead <= 126570) ||
          (126572 <= lookahead && lookahead <= 126578) ||
          (126580 <= lookahead && lookahead <= 126583) ||
          (126585 <= lookahead && lookahead <= 126588) ||
          lookahead == 126590 ||
          (126592 <= lookahead && lookahead <= 126601) ||
          (126603 <= lookahead && lookahead <= 126619) ||
          (126625 <= lookahead && lookahead <= 126627) ||
          (126629 <= lookahead && lookahead <= 126633) ||
          (126635 <= lookahead && lookahead <= 126651) ||
          (131072 <= lookahead && lookahead <= 173782) ||
          (173824 <= lookahead && lookahead <= 177972) ||
          (177984 <= lookahead && lookahead <= 178205) ||
          (178208 <= lookahead && lookahead <= 183969) ||
          (183984 <= lookahead && lookahead <= 191456) ||
          (194560 <= lookahead && lookahead <= 195101)) ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'A') ADVANCE(14);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 170 ||
          lookahead == 181 ||
          lookahead == 186 ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 705) ||
          (710 <= lookahead && lookahead <= 721) ||
          (736 <= lookahead && lookahead <= 740) ||
          lookahead == 748 ||
          lookahead == 750 ||
          (880 <= lookahead && lookahead <= 884) ||
          lookahead == 886 ||
          lookahead == 887 ||
          (890 <= lookahead && lookahead <= 893) ||
          lookahead == 895 ||
          lookahead == 902 ||
          (904 <= lookahead && lookahead <= 906) ||
          lookahead == 908 ||
          (910 <= lookahead && lookahead <= 929) ||
          (931 <= lookahead && lookahead <= 1013) ||
          (1015 <= lookahead && lookahead <= 1153) ||
          (1162 <= lookahead && lookahead <= 1327) ||
          (1329 <= lookahead && lookahead <= 1366) ||
          lookahead == 1369 ||
          (1376 <= lookahead && lookahead <= 1416) ||
          (1488 <= lookahead && lookahead <= 1514) ||
          (1519 <= lookahead && lookahead <= 1522) ||
          (1568 <= lookahead && lookahead <= 1610) ||
          lookahead == 1646 ||
          lookahead == 1647 ||
          (1649 <= lookahead && lookahead <= 1747) ||
          lookahead == 1749 ||
          lookahead == 1765 ||
          lookahead == 1766 ||
          lookahead == 1774 ||
          lookahead == 1775 ||
          (1786 <= lookahead && lookahead <= 1788) ||
          lookahead == 1791 ||
          lookahead == 1808 ||
          (1810 <= lookahead && lookahead <= 1839) ||
          (1869 <= lookahead && lookahead <= 1957) ||
          lookahead == 1969 ||
          (1994 <= lookahead && lookahead <= 2026) ||
          lookahead == 2036 ||
          lookahead == 2037 ||
          lookahead == 2042 ||
          (2048 <= lookahead && lookahead <= 2069) ||
          lookahead == 2074 ||
          lookahead == 2084 ||
          lookahead == 2088 ||
          (2112 <= lookahead && lookahead <= 2136) ||
          (2144 <= lookahead && lookahead <= 2154) ||
          (2208 <= lookahead && lookahead <= 2228) ||
          (2230 <= lookahead && lookahead <= 2237) ||
          (2308 <= lookahead && lookahead <= 2361) ||
          lookahead == 2365 ||
          lookahead == 2384 ||
          (2392 <= lookahead && lookahead <= 2401) ||
          (2417 <= lookahead && lookahead <= 2432) ||
          (2437 <= lookahead && lookahead <= 2444) ||
          lookahead == 2447 ||
          lookahead == 2448 ||
          (2451 <= lookahead && lookahead <= 2472) ||
          (2474 <= lookahead && lookahead <= 2480) ||
          lookahead == 2482 ||
          (2486 <= lookahead && lookahead <= 2489) ||
          lookahead == 2493 ||
          lookahead == 2510 ||
          lookahead == 2524 ||
          lookahead == 2525 ||
          (2527 <= lookahead && lookahead <= 2529) ||
          lookahead == 2544 ||
          lookahead == 2545 ||
          lookahead == 2556 ||
          (2565 <= lookahead && lookahead <= 2570) ||
          lookahead == 2575 ||
          lookahead == 2576 ||
          (2579 <= lookahead && lookahead <= 2600) ||
          (2602 <= lookahead && lookahead <= 2608) ||
          lookahead == 2610 ||
          lookahead == 2611 ||
          lookahead == 2613 ||
          lookahead == 2614 ||
          lookahead == 2616 ||
          lookahead == 2617 ||
          (2649 <= lookahead && lookahead <= 2652) ||
          lookahead == 2654 ||
          (2674 <= lookahead && lookahead <= 2676) ||
          (2693 <= lookahead && lookahead <= 2701) ||
          (2703 <= lookahead && lookahead <= 2705) ||
          (2707 <= lookahead && lookahead <= 2728) ||
          (2730 <= lookahead && lookahead <= 2736) ||
          lookahead == 2738 ||
          lookahead == 2739 ||
          (2741 <= lookahead && lookahead <= 2745) ||
          lookahead == 2749 ||
          lookahead == 2768 ||
          lookahead == 2784 ||
          lookahead == 2785 ||
          lookahead == 2809 ||
          (2821 <= lookahead && lookahead <= 2828) ||
          lookahead == 2831 ||
          lookahead == 2832 ||
          (2835 <= lookahead && lookahead <= 2856) ||
          (2858 <= lookahead && lookahead <= 2864) ||
          lookahead == 2866 ||
          lookahead == 2867 ||
          (2869 <= lookahead && lookahead <= 2873) ||
          lookahead == 2877 ||
          lookahead == 2908 ||
          lookahead == 2909 ||
          (2911 <= lookahead && lookahead <= 2913) ||
          lookahead == 2929 ||
          lookahead == 2947 ||
          (2949 <= lookahead && lookahead <= 2954) ||
          (2958 <= lookahead && lookahead <= 2960) ||
          (2962 <= lookahead && lookahead <= 2965) ||
          lookahead == 2969 ||
          lookahead == 2970 ||
          lookahead == 2972 ||
          lookahead == 2974 ||
          lookahead == 2975 ||
          lookahead == 2979 ||
          lookahead == 2980 ||
          (2984 <= lookahead && lookahead <= 2986) ||
          (2990 <= lookahead && lookahead <= 3001) ||
          lookahead == 3024 ||
          (3077 <= lookahead && lookahead <= 3084) ||
          (3086 <= lookahead && lookahead <= 3088) ||
          (3090 <= lookahead && lookahead <= 3112) ||
          (3114 <= lookahead && lookahead <= 3129) ||
          lookahead == 3133 ||
          (3160 <= lookahead && lookahead <= 3162) ||
          lookahead == 3168 ||
          lookahead == 3169 ||
          lookahead == 3200 ||
          (3205 <= lookahead && lookahead <= 3212) ||
          (3214 <= lookahead && lookahead <= 3216) ||
          (3218 <= lookahead && lookahead <= 3240) ||
          (3242 <= lookahead && lookahead <= 3251) ||
          (3253 <= lookahead && lookahead <= 3257) ||
          lookahead == 3261 ||
          lookahead == 3294 ||
          lookahead == 3296 ||
          lookahead == 3297 ||
          lookahead == 3313 ||
          lookahead == 3314 ||
          (3333 <= lookahead && lookahead <= 3340) ||
          (3342 <= lookahead && lookahead <= 3344) ||
          (3346 <= lookahead && lookahead <= 3386) ||
          lookahead == 3389 ||
          lookahead == 3406 ||
          (3412 <= lookahead && lookahead <= 3414) ||
          (3423 <= lookahead && lookahead <= 3425) ||
          (3450 <= lookahead && lookahead <= 3455) ||
          (3461 <= lookahead && lookahead <= 3478) ||
          (3482 <= lookahead && lookahead <= 3505) ||
          (3507 <= lookahead && lookahead <= 3515) ||
          lookahead == 3517 ||
          (3520 <= lookahead && lookahead <= 3526) ||
          (3585 <= lookahead && lookahead <= 3632) ||
          lookahead == 3634 ||
          lookahead == 3635 ||
          (3648 <= lookahead && lookahead <= 3654) ||
          lookahead == 3713 ||
          lookahead == 3714 ||
          lookahead == 3716 ||
          (3718 <= lookahead && lookahead <= 3722) ||
          (3724 <= lookahead && lookahead <= 3747) ||
          lookahead == 3749 ||
          (3751 <= lookahead && lookahead <= 3760) ||
          lookahead == 3762 ||
          lookahead == 3763 ||
          lookahead == 3773 ||
          (3776 <= lookahead && lookahead <= 3780) ||
          lookahead == 3782 ||
          (3804 <= lookahead && lookahead <= 3807) ||
          lookahead == 3840 ||
          (3904 <= lookahead && lookahead <= 3911) ||
          (3913 <= lookahead && lookahead <= 3948) ||
          (3976 <= lookahead && lookahead <= 3980) ||
          (4096 <= lookahead && lookahead <= 4138) ||
          lookahead == 4159 ||
          (4176 <= lookahead && lookahead <= 4181) ||
          (4186 <= lookahead && lookahead <= 4189) ||
          lookahead == 4193 ||
          lookahead == 4197 ||
          lookahead == 4198 ||
          (4206 <= lookahead && lookahead <= 4208) ||
          (4213 <= lookahead && lookahead <= 4225) ||
          lookahead == 4238 ||
          (4256 <= lookahead && lookahead <= 4293) ||
          lookahead == 4295 ||
          lookahead == 4301 ||
          (4304 <= lookahead && lookahead <= 4346) ||
          (4348 <= lookahead && lookahead <= 4680) ||
          (4682 <= lookahead && lookahead <= 4685) ||
          (4688 <= lookahead && lookahead <= 4694) ||
          lookahead == 4696 ||
          (4698 <= lookahead && lookahead <= 4701) ||
          (4704 <= lookahead && lookahead <= 4744) ||
          (4746 <= lookahead && lookahead <= 4749) ||
          (4752 <= lookahead && lookahead <= 4784) ||
          (4786 <= lookahead && lookahead <= 4789) ||
          (4792 <= lookahead && lookahead <= 4798) ||
          lookahead == 4800 ||
          (4802 <= lookahead && lookahead <= 4805) ||
          (4808 <= lookahead && lookahead <= 4822) ||
          (4824 <= lookahead && lookahead <= 4880) ||
          (4882 <= lookahead && lookahead <= 4885) ||
          (4888 <= lookahead && lookahead <= 4954) ||
          (4992 <= lookahead && lookahead <= 5007) ||
          (5024 <= lookahead && lookahead <= 5109) ||
          (5112 <= lookahead && lookahead <= 5117) ||
          (5121 <= lookahead && lookahead <= 5740) ||
          (5743 <= lookahead && lookahead <= 5759) ||
          (5761 <= lookahead && lookahead <= 5786) ||
          (5792 <= lookahead && lookahead <= 5866) ||
          (5873 <= lookahead && lookahead <= 5880) ||
          (5888 <= lookahead && lookahead <= 5900) ||
          (5902 <= lookahead && lookahead <= 5905) ||
          (5920 <= lookahead && lookahead <= 5937) ||
          (5952 <= lookahead && lookahead <= 5969) ||
          (5984 <= lookahead && lookahead <= 5996) ||
          (5998 <= lookahead && lookahead <= 6000) ||
          (6016 <= lookahead && lookahead <= 6067) ||
          lookahead == 6103 ||
          lookahead == 6108 ||
          (6176 <= lookahead && lookahead <= 6264) ||
          (6272 <= lookahead && lookahead <= 6276) ||
          (6279 <= lookahead && lookahead <= 6312) ||
          lookahead == 6314 ||
          (6320 <= lookahead && lookahead <= 6389) ||
          (6400 <= lookahead && lookahead <= 6430) ||
          (6480 <= lookahead && lookahead <= 6509) ||
          (6512 <= lookahead && lookahead <= 6516) ||
          (6528 <= lookahead && lookahead <= 6571) ||
          (6576 <= lookahead && lookahead <= 6601) ||
          (6656 <= lookahead && lookahead <= 6678) ||
          (6688 <= lookahead && lookahead <= 6740) ||
          lookahead == 6823 ||
          (6917 <= lookahead && lookahead <= 6963) ||
          (6981 <= lookahead && lookahead <= 6987) ||
          (7043 <= lookahead && lookahead <= 7072) ||
          lookahead == 7086 ||
          lookahead == 7087 ||
          (7098 <= lookahead && lookahead <= 7141) ||
          (7168 <= lookahead && lookahead <= 7203) ||
          (7245 <= lookahead && lookahead <= 7247) ||
          (7258 <= lookahead && lookahead <= 7293) ||
          (7296 <= lookahead && lookahead <= 7304) ||
          (7312 <= lookahead && lookahead <= 7354) ||
          (7357 <= lookahead && lookahead <= 7359) ||
          (7401 <= lookahead && lookahead <= 7404) ||
          (7406 <= lookahead && lookahead <= 7411) ||
          lookahead == 7413 ||
          lookahead == 7414 ||
          lookahead == 7418 ||
          (7424 <= lookahead && lookahead <= 7615) ||
          (7680 <= lookahead && lookahead <= 7957) ||
          (7960 <= lookahead && lookahead <= 7965) ||
          (7968 <= lookahead && lookahead <= 8005) ||
          (8008 <= lookahead && lookahead <= 8013) ||
          (8016 <= lookahead && lookahead <= 8023) ||
          lookahead == 8025 ||
          lookahead == 8027 ||
          lookahead == 8029 ||
          (8031 <= lookahead && lookahead <= 8061) ||
          (8064 <= lookahead && lookahead <= 8116) ||
          (8118 <= lookahead && lookahead <= 8124) ||
          lookahead == 8126 ||
          (8130 <= lookahead && lookahead <= 8132) ||
          (8134 <= lookahead && lookahead <= 8140) ||
          (8144 <= lookahead && lookahead <= 8147) ||
          (8150 <= lookahead && lookahead <= 8155) ||
          (8160 <= lookahead && lookahead <= 8172) ||
          (8178 <= lookahead && lookahead <= 8180) ||
          (8182 <= lookahead && lookahead <= 8188) ||
          lookahead == 8305 ||
          lookahead == 8319 ||
          (8336 <= lookahead && lookahead <= 8348) ||
          lookahead == 8450 ||
          lookahead == 8455 ||
          (8458 <= lookahead && lookahead <= 8467) ||
          lookahead == 8469 ||
          (8473 <= lookahead && lookahead <= 8477) ||
          lookahead == 8484 ||
          lookahead == 8486 ||
          lookahead == 8488 ||
          (8490 <= lookahead && lookahead <= 8493) ||
          (8495 <= lookahead && lookahead <= 8505) ||
          (8508 <= lookahead && lookahead <= 8511) ||
          (8517 <= lookahead && lookahead <= 8521) ||
          lookahead == 8526 ||
          lookahead == 8579 ||
          lookahead == 8580 ||
          (11264 <= lookahead && lookahead <= 11310) ||
          (11312 <= lookahead && lookahead <= 11358) ||
          (11360 <= lookahead && lookahead <= 11492) ||
          (11499 <= lookahead && lookahead <= 11502) ||
          lookahead == 11506 ||
          lookahead == 11507 ||
          (11520 <= lookahead && lookahead <= 11557) ||
          lookahead == 11559 ||
          lookahead == 11565 ||
          (11568 <= lookahead && lookahead <= 11623) ||
          lookahead == 11631 ||
          (11648 <= lookahead && lookahead <= 11670) ||
          (11680 <= lookahead && lookahead <= 11686) ||
          (11688 <= lookahead && lookahead <= 11694) ||
          (11696 <= lookahead && lookahead <= 11702) ||
          (11704 <= lookahead && lookahead <= 11710) ||
          (11712 <= lookahead && lookahead <= 11718) ||
          (11720 <= lookahead && lookahead <= 11726) ||
          (11728 <= lookahead && lookahead <= 11734) ||
          (11736 <= lookahead && lookahead <= 11742) ||
          lookahead == 11823 ||
          lookahead == 12293 ||
          lookahead == 12294 ||
          (12337 <= lookahead && lookahead <= 12341) ||
          lookahead == 12347 ||
          lookahead == 12348 ||
          (12353 <= lookahead && lookahead <= 12438) ||
          (12445 <= lookahead && lookahead <= 12447) ||
          (12449 <= lookahead && lookahead <= 12538) ||
          (12540 <= lookahead && lookahead <= 12543) ||
          (12549 <= lookahead && lookahead <= 12591) ||
          (12593 <= lookahead && lookahead <= 12686) ||
          (12704 <= lookahead && lookahead <= 12730) ||
          (12784 <= lookahead && lookahead <= 12799) ||
          (13312 <= lookahead && lookahead <= 19893) ||
          (19968 <= lookahead && lookahead <= 40943) ||
          (40960 <= lookahead && lookahead <= 42124) ||
          (42192 <= lookahead && lookahead <= 42237) ||
          (42240 <= lookahead && lookahead <= 42508) ||
          (42512 <= lookahead && lookahead <= 42527) ||
          lookahead == 42538 ||
          lookahead == 42539 ||
          (42560 <= lookahead && lookahead <= 42606) ||
          (42623 <= lookahead && lookahead <= 42653) ||
          (42656 <= lookahead && lookahead <= 42725) ||
          (42775 <= lookahead && lookahead <= 42783) ||
          (42786 <= lookahead && lookahead <= 42888) ||
          (42891 <= lookahead && lookahead <= 42943) ||
          (42946 <= lookahead && lookahead <= 42950) ||
          (42999 <= lookahead && lookahead <= 43009) ||
          (43011 <= lookahead && lookahead <= 43013) ||
          (43015 <= lookahead && lookahead <= 43018) ||
          (43020 <= lookahead && lookahead <= 43042) ||
          (43072 <= lookahead && lookahead <= 43123) ||
          (43138 <= lookahead && lookahead <= 43187) ||
          (43250 <= lookahead && lookahead <= 43255) ||
          lookahead == 43259 ||
          lookahead == 43261 ||
          lookahead == 43262 ||
          (43274 <= lookahead && lookahead <= 43301) ||
          (43312 <= lookahead && lookahead <= 43334) ||
          (43360 <= lookahead && lookahead <= 43388) ||
          (43396 <= lookahead && lookahead <= 43442) ||
          lookahead == 43471 ||
          (43488 <= lookahead && lookahead <= 43492) ||
          (43494 <= lookahead && lookahead <= 43503) ||
          (43514 <= lookahead && lookahead <= 43518) ||
          (43520 <= lookahead && lookahead <= 43560) ||
          (43584 <= lookahead && lookahead <= 43586) ||
          (43588 <= lookahead && lookahead <= 43595) ||
          (43616 <= lookahead && lookahead <= 43638) ||
          lookahead == 43642 ||
          (43646 <= lookahead && lookahead <= 43695) ||
          lookahead == 43697 ||
          lookahead == 43701 ||
          lookahead == 43702 ||
          (43705 <= lookahead && lookahead <= 43709) ||
          lookahead == 43712 ||
          lookahead == 43714 ||
          (43739 <= lookahead && lookahead <= 43741) ||
          (43744 <= lookahead && lookahead <= 43754) ||
          (43762 <= lookahead && lookahead <= 43764) ||
          (43777 <= lookahead && lookahead <= 43782) ||
          (43785 <= lookahead && lookahead <= 43790) ||
          (43793 <= lookahead && lookahead <= 43798) ||
          (43808 <= lookahead && lookahead <= 43814) ||
          (43816 <= lookahead && lookahead <= 43822) ||
          (43824 <= lookahead && lookahead <= 43866) ||
          (43868 <= lookahead && lookahead <= 43879) ||
          (43888 <= lookahead && lookahead <= 44002) ||
          (44032 <= lookahead && lookahead <= 55203) ||
          (55216 <= lookahead && lookahead <= 55238) ||
          (55243 <= lookahead && lookahead <= 55291) ||
          (63744 <= lookahead && lookahead <= 64109) ||
          (64112 <= lookahead && lookahead <= 64217) ||
          (64256 <= lookahead && lookahead <= 64262) ||
          (64275 <= lookahead && lookahead <= 64279) ||
          lookahead == 64285 ||
          (64287 <= lookahead && lookahead <= 64296) ||
          (64298 <= lookahead && lookahead <= 64310) ||
          (64312 <= lookahead && lookahead <= 64316) ||
          lookahead == 64318 ||
          lookahead == 64320 ||
          lookahead == 64321 ||
          lookahead == 64323 ||
          lookahead == 64324 ||
          (64326 <= lookahead && lookahead <= 64433) ||
          (64467 <= lookahead && lookahead <= 64829) ||
          (64848 <= lookahead && lookahead <= 64911) ||
          (64914 <= lookahead && lookahead <= 64967) ||
          (65008 <= lookahead && lookahead <= 65019) ||
          (65136 <= lookahead && lookahead <= 65140) ||
          (65142 <= lookahead && lookahead <= 65276) ||
          (65313 <= lookahead && lookahead <= 65338) ||
          (65345 <= lookahead && lookahead <= 65370) ||
          (65382 <= lookahead && lookahead <= 65470) ||
          (65474 <= lookahead && lookahead <= 65479) ||
          (65482 <= lookahead && lookahead <= 65487) ||
          (65490 <= lookahead && lookahead <= 65495) ||
          (65498 <= lookahead && lookahead <= 65500) ||
          (65536 <= lookahead && lookahead <= 65547) ||
          (65549 <= lookahead && lookahead <= 65574) ||
          (65576 <= lookahead && lookahead <= 65594) ||
          lookahead == 65596 ||
          lookahead == 65597 ||
          (65599 <= lookahead && lookahead <= 65613) ||
          (65616 <= lookahead && lookahead <= 65629) ||
          (65664 <= lookahead && lookahead <= 65786) ||
          (66176 <= lookahead && lookahead <= 66204) ||
          (66208 <= lookahead && lookahead <= 66256) ||
          (66304 <= lookahead && lookahead <= 66335) ||
          (66349 <= lookahead && lookahead <= 66368) ||
          (66370 <= lookahead && lookahead <= 66377) ||
          (66384 <= lookahead && lookahead <= 66421) ||
          (66432 <= lookahead && lookahead <= 66461) ||
          (66464 <= lookahead && lookahead <= 66499) ||
          (66504 <= lookahead && lookahead <= 66511) ||
          (66560 <= lookahead && lookahead <= 66717) ||
          (66736 <= lookahead && lookahead <= 66771) ||
          (66776 <= lookahead && lookahead <= 66811) ||
          (66816 <= lookahead && lookahead <= 66855) ||
          (66864 <= lookahead && lookahead <= 66915) ||
          (67072 <= lookahead && lookahead <= 67382) ||
          (67392 <= lookahead && lookahead <= 67413) ||
          (67424 <= lookahead && lookahead <= 67431) ||
          (67584 <= lookahead && lookahead <= 67589) ||
          lookahead == 67592 ||
          (67594 <= lookahead && lookahead <= 67637) ||
          lookahead == 67639 ||
          lookahead == 67640 ||
          lookahead == 67644 ||
          (67647 <= lookahead && lookahead <= 67669) ||
          (67680 <= lookahead && lookahead <= 67702) ||
          (67712 <= lookahead && lookahead <= 67742) ||
          (67808 <= lookahead && lookahead <= 67826) ||
          lookahead == 67828 ||
          lookahead == 67829 ||
          (67840 <= lookahead && lookahead <= 67861) ||
          (67872 <= lookahead && lookahead <= 67897) ||
          (67968 <= lookahead && lookahead <= 68023) ||
          lookahead == 68030 ||
          lookahead == 68031 ||
          lookahead == 68096 ||
          (68112 <= lookahead && lookahead <= 68115) ||
          (68117 <= lookahead && lookahead <= 68119) ||
          (68121 <= lookahead && lookahead <= 68149) ||
          (68192 <= lookahead && lookahead <= 68220) ||
          (68224 <= lookahead && lookahead <= 68252) ||
          (68288 <= lookahead && lookahead <= 68295) ||
          (68297 <= lookahead && lookahead <= 68324) ||
          (68352 <= lookahead && lookahead <= 68405) ||
          (68416 <= lookahead && lookahead <= 68437) ||
          (68448 <= lookahead && lookahead <= 68466) ||
          (68480 <= lookahead && lookahead <= 68497) ||
          (68608 <= lookahead && lookahead <= 68680) ||
          (68736 <= lookahead && lookahead <= 68786) ||
          (68800 <= lookahead && lookahead <= 68850) ||
          (68864 <= lookahead && lookahead <= 68899) ||
          (69376 <= lookahead && lookahead <= 69404) ||
          lookahead == 69415 ||
          (69424 <= lookahead && lookahead <= 69445) ||
          (69600 <= lookahead && lookahead <= 69622) ||
          (69635 <= lookahead && lookahead <= 69687) ||
          (69763 <= lookahead && lookahead <= 69807) ||
          (69840 <= lookahead && lookahead <= 69864) ||
          (69891 <= lookahead && lookahead <= 69926) ||
          lookahead == 69956 ||
          (69968 <= lookahead && lookahead <= 70002) ||
          lookahead == 70006 ||
          (70019 <= lookahead && lookahead <= 70066) ||
          (70081 <= lookahead && lookahead <= 70084) ||
          lookahead == 70106 ||
          lookahead == 70108 ||
          (70144 <= lookahead && lookahead <= 70161) ||
          (70163 <= lookahead && lookahead <= 70187) ||
          (70272 <= lookahead && lookahead <= 70278) ||
          lookahead == 70280 ||
          (70282 <= lookahead && lookahead <= 70285) ||
          (70287 <= lookahead && lookahead <= 70301) ||
          (70303 <= lookahead && lookahead <= 70312) ||
          (70320 <= lookahead && lookahead <= 70366) ||
          (70405 <= lookahead && lookahead <= 70412) ||
          lookahead == 70415 ||
          lookahead == 70416 ||
          (70419 <= lookahead && lookahead <= 70440) ||
          (70442 <= lookahead && lookahead <= 70448) ||
          lookahead == 70450 ||
          lookahead == 70451 ||
          (70453 <= lookahead && lookahead <= 70457) ||
          lookahead == 70461 ||
          lookahead == 70480 ||
          (70493 <= lookahead && lookahead <= 70497) ||
          (70656 <= lookahead && lookahead <= 70708) ||
          (70727 <= lookahead && lookahead <= 70730) ||
          lookahead == 70751 ||
          (70784 <= lookahead && lookahead <= 70831) ||
          lookahead == 70852 ||
          lookahead == 70853 ||
          lookahead == 70855 ||
          (71040 <= lookahead && lookahead <= 71086) ||
          (71128 <= lookahead && lookahead <= 71131) ||
          (71168 <= lookahead && lookahead <= 71215) ||
          lookahead == 71236 ||
          (71296 <= lookahead && lookahead <= 71338) ||
          lookahead == 71352 ||
          (71424 <= lookahead && lookahead <= 71450) ||
          (71680 <= lookahead && lookahead <= 71723) ||
          (71840 <= lookahead && lookahead <= 71903) ||
          lookahead == 71935 ||
          (72096 <= lookahead && lookahead <= 72103) ||
          (72106 <= lookahead && lookahead <= 72144) ||
          lookahead == 72161 ||
          lookahead == 72163 ||
          lookahead == 72192 ||
          (72203 <= lookahead && lookahead <= 72242) ||
          lookahead == 72250 ||
          lookahead == 72272 ||
          (72284 <= lookahead && lookahead <= 72329) ||
          lookahead == 72349 ||
          (72384 <= lookahead && lookahead <= 72440) ||
          (72704 <= lookahead && lookahead <= 72712) ||
          (72714 <= lookahead && lookahead <= 72750) ||
          lookahead == 72768 ||
          (72818 <= lookahead && lookahead <= 72847) ||
          (72960 <= lookahead && lookahead <= 72966) ||
          lookahead == 72968 ||
          lookahead == 72969 ||
          (72971 <= lookahead && lookahead <= 73008) ||
          lookahead == 73030 ||
          (73056 <= lookahead && lookahead <= 73061) ||
          lookahead == 73063 ||
          lookahead == 73064 ||
          (73066 <= lookahead && lookahead <= 73097) ||
          lookahead == 73112 ||
          (73440 <= lookahead && lookahead <= 73458) ||
          (73728 <= lookahead && lookahead <= 74649) ||
          (74880 <= lookahead && lookahead <= 75075) ||
          (77824 <= lookahead && lookahead <= 78894) ||
          (82944 <= lookahead && lookahead <= 83526) ||
          (92160 <= lookahead && lookahead <= 92728) ||
          (92736 <= lookahead && lookahead <= 92766) ||
          (92880 <= lookahead && lookahead <= 92909) ||
          (92928 <= lookahead && lookahead <= 92975) ||
          (92992 <= lookahead && lookahead <= 92995) ||
          (93027 <= lookahead && lookahead <= 93047) ||
          (93053 <= lookahead && lookahead <= 93071) ||
          (93760 <= lookahead && lookahead <= 93823) ||
          (93952 <= lookahead && lookahead <= 94026) ||
          lookahead == 94032 ||
          (94099 <= lookahead && lookahead <= 94111) ||
          lookahead == 94176 ||
          lookahead == 94177 ||
          lookahead == 94179 ||
          (94208 <= lookahead && lookahead <= 100343) ||
          (100352 <= lookahead && lookahead <= 101106) ||
          (110592 <= lookahead && lookahead <= 110878) ||
          (110928 <= lookahead && lookahead <= 110930) ||
          (110948 <= lookahead && lookahead <= 110951) ||
          (110960 <= lookahead && lookahead <= 111355) ||
          (113664 <= lookahead && lookahead <= 113770) ||
          (113776 <= lookahead && lookahead <= 113788) ||
          (113792 <= lookahead && lookahead <= 113800) ||
          (113808 <= lookahead && lookahead <= 113817) ||
          (119808 <= lookahead && lookahead <= 119892) ||
          (119894 <= lookahead && lookahead <= 119964) ||
          lookahead == 119966 ||
          lookahead == 119967 ||
          lookahead == 119970 ||
          lookahead == 119973 ||
          lookahead == 119974 ||
          (119977 <= lookahead && lookahead <= 119980) ||
          (119982 <= lookahead && lookahead <= 119993) ||
          lookahead == 119995 ||
          (119997 <= lookahead && lookahead <= 120003) ||
          (120005 <= lookahead && lookahead <= 120069) ||
          (120071 <= lookahead && lookahead <= 120074) ||
          (120077 <= lookahead && lookahead <= 120084) ||
          (120086 <= lookahead && lookahead <= 120092) ||
          (120094 <= lookahead && lookahead <= 120121) ||
          (120123 <= lookahead && lookahead <= 120126) ||
          (120128 <= lookahead && lookahead <= 120132) ||
          lookahead == 120134 ||
          (120138 <= lookahead && lookahead <= 120144) ||
          (120146 <= lookahead && lookahead <= 120485) ||
          (120488 <= lookahead && lookahead <= 120512) ||
          (120514 <= lookahead && lookahead <= 120538) ||
          (120540 <= lookahead && lookahead <= 120570) ||
          (120572 <= lookahead && lookahead <= 120596) ||
          (120598 <= lookahead && lookahead <= 120628) ||
          (120630 <= lookahead && lookahead <= 120654) ||
          (120656 <= lookahead && lookahead <= 120686) ||
          (120688 <= lookahead && lookahead <= 120712) ||
          (120714 <= lookahead && lookahead <= 120744) ||
          (120746 <= lookahead && lookahead <= 120770) ||
          (120772 <= lookahead && lookahead <= 120779) ||
          (123136 <= lookahead && lookahead <= 123180) ||
          (123191 <= lookahead && lookahead <= 123197) ||
          lookahead == 123214 ||
          (123584 <= lookahead && lookahead <= 123627) ||
          (124928 <= lookahead && lookahead <= 125124) ||
          (125184 <= lookahead && lookahead <= 125251) ||
          lookahead == 125259 ||
          (126464 <= lookahead && lookahead <= 126467) ||
          (126469 <= lookahead && lookahead <= 126495) ||
          lookahead == 126497 ||
          lookahead == 126498 ||
          lookahead == 126500 ||
          lookahead == 126503 ||
          (126505 <= lookahead && lookahead <= 126514) ||
          (126516 <= lookahead && lookahead <= 126519) ||
          lookahead == 126521 ||
          lookahead == 126523 ||
          lookahead == 126530 ||
          lookahead == 126535 ||
          lookahead == 126537 ||
          lookahead == 126539 ||
          (126541 <= lookahead && lookahead <= 126543) ||
          lookahead == 126545 ||
          lookahead == 126546 ||
          lookahead == 126548 ||
          lookahead == 126551 ||
          lookahead == 126553 ||
          lookahead == 126555 ||
          lookahead == 126557 ||
          lookahead == 126559 ||
          lookahead == 126561 ||
          lookahead == 126562 ||
          lookahead == 126564 ||
          (126567 <= lookahead && lookahead <= 126570) ||
          (126572 <= lookahead && lookahead <= 126578) ||
          (126580 <= lookahead && lookahead <= 126583) ||
          (126585 <= lookahead && lookahead <= 126588) ||
          lookahead == 126590 ||
          (126592 <= lookahead && lookahead <= 126601) ||
          (126603 <= lookahead && lookahead <= 126619) ||
          (126625 <= lookahead && lookahead <= 126627) ||
          (126629 <= lookahead && lookahead <= 126633) ||
          (126635 <= lookahead && lookahead <= 126651) ||
          (131072 <= lookahead && lookahead <= 173782) ||
          (173824 <= lookahead && lookahead <= 177972) ||
          (177984 <= lookahead && lookahead <= 178205) ||
          (178208 <= lookahead && lookahead <= 183969) ||
          (183984 <= lookahead && lookahead <= 191456) ||
          (194560 <= lookahead && lookahead <= 195101)) ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 170 ||
          lookahead == 181 ||
          lookahead == 186 ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 705) ||
          (710 <= lookahead && lookahead <= 721) ||
          (736 <= lookahead && lookahead <= 740) ||
          lookahead == 748 ||
          lookahead == 750 ||
          (880 <= lookahead && lookahead <= 884) ||
          lookahead == 886 ||
          lookahead == 887 ||
          (890 <= lookahead && lookahead <= 893) ||
          lookahead == 895 ||
          lookahead == 902 ||
          (904 <= lookahead && lookahead <= 906) ||
          lookahead == 908 ||
          (910 <= lookahead && lookahead <= 929) ||
          (931 <= lookahead && lookahead <= 1013) ||
          (1015 <= lookahead && lookahead <= 1153) ||
          (1162 <= lookahead && lookahead <= 1327) ||
          (1329 <= lookahead && lookahead <= 1366) ||
          lookahead == 1369 ||
          (1376 <= lookahead && lookahead <= 1416) ||
          (1488 <= lookahead && lookahead <= 1514) ||
          (1519 <= lookahead && lookahead <= 1522) ||
          (1568 <= lookahead && lookahead <= 1610) ||
          lookahead == 1646 ||
          lookahead == 1647 ||
          (1649 <= lookahead && lookahead <= 1747) ||
          lookahead == 1749 ||
          lookahead == 1765 ||
          lookahead == 1766 ||
          lookahead == 1774 ||
          lookahead == 1775 ||
          (1786 <= lookahead && lookahead <= 1788) ||
          lookahead == 1791 ||
          lookahead == 1808 ||
          (1810 <= lookahead && lookahead <= 1839) ||
          (1869 <= lookahead && lookahead <= 1957) ||
          lookahead == 1969 ||
          (1994 <= lookahead && lookahead <= 2026) ||
          lookahead == 2036 ||
          lookahead == 2037 ||
          lookahead == 2042 ||
          (2048 <= lookahead && lookahead <= 2069) ||
          lookahead == 2074 ||
          lookahead == 2084 ||
          lookahead == 2088 ||
          (2112 <= lookahead && lookahead <= 2136) ||
          (2144 <= lookahead && lookahead <= 2154) ||
          (2208 <= lookahead && lookahead <= 2228) ||
          (2230 <= lookahead && lookahead <= 2237) ||
          (2308 <= lookahead && lookahead <= 2361) ||
          lookahead == 2365 ||
          lookahead == 2384 ||
          (2392 <= lookahead && lookahead <= 2401) ||
          (2417 <= lookahead && lookahead <= 2432) ||
          (2437 <= lookahead && lookahead <= 2444) ||
          lookahead == 2447 ||
          lookahead == 2448 ||
          (2451 <= lookahead && lookahead <= 2472) ||
          (2474 <= lookahead && lookahead <= 2480) ||
          lookahead == 2482 ||
          (2486 <= lookahead && lookahead <= 2489) ||
          lookahead == 2493 ||
          lookahead == 2510 ||
          lookahead == 2524 ||
          lookahead == 2525 ||
          (2527 <= lookahead && lookahead <= 2529) ||
          lookahead == 2544 ||
          lookahead == 2545 ||
          lookahead == 2556 ||
          (2565 <= lookahead && lookahead <= 2570) ||
          lookahead == 2575 ||
          lookahead == 2576 ||
          (2579 <= lookahead && lookahead <= 2600) ||
          (2602 <= lookahead && lookahead <= 2608) ||
          lookahead == 2610 ||
          lookahead == 2611 ||
          lookahead == 2613 ||
          lookahead == 2614 ||
          lookahead == 2616 ||
          lookahead == 2617 ||
          (2649 <= lookahead && lookahead <= 2652) ||
          lookahead == 2654 ||
          (2674 <= lookahead && lookahead <= 2676) ||
          (2693 <= lookahead && lookahead <= 2701) ||
          (2703 <= lookahead && lookahead <= 2705) ||
          (2707 <= lookahead && lookahead <= 2728) ||
          (2730 <= lookahead && lookahead <= 2736) ||
          lookahead == 2738 ||
          lookahead == 2739 ||
          (2741 <= lookahead && lookahead <= 2745) ||
          lookahead == 2749 ||
          lookahead == 2768 ||
          lookahead == 2784 ||
          lookahead == 2785 ||
          lookahead == 2809 ||
          (2821 <= lookahead && lookahead <= 2828) ||
          lookahead == 2831 ||
          lookahead == 2832 ||
          (2835 <= lookahead && lookahead <= 2856) ||
          (2858 <= lookahead && lookahead <= 2864) ||
          lookahead == 2866 ||
          lookahead == 2867 ||
          (2869 <= lookahead && lookahead <= 2873) ||
          lookahead == 2877 ||
          lookahead == 2908 ||
          lookahead == 2909 ||
          (2911 <= lookahead && lookahead <= 2913) ||
          lookahead == 2929 ||
          lookahead == 2947 ||
          (2949 <= lookahead && lookahead <= 2954) ||
          (2958 <= lookahead && lookahead <= 2960) ||
          (2962 <= lookahead && lookahead <= 2965) ||
          lookahead == 2969 ||
          lookahead == 2970 ||
          lookahead == 2972 ||
          lookahead == 2974 ||
          lookahead == 2975 ||
          lookahead == 2979 ||
          lookahead == 2980 ||
          (2984 <= lookahead && lookahead <= 2986) ||
          (2990 <= lookahead && lookahead <= 3001) ||
          lookahead == 3024 ||
          (3077 <= lookahead && lookahead <= 3084) ||
          (3086 <= lookahead && lookahead <= 3088) ||
          (3090 <= lookahead && lookahead <= 3112) ||
          (3114 <= lookahead && lookahead <= 3129) ||
          lookahead == 3133 ||
          (3160 <= lookahead && lookahead <= 3162) ||
          lookahead == 3168 ||
          lookahead == 3169 ||
          lookahead == 3200 ||
          (3205 <= lookahead && lookahead <= 3212) ||
          (3214 <= lookahead && lookahead <= 3216) ||
          (3218 <= lookahead && lookahead <= 3240) ||
          (3242 <= lookahead && lookahead <= 3251) ||
          (3253 <= lookahead && lookahead <= 3257) ||
          lookahead == 3261 ||
          lookahead == 3294 ||
          lookahead == 3296 ||
          lookahead == 3297 ||
          lookahead == 3313 ||
          lookahead == 3314 ||
          (3333 <= lookahead && lookahead <= 3340) ||
          (3342 <= lookahead && lookahead <= 3344) ||
          (3346 <= lookahead && lookahead <= 3386) ||
          lookahead == 3389 ||
          lookahead == 3406 ||
          (3412 <= lookahead && lookahead <= 3414) ||
          (3423 <= lookahead && lookahead <= 3425) ||
          (3450 <= lookahead && lookahead <= 3455) ||
          (3461 <= lookahead && lookahead <= 3478) ||
          (3482 <= lookahead && lookahead <= 3505) ||
          (3507 <= lookahead && lookahead <= 3515) ||
          lookahead == 3517 ||
          (3520 <= lookahead && lookahead <= 3526) ||
          (3585 <= lookahead && lookahead <= 3632) ||
          lookahead == 3634 ||
          lookahead == 3635 ||
          (3648 <= lookahead && lookahead <= 3654) ||
          lookahead == 3713 ||
          lookahead == 3714 ||
          lookahead == 3716 ||
          (3718 <= lookahead && lookahead <= 3722) ||
          (3724 <= lookahead && lookahead <= 3747) ||
          lookahead == 3749 ||
          (3751 <= lookahead && lookahead <= 3760) ||
          lookahead == 3762 ||
          lookahead == 3763 ||
          lookahead == 3773 ||
          (3776 <= lookahead && lookahead <= 3780) ||
          lookahead == 3782 ||
          (3804 <= lookahead && lookahead <= 3807) ||
          lookahead == 3840 ||
          (3904 <= lookahead && lookahead <= 3911) ||
          (3913 <= lookahead && lookahead <= 3948) ||
          (3976 <= lookahead && lookahead <= 3980) ||
          (4096 <= lookahead && lookahead <= 4138) ||
          lookahead == 4159 ||
          (4176 <= lookahead && lookahead <= 4181) ||
          (4186 <= lookahead && lookahead <= 4189) ||
          lookahead == 4193 ||
          lookahead == 4197 ||
          lookahead == 4198 ||
          (4206 <= lookahead && lookahead <= 4208) ||
          (4213 <= lookahead && lookahead <= 4225) ||
          lookahead == 4238 ||
          (4256 <= lookahead && lookahead <= 4293) ||
          lookahead == 4295 ||
          lookahead == 4301 ||
          (4304 <= lookahead && lookahead <= 4346) ||
          (4348 <= lookahead && lookahead <= 4680) ||
          (4682 <= lookahead && lookahead <= 4685) ||
          (4688 <= lookahead && lookahead <= 4694) ||
          lookahead == 4696 ||
          (4698 <= lookahead && lookahead <= 4701) ||
          (4704 <= lookahead && lookahead <= 4744) ||
          (4746 <= lookahead && lookahead <= 4749) ||
          (4752 <= lookahead && lookahead <= 4784) ||
          (4786 <= lookahead && lookahead <= 4789) ||
          (4792 <= lookahead && lookahead <= 4798) ||
          lookahead == 4800 ||
          (4802 <= lookahead && lookahead <= 4805) ||
          (4808 <= lookahead && lookahead <= 4822) ||
          (4824 <= lookahead && lookahead <= 4880) ||
          (4882 <= lookahead && lookahead <= 4885) ||
          (4888 <= lookahead && lookahead <= 4954) ||
          (4992 <= lookahead && lookahead <= 5007) ||
          (5024 <= lookahead && lookahead <= 5109) ||
          (5112 <= lookahead && lookahead <= 5117) ||
          (5121 <= lookahead && lookahead <= 5740) ||
          (5743 <= lookahead && lookahead <= 5759) ||
          (5761 <= lookahead && lookahead <= 5786) ||
          (5792 <= lookahead && lookahead <= 5866) ||
          (5873 <= lookahead && lookahead <= 5880) ||
          (5888 <= lookahead && lookahead <= 5900) ||
          (5902 <= lookahead && lookahead <= 5905) ||
          (5920 <= lookahead && lookahead <= 5937) ||
          (5952 <= lookahead && lookahead <= 5969) ||
          (5984 <= lookahead && lookahead <= 5996) ||
          (5998 <= lookahead && lookahead <= 6000) ||
          (6016 <= lookahead && lookahead <= 6067) ||
          lookahead == 6103 ||
          lookahead == 6108 ||
          (6176 <= lookahead && lookahead <= 6264) ||
          (6272 <= lookahead && lookahead <= 6276) ||
          (6279 <= lookahead && lookahead <= 6312) ||
          lookahead == 6314 ||
          (6320 <= lookahead && lookahead <= 6389) ||
          (6400 <= lookahead && lookahead <= 6430) ||
          (6480 <= lookahead && lookahead <= 6509) ||
          (6512 <= lookahead && lookahead <= 6516) ||
          (6528 <= lookahead && lookahead <= 6571) ||
          (6576 <= lookahead && lookahead <= 6601) ||
          (6656 <= lookahead && lookahead <= 6678) ||
          (6688 <= lookahead && lookahead <= 6740) ||
          lookahead == 6823 ||
          (6917 <= lookahead && lookahead <= 6963) ||
          (6981 <= lookahead && lookahead <= 6987) ||
          (7043 <= lookahead && lookahead <= 7072) ||
          lookahead == 7086 ||
          lookahead == 7087 ||
          (7098 <= lookahead && lookahead <= 7141) ||
          (7168 <= lookahead && lookahead <= 7203) ||
          (7245 <= lookahead && lookahead <= 7247) ||
          (7258 <= lookahead && lookahead <= 7293) ||
          (7296 <= lookahead && lookahead <= 7304) ||
          (7312 <= lookahead && lookahead <= 7354) ||
          (7357 <= lookahead && lookahead <= 7359) ||
          (7401 <= lookahead && lookahead <= 7404) ||
          (7406 <= lookahead && lookahead <= 7411) ||
          lookahead == 7413 ||
          lookahead == 7414 ||
          lookahead == 7418 ||
          (7424 <= lookahead && lookahead <= 7615) ||
          (7680 <= lookahead && lookahead <= 7957) ||
          (7960 <= lookahead && lookahead <= 7965) ||
          (7968 <= lookahead && lookahead <= 8005) ||
          (8008 <= lookahead && lookahead <= 8013) ||
          (8016 <= lookahead && lookahead <= 8023) ||
          lookahead == 8025 ||
          lookahead == 8027 ||
          lookahead == 8029 ||
          (8031 <= lookahead && lookahead <= 8061) ||
          (8064 <= lookahead && lookahead <= 8116) ||
          (8118 <= lookahead && lookahead <= 8124) ||
          lookahead == 8126 ||
          (8130 <= lookahead && lookahead <= 8132) ||
          (8134 <= lookahead && lookahead <= 8140) ||
          (8144 <= lookahead && lookahead <= 8147) ||
          (8150 <= lookahead && lookahead <= 8155) ||
          (8160 <= lookahead && lookahead <= 8172) ||
          (8178 <= lookahead && lookahead <= 8180) ||
          (8182 <= lookahead && lookahead <= 8188) ||
          lookahead == 8305 ||
          lookahead == 8319 ||
          (8336 <= lookahead && lookahead <= 8348) ||
          lookahead == 8450 ||
          lookahead == 8455 ||
          (8458 <= lookahead && lookahead <= 8467) ||
          lookahead == 8469 ||
          (8473 <= lookahead && lookahead <= 8477) ||
          lookahead == 8484 ||
          lookahead == 8486 ||
          lookahead == 8488 ||
          (8490 <= lookahead && lookahead <= 8493) ||
          (8495 <= lookahead && lookahead <= 8505) ||
          (8508 <= lookahead && lookahead <= 8511) ||
          (8517 <= lookahead && lookahead <= 8521) ||
          lookahead == 8526 ||
          lookahead == 8579 ||
          lookahead == 8580 ||
          (11264 <= lookahead && lookahead <= 11310) ||
          (11312 <= lookahead && lookahead <= 11358) ||
          (11360 <= lookahead && lookahead <= 11492) ||
          (11499 <= lookahead && lookahead <= 11502) ||
          lookahead == 11506 ||
          lookahead == 11507 ||
          (11520 <= lookahead && lookahead <= 11557) ||
          lookahead == 11559 ||
          lookahead == 11565 ||
          (11568 <= lookahead && lookahead <= 11623) ||
          lookahead == 11631 ||
          (11648 <= lookahead && lookahead <= 11670) ||
          (11680 <= lookahead && lookahead <= 11686) ||
          (11688 <= lookahead && lookahead <= 11694) ||
          (11696 <= lookahead && lookahead <= 11702) ||
          (11704 <= lookahead && lookahead <= 11710) ||
          (11712 <= lookahead && lookahead <= 11718) ||
          (11720 <= lookahead && lookahead <= 11726) ||
          (11728 <= lookahead && lookahead <= 11734) ||
          (11736 <= lookahead && lookahead <= 11742) ||
          lookahead == 11823 ||
          lookahead == 12293 ||
          lookahead == 12294 ||
          (12337 <= lookahead && lookahead <= 12341) ||
          lookahead == 12347 ||
          lookahead == 12348 ||
          (12353 <= lookahead && lookahead <= 12438) ||
          (12445 <= lookahead && lookahead <= 12447) ||
          (12449 <= lookahead && lookahead <= 12538) ||
          (12540 <= lookahead && lookahead <= 12543) ||
          (12549 <= lookahead && lookahead <= 12591) ||
          (12593 <= lookahead && lookahead <= 12686) ||
          (12704 <= lookahead && lookahead <= 12730) ||
          (12784 <= lookahead && lookahead <= 12799) ||
          (13312 <= lookahead && lookahead <= 19893) ||
          (19968 <= lookahead && lookahead <= 40943) ||
          (40960 <= lookahead && lookahead <= 42124) ||
          (42192 <= lookahead && lookahead <= 42237) ||
          (42240 <= lookahead && lookahead <= 42508) ||
          (42512 <= lookahead && lookahead <= 42527) ||
          lookahead == 42538 ||
          lookahead == 42539 ||
          (42560 <= lookahead && lookahead <= 42606) ||
          (42623 <= lookahead && lookahead <= 42653) ||
          (42656 <= lookahead && lookahead <= 42725) ||
          (42775 <= lookahead && lookahead <= 42783) ||
          (42786 <= lookahead && lookahead <= 42888) ||
          (42891 <= lookahead && lookahead <= 42943) ||
          (42946 <= lookahead && lookahead <= 42950) ||
          (42999 <= lookahead && lookahead <= 43009) ||
          (43011 <= lookahead && lookahead <= 43013) ||
          (43015 <= lookahead && lookahead <= 43018) ||
          (43020 <= lookahead && lookahead <= 43042) ||
          (43072 <= lookahead && lookahead <= 43123) ||
          (43138 <= lookahead && lookahead <= 43187) ||
          (43250 <= lookahead && lookahead <= 43255) ||
          lookahead == 43259 ||
          lookahead == 43261 ||
          lookahead == 43262 ||
          (43274 <= lookahead && lookahead <= 43301) ||
          (43312 <= lookahead && lookahead <= 43334) ||
          (43360 <= lookahead && lookahead <= 43388) ||
          (43396 <= lookahead && lookahead <= 43442) ||
          lookahead == 43471 ||
          (43488 <= lookahead && lookahead <= 43492) ||
          (43494 <= lookahead && lookahead <= 43503) ||
          (43514 <= lookahead && lookahead <= 43518) ||
          (43520 <= lookahead && lookahead <= 43560) ||
          (43584 <= lookahead && lookahead <= 43586) ||
          (43588 <= lookahead && lookahead <= 43595) ||
          (43616 <= lookahead && lookahead <= 43638) ||
          lookahead == 43642 ||
          (43646 <= lookahead && lookahead <= 43695) ||
          lookahead == 43697 ||
          lookahead == 43701 ||
          lookahead == 43702 ||
          (43705 <= lookahead && lookahead <= 43709) ||
          lookahead == 43712 ||
          lookahead == 43714 ||
          (43739 <= lookahead && lookahead <= 43741) ||
          (43744 <= lookahead && lookahead <= 43754) ||
          (43762 <= lookahead && lookahead <= 43764) ||
          (43777 <= lookahead && lookahead <= 43782) ||
          (43785 <= lookahead && lookahead <= 43790) ||
          (43793 <= lookahead && lookahead <= 43798) ||
          (43808 <= lookahead && lookahead <= 43814) ||
          (43816 <= lookahead && lookahead <= 43822) ||
          (43824 <= lookahead && lookahead <= 43866) ||
          (43868 <= lookahead && lookahead <= 43879) ||
          (43888 <= lookahead && lookahead <= 44002) ||
          (44032 <= lookahead && lookahead <= 55203) ||
          (55216 <= lookahead && lookahead <= 55238) ||
          (55243 <= lookahead && lookahead <= 55291) ||
          (63744 <= lookahead && lookahead <= 64109) ||
          (64112 <= lookahead && lookahead <= 64217) ||
          (64256 <= lookahead && lookahead <= 64262) ||
          (64275 <= lookahead && lookahead <= 64279) ||
          lookahead == 64285 ||
          (64287 <= lookahead && lookahead <= 64296) ||
          (64298 <= lookahead && lookahead <= 64310) ||
          (64312 <= lookahead && lookahead <= 64316) ||
          lookahead == 64318 ||
          lookahead == 64320 ||
          lookahead == 64321 ||
          lookahead == 64323 ||
          lookahead == 64324 ||
          (64326 <= lookahead && lookahead <= 64433) ||
          (64467 <= lookahead && lookahead <= 64829) ||
          (64848 <= lookahead && lookahead <= 64911) ||
          (64914 <= lookahead && lookahead <= 64967) ||
          (65008 <= lookahead && lookahead <= 65019) ||
          (65136 <= lookahead && lookahead <= 65140) ||
          (65142 <= lookahead && lookahead <= 65276) ||
          (65313 <= lookahead && lookahead <= 65338) ||
          (65345 <= lookahead && lookahead <= 65370) ||
          (65382 <= lookahead && lookahead <= 65470) ||
          (65474 <= lookahead && lookahead <= 65479) ||
          (65482 <= lookahead && lookahead <= 65487) ||
          (65490 <= lookahead && lookahead <= 65495) ||
          (65498 <= lookahead && lookahead <= 65500) ||
          (65536 <= lookahead && lookahead <= 65547) ||
          (65549 <= lookahead && lookahead <= 65574) ||
          (65576 <= lookahead && lookahead <= 65594) ||
          lookahead == 65596 ||
          lookahead == 65597 ||
          (65599 <= lookahead && lookahead <= 65613) ||
          (65616 <= lookahead && lookahead <= 65629) ||
          (65664 <= lookahead && lookahead <= 65786) ||
          (66176 <= lookahead && lookahead <= 66204) ||
          (66208 <= lookahead && lookahead <= 66256) ||
          (66304 <= lookahead && lookahead <= 66335) ||
          (66349 <= lookahead && lookahead <= 66368) ||
          (66370 <= lookahead && lookahead <= 66377) ||
          (66384 <= lookahead && lookahead <= 66421) ||
          (66432 <= lookahead && lookahead <= 66461) ||
          (66464 <= lookahead && lookahead <= 66499) ||
          (66504 <= lookahead && lookahead <= 66511) ||
          (66560 <= lookahead && lookahead <= 66717) ||
          (66736 <= lookahead && lookahead <= 66771) ||
          (66776 <= lookahead && lookahead <= 66811) ||
          (66816 <= lookahead && lookahead <= 66855) ||
          (66864 <= lookahead && lookahead <= 66915) ||
          (67072 <= lookahead && lookahead <= 67382) ||
          (67392 <= lookahead && lookahead <= 67413) ||
          (67424 <= lookahead && lookahead <= 67431) ||
          (67584 <= lookahead && lookahead <= 67589) ||
          lookahead == 67592 ||
          (67594 <= lookahead && lookahead <= 67637) ||
          lookahead == 67639 ||
          lookahead == 67640 ||
          lookahead == 67644 ||
          (67647 <= lookahead && lookahead <= 67669) ||
          (67680 <= lookahead && lookahead <= 67702) ||
          (67712 <= lookahead && lookahead <= 67742) ||
          (67808 <= lookahead && lookahead <= 67826) ||
          lookahead == 67828 ||
          lookahead == 67829 ||
          (67840 <= lookahead && lookahead <= 67861) ||
          (67872 <= lookahead && lookahead <= 67897) ||
          (67968 <= lookahead && lookahead <= 68023) ||
          lookahead == 68030 ||
          lookahead == 68031 ||
          lookahead == 68096 ||
          (68112 <= lookahead && lookahead <= 68115) ||
          (68117 <= lookahead && lookahead <= 68119) ||
          (68121 <= lookahead && lookahead <= 68149) ||
          (68192 <= lookahead && lookahead <= 68220) ||
          (68224 <= lookahead && lookahead <= 68252) ||
          (68288 <= lookahead && lookahead <= 68295) ||
          (68297 <= lookahead && lookahead <= 68324) ||
          (68352 <= lookahead && lookahead <= 68405) ||
          (68416 <= lookahead && lookahead <= 68437) ||
          (68448 <= lookahead && lookahead <= 68466) ||
          (68480 <= lookahead && lookahead <= 68497) ||
          (68608 <= lookahead && lookahead <= 68680) ||
          (68736 <= lookahead && lookahead <= 68786) ||
          (68800 <= lookahead && lookahead <= 68850) ||
          (68864 <= lookahead && lookahead <= 68899) ||
          (69376 <= lookahead && lookahead <= 69404) ||
          lookahead == 69415 ||
          (69424 <= lookahead && lookahead <= 69445) ||
          (69600 <= lookahead && lookahead <= 69622) ||
          (69635 <= lookahead && lookahead <= 69687) ||
          (69763 <= lookahead && lookahead <= 69807) ||
          (69840 <= lookahead && lookahead <= 69864) ||
          (69891 <= lookahead && lookahead <= 69926) ||
          lookahead == 69956 ||
          (69968 <= lookahead && lookahead <= 70002) ||
          lookahead == 70006 ||
          (70019 <= lookahead && lookahead <= 70066) ||
          (70081 <= lookahead && lookahead <= 70084) ||
          lookahead == 70106 ||
          lookahead == 70108 ||
          (70144 <= lookahead && lookahead <= 70161) ||
          (70163 <= lookahead && lookahead <= 70187) ||
          (70272 <= lookahead && lookahead <= 70278) ||
          lookahead == 70280 ||
          (70282 <= lookahead && lookahead <= 70285) ||
          (70287 <= lookahead && lookahead <= 70301) ||
          (70303 <= lookahead && lookahead <= 70312) ||
          (70320 <= lookahead && lookahead <= 70366) ||
          (70405 <= lookahead && lookahead <= 70412) ||
          lookahead == 70415 ||
          lookahead == 70416 ||
          (70419 <= lookahead && lookahead <= 70440) ||
          (70442 <= lookahead && lookahead <= 70448) ||
          lookahead == 70450 ||
          lookahead == 70451 ||
          (70453 <= lookahead && lookahead <= 70457) ||
          lookahead == 70461 ||
          lookahead == 70480 ||
          (70493 <= lookahead && lookahead <= 70497) ||
          (70656 <= lookahead && lookahead <= 70708) ||
          (70727 <= lookahead && lookahead <= 70730) ||
          lookahead == 70751 ||
          (70784 <= lookahead && lookahead <= 70831) ||
          lookahead == 70852 ||
          lookahead == 70853 ||
          lookahead == 70855 ||
          (71040 <= lookahead && lookahead <= 71086) ||
          (71128 <= lookahead && lookahead <= 71131) ||
          (71168 <= lookahead && lookahead <= 71215) ||
          lookahead == 71236 ||
          (71296 <= lookahead && lookahead <= 71338) ||
          lookahead == 71352 ||
          (71424 <= lookahead && lookahead <= 71450) ||
          (71680 <= lookahead && lookahead <= 71723) ||
          (71840 <= lookahead && lookahead <= 71903) ||
          lookahead == 71935 ||
          (72096 <= lookahead && lookahead <= 72103) ||
          (72106 <= lookahead && lookahead <= 72144) ||
          lookahead == 72161 ||
          lookahead == 72163 ||
          lookahead == 72192 ||
          (72203 <= lookahead && lookahead <= 72242) ||
          lookahead == 72250 ||
          lookahead == 72272 ||
          (72284 <= lookahead && lookahead <= 72329) ||
          lookahead == 72349 ||
          (72384 <= lookahead && lookahead <= 72440) ||
          (72704 <= lookahead && lookahead <= 72712) ||
          (72714 <= lookahead && lookahead <= 72750) ||
          lookahead == 72768 ||
          (72818 <= lookahead && lookahead <= 72847) ||
          (72960 <= lookahead && lookahead <= 72966) ||
          lookahead == 72968 ||
          lookahead == 72969 ||
          (72971 <= lookahead && lookahead <= 73008) ||
          lookahead == 73030 ||
          (73056 <= lookahead && lookahead <= 73061) ||
          lookahead == 73063 ||
          lookahead == 73064 ||
          (73066 <= lookahead && lookahead <= 73097) ||
          lookahead == 73112 ||
          (73440 <= lookahead && lookahead <= 73458) ||
          (73728 <= lookahead && lookahead <= 74649) ||
          (74880 <= lookahead && lookahead <= 75075) ||
          (77824 <= lookahead && lookahead <= 78894) ||
          (82944 <= lookahead && lookahead <= 83526) ||
          (92160 <= lookahead && lookahead <= 92728) ||
          (92736 <= lookahead && lookahead <= 92766) ||
          (92880 <= lookahead && lookahead <= 92909) ||
          (92928 <= lookahead && lookahead <= 92975) ||
          (92992 <= lookahead && lookahead <= 92995) ||
          (93027 <= lookahead && lookahead <= 93047) ||
          (93053 <= lookahead && lookahead <= 93071) ||
          (93760 <= lookahead && lookahead <= 93823) ||
          (93952 <= lookahead && lookahead <= 94026) ||
          lookahead == 94032 ||
          (94099 <= lookahead && lookahead <= 94111) ||
          lookahead == 94176 ||
          lookahead == 94177 ||
          lookahead == 94179 ||
          (94208 <= lookahead && lookahead <= 100343) ||
          (100352 <= lookahead && lookahead <= 101106) ||
          (110592 <= lookahead && lookahead <= 110878) ||
          (110928 <= lookahead && lookahead <= 110930) ||
          (110948 <= lookahead && lookahead <= 110951) ||
          (110960 <= lookahead && lookahead <= 111355) ||
          (113664 <= lookahead && lookahead <= 113770) ||
          (113776 <= lookahead && lookahead <= 113788) ||
          (113792 <= lookahead && lookahead <= 113800) ||
          (113808 <= lookahead && lookahead <= 113817) ||
          (119808 <= lookahead && lookahead <= 119892) ||
          (119894 <= lookahead && lookahead <= 119964) ||
          lookahead == 119966 ||
          lookahead == 119967 ||
          lookahead == 119970 ||
          lookahead == 119973 ||
          lookahead == 119974 ||
          (119977 <= lookahead && lookahead <= 119980) ||
          (119982 <= lookahead && lookahead <= 119993) ||
          lookahead == 119995 ||
          (119997 <= lookahead && lookahead <= 120003) ||
          (120005 <= lookahead && lookahead <= 120069) ||
          (120071 <= lookahead && lookahead <= 120074) ||
          (120077 <= lookahead && lookahead <= 120084) ||
          (120086 <= lookahead && lookahead <= 120092) ||
          (120094 <= lookahead && lookahead <= 120121) ||
          (120123 <= lookahead && lookahead <= 120126) ||
          (120128 <= lookahead && lookahead <= 120132) ||
          lookahead == 120134 ||
          (120138 <= lookahead && lookahead <= 120144) ||
          (120146 <= lookahead && lookahead <= 120485) ||
          (120488 <= lookahead && lookahead <= 120512) ||
          (120514 <= lookahead && lookahead <= 120538) ||
          (120540 <= lookahead && lookahead <= 120570) ||
          (120572 <= lookahead && lookahead <= 120596) ||
          (120598 <= lookahead && lookahead <= 120628) ||
          (120630 <= lookahead && lookahead <= 120654) ||
          (120656 <= lookahead && lookahead <= 120686) ||
          (120688 <= lookahead && lookahead <= 120712) ||
          (120714 <= lookahead && lookahead <= 120744) ||
          (120746 <= lookahead && lookahead <= 120770) ||
          (120772 <= lookahead && lookahead <= 120779) ||
          (123136 <= lookahead && lookahead <= 123180) ||
          (123191 <= lookahead && lookahead <= 123197) ||
          lookahead == 123214 ||
          (123584 <= lookahead && lookahead <= 123627) ||
          (124928 <= lookahead && lookahead <= 125124) ||
          (125184 <= lookahead && lookahead <= 125251) ||
          lookahead == 125259 ||
          (126464 <= lookahead && lookahead <= 126467) ||
          (126469 <= lookahead && lookahead <= 126495) ||
          lookahead == 126497 ||
          lookahead == 126498 ||
          lookahead == 126500 ||
          lookahead == 126503 ||
          (126505 <= lookahead && lookahead <= 126514) ||
          (126516 <= lookahead && lookahead <= 126519) ||
          lookahead == 126521 ||
          lookahead == 126523 ||
          lookahead == 126530 ||
          lookahead == 126535 ||
          lookahead == 126537 ||
          lookahead == 126539 ||
          (126541 <= lookahead && lookahead <= 126543) ||
          lookahead == 126545 ||
          lookahead == 126546 ||
          lookahead == 126548 ||
          lookahead == 126551 ||
          lookahead == 126553 ||
          lookahead == 126555 ||
          lookahead == 126557 ||
          lookahead == 126559 ||
          lookahead == 126561 ||
          lookahead == 126562 ||
          lookahead == 126564 ||
          (126567 <= lookahead && lookahead <= 126570) ||
          (126572 <= lookahead && lookahead <= 126578) ||
          (126580 <= lookahead && lookahead <= 126583) ||
          (126585 <= lookahead && lookahead <= 126588) ||
          lookahead == 126590 ||
          (126592 <= lookahead && lookahead <= 126601) ||
          (126603 <= lookahead && lookahead <= 126619) ||
          (126625 <= lookahead && lookahead <= 126627) ||
          (126629 <= lookahead && lookahead <= 126633) ||
          (126635 <= lookahead && lookahead <= 126651) ||
          (131072 <= lookahead && lookahead <= 173782) ||
          (173824 <= lookahead && lookahead <= 177972) ||
          (177984 <= lookahead && lookahead <= 178205) ||
          (178208 <= lookahead && lookahead <= 183969) ||
          (183984 <= lookahead && lookahead <= 191456) ||
          (194560 <= lookahead && lookahead <= 195101)) ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(16);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 170 ||
          lookahead == 181 ||
          lookahead == 186 ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 705) ||
          (710 <= lookahead && lookahead <= 721) ||
          (736 <= lookahead && lookahead <= 740) ||
          lookahead == 748 ||
          lookahead == 750 ||
          (880 <= lookahead && lookahead <= 884) ||
          lookahead == 886 ||
          lookahead == 887 ||
          (890 <= lookahead && lookahead <= 893) ||
          lookahead == 895 ||
          lookahead == 902 ||
          (904 <= lookahead && lookahead <= 906) ||
          lookahead == 908 ||
          (910 <= lookahead && lookahead <= 929) ||
          (931 <= lookahead && lookahead <= 1013) ||
          (1015 <= lookahead && lookahead <= 1153) ||
          (1162 <= lookahead && lookahead <= 1327) ||
          (1329 <= lookahead && lookahead <= 1366) ||
          lookahead == 1369 ||
          (1376 <= lookahead && lookahead <= 1416) ||
          (1488 <= lookahead && lookahead <= 1514) ||
          (1519 <= lookahead && lookahead <= 1522) ||
          (1568 <= lookahead && lookahead <= 1610) ||
          lookahead == 1646 ||
          lookahead == 1647 ||
          (1649 <= lookahead && lookahead <= 1747) ||
          lookahead == 1749 ||
          lookahead == 1765 ||
          lookahead == 1766 ||
          lookahead == 1774 ||
          lookahead == 1775 ||
          (1786 <= lookahead && lookahead <= 1788) ||
          lookahead == 1791 ||
          lookahead == 1808 ||
          (1810 <= lookahead && lookahead <= 1839) ||
          (1869 <= lookahead && lookahead <= 1957) ||
          lookahead == 1969 ||
          (1994 <= lookahead && lookahead <= 2026) ||
          lookahead == 2036 ||
          lookahead == 2037 ||
          lookahead == 2042 ||
          (2048 <= lookahead && lookahead <= 2069) ||
          lookahead == 2074 ||
          lookahead == 2084 ||
          lookahead == 2088 ||
          (2112 <= lookahead && lookahead <= 2136) ||
          (2144 <= lookahead && lookahead <= 2154) ||
          (2208 <= lookahead && lookahead <= 2228) ||
          (2230 <= lookahead && lookahead <= 2237) ||
          (2308 <= lookahead && lookahead <= 2361) ||
          lookahead == 2365 ||
          lookahead == 2384 ||
          (2392 <= lookahead && lookahead <= 2401) ||
          (2417 <= lookahead && lookahead <= 2432) ||
          (2437 <= lookahead && lookahead <= 2444) ||
          lookahead == 2447 ||
          lookahead == 2448 ||
          (2451 <= lookahead && lookahead <= 2472) ||
          (2474 <= lookahead && lookahead <= 2480) ||
          lookahead == 2482 ||
          (2486 <= lookahead && lookahead <= 2489) ||
          lookahead == 2493 ||
          lookahead == 2510 ||
          lookahead == 2524 ||
          lookahead == 2525 ||
          (2527 <= lookahead && lookahead <= 2529) ||
          lookahead == 2544 ||
          lookahead == 2545 ||
          lookahead == 2556 ||
          (2565 <= lookahead && lookahead <= 2570) ||
          lookahead == 2575 ||
          lookahead == 2576 ||
          (2579 <= lookahead && lookahead <= 2600) ||
          (2602 <= lookahead && lookahead <= 2608) ||
          lookahead == 2610 ||
          lookahead == 2611 ||
          lookahead == 2613 ||
          lookahead == 2614 ||
          lookahead == 2616 ||
          lookahead == 2617 ||
          (2649 <= lookahead && lookahead <= 2652) ||
          lookahead == 2654 ||
          (2674 <= lookahead && lookahead <= 2676) ||
          (2693 <= lookahead && lookahead <= 2701) ||
          (2703 <= lookahead && lookahead <= 2705) ||
          (2707 <= lookahead && lookahead <= 2728) ||
          (2730 <= lookahead && lookahead <= 2736) ||
          lookahead == 2738 ||
          lookahead == 2739 ||
          (2741 <= lookahead && lookahead <= 2745) ||
          lookahead == 2749 ||
          lookahead == 2768 ||
          lookahead == 2784 ||
          lookahead == 2785 ||
          lookahead == 2809 ||
          (2821 <= lookahead && lookahead <= 2828) ||
          lookahead == 2831 ||
          lookahead == 2832 ||
          (2835 <= lookahead && lookahead <= 2856) ||
          (2858 <= lookahead && lookahead <= 2864) ||
          lookahead == 2866 ||
          lookahead == 2867 ||
          (2869 <= lookahead && lookahead <= 2873) ||
          lookahead == 2877 ||
          lookahead == 2908 ||
          lookahead == 2909 ||
          (2911 <= lookahead && lookahead <= 2913) ||
          lookahead == 2929 ||
          lookahead == 2947 ||
          (2949 <= lookahead && lookahead <= 2954) ||
          (2958 <= lookahead && lookahead <= 2960) ||
          (2962 <= lookahead && lookahead <= 2965) ||
          lookahead == 2969 ||
          lookahead == 2970 ||
          lookahead == 2972 ||
          lookahead == 2974 ||
          lookahead == 2975 ||
          lookahead == 2979 ||
          lookahead == 2980 ||
          (2984 <= lookahead && lookahead <= 2986) ||
          (2990 <= lookahead && lookahead <= 3001) ||
          lookahead == 3024 ||
          (3077 <= lookahead && lookahead <= 3084) ||
          (3086 <= lookahead && lookahead <= 3088) ||
          (3090 <= lookahead && lookahead <= 3112) ||
          (3114 <= lookahead && lookahead <= 3129) ||
          lookahead == 3133 ||
          (3160 <= lookahead && lookahead <= 3162) ||
          lookahead == 3168 ||
          lookahead == 3169 ||
          lookahead == 3200 ||
          (3205 <= lookahead && lookahead <= 3212) ||
          (3214 <= lookahead && lookahead <= 3216) ||
          (3218 <= lookahead && lookahead <= 3240) ||
          (3242 <= lookahead && lookahead <= 3251) ||
          (3253 <= lookahead && lookahead <= 3257) ||
          lookahead == 3261 ||
          lookahead == 3294 ||
          lookahead == 3296 ||
          lookahead == 3297 ||
          lookahead == 3313 ||
          lookahead == 3314 ||
          (3333 <= lookahead && lookahead <= 3340) ||
          (3342 <= lookahead && lookahead <= 3344) ||
          (3346 <= lookahead && lookahead <= 3386) ||
          lookahead == 3389 ||
          lookahead == 3406 ||
          (3412 <= lookahead && lookahead <= 3414) ||
          (3423 <= lookahead && lookahead <= 3425) ||
          (3450 <= lookahead && lookahead <= 3455) ||
          (3461 <= lookahead && lookahead <= 3478) ||
          (3482 <= lookahead && lookahead <= 3505) ||
          (3507 <= lookahead && lookahead <= 3515) ||
          lookahead == 3517 ||
          (3520 <= lookahead && lookahead <= 3526) ||
          (3585 <= lookahead && lookahead <= 3632) ||
          lookahead == 3634 ||
          lookahead == 3635 ||
          (3648 <= lookahead && lookahead <= 3654) ||
          lookahead == 3713 ||
          lookahead == 3714 ||
          lookahead == 3716 ||
          (3718 <= lookahead && lookahead <= 3722) ||
          (3724 <= lookahead && lookahead <= 3747) ||
          lookahead == 3749 ||
          (3751 <= lookahead && lookahead <= 3760) ||
          lookahead == 3762 ||
          lookahead == 3763 ||
          lookahead == 3773 ||
          (3776 <= lookahead && lookahead <= 3780) ||
          lookahead == 3782 ||
          (3804 <= lookahead && lookahead <= 3807) ||
          lookahead == 3840 ||
          (3904 <= lookahead && lookahead <= 3911) ||
          (3913 <= lookahead && lookahead <= 3948) ||
          (3976 <= lookahead && lookahead <= 3980) ||
          (4096 <= lookahead && lookahead <= 4138) ||
          lookahead == 4159 ||
          (4176 <= lookahead && lookahead <= 4181) ||
          (4186 <= lookahead && lookahead <= 4189) ||
          lookahead == 4193 ||
          lookahead == 4197 ||
          lookahead == 4198 ||
          (4206 <= lookahead && lookahead <= 4208) ||
          (4213 <= lookahead && lookahead <= 4225) ||
          lookahead == 4238 ||
          (4256 <= lookahead && lookahead <= 4293) ||
          lookahead == 4295 ||
          lookahead == 4301 ||
          (4304 <= lookahead && lookahead <= 4346) ||
          (4348 <= lookahead && lookahead <= 4680) ||
          (4682 <= lookahead && lookahead <= 4685) ||
          (4688 <= lookahead && lookahead <= 4694) ||
          lookahead == 4696 ||
          (4698 <= lookahead && lookahead <= 4701) ||
          (4704 <= lookahead && lookahead <= 4744) ||
          (4746 <= lookahead && lookahead <= 4749) ||
          (4752 <= lookahead && lookahead <= 4784) ||
          (4786 <= lookahead && lookahead <= 4789) ||
          (4792 <= lookahead && lookahead <= 4798) ||
          lookahead == 4800 ||
          (4802 <= lookahead && lookahead <= 4805) ||
          (4808 <= lookahead && lookahead <= 4822) ||
          (4824 <= lookahead && lookahead <= 4880) ||
          (4882 <= lookahead && lookahead <= 4885) ||
          (4888 <= lookahead && lookahead <= 4954) ||
          (4992 <= lookahead && lookahead <= 5007) ||
          (5024 <= lookahead && lookahead <= 5109) ||
          (5112 <= lookahead && lookahead <= 5117) ||
          (5121 <= lookahead && lookahead <= 5740) ||
          (5743 <= lookahead && lookahead <= 5759) ||
          (5761 <= lookahead && lookahead <= 5786) ||
          (5792 <= lookahead && lookahead <= 5866) ||
          (5873 <= lookahead && lookahead <= 5880) ||
          (5888 <= lookahead && lookahead <= 5900) ||
          (5902 <= lookahead && lookahead <= 5905) ||
          (5920 <= lookahead && lookahead <= 5937) ||
          (5952 <= lookahead && lookahead <= 5969) ||
          (5984 <= lookahead && lookahead <= 5996) ||
          (5998 <= lookahead && lookahead <= 6000) ||
          (6016 <= lookahead && lookahead <= 6067) ||
          lookahead == 6103 ||
          lookahead == 6108 ||
          (6176 <= lookahead && lookahead <= 6264) ||
          (6272 <= lookahead && lookahead <= 6276) ||
          (6279 <= lookahead && lookahead <= 6312) ||
          lookahead == 6314 ||
          (6320 <= lookahead && lookahead <= 6389) ||
          (6400 <= lookahead && lookahead <= 6430) ||
          (6480 <= lookahead && lookahead <= 6509) ||
          (6512 <= lookahead && lookahead <= 6516) ||
          (6528 <= lookahead && lookahead <= 6571) ||
          (6576 <= lookahead && lookahead <= 6601) ||
          (6656 <= lookahead && lookahead <= 6678) ||
          (6688 <= lookahead && lookahead <= 6740) ||
          lookahead == 6823 ||
          (6917 <= lookahead && lookahead <= 6963) ||
          (6981 <= lookahead && lookahead <= 6987) ||
          (7043 <= lookahead && lookahead <= 7072) ||
          lookahead == 7086 ||
          lookahead == 7087 ||
          (7098 <= lookahead && lookahead <= 7141) ||
          (7168 <= lookahead && lookahead <= 7203) ||
          (7245 <= lookahead && lookahead <= 7247) ||
          (7258 <= lookahead && lookahead <= 7293) ||
          (7296 <= lookahead && lookahead <= 7304) ||
          (7312 <= lookahead && lookahead <= 7354) ||
          (7357 <= lookahead && lookahead <= 7359) ||
          (7401 <= lookahead && lookahead <= 7404) ||
          (7406 <= lookahead && lookahead <= 7411) ||
          lookahead == 7413 ||
          lookahead == 7414 ||
          lookahead == 7418 ||
          (7424 <= lookahead && lookahead <= 7615) ||
          (7680 <= lookahead && lookahead <= 7957) ||
          (7960 <= lookahead && lookahead <= 7965) ||
          (7968 <= lookahead && lookahead <= 8005) ||
          (8008 <= lookahead && lookahead <= 8013) ||
          (8016 <= lookahead && lookahead <= 8023) ||
          lookahead == 8025 ||
          lookahead == 8027 ||
          lookahead == 8029 ||
          (8031 <= lookahead && lookahead <= 8061) ||
          (8064 <= lookahead && lookahead <= 8116) ||
          (8118 <= lookahead && lookahead <= 8124) ||
          lookahead == 8126 ||
          (8130 <= lookahead && lookahead <= 8132) ||
          (8134 <= lookahead && lookahead <= 8140) ||
          (8144 <= lookahead && lookahead <= 8147) ||
          (8150 <= lookahead && lookahead <= 8155) ||
          (8160 <= lookahead && lookahead <= 8172) ||
          (8178 <= lookahead && lookahead <= 8180) ||
          (8182 <= lookahead && lookahead <= 8188) ||
          lookahead == 8305 ||
          lookahead == 8319 ||
          (8336 <= lookahead && lookahead <= 8348) ||
          lookahead == 8450 ||
          lookahead == 8455 ||
          (8458 <= lookahead && lookahead <= 8467) ||
          lookahead == 8469 ||
          (8473 <= lookahead && lookahead <= 8477) ||
          lookahead == 8484 ||
          lookahead == 8486 ||
          lookahead == 8488 ||
          (8490 <= lookahead && lookahead <= 8493) ||
          (8495 <= lookahead && lookahead <= 8505) ||
          (8508 <= lookahead && lookahead <= 8511) ||
          (8517 <= lookahead && lookahead <= 8521) ||
          lookahead == 8526 ||
          lookahead == 8579 ||
          lookahead == 8580 ||
          (11264 <= lookahead && lookahead <= 11310) ||
          (11312 <= lookahead && lookahead <= 11358) ||
          (11360 <= lookahead && lookahead <= 11492) ||
          (11499 <= lookahead && lookahead <= 11502) ||
          lookahead == 11506 ||
          lookahead == 11507 ||
          (11520 <= lookahead && lookahead <= 11557) ||
          lookahead == 11559 ||
          lookahead == 11565 ||
          (11568 <= lookahead && lookahead <= 11623) ||
          lookahead == 11631 ||
          (11648 <= lookahead && lookahead <= 11670) ||
          (11680 <= lookahead && lookahead <= 11686) ||
          (11688 <= lookahead && lookahead <= 11694) ||
          (11696 <= lookahead && lookahead <= 11702) ||
          (11704 <= lookahead && lookahead <= 11710) ||
          (11712 <= lookahead && lookahead <= 11718) ||
          (11720 <= lookahead && lookahead <= 11726) ||
          (11728 <= lookahead && lookahead <= 11734) ||
          (11736 <= lookahead && lookahead <= 11742) ||
          lookahead == 11823 ||
          lookahead == 12293 ||
          lookahead == 12294 ||
          (12337 <= lookahead && lookahead <= 12341) ||
          lookahead == 12347 ||
          lookahead == 12348 ||
          (12353 <= lookahead && lookahead <= 12438) ||
          (12445 <= lookahead && lookahead <= 12447) ||
          (12449 <= lookahead && lookahead <= 12538) ||
          (12540 <= lookahead && lookahead <= 12543) ||
          (12549 <= lookahead && lookahead <= 12591) ||
          (12593 <= lookahead && lookahead <= 12686) ||
          (12704 <= lookahead && lookahead <= 12730) ||
          (12784 <= lookahead && lookahead <= 12799) ||
          (13312 <= lookahead && lookahead <= 19893) ||
          (19968 <= lookahead && lookahead <= 40943) ||
          (40960 <= lookahead && lookahead <= 42124) ||
          (42192 <= lookahead && lookahead <= 42237) ||
          (42240 <= lookahead && lookahead <= 42508) ||
          (42512 <= lookahead && lookahead <= 42527) ||
          lookahead == 42538 ||
          lookahead == 42539 ||
          (42560 <= lookahead && lookahead <= 42606) ||
          (42623 <= lookahead && lookahead <= 42653) ||
          (42656 <= lookahead && lookahead <= 42725) ||
          (42775 <= lookahead && lookahead <= 42783) ||
          (42786 <= lookahead && lookahead <= 42888) ||
          (42891 <= lookahead && lookahead <= 42943) ||
          (42946 <= lookahead && lookahead <= 42950) ||
          (42999 <= lookahead && lookahead <= 43009) ||
          (43011 <= lookahead && lookahead <= 43013) ||
          (43015 <= lookahead && lookahead <= 43018) ||
          (43020 <= lookahead && lookahead <= 43042) ||
          (43072 <= lookahead && lookahead <= 43123) ||
          (43138 <= lookahead && lookahead <= 43187) ||
          (43250 <= lookahead && lookahead <= 43255) ||
          lookahead == 43259 ||
          lookahead == 43261 ||
          lookahead == 43262 ||
          (43274 <= lookahead && lookahead <= 43301) ||
          (43312 <= lookahead && lookahead <= 43334) ||
          (43360 <= lookahead && lookahead <= 43388) ||
          (43396 <= lookahead && lookahead <= 43442) ||
          lookahead == 43471 ||
          (43488 <= lookahead && lookahead <= 43492) ||
          (43494 <= lookahead && lookahead <= 43503) ||
          (43514 <= lookahead && lookahead <= 43518) ||
          (43520 <= lookahead && lookahead <= 43560) ||
          (43584 <= lookahead && lookahead <= 43586) ||
          (43588 <= lookahead && lookahead <= 43595) ||
          (43616 <= lookahead && lookahead <= 43638) ||
          lookahead == 43642 ||
          (43646 <= lookahead && lookahead <= 43695) ||
          lookahead == 43697 ||
          lookahead == 43701 ||
          lookahead == 43702 ||
          (43705 <= lookahead && lookahead <= 43709) ||
          lookahead == 43712 ||
          lookahead == 43714 ||
          (43739 <= lookahead && lookahead <= 43741) ||
          (43744 <= lookahead && lookahead <= 43754) ||
          (43762 <= lookahead && lookahead <= 43764) ||
          (43777 <= lookahead && lookahead <= 43782) ||
          (43785 <= lookahead && lookahead <= 43790) ||
          (43793 <= lookahead && lookahead <= 43798) ||
          (43808 <= lookahead && lookahead <= 43814) ||
          (43816 <= lookahead && lookahead <= 43822) ||
          (43824 <= lookahead && lookahead <= 43866) ||
          (43868 <= lookahead && lookahead <= 43879) ||
          (43888 <= lookahead && lookahead <= 44002) ||
          (44032 <= lookahead && lookahead <= 55203) ||
          (55216 <= lookahead && lookahead <= 55238) ||
          (55243 <= lookahead && lookahead <= 55291) ||
          (63744 <= lookahead && lookahead <= 64109) ||
          (64112 <= lookahead && lookahead <= 64217) ||
          (64256 <= lookahead && lookahead <= 64262) ||
          (64275 <= lookahead && lookahead <= 64279) ||
          lookahead == 64285 ||
          (64287 <= lookahead && lookahead <= 64296) ||
          (64298 <= lookahead && lookahead <= 64310) ||
          (64312 <= lookahead && lookahead <= 64316) ||
          lookahead == 64318 ||
          lookahead == 64320 ||
          lookahead == 64321 ||
          lookahead == 64323 ||
          lookahead == 64324 ||
          (64326 <= lookahead && lookahead <= 64433) ||
          (64467 <= lookahead && lookahead <= 64829) ||
          (64848 <= lookahead && lookahead <= 64911) ||
          (64914 <= lookahead && lookahead <= 64967) ||
          (65008 <= lookahead && lookahead <= 65019) ||
          (65136 <= lookahead && lookahead <= 65140) ||
          (65142 <= lookahead && lookahead <= 65276) ||
          (65313 <= lookahead && lookahead <= 65338) ||
          (65345 <= lookahead && lookahead <= 65370) ||
          (65382 <= lookahead && lookahead <= 65470) ||
          (65474 <= lookahead && lookahead <= 65479) ||
          (65482 <= lookahead && lookahead <= 65487) ||
          (65490 <= lookahead && lookahead <= 65495) ||
          (65498 <= lookahead && lookahead <= 65500) ||
          (65536 <= lookahead && lookahead <= 65547) ||
          (65549 <= lookahead && lookahead <= 65574) ||
          (65576 <= lookahead && lookahead <= 65594) ||
          lookahead == 65596 ||
          lookahead == 65597 ||
          (65599 <= lookahead && lookahead <= 65613) ||
          (65616 <= lookahead && lookahead <= 65629) ||
          (65664 <= lookahead && lookahead <= 65786) ||
          (66176 <= lookahead && lookahead <= 66204) ||
          (66208 <= lookahead && lookahead <= 66256) ||
          (66304 <= lookahead && lookahead <= 66335) ||
          (66349 <= lookahead && lookahead <= 66368) ||
          (66370 <= lookahead && lookahead <= 66377) ||
          (66384 <= lookahead && lookahead <= 66421) ||
          (66432 <= lookahead && lookahead <= 66461) ||
          (66464 <= lookahead && lookahead <= 66499) ||
          (66504 <= lookahead && lookahead <= 66511) ||
          (66560 <= lookahead && lookahead <= 66717) ||
          (66736 <= lookahead && lookahead <= 66771) ||
          (66776 <= lookahead && lookahead <= 66811) ||
          (66816 <= lookahead && lookahead <= 66855) ||
          (66864 <= lookahead && lookahead <= 66915) ||
          (67072 <= lookahead && lookahead <= 67382) ||
          (67392 <= lookahead && lookahead <= 67413) ||
          (67424 <= lookahead && lookahead <= 67431) ||
          (67584 <= lookahead && lookahead <= 67589) ||
          lookahead == 67592 ||
          (67594 <= lookahead && lookahead <= 67637) ||
          lookahead == 67639 ||
          lookahead == 67640 ||
          lookahead == 67644 ||
          (67647 <= lookahead && lookahead <= 67669) ||
          (67680 <= lookahead && lookahead <= 67702) ||
          (67712 <= lookahead && lookahead <= 67742) ||
          (67808 <= lookahead && lookahead <= 67826) ||
          lookahead == 67828 ||
          lookahead == 67829 ||
          (67840 <= lookahead && lookahead <= 67861) ||
          (67872 <= lookahead && lookahead <= 67897) ||
          (67968 <= lookahead && lookahead <= 68023) ||
          lookahead == 68030 ||
          lookahead == 68031 ||
          lookahead == 68096 ||
          (68112 <= lookahead && lookahead <= 68115) ||
          (68117 <= lookahead && lookahead <= 68119) ||
          (68121 <= lookahead && lookahead <= 68149) ||
          (68192 <= lookahead && lookahead <= 68220) ||
          (68224 <= lookahead && lookahead <= 68252) ||
          (68288 <= lookahead && lookahead <= 68295) ||
          (68297 <= lookahead && lookahead <= 68324) ||
          (68352 <= lookahead && lookahead <= 68405) ||
          (68416 <= lookahead && lookahead <= 68437) ||
          (68448 <= lookahead && lookahead <= 68466) ||
          (68480 <= lookahead && lookahead <= 68497) ||
          (68608 <= lookahead && lookahead <= 68680) ||
          (68736 <= lookahead && lookahead <= 68786) ||
          (68800 <= lookahead && lookahead <= 68850) ||
          (68864 <= lookahead && lookahead <= 68899) ||
          (69376 <= lookahead && lookahead <= 69404) ||
          lookahead == 69415 ||
          (69424 <= lookahead && lookahead <= 69445) ||
          (69600 <= lookahead && lookahead <= 69622) ||
          (69635 <= lookahead && lookahead <= 69687) ||
          (69763 <= lookahead && lookahead <= 69807) ||
          (69840 <= lookahead && lookahead <= 69864) ||
          (69891 <= lookahead && lookahead <= 69926) ||
          lookahead == 69956 ||
          (69968 <= lookahead && lookahead <= 70002) ||
          lookahead == 70006 ||
          (70019 <= lookahead && lookahead <= 70066) ||
          (70081 <= lookahead && lookahead <= 70084) ||
          lookahead == 70106 ||
          lookahead == 70108 ||
          (70144 <= lookahead && lookahead <= 70161) ||
          (70163 <= lookahead && lookahead <= 70187) ||
          (70272 <= lookahead && lookahead <= 70278) ||
          lookahead == 70280 ||
          (70282 <= lookahead && lookahead <= 70285) ||
          (70287 <= lookahead && lookahead <= 70301) ||
          (70303 <= lookahead && lookahead <= 70312) ||
          (70320 <= lookahead && lookahead <= 70366) ||
          (70405 <= lookahead && lookahead <= 70412) ||
          lookahead == 70415 ||
          lookahead == 70416 ||
          (70419 <= lookahead && lookahead <= 70440) ||
          (70442 <= lookahead && lookahead <= 70448) ||
          lookahead == 70450 ||
          lookahead == 70451 ||
          (70453 <= lookahead && lookahead <= 70457) ||
          lookahead == 70461 ||
          lookahead == 70480 ||
          (70493 <= lookahead && lookahead <= 70497) ||
          (70656 <= lookahead && lookahead <= 70708) ||
          (70727 <= lookahead && lookahead <= 70730) ||
          lookahead == 70751 ||
          (70784 <= lookahead && lookahead <= 70831) ||
          lookahead == 70852 ||
          lookahead == 70853 ||
          lookahead == 70855 ||
          (71040 <= lookahead && lookahead <= 71086) ||
          (71128 <= lookahead && lookahead <= 71131) ||
          (71168 <= lookahead && lookahead <= 71215) ||
          lookahead == 71236 ||
          (71296 <= lookahead && lookahead <= 71338) ||
          lookahead == 71352 ||
          (71424 <= lookahead && lookahead <= 71450) ||
          (71680 <= lookahead && lookahead <= 71723) ||
          (71840 <= lookahead && lookahead <= 71903) ||
          lookahead == 71935 ||
          (72096 <= lookahead && lookahead <= 72103) ||
          (72106 <= lookahead && lookahead <= 72144) ||
          lookahead == 72161 ||
          lookahead == 72163 ||
          lookahead == 72192 ||
          (72203 <= lookahead && lookahead <= 72242) ||
          lookahead == 72250 ||
          lookahead == 72272 ||
          (72284 <= lookahead && lookahead <= 72329) ||
          lookahead == 72349 ||
          (72384 <= lookahead && lookahead <= 72440) ||
          (72704 <= lookahead && lookahead <= 72712) ||
          (72714 <= lookahead && lookahead <= 72750) ||
          lookahead == 72768 ||
          (72818 <= lookahead && lookahead <= 72847) ||
          (72960 <= lookahead && lookahead <= 72966) ||
          lookahead == 72968 ||
          lookahead == 72969 ||
          (72971 <= lookahead && lookahead <= 73008) ||
          lookahead == 73030 ||
          (73056 <= lookahead && lookahead <= 73061) ||
          lookahead == 73063 ||
          lookahead == 73064 ||
          (73066 <= lookahead && lookahead <= 73097) ||
          lookahead == 73112 ||
          (73440 <= lookahead && lookahead <= 73458) ||
          (73728 <= lookahead && lookahead <= 74649) ||
          (74880 <= lookahead && lookahead <= 75075) ||
          (77824 <= lookahead && lookahead <= 78894) ||
          (82944 <= lookahead && lookahead <= 83526) ||
          (92160 <= lookahead && lookahead <= 92728) ||
          (92736 <= lookahead && lookahead <= 92766) ||
          (92880 <= lookahead && lookahead <= 92909) ||
          (92928 <= lookahead && lookahead <= 92975) ||
          (92992 <= lookahead && lookahead <= 92995) ||
          (93027 <= lookahead && lookahead <= 93047) ||
          (93053 <= lookahead && lookahead <= 93071) ||
          (93760 <= lookahead && lookahead <= 93823) ||
          (93952 <= lookahead && lookahead <= 94026) ||
          lookahead == 94032 ||
          (94099 <= lookahead && lookahead <= 94111) ||
          lookahead == 94176 ||
          lookahead == 94177 ||
          lookahead == 94179 ||
          (94208 <= lookahead && lookahead <= 100343) ||
          (100352 <= lookahead && lookahead <= 101106) ||
          (110592 <= lookahead && lookahead <= 110878) ||
          (110928 <= lookahead && lookahead <= 110930) ||
          (110948 <= lookahead && lookahead <= 110951) ||
          (110960 <= lookahead && lookahead <= 111355) ||
          (113664 <= lookahead && lookahead <= 113770) ||
          (113776 <= lookahead && lookahead <= 113788) ||
          (113792 <= lookahead && lookahead <= 113800) ||
          (113808 <= lookahead && lookahead <= 113817) ||
          (119808 <= lookahead && lookahead <= 119892) ||
          (119894 <= lookahead && lookahead <= 119964) ||
          lookahead == 119966 ||
          lookahead == 119967 ||
          lookahead == 119970 ||
          lookahead == 119973 ||
          lookahead == 119974 ||
          (119977 <= lookahead && lookahead <= 119980) ||
          (119982 <= lookahead && lookahead <= 119993) ||
          lookahead == 119995 ||
          (119997 <= lookahead && lookahead <= 120003) ||
          (120005 <= lookahead && lookahead <= 120069) ||
          (120071 <= lookahead && lookahead <= 120074) ||
          (120077 <= lookahead && lookahead <= 120084) ||
          (120086 <= lookahead && lookahead <= 120092) ||
          (120094 <= lookahead && lookahead <= 120121) ||
          (120123 <= lookahead && lookahead <= 120126) ||
          (120128 <= lookahead && lookahead <= 120132) ||
          lookahead == 120134 ||
          (120138 <= lookahead && lookahead <= 120144) ||
          (120146 <= lookahead && lookahead <= 120485) ||
          (120488 <= lookahead && lookahead <= 120512) ||
          (120514 <= lookahead && lookahead <= 120538) ||
          (120540 <= lookahead && lookahead <= 120570) ||
          (120572 <= lookahead && lookahead <= 120596) ||
          (120598 <= lookahead && lookahead <= 120628) ||
          (120630 <= lookahead && lookahead <= 120654) ||
          (120656 <= lookahead && lookahead <= 120686) ||
          (120688 <= lookahead && lookahead <= 120712) ||
          (120714 <= lookahead && lookahead <= 120744) ||
          (120746 <= lookahead && lookahead <= 120770) ||
          (120772 <= lookahead && lookahead <= 120779) ||
          (123136 <= lookahead && lookahead <= 123180) ||
          (123191 <= lookahead && lookahead <= 123197) ||
          lookahead == 123214 ||
          (123584 <= lookahead && lookahead <= 123627) ||
          (124928 <= lookahead && lookahead <= 125124) ||
          (125184 <= lookahead && lookahead <= 125251) ||
          lookahead == 125259 ||
          (126464 <= lookahead && lookahead <= 126467) ||
          (126469 <= lookahead && lookahead <= 126495) ||
          lookahead == 126497 ||
          lookahead == 126498 ||
          lookahead == 126500 ||
          lookahead == 126503 ||
          (126505 <= lookahead && lookahead <= 126514) ||
          (126516 <= lookahead && lookahead <= 126519) ||
          lookahead == 126521 ||
          lookahead == 126523 ||
          lookahead == 126530 ||
          lookahead == 126535 ||
          lookahead == 126537 ||
          lookahead == 126539 ||
          (126541 <= lookahead && lookahead <= 126543) ||
          lookahead == 126545 ||
          lookahead == 126546 ||
          lookahead == 126548 ||
          lookahead == 126551 ||
          lookahead == 126553 ||
          lookahead == 126555 ||
          lookahead == 126557 ||
          lookahead == 126559 ||
          lookahead == 126561 ||
          lookahead == 126562 ||
          lookahead == 126564 ||
          (126567 <= lookahead && lookahead <= 126570) ||
          (126572 <= lookahead && lookahead <= 126578) ||
          (126580 <= lookahead && lookahead <= 126583) ||
          (126585 <= lookahead && lookahead <= 126588) ||
          lookahead == 126590 ||
          (126592 <= lookahead && lookahead <= 126601) ||
          (126603 <= lookahead && lookahead <= 126619) ||
          (126625 <= lookahead && lookahead <= 126627) ||
          (126629 <= lookahead && lookahead <= 126633) ||
          (126635 <= lookahead && lookahead <= 126651) ||
          (131072 <= lookahead && lookahead <= 173782) ||
          (173824 <= lookahead && lookahead <= 177972) ||
          (177984 <= lookahead && lookahead <= 178205) ||
          (178208 <= lookahead && lookahead <= 183969) ||
          (183984 <= lookahead && lookahead <= 191456) ||
          (194560 <= lookahead && lookahead <= 195101)) ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'R') ADVANCE(17);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 170 ||
          lookahead == 181 ||
          lookahead == 186 ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 705) ||
          (710 <= lookahead && lookahead <= 721) ||
          (736 <= lookahead && lookahead <= 740) ||
          lookahead == 748 ||
          lookahead == 750 ||
          (880 <= lookahead && lookahead <= 884) ||
          lookahead == 886 ||
          lookahead == 887 ||
          (890 <= lookahead && lookahead <= 893) ||
          lookahead == 895 ||
          lookahead == 902 ||
          (904 <= lookahead && lookahead <= 906) ||
          lookahead == 908 ||
          (910 <= lookahead && lookahead <= 929) ||
          (931 <= lookahead && lookahead <= 1013) ||
          (1015 <= lookahead && lookahead <= 1153) ||
          (1162 <= lookahead && lookahead <= 1327) ||
          (1329 <= lookahead && lookahead <= 1366) ||
          lookahead == 1369 ||
          (1376 <= lookahead && lookahead <= 1416) ||
          (1488 <= lookahead && lookahead <= 1514) ||
          (1519 <= lookahead && lookahead <= 1522) ||
          (1568 <= lookahead && lookahead <= 1610) ||
          lookahead == 1646 ||
          lookahead == 1647 ||
          (1649 <= lookahead && lookahead <= 1747) ||
          lookahead == 1749 ||
          lookahead == 1765 ||
          lookahead == 1766 ||
          lookahead == 1774 ||
          lookahead == 1775 ||
          (1786 <= lookahead && lookahead <= 1788) ||
          lookahead == 1791 ||
          lookahead == 1808 ||
          (1810 <= lookahead && lookahead <= 1839) ||
          (1869 <= lookahead && lookahead <= 1957) ||
          lookahead == 1969 ||
          (1994 <= lookahead && lookahead <= 2026) ||
          lookahead == 2036 ||
          lookahead == 2037 ||
          lookahead == 2042 ||
          (2048 <= lookahead && lookahead <= 2069) ||
          lookahead == 2074 ||
          lookahead == 2084 ||
          lookahead == 2088 ||
          (2112 <= lookahead && lookahead <= 2136) ||
          (2144 <= lookahead && lookahead <= 2154) ||
          (2208 <= lookahead && lookahead <= 2228) ||
          (2230 <= lookahead && lookahead <= 2237) ||
          (2308 <= lookahead && lookahead <= 2361) ||
          lookahead == 2365 ||
          lookahead == 2384 ||
          (2392 <= lookahead && lookahead <= 2401) ||
          (2417 <= lookahead && lookahead <= 2432) ||
          (2437 <= lookahead && lookahead <= 2444) ||
          lookahead == 2447 ||
          lookahead == 2448 ||
          (2451 <= lookahead && lookahead <= 2472) ||
          (2474 <= lookahead && lookahead <= 2480) ||
          lookahead == 2482 ||
          (2486 <= lookahead && lookahead <= 2489) ||
          lookahead == 2493 ||
          lookahead == 2510 ||
          lookahead == 2524 ||
          lookahead == 2525 ||
          (2527 <= lookahead && lookahead <= 2529) ||
          lookahead == 2544 ||
          lookahead == 2545 ||
          lookahead == 2556 ||
          (2565 <= lookahead && lookahead <= 2570) ||
          lookahead == 2575 ||
          lookahead == 2576 ||
          (2579 <= lookahead && lookahead <= 2600) ||
          (2602 <= lookahead && lookahead <= 2608) ||
          lookahead == 2610 ||
          lookahead == 2611 ||
          lookahead == 2613 ||
          lookahead == 2614 ||
          lookahead == 2616 ||
          lookahead == 2617 ||
          (2649 <= lookahead && lookahead <= 2652) ||
          lookahead == 2654 ||
          (2674 <= lookahead && lookahead <= 2676) ||
          (2693 <= lookahead && lookahead <= 2701) ||
          (2703 <= lookahead && lookahead <= 2705) ||
          (2707 <= lookahead && lookahead <= 2728) ||
          (2730 <= lookahead && lookahead <= 2736) ||
          lookahead == 2738 ||
          lookahead == 2739 ||
          (2741 <= lookahead && lookahead <= 2745) ||
          lookahead == 2749 ||
          lookahead == 2768 ||
          lookahead == 2784 ||
          lookahead == 2785 ||
          lookahead == 2809 ||
          (2821 <= lookahead && lookahead <= 2828) ||
          lookahead == 2831 ||
          lookahead == 2832 ||
          (2835 <= lookahead && lookahead <= 2856) ||
          (2858 <= lookahead && lookahead <= 2864) ||
          lookahead == 2866 ||
          lookahead == 2867 ||
          (2869 <= lookahead && lookahead <= 2873) ||
          lookahead == 2877 ||
          lookahead == 2908 ||
          lookahead == 2909 ||
          (2911 <= lookahead && lookahead <= 2913) ||
          lookahead == 2929 ||
          lookahead == 2947 ||
          (2949 <= lookahead && lookahead <= 2954) ||
          (2958 <= lookahead && lookahead <= 2960) ||
          (2962 <= lookahead && lookahead <= 2965) ||
          lookahead == 2969 ||
          lookahead == 2970 ||
          lookahead == 2972 ||
          lookahead == 2974 ||
          lookahead == 2975 ||
          lookahead == 2979 ||
          lookahead == 2980 ||
          (2984 <= lookahead && lookahead <= 2986) ||
          (2990 <= lookahead && lookahead <= 3001) ||
          lookahead == 3024 ||
          (3077 <= lookahead && lookahead <= 3084) ||
          (3086 <= lookahead && lookahead <= 3088) ||
          (3090 <= lookahead && lookahead <= 3112) ||
          (3114 <= lookahead && lookahead <= 3129) ||
          lookahead == 3133 ||
          (3160 <= lookahead && lookahead <= 3162) ||
          lookahead == 3168 ||
          lookahead == 3169 ||
          lookahead == 3200 ||
          (3205 <= lookahead && lookahead <= 3212) ||
          (3214 <= lookahead && lookahead <= 3216) ||
          (3218 <= lookahead && lookahead <= 3240) ||
          (3242 <= lookahead && lookahead <= 3251) ||
          (3253 <= lookahead && lookahead <= 3257) ||
          lookahead == 3261 ||
          lookahead == 3294 ||
          lookahead == 3296 ||
          lookahead == 3297 ||
          lookahead == 3313 ||
          lookahead == 3314 ||
          (3333 <= lookahead && lookahead <= 3340) ||
          (3342 <= lookahead && lookahead <= 3344) ||
          (3346 <= lookahead && lookahead <= 3386) ||
          lookahead == 3389 ||
          lookahead == 3406 ||
          (3412 <= lookahead && lookahead <= 3414) ||
          (3423 <= lookahead && lookahead <= 3425) ||
          (3450 <= lookahead && lookahead <= 3455) ||
          (3461 <= lookahead && lookahead <= 3478) ||
          (3482 <= lookahead && lookahead <= 3505) ||
          (3507 <= lookahead && lookahead <= 3515) ||
          lookahead == 3517 ||
          (3520 <= lookahead && lookahead <= 3526) ||
          (3585 <= lookahead && lookahead <= 3632) ||
          lookahead == 3634 ||
          lookahead == 3635 ||
          (3648 <= lookahead && lookahead <= 3654) ||
          lookahead == 3713 ||
          lookahead == 3714 ||
          lookahead == 3716 ||
          (3718 <= lookahead && lookahead <= 3722) ||
          (3724 <= lookahead && lookahead <= 3747) ||
          lookahead == 3749 ||
          (3751 <= lookahead && lookahead <= 3760) ||
          lookahead == 3762 ||
          lookahead == 3763 ||
          lookahead == 3773 ||
          (3776 <= lookahead && lookahead <= 3780) ||
          lookahead == 3782 ||
          (3804 <= lookahead && lookahead <= 3807) ||
          lookahead == 3840 ||
          (3904 <= lookahead && lookahead <= 3911) ||
          (3913 <= lookahead && lookahead <= 3948) ||
          (3976 <= lookahead && lookahead <= 3980) ||
          (4096 <= lookahead && lookahead <= 4138) ||
          lookahead == 4159 ||
          (4176 <= lookahead && lookahead <= 4181) ||
          (4186 <= lookahead && lookahead <= 4189) ||
          lookahead == 4193 ||
          lookahead == 4197 ||
          lookahead == 4198 ||
          (4206 <= lookahead && lookahead <= 4208) ||
          (4213 <= lookahead && lookahead <= 4225) ||
          lookahead == 4238 ||
          (4256 <= lookahead && lookahead <= 4293) ||
          lookahead == 4295 ||
          lookahead == 4301 ||
          (4304 <= lookahead && lookahead <= 4346) ||
          (4348 <= lookahead && lookahead <= 4680) ||
          (4682 <= lookahead && lookahead <= 4685) ||
          (4688 <= lookahead && lookahead <= 4694) ||
          lookahead == 4696 ||
          (4698 <= lookahead && lookahead <= 4701) ||
          (4704 <= lookahead && lookahead <= 4744) ||
          (4746 <= lookahead && lookahead <= 4749) ||
          (4752 <= lookahead && lookahead <= 4784) ||
          (4786 <= lookahead && lookahead <= 4789) ||
          (4792 <= lookahead && lookahead <= 4798) ||
          lookahead == 4800 ||
          (4802 <= lookahead && lookahead <= 4805) ||
          (4808 <= lookahead && lookahead <= 4822) ||
          (4824 <= lookahead && lookahead <= 4880) ||
          (4882 <= lookahead && lookahead <= 4885) ||
          (4888 <= lookahead && lookahead <= 4954) ||
          (4992 <= lookahead && lookahead <= 5007) ||
          (5024 <= lookahead && lookahead <= 5109) ||
          (5112 <= lookahead && lookahead <= 5117) ||
          (5121 <= lookahead && lookahead <= 5740) ||
          (5743 <= lookahead && lookahead <= 5759) ||
          (5761 <= lookahead && lookahead <= 5786) ||
          (5792 <= lookahead && lookahead <= 5866) ||
          (5873 <= lookahead && lookahead <= 5880) ||
          (5888 <= lookahead && lookahead <= 5900) ||
          (5902 <= lookahead && lookahead <= 5905) ||
          (5920 <= lookahead && lookahead <= 5937) ||
          (5952 <= lookahead && lookahead <= 5969) ||
          (5984 <= lookahead && lookahead <= 5996) ||
          (5998 <= lookahead && lookahead <= 6000) ||
          (6016 <= lookahead && lookahead <= 6067) ||
          lookahead == 6103 ||
          lookahead == 6108 ||
          (6176 <= lookahead && lookahead <= 6264) ||
          (6272 <= lookahead && lookahead <= 6276) ||
          (6279 <= lookahead && lookahead <= 6312) ||
          lookahead == 6314 ||
          (6320 <= lookahead && lookahead <= 6389) ||
          (6400 <= lookahead && lookahead <= 6430) ||
          (6480 <= lookahead && lookahead <= 6509) ||
          (6512 <= lookahead && lookahead <= 6516) ||
          (6528 <= lookahead && lookahead <= 6571) ||
          (6576 <= lookahead && lookahead <= 6601) ||
          (6656 <= lookahead && lookahead <= 6678) ||
          (6688 <= lookahead && lookahead <= 6740) ||
          lookahead == 6823 ||
          (6917 <= lookahead && lookahead <= 6963) ||
          (6981 <= lookahead && lookahead <= 6987) ||
          (7043 <= lookahead && lookahead <= 7072) ||
          lookahead == 7086 ||
          lookahead == 7087 ||
          (7098 <= lookahead && lookahead <= 7141) ||
          (7168 <= lookahead && lookahead <= 7203) ||
          (7245 <= lookahead && lookahead <= 7247) ||
          (7258 <= lookahead && lookahead <= 7293) ||
          (7296 <= lookahead && lookahead <= 7304) ||
          (7312 <= lookahead && lookahead <= 7354) ||
          (7357 <= lookahead && lookahead <= 7359) ||
          (7401 <= lookahead && lookahead <= 7404) ||
          (7406 <= lookahead && lookahead <= 7411) ||
          lookahead == 7413 ||
          lookahead == 7414 ||
          lookahead == 7418 ||
          (7424 <= lookahead && lookahead <= 7615) ||
          (7680 <= lookahead && lookahead <= 7957) ||
          (7960 <= lookahead && lookahead <= 7965) ||
          (7968 <= lookahead && lookahead <= 8005) ||
          (8008 <= lookahead && lookahead <= 8013) ||
          (8016 <= lookahead && lookahead <= 8023) ||
          lookahead == 8025 ||
          lookahead == 8027 ||
          lookahead == 8029 ||
          (8031 <= lookahead && lookahead <= 8061) ||
          (8064 <= lookahead && lookahead <= 8116) ||
          (8118 <= lookahead && lookahead <= 8124) ||
          lookahead == 8126 ||
          (8130 <= lookahead && lookahead <= 8132) ||
          (8134 <= lookahead && lookahead <= 8140) ||
          (8144 <= lookahead && lookahead <= 8147) ||
          (8150 <= lookahead && lookahead <= 8155) ||
          (8160 <= lookahead && lookahead <= 8172) ||
          (8178 <= lookahead && lookahead <= 8180) ||
          (8182 <= lookahead && lookahead <= 8188) ||
          lookahead == 8305 ||
          lookahead == 8319 ||
          (8336 <= lookahead && lookahead <= 8348) ||
          lookahead == 8450 ||
          lookahead == 8455 ||
          (8458 <= lookahead && lookahead <= 8467) ||
          lookahead == 8469 ||
          (8473 <= lookahead && lookahead <= 8477) ||
          lookahead == 8484 ||
          lookahead == 8486 ||
          lookahead == 8488 ||
          (8490 <= lookahead && lookahead <= 8493) ||
          (8495 <= lookahead && lookahead <= 8505) ||
          (8508 <= lookahead && lookahead <= 8511) ||
          (8517 <= lookahead && lookahead <= 8521) ||
          lookahead == 8526 ||
          lookahead == 8579 ||
          lookahead == 8580 ||
          (11264 <= lookahead && lookahead <= 11310) ||
          (11312 <= lookahead && lookahead <= 11358) ||
          (11360 <= lookahead && lookahead <= 11492) ||
          (11499 <= lookahead && lookahead <= 11502) ||
          lookahead == 11506 ||
          lookahead == 11507 ||
          (11520 <= lookahead && lookahead <= 11557) ||
          lookahead == 11559 ||
          lookahead == 11565 ||
          (11568 <= lookahead && lookahead <= 11623) ||
          lookahead == 11631 ||
          (11648 <= lookahead && lookahead <= 11670) ||
          (11680 <= lookahead && lookahead <= 11686) ||
          (11688 <= lookahead && lookahead <= 11694) ||
          (11696 <= lookahead && lookahead <= 11702) ||
          (11704 <= lookahead && lookahead <= 11710) ||
          (11712 <= lookahead && lookahead <= 11718) ||
          (11720 <= lookahead && lookahead <= 11726) ||
          (11728 <= lookahead && lookahead <= 11734) ||
          (11736 <= lookahead && lookahead <= 11742) ||
          lookahead == 11823 ||
          lookahead == 12293 ||
          lookahead == 12294 ||
          (12337 <= lookahead && lookahead <= 12341) ||
          lookahead == 12347 ||
          lookahead == 12348 ||
          (12353 <= lookahead && lookahead <= 12438) ||
          (12445 <= lookahead && lookahead <= 12447) ||
          (12449 <= lookahead && lookahead <= 12538) ||
          (12540 <= lookahead && lookahead <= 12543) ||
          (12549 <= lookahead && lookahead <= 12591) ||
          (12593 <= lookahead && lookahead <= 12686) ||
          (12704 <= lookahead && lookahead <= 12730) ||
          (12784 <= lookahead && lookahead <= 12799) ||
          (13312 <= lookahead && lookahead <= 19893) ||
          (19968 <= lookahead && lookahead <= 40943) ||
          (40960 <= lookahead && lookahead <= 42124) ||
          (42192 <= lookahead && lookahead <= 42237) ||
          (42240 <= lookahead && lookahead <= 42508) ||
          (42512 <= lookahead && lookahead <= 42527) ||
          lookahead == 42538 ||
          lookahead == 42539 ||
          (42560 <= lookahead && lookahead <= 42606) ||
          (42623 <= lookahead && lookahead <= 42653) ||
          (42656 <= lookahead && lookahead <= 42725) ||
          (42775 <= lookahead && lookahead <= 42783) ||
          (42786 <= lookahead && lookahead <= 42888) ||
          (42891 <= lookahead && lookahead <= 42943) ||
          (42946 <= lookahead && lookahead <= 42950) ||
          (42999 <= lookahead && lookahead <= 43009) ||
          (43011 <= lookahead && lookahead <= 43013) ||
          (43015 <= lookahead && lookahead <= 43018) ||
          (43020 <= lookahead && lookahead <= 43042) ||
          (43072 <= lookahead && lookahead <= 43123) ||
          (43138 <= lookahead && lookahead <= 43187) ||
          (43250 <= lookahead && lookahead <= 43255) ||
          lookahead == 43259 ||
          lookahead == 43261 ||
          lookahead == 43262 ||
          (43274 <= lookahead && lookahead <= 43301) ||
          (43312 <= lookahead && lookahead <= 43334) ||
          (43360 <= lookahead && lookahead <= 43388) ||
          (43396 <= lookahead && lookahead <= 43442) ||
          lookahead == 43471 ||
          (43488 <= lookahead && lookahead <= 43492) ||
          (43494 <= lookahead && lookahead <= 43503) ||
          (43514 <= lookahead && lookahead <= 43518) ||
          (43520 <= lookahead && lookahead <= 43560) ||
          (43584 <= lookahead && lookahead <= 43586) ||
          (43588 <= lookahead && lookahead <= 43595) ||
          (43616 <= lookahead && lookahead <= 43638) ||
          lookahead == 43642 ||
          (43646 <= lookahead && lookahead <= 43695) ||
          lookahead == 43697 ||
          lookahead == 43701 ||
          lookahead == 43702 ||
          (43705 <= lookahead && lookahead <= 43709) ||
          lookahead == 43712 ||
          lookahead == 43714 ||
          (43739 <= lookahead && lookahead <= 43741) ||
          (43744 <= lookahead && lookahead <= 43754) ||
          (43762 <= lookahead && lookahead <= 43764) ||
          (43777 <= lookahead && lookahead <= 43782) ||
          (43785 <= lookahead && lookahead <= 43790) ||
          (43793 <= lookahead && lookahead <= 43798) ||
          (43808 <= lookahead && lookahead <= 43814) ||
          (43816 <= lookahead && lookahead <= 43822) ||
          (43824 <= lookahead && lookahead <= 43866) ||
          (43868 <= lookahead && lookahead <= 43879) ||
          (43888 <= lookahead && lookahead <= 44002) ||
          (44032 <= lookahead && lookahead <= 55203) ||
          (55216 <= lookahead && lookahead <= 55238) ||
          (55243 <= lookahead && lookahead <= 55291) ||
          (63744 <= lookahead && lookahead <= 64109) ||
          (64112 <= lookahead && lookahead <= 64217) ||
          (64256 <= lookahead && lookahead <= 64262) ||
          (64275 <= lookahead && lookahead <= 64279) ||
          lookahead == 64285 ||
          (64287 <= lookahead && lookahead <= 64296) ||
          (64298 <= lookahead && lookahead <= 64310) ||
          (64312 <= lookahead && lookahead <= 64316) ||
          lookahead == 64318 ||
          lookahead == 64320 ||
          lookahead == 64321 ||
          lookahead == 64323 ||
          lookahead == 64324 ||
          (64326 <= lookahead && lookahead <= 64433) ||
          (64467 <= lookahead && lookahead <= 64829) ||
          (64848 <= lookahead && lookahead <= 64911) ||
          (64914 <= lookahead && lookahead <= 64967) ||
          (65008 <= lookahead && lookahead <= 65019) ||
          (65136 <= lookahead && lookahead <= 65140) ||
          (65142 <= lookahead && lookahead <= 65276) ||
          (65313 <= lookahead && lookahead <= 65338) ||
          (65345 <= lookahead && lookahead <= 65370) ||
          (65382 <= lookahead && lookahead <= 65470) ||
          (65474 <= lookahead && lookahead <= 65479) ||
          (65482 <= lookahead && lookahead <= 65487) ||
          (65490 <= lookahead && lookahead <= 65495) ||
          (65498 <= lookahead && lookahead <= 65500) ||
          (65536 <= lookahead && lookahead <= 65547) ||
          (65549 <= lookahead && lookahead <= 65574) ||
          (65576 <= lookahead && lookahead <= 65594) ||
          lookahead == 65596 ||
          lookahead == 65597 ||
          (65599 <= lookahead && lookahead <= 65613) ||
          (65616 <= lookahead && lookahead <= 65629) ||
          (65664 <= lookahead && lookahead <= 65786) ||
          (66176 <= lookahead && lookahead <= 66204) ||
          (66208 <= lookahead && lookahead <= 66256) ||
          (66304 <= lookahead && lookahead <= 66335) ||
          (66349 <= lookahead && lookahead <= 66368) ||
          (66370 <= lookahead && lookahead <= 66377) ||
          (66384 <= lookahead && lookahead <= 66421) ||
          (66432 <= lookahead && lookahead <= 66461) ||
          (66464 <= lookahead && lookahead <= 66499) ||
          (66504 <= lookahead && lookahead <= 66511) ||
          (66560 <= lookahead && lookahead <= 66717) ||
          (66736 <= lookahead && lookahead <= 66771) ||
          (66776 <= lookahead && lookahead <= 66811) ||
          (66816 <= lookahead && lookahead <= 66855) ||
          (66864 <= lookahead && lookahead <= 66915) ||
          (67072 <= lookahead && lookahead <= 67382) ||
          (67392 <= lookahead && lookahead <= 67413) ||
          (67424 <= lookahead && lookahead <= 67431) ||
          (67584 <= lookahead && lookahead <= 67589) ||
          lookahead == 67592 ||
          (67594 <= lookahead && lookahead <= 67637) ||
          lookahead == 67639 ||
          lookahead == 67640 ||
          lookahead == 67644 ||
          (67647 <= lookahead && lookahead <= 67669) ||
          (67680 <= lookahead && lookahead <= 67702) ||
          (67712 <= lookahead && lookahead <= 67742) ||
          (67808 <= lookahead && lookahead <= 67826) ||
          lookahead == 67828 ||
          lookahead == 67829 ||
          (67840 <= lookahead && lookahead <= 67861) ||
          (67872 <= lookahead && lookahead <= 67897) ||
          (67968 <= lookahead && lookahead <= 68023) ||
          lookahead == 68030 ||
          lookahead == 68031 ||
          lookahead == 68096 ||
          (68112 <= lookahead && lookahead <= 68115) ||
          (68117 <= lookahead && lookahead <= 68119) ||
          (68121 <= lookahead && lookahead <= 68149) ||
          (68192 <= lookahead && lookahead <= 68220) ||
          (68224 <= lookahead && lookahead <= 68252) ||
          (68288 <= lookahead && lookahead <= 68295) ||
          (68297 <= lookahead && lookahead <= 68324) ||
          (68352 <= lookahead && lookahead <= 68405) ||
          (68416 <= lookahead && lookahead <= 68437) ||
          (68448 <= lookahead && lookahead <= 68466) ||
          (68480 <= lookahead && lookahead <= 68497) ||
          (68608 <= lookahead && lookahead <= 68680) ||
          (68736 <= lookahead && lookahead <= 68786) ||
          (68800 <= lookahead && lookahead <= 68850) ||
          (68864 <= lookahead && lookahead <= 68899) ||
          (69376 <= lookahead && lookahead <= 69404) ||
          lookahead == 69415 ||
          (69424 <= lookahead && lookahead <= 69445) ||
          (69600 <= lookahead && lookahead <= 69622) ||
          (69635 <= lookahead && lookahead <= 69687) ||
          (69763 <= lookahead && lookahead <= 69807) ||
          (69840 <= lookahead && lookahead <= 69864) ||
          (69891 <= lookahead && lookahead <= 69926) ||
          lookahead == 69956 ||
          (69968 <= lookahead && lookahead <= 70002) ||
          lookahead == 70006 ||
          (70019 <= lookahead && lookahead <= 70066) ||
          (70081 <= lookahead && lookahead <= 70084) ||
          lookahead == 70106 ||
          lookahead == 70108 ||
          (70144 <= lookahead && lookahead <= 70161) ||
          (70163 <= lookahead && lookahead <= 70187) ||
          (70272 <= lookahead && lookahead <= 70278) ||
          lookahead == 70280 ||
          (70282 <= lookahead && lookahead <= 70285) ||
          (70287 <= lookahead && lookahead <= 70301) ||
          (70303 <= lookahead && lookahead <= 70312) ||
          (70320 <= lookahead && lookahead <= 70366) ||
          (70405 <= lookahead && lookahead <= 70412) ||
          lookahead == 70415 ||
          lookahead == 70416 ||
          (70419 <= lookahead && lookahead <= 70440) ||
          (70442 <= lookahead && lookahead <= 70448) ||
          lookahead == 70450 ||
          lookahead == 70451 ||
          (70453 <= lookahead && lookahead <= 70457) ||
          lookahead == 70461 ||
          lookahead == 70480 ||
          (70493 <= lookahead && lookahead <= 70497) ||
          (70656 <= lookahead && lookahead <= 70708) ||
          (70727 <= lookahead && lookahead <= 70730) ||
          lookahead == 70751 ||
          (70784 <= lookahead && lookahead <= 70831) ||
          lookahead == 70852 ||
          lookahead == 70853 ||
          lookahead == 70855 ||
          (71040 <= lookahead && lookahead <= 71086) ||
          (71128 <= lookahead && lookahead <= 71131) ||
          (71168 <= lookahead && lookahead <= 71215) ||
          lookahead == 71236 ||
          (71296 <= lookahead && lookahead <= 71338) ||
          lookahead == 71352 ||
          (71424 <= lookahead && lookahead <= 71450) ||
          (71680 <= lookahead && lookahead <= 71723) ||
          (71840 <= lookahead && lookahead <= 71903) ||
          lookahead == 71935 ||
          (72096 <= lookahead && lookahead <= 72103) ||
          (72106 <= lookahead && lookahead <= 72144) ||
          lookahead == 72161 ||
          lookahead == 72163 ||
          lookahead == 72192 ||
          (72203 <= lookahead && lookahead <= 72242) ||
          lookahead == 72250 ||
          lookahead == 72272 ||
          (72284 <= lookahead && lookahead <= 72329) ||
          lookahead == 72349 ||
          (72384 <= lookahead && lookahead <= 72440) ||
          (72704 <= lookahead && lookahead <= 72712) ||
          (72714 <= lookahead && lookahead <= 72750) ||
          lookahead == 72768 ||
          (72818 <= lookahead && lookahead <= 72847) ||
          (72960 <= lookahead && lookahead <= 72966) ||
          lookahead == 72968 ||
          lookahead == 72969 ||
          (72971 <= lookahead && lookahead <= 73008) ||
          lookahead == 73030 ||
          (73056 <= lookahead && lookahead <= 73061) ||
          lookahead == 73063 ||
          lookahead == 73064 ||
          (73066 <= lookahead && lookahead <= 73097) ||
          lookahead == 73112 ||
          (73440 <= lookahead && lookahead <= 73458) ||
          (73728 <= lookahead && lookahead <= 74649) ||
          (74880 <= lookahead && lookahead <= 75075) ||
          (77824 <= lookahead && lookahead <= 78894) ||
          (82944 <= lookahead && lookahead <= 83526) ||
          (92160 <= lookahead && lookahead <= 92728) ||
          (92736 <= lookahead && lookahead <= 92766) ||
          (92880 <= lookahead && lookahead <= 92909) ||
          (92928 <= lookahead && lookahead <= 92975) ||
          (92992 <= lookahead && lookahead <= 92995) ||
          (93027 <= lookahead && lookahead <= 93047) ||
          (93053 <= lookahead && lookahead <= 93071) ||
          (93760 <= lookahead && lookahead <= 93823) ||
          (93952 <= lookahead && lookahead <= 94026) ||
          lookahead == 94032 ||
          (94099 <= lookahead && lookahead <= 94111) ||
          lookahead == 94176 ||
          lookahead == 94177 ||
          lookahead == 94179 ||
          (94208 <= lookahead && lookahead <= 100343) ||
          (100352 <= lookahead && lookahead <= 101106) ||
          (110592 <= lookahead && lookahead <= 110878) ||
          (110928 <= lookahead && lookahead <= 110930) ||
          (110948 <= lookahead && lookahead <= 110951) ||
          (110960 <= lookahead && lookahead <= 111355) ||
          (113664 <= lookahead && lookahead <= 113770) ||
          (113776 <= lookahead && lookahead <= 113788) ||
          (113792 <= lookahead && lookahead <= 113800) ||
          (113808 <= lookahead && lookahead <= 113817) ||
          (119808 <= lookahead && lookahead <= 119892) ||
          (119894 <= lookahead && lookahead <= 119964) ||
          lookahead == 119966 ||
          lookahead == 119967 ||
          lookahead == 119970 ||
          lookahead == 119973 ||
          lookahead == 119974 ||
          (119977 <= lookahead && lookahead <= 119980) ||
          (119982 <= lookahead && lookahead <= 119993) ||
          lookahead == 119995 ||
          (119997 <= lookahead && lookahead <= 120003) ||
          (120005 <= lookahead && lookahead <= 120069) ||
          (120071 <= lookahead && lookahead <= 120074) ||
          (120077 <= lookahead && lookahead <= 120084) ||
          (120086 <= lookahead && lookahead <= 120092) ||
          (120094 <= lookahead && lookahead <= 120121) ||
          (120123 <= lookahead && lookahead <= 120126) ||
          (120128 <= lookahead && lookahead <= 120132) ||
          lookahead == 120134 ||
          (120138 <= lookahead && lookahead <= 120144) ||
          (120146 <= lookahead && lookahead <= 120485) ||
          (120488 <= lookahead && lookahead <= 120512) ||
          (120514 <= lookahead && lookahead <= 120538) ||
          (120540 <= lookahead && lookahead <= 120570) ||
          (120572 <= lookahead && lookahead <= 120596) ||
          (120598 <= lookahead && lookahead <= 120628) ||
          (120630 <= lookahead && lookahead <= 120654) ||
          (120656 <= lookahead && lookahead <= 120686) ||
          (120688 <= lookahead && lookahead <= 120712) ||
          (120714 <= lookahead && lookahead <= 120744) ||
          (120746 <= lookahead && lookahead <= 120770) ||
          (120772 <= lookahead && lookahead <= 120779) ||
          (123136 <= lookahead && lookahead <= 123180) ||
          (123191 <= lookahead && lookahead <= 123197) ||
          lookahead == 123214 ||
          (123584 <= lookahead && lookahead <= 123627) ||
          (124928 <= lookahead && lookahead <= 125124) ||
          (125184 <= lookahead && lookahead <= 125251) ||
          lookahead == 125259 ||
          (126464 <= lookahead && lookahead <= 126467) ||
          (126469 <= lookahead && lookahead <= 126495) ||
          lookahead == 126497 ||
          lookahead == 126498 ||
          lookahead == 126500 ||
          lookahead == 126503 ||
          (126505 <= lookahead && lookahead <= 126514) ||
          (126516 <= lookahead && lookahead <= 126519) ||
          lookahead == 126521 ||
          lookahead == 126523 ||
          lookahead == 126530 ||
          lookahead == 126535 ||
          lookahead == 126537 ||
          lookahead == 126539 ||
          (126541 <= lookahead && lookahead <= 126543) ||
          lookahead == 126545 ||
          lookahead == 126546 ||
          lookahead == 126548 ||
          lookahead == 126551 ||
          lookahead == 126553 ||
          lookahead == 126555 ||
          lookahead == 126557 ||
          lookahead == 126559 ||
          lookahead == 126561 ||
          lookahead == 126562 ||
          lookahead == 126564 ||
          (126567 <= lookahead && lookahead <= 126570) ||
          (126572 <= lookahead && lookahead <= 126578) ||
          (126580 <= lookahead && lookahead <= 126583) ||
          (126585 <= lookahead && lookahead <= 126588) ||
          lookahead == 126590 ||
          (126592 <= lookahead && lookahead <= 126601) ||
          (126603 <= lookahead && lookahead <= 126619) ||
          (126625 <= lookahead && lookahead <= 126627) ||
          (126629 <= lookahead && lookahead <= 126633) ||
          (126635 <= lookahead && lookahead <= 126651) ||
          (131072 <= lookahead && lookahead <= 173782) ||
          (173824 <= lookahead && lookahead <= 177972) ||
          (177984 <= lookahead && lookahead <= 178205) ||
          (178208 <= lookahead && lookahead <= 183969) ||
          (183984 <= lookahead && lookahead <= 191456) ||
          (194560 <= lookahead && lookahead <= 195101)) ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'S') ADVANCE(13);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 170 ||
          lookahead == 181 ||
          lookahead == 186 ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 705) ||
          (710 <= lookahead && lookahead <= 721) ||
          (736 <= lookahead && lookahead <= 740) ||
          lookahead == 748 ||
          lookahead == 750 ||
          (880 <= lookahead && lookahead <= 884) ||
          lookahead == 886 ||
          lookahead == 887 ||
          (890 <= lookahead && lookahead <= 893) ||
          lookahead == 895 ||
          lookahead == 902 ||
          (904 <= lookahead && lookahead <= 906) ||
          lookahead == 908 ||
          (910 <= lookahead && lookahead <= 929) ||
          (931 <= lookahead && lookahead <= 1013) ||
          (1015 <= lookahead && lookahead <= 1153) ||
          (1162 <= lookahead && lookahead <= 1327) ||
          (1329 <= lookahead && lookahead <= 1366) ||
          lookahead == 1369 ||
          (1376 <= lookahead && lookahead <= 1416) ||
          (1488 <= lookahead && lookahead <= 1514) ||
          (1519 <= lookahead && lookahead <= 1522) ||
          (1568 <= lookahead && lookahead <= 1610) ||
          lookahead == 1646 ||
          lookahead == 1647 ||
          (1649 <= lookahead && lookahead <= 1747) ||
          lookahead == 1749 ||
          lookahead == 1765 ||
          lookahead == 1766 ||
          lookahead == 1774 ||
          lookahead == 1775 ||
          (1786 <= lookahead && lookahead <= 1788) ||
          lookahead == 1791 ||
          lookahead == 1808 ||
          (1810 <= lookahead && lookahead <= 1839) ||
          (1869 <= lookahead && lookahead <= 1957) ||
          lookahead == 1969 ||
          (1994 <= lookahead && lookahead <= 2026) ||
          lookahead == 2036 ||
          lookahead == 2037 ||
          lookahead == 2042 ||
          (2048 <= lookahead && lookahead <= 2069) ||
          lookahead == 2074 ||
          lookahead == 2084 ||
          lookahead == 2088 ||
          (2112 <= lookahead && lookahead <= 2136) ||
          (2144 <= lookahead && lookahead <= 2154) ||
          (2208 <= lookahead && lookahead <= 2228) ||
          (2230 <= lookahead && lookahead <= 2237) ||
          (2308 <= lookahead && lookahead <= 2361) ||
          lookahead == 2365 ||
          lookahead == 2384 ||
          (2392 <= lookahead && lookahead <= 2401) ||
          (2417 <= lookahead && lookahead <= 2432) ||
          (2437 <= lookahead && lookahead <= 2444) ||
          lookahead == 2447 ||
          lookahead == 2448 ||
          (2451 <= lookahead && lookahead <= 2472) ||
          (2474 <= lookahead && lookahead <= 2480) ||
          lookahead == 2482 ||
          (2486 <= lookahead && lookahead <= 2489) ||
          lookahead == 2493 ||
          lookahead == 2510 ||
          lookahead == 2524 ||
          lookahead == 2525 ||
          (2527 <= lookahead && lookahead <= 2529) ||
          lookahead == 2544 ||
          lookahead == 2545 ||
          lookahead == 2556 ||
          (2565 <= lookahead && lookahead <= 2570) ||
          lookahead == 2575 ||
          lookahead == 2576 ||
          (2579 <= lookahead && lookahead <= 2600) ||
          (2602 <= lookahead && lookahead <= 2608) ||
          lookahead == 2610 ||
          lookahead == 2611 ||
          lookahead == 2613 ||
          lookahead == 2614 ||
          lookahead == 2616 ||
          lookahead == 2617 ||
          (2649 <= lookahead && lookahead <= 2652) ||
          lookahead == 2654 ||
          (2674 <= lookahead && lookahead <= 2676) ||
          (2693 <= lookahead && lookahead <= 2701) ||
          (2703 <= lookahead && lookahead <= 2705) ||
          (2707 <= lookahead && lookahead <= 2728) ||
          (2730 <= lookahead && lookahead <= 2736) ||
          lookahead == 2738 ||
          lookahead == 2739 ||
          (2741 <= lookahead && lookahead <= 2745) ||
          lookahead == 2749 ||
          lookahead == 2768 ||
          lookahead == 2784 ||
          lookahead == 2785 ||
          lookahead == 2809 ||
          (2821 <= lookahead && lookahead <= 2828) ||
          lookahead == 2831 ||
          lookahead == 2832 ||
          (2835 <= lookahead && lookahead <= 2856) ||
          (2858 <= lookahead && lookahead <= 2864) ||
          lookahead == 2866 ||
          lookahead == 2867 ||
          (2869 <= lookahead && lookahead <= 2873) ||
          lookahead == 2877 ||
          lookahead == 2908 ||
          lookahead == 2909 ||
          (2911 <= lookahead && lookahead <= 2913) ||
          lookahead == 2929 ||
          lookahead == 2947 ||
          (2949 <= lookahead && lookahead <= 2954) ||
          (2958 <= lookahead && lookahead <= 2960) ||
          (2962 <= lookahead && lookahead <= 2965) ||
          lookahead == 2969 ||
          lookahead == 2970 ||
          lookahead == 2972 ||
          lookahead == 2974 ||
          lookahead == 2975 ||
          lookahead == 2979 ||
          lookahead == 2980 ||
          (2984 <= lookahead && lookahead <= 2986) ||
          (2990 <= lookahead && lookahead <= 3001) ||
          lookahead == 3024 ||
          (3077 <= lookahead && lookahead <= 3084) ||
          (3086 <= lookahead && lookahead <= 3088) ||
          (3090 <= lookahead && lookahead <= 3112) ||
          (3114 <= lookahead && lookahead <= 3129) ||
          lookahead == 3133 ||
          (3160 <= lookahead && lookahead <= 3162) ||
          lookahead == 3168 ||
          lookahead == 3169 ||
          lookahead == 3200 ||
          (3205 <= lookahead && lookahead <= 3212) ||
          (3214 <= lookahead && lookahead <= 3216) ||
          (3218 <= lookahead && lookahead <= 3240) ||
          (3242 <= lookahead && lookahead <= 3251) ||
          (3253 <= lookahead && lookahead <= 3257) ||
          lookahead == 3261 ||
          lookahead == 3294 ||
          lookahead == 3296 ||
          lookahead == 3297 ||
          lookahead == 3313 ||
          lookahead == 3314 ||
          (3333 <= lookahead && lookahead <= 3340) ||
          (3342 <= lookahead && lookahead <= 3344) ||
          (3346 <= lookahead && lookahead <= 3386) ||
          lookahead == 3389 ||
          lookahead == 3406 ||
          (3412 <= lookahead && lookahead <= 3414) ||
          (3423 <= lookahead && lookahead <= 3425) ||
          (3450 <= lookahead && lookahead <= 3455) ||
          (3461 <= lookahead && lookahead <= 3478) ||
          (3482 <= lookahead && lookahead <= 3505) ||
          (3507 <= lookahead && lookahead <= 3515) ||
          lookahead == 3517 ||
          (3520 <= lookahead && lookahead <= 3526) ||
          (3585 <= lookahead && lookahead <= 3632) ||
          lookahead == 3634 ||
          lookahead == 3635 ||
          (3648 <= lookahead && lookahead <= 3654) ||
          lookahead == 3713 ||
          lookahead == 3714 ||
          lookahead == 3716 ||
          (3718 <= lookahead && lookahead <= 3722) ||
          (3724 <= lookahead && lookahead <= 3747) ||
          lookahead == 3749 ||
          (3751 <= lookahead && lookahead <= 3760) ||
          lookahead == 3762 ||
          lookahead == 3763 ||
          lookahead == 3773 ||
          (3776 <= lookahead && lookahead <= 3780) ||
          lookahead == 3782 ||
          (3804 <= lookahead && lookahead <= 3807) ||
          lookahead == 3840 ||
          (3904 <= lookahead && lookahead <= 3911) ||
          (3913 <= lookahead && lookahead <= 3948) ||
          (3976 <= lookahead && lookahead <= 3980) ||
          (4096 <= lookahead && lookahead <= 4138) ||
          lookahead == 4159 ||
          (4176 <= lookahead && lookahead <= 4181) ||
          (4186 <= lookahead && lookahead <= 4189) ||
          lookahead == 4193 ||
          lookahead == 4197 ||
          lookahead == 4198 ||
          (4206 <= lookahead && lookahead <= 4208) ||
          (4213 <= lookahead && lookahead <= 4225) ||
          lookahead == 4238 ||
          (4256 <= lookahead && lookahead <= 4293) ||
          lookahead == 4295 ||
          lookahead == 4301 ||
          (4304 <= lookahead && lookahead <= 4346) ||
          (4348 <= lookahead && lookahead <= 4680) ||
          (4682 <= lookahead && lookahead <= 4685) ||
          (4688 <= lookahead && lookahead <= 4694) ||
          lookahead == 4696 ||
          (4698 <= lookahead && lookahead <= 4701) ||
          (4704 <= lookahead && lookahead <= 4744) ||
          (4746 <= lookahead && lookahead <= 4749) ||
          (4752 <= lookahead && lookahead <= 4784) ||
          (4786 <= lookahead && lookahead <= 4789) ||
          (4792 <= lookahead && lookahead <= 4798) ||
          lookahead == 4800 ||
          (4802 <= lookahead && lookahead <= 4805) ||
          (4808 <= lookahead && lookahead <= 4822) ||
          (4824 <= lookahead && lookahead <= 4880) ||
          (4882 <= lookahead && lookahead <= 4885) ||
          (4888 <= lookahead && lookahead <= 4954) ||
          (4992 <= lookahead && lookahead <= 5007) ||
          (5024 <= lookahead && lookahead <= 5109) ||
          (5112 <= lookahead && lookahead <= 5117) ||
          (5121 <= lookahead && lookahead <= 5740) ||
          (5743 <= lookahead && lookahead <= 5759) ||
          (5761 <= lookahead && lookahead <= 5786) ||
          (5792 <= lookahead && lookahead <= 5866) ||
          (5873 <= lookahead && lookahead <= 5880) ||
          (5888 <= lookahead && lookahead <= 5900) ||
          (5902 <= lookahead && lookahead <= 5905) ||
          (5920 <= lookahead && lookahead <= 5937) ||
          (5952 <= lookahead && lookahead <= 5969) ||
          (5984 <= lookahead && lookahead <= 5996) ||
          (5998 <= lookahead && lookahead <= 6000) ||
          (6016 <= lookahead && lookahead <= 6067) ||
          lookahead == 6103 ||
          lookahead == 6108 ||
          (6176 <= lookahead && lookahead <= 6264) ||
          (6272 <= lookahead && lookahead <= 6276) ||
          (6279 <= lookahead && lookahead <= 6312) ||
          lookahead == 6314 ||
          (6320 <= lookahead && lookahead <= 6389) ||
          (6400 <= lookahead && lookahead <= 6430) ||
          (6480 <= lookahead && lookahead <= 6509) ||
          (6512 <= lookahead && lookahead <= 6516) ||
          (6528 <= lookahead && lookahead <= 6571) ||
          (6576 <= lookahead && lookahead <= 6601) ||
          (6656 <= lookahead && lookahead <= 6678) ||
          (6688 <= lookahead && lookahead <= 6740) ||
          lookahead == 6823 ||
          (6917 <= lookahead && lookahead <= 6963) ||
          (6981 <= lookahead && lookahead <= 6987) ||
          (7043 <= lookahead && lookahead <= 7072) ||
          lookahead == 7086 ||
          lookahead == 7087 ||
          (7098 <= lookahead && lookahead <= 7141) ||
          (7168 <= lookahead && lookahead <= 7203) ||
          (7245 <= lookahead && lookahead <= 7247) ||
          (7258 <= lookahead && lookahead <= 7293) ||
          (7296 <= lookahead && lookahead <= 7304) ||
          (7312 <= lookahead && lookahead <= 7354) ||
          (7357 <= lookahead && lookahead <= 7359) ||
          (7401 <= lookahead && lookahead <= 7404) ||
          (7406 <= lookahead && lookahead <= 7411) ||
          lookahead == 7413 ||
          lookahead == 7414 ||
          lookahead == 7418 ||
          (7424 <= lookahead && lookahead <= 7615) ||
          (7680 <= lookahead && lookahead <= 7957) ||
          (7960 <= lookahead && lookahead <= 7965) ||
          (7968 <= lookahead && lookahead <= 8005) ||
          (8008 <= lookahead && lookahead <= 8013) ||
          (8016 <= lookahead && lookahead <= 8023) ||
          lookahead == 8025 ||
          lookahead == 8027 ||
          lookahead == 8029 ||
          (8031 <= lookahead && lookahead <= 8061) ||
          (8064 <= lookahead && lookahead <= 8116) ||
          (8118 <= lookahead && lookahead <= 8124) ||
          lookahead == 8126 ||
          (8130 <= lookahead && lookahead <= 8132) ||
          (8134 <= lookahead && lookahead <= 8140) ||
          (8144 <= lookahead && lookahead <= 8147) ||
          (8150 <= lookahead && lookahead <= 8155) ||
          (8160 <= lookahead && lookahead <= 8172) ||
          (8178 <= lookahead && lookahead <= 8180) ||
          (8182 <= lookahead && lookahead <= 8188) ||
          lookahead == 8305 ||
          lookahead == 8319 ||
          (8336 <= lookahead && lookahead <= 8348) ||
          lookahead == 8450 ||
          lookahead == 8455 ||
          (8458 <= lookahead && lookahead <= 8467) ||
          lookahead == 8469 ||
          (8473 <= lookahead && lookahead <= 8477) ||
          lookahead == 8484 ||
          lookahead == 8486 ||
          lookahead == 8488 ||
          (8490 <= lookahead && lookahead <= 8493) ||
          (8495 <= lookahead && lookahead <= 8505) ||
          (8508 <= lookahead && lookahead <= 8511) ||
          (8517 <= lookahead && lookahead <= 8521) ||
          lookahead == 8526 ||
          lookahead == 8579 ||
          lookahead == 8580 ||
          (11264 <= lookahead && lookahead <= 11310) ||
          (11312 <= lookahead && lookahead <= 11358) ||
          (11360 <= lookahead && lookahead <= 11492) ||
          (11499 <= lookahead && lookahead <= 11502) ||
          lookahead == 11506 ||
          lookahead == 11507 ||
          (11520 <= lookahead && lookahead <= 11557) ||
          lookahead == 11559 ||
          lookahead == 11565 ||
          (11568 <= lookahead && lookahead <= 11623) ||
          lookahead == 11631 ||
          (11648 <= lookahead && lookahead <= 11670) ||
          (11680 <= lookahead && lookahead <= 11686) ||
          (11688 <= lookahead && lookahead <= 11694) ||
          (11696 <= lookahead && lookahead <= 11702) ||
          (11704 <= lookahead && lookahead <= 11710) ||
          (11712 <= lookahead && lookahead <= 11718) ||
          (11720 <= lookahead && lookahead <= 11726) ||
          (11728 <= lookahead && lookahead <= 11734) ||
          (11736 <= lookahead && lookahead <= 11742) ||
          lookahead == 11823 ||
          lookahead == 12293 ||
          lookahead == 12294 ||
          (12337 <= lookahead && lookahead <= 12341) ||
          lookahead == 12347 ||
          lookahead == 12348 ||
          (12353 <= lookahead && lookahead <= 12438) ||
          (12445 <= lookahead && lookahead <= 12447) ||
          (12449 <= lookahead && lookahead <= 12538) ||
          (12540 <= lookahead && lookahead <= 12543) ||
          (12549 <= lookahead && lookahead <= 12591) ||
          (12593 <= lookahead && lookahead <= 12686) ||
          (12704 <= lookahead && lookahead <= 12730) ||
          (12784 <= lookahead && lookahead <= 12799) ||
          (13312 <= lookahead && lookahead <= 19893) ||
          (19968 <= lookahead && lookahead <= 40943) ||
          (40960 <= lookahead && lookahead <= 42124) ||
          (42192 <= lookahead && lookahead <= 42237) ||
          (42240 <= lookahead && lookahead <= 42508) ||
          (42512 <= lookahead && lookahead <= 42527) ||
          lookahead == 42538 ||
          lookahead == 42539 ||
          (42560 <= lookahead && lookahead <= 42606) ||
          (42623 <= lookahead && lookahead <= 42653) ||
          (42656 <= lookahead && lookahead <= 42725) ||
          (42775 <= lookahead && lookahead <= 42783) ||
          (42786 <= lookahead && lookahead <= 42888) ||
          (42891 <= lookahead && lookahead <= 42943) ||
          (42946 <= lookahead && lookahead <= 42950) ||
          (42999 <= lookahead && lookahead <= 43009) ||
          (43011 <= lookahead && lookahead <= 43013) ||
          (43015 <= lookahead && lookahead <= 43018) ||
          (43020 <= lookahead && lookahead <= 43042) ||
          (43072 <= lookahead && lookahead <= 43123) ||
          (43138 <= lookahead && lookahead <= 43187) ||
          (43250 <= lookahead && lookahead <= 43255) ||
          lookahead == 43259 ||
          lookahead == 43261 ||
          lookahead == 43262 ||
          (43274 <= lookahead && lookahead <= 43301) ||
          (43312 <= lookahead && lookahead <= 43334) ||
          (43360 <= lookahead && lookahead <= 43388) ||
          (43396 <= lookahead && lookahead <= 43442) ||
          lookahead == 43471 ||
          (43488 <= lookahead && lookahead <= 43492) ||
          (43494 <= lookahead && lookahead <= 43503) ||
          (43514 <= lookahead && lookahead <= 43518) ||
          (43520 <= lookahead && lookahead <= 43560) ||
          (43584 <= lookahead && lookahead <= 43586) ||
          (43588 <= lookahead && lookahead <= 43595) ||
          (43616 <= lookahead && lookahead <= 43638) ||
          lookahead == 43642 ||
          (43646 <= lookahead && lookahead <= 43695) ||
          lookahead == 43697 ||
          lookahead == 43701 ||
          lookahead == 43702 ||
          (43705 <= lookahead && lookahead <= 43709) ||
          lookahead == 43712 ||
          lookahead == 43714 ||
          (43739 <= lookahead && lookahead <= 43741) ||
          (43744 <= lookahead && lookahead <= 43754) ||
          (43762 <= lookahead && lookahead <= 43764) ||
          (43777 <= lookahead && lookahead <= 43782) ||
          (43785 <= lookahead && lookahead <= 43790) ||
          (43793 <= lookahead && lookahead <= 43798) ||
          (43808 <= lookahead && lookahead <= 43814) ||
          (43816 <= lookahead && lookahead <= 43822) ||
          (43824 <= lookahead && lookahead <= 43866) ||
          (43868 <= lookahead && lookahead <= 43879) ||
          (43888 <= lookahead && lookahead <= 44002) ||
          (44032 <= lookahead && lookahead <= 55203) ||
          (55216 <= lookahead && lookahead <= 55238) ||
          (55243 <= lookahead && lookahead <= 55291) ||
          (63744 <= lookahead && lookahead <= 64109) ||
          (64112 <= lookahead && lookahead <= 64217) ||
          (64256 <= lookahead && lookahead <= 64262) ||
          (64275 <= lookahead && lookahead <= 64279) ||
          lookahead == 64285 ||
          (64287 <= lookahead && lookahead <= 64296) ||
          (64298 <= lookahead && lookahead <= 64310) ||
          (64312 <= lookahead && lookahead <= 64316) ||
          lookahead == 64318 ||
          lookahead == 64320 ||
          lookahead == 64321 ||
          lookahead == 64323 ||
          lookahead == 64324 ||
          (64326 <= lookahead && lookahead <= 64433) ||
          (64467 <= lookahead && lookahead <= 64829) ||
          (64848 <= lookahead && lookahead <= 64911) ||
          (64914 <= lookahead && lookahead <= 64967) ||
          (65008 <= lookahead && lookahead <= 65019) ||
          (65136 <= lookahead && lookahead <= 65140) ||
          (65142 <= lookahead && lookahead <= 65276) ||
          (65313 <= lookahead && lookahead <= 65338) ||
          (65345 <= lookahead && lookahead <= 65370) ||
          (65382 <= lookahead && lookahead <= 65470) ||
          (65474 <= lookahead && lookahead <= 65479) ||
          (65482 <= lookahead && lookahead <= 65487) ||
          (65490 <= lookahead && lookahead <= 65495) ||
          (65498 <= lookahead && lookahead <= 65500) ||
          (65536 <= lookahead && lookahead <= 65547) ||
          (65549 <= lookahead && lookahead <= 65574) ||
          (65576 <= lookahead && lookahead <= 65594) ||
          lookahead == 65596 ||
          lookahead == 65597 ||
          (65599 <= lookahead && lookahead <= 65613) ||
          (65616 <= lookahead && lookahead <= 65629) ||
          (65664 <= lookahead && lookahead <= 65786) ||
          (66176 <= lookahead && lookahead <= 66204) ||
          (66208 <= lookahead && lookahead <= 66256) ||
          (66304 <= lookahead && lookahead <= 66335) ||
          (66349 <= lookahead && lookahead <= 66368) ||
          (66370 <= lookahead && lookahead <= 66377) ||
          (66384 <= lookahead && lookahead <= 66421) ||
          (66432 <= lookahead && lookahead <= 66461) ||
          (66464 <= lookahead && lookahead <= 66499) ||
          (66504 <= lookahead && lookahead <= 66511) ||
          (66560 <= lookahead && lookahead <= 66717) ||
          (66736 <= lookahead && lookahead <= 66771) ||
          (66776 <= lookahead && lookahead <= 66811) ||
          (66816 <= lookahead && lookahead <= 66855) ||
          (66864 <= lookahead && lookahead <= 66915) ||
          (67072 <= lookahead && lookahead <= 67382) ||
          (67392 <= lookahead && lookahead <= 67413) ||
          (67424 <= lookahead && lookahead <= 67431) ||
          (67584 <= lookahead && lookahead <= 67589) ||
          lookahead == 67592 ||
          (67594 <= lookahead && lookahead <= 67637) ||
          lookahead == 67639 ||
          lookahead == 67640 ||
          lookahead == 67644 ||
          (67647 <= lookahead && lookahead <= 67669) ||
          (67680 <= lookahead && lookahead <= 67702) ||
          (67712 <= lookahead && lookahead <= 67742) ||
          (67808 <= lookahead && lookahead <= 67826) ||
          lookahead == 67828 ||
          lookahead == 67829 ||
          (67840 <= lookahead && lookahead <= 67861) ||
          (67872 <= lookahead && lookahead <= 67897) ||
          (67968 <= lookahead && lookahead <= 68023) ||
          lookahead == 68030 ||
          lookahead == 68031 ||
          lookahead == 68096 ||
          (68112 <= lookahead && lookahead <= 68115) ||
          (68117 <= lookahead && lookahead <= 68119) ||
          (68121 <= lookahead && lookahead <= 68149) ||
          (68192 <= lookahead && lookahead <= 68220) ||
          (68224 <= lookahead && lookahead <= 68252) ||
          (68288 <= lookahead && lookahead <= 68295) ||
          (68297 <= lookahead && lookahead <= 68324) ||
          (68352 <= lookahead && lookahead <= 68405) ||
          (68416 <= lookahead && lookahead <= 68437) ||
          (68448 <= lookahead && lookahead <= 68466) ||
          (68480 <= lookahead && lookahead <= 68497) ||
          (68608 <= lookahead && lookahead <= 68680) ||
          (68736 <= lookahead && lookahead <= 68786) ||
          (68800 <= lookahead && lookahead <= 68850) ||
          (68864 <= lookahead && lookahead <= 68899) ||
          (69376 <= lookahead && lookahead <= 69404) ||
          lookahead == 69415 ||
          (69424 <= lookahead && lookahead <= 69445) ||
          (69600 <= lookahead && lookahead <= 69622) ||
          (69635 <= lookahead && lookahead <= 69687) ||
          (69763 <= lookahead && lookahead <= 69807) ||
          (69840 <= lookahead && lookahead <= 69864) ||
          (69891 <= lookahead && lookahead <= 69926) ||
          lookahead == 69956 ||
          (69968 <= lookahead && lookahead <= 70002) ||
          lookahead == 70006 ||
          (70019 <= lookahead && lookahead <= 70066) ||
          (70081 <= lookahead && lookahead <= 70084) ||
          lookahead == 70106 ||
          lookahead == 70108 ||
          (70144 <= lookahead && lookahead <= 70161) ||
          (70163 <= lookahead && lookahead <= 70187) ||
          (70272 <= lookahead && lookahead <= 70278) ||
          lookahead == 70280 ||
          (70282 <= lookahead && lookahead <= 70285) ||
          (70287 <= lookahead && lookahead <= 70301) ||
          (70303 <= lookahead && lookahead <= 70312) ||
          (70320 <= lookahead && lookahead <= 70366) ||
          (70405 <= lookahead && lookahead <= 70412) ||
          lookahead == 70415 ||
          lookahead == 70416 ||
          (70419 <= lookahead && lookahead <= 70440) ||
          (70442 <= lookahead && lookahead <= 70448) ||
          lookahead == 70450 ||
          lookahead == 70451 ||
          (70453 <= lookahead && lookahead <= 70457) ||
          lookahead == 70461 ||
          lookahead == 70480 ||
          (70493 <= lookahead && lookahead <= 70497) ||
          (70656 <= lookahead && lookahead <= 70708) ||
          (70727 <= lookahead && lookahead <= 70730) ||
          lookahead == 70751 ||
          (70784 <= lookahead && lookahead <= 70831) ||
          lookahead == 70852 ||
          lookahead == 70853 ||
          lookahead == 70855 ||
          (71040 <= lookahead && lookahead <= 71086) ||
          (71128 <= lookahead && lookahead <= 71131) ||
          (71168 <= lookahead && lookahead <= 71215) ||
          lookahead == 71236 ||
          (71296 <= lookahead && lookahead <= 71338) ||
          lookahead == 71352 ||
          (71424 <= lookahead && lookahead <= 71450) ||
          (71680 <= lookahead && lookahead <= 71723) ||
          (71840 <= lookahead && lookahead <= 71903) ||
          lookahead == 71935 ||
          (72096 <= lookahead && lookahead <= 72103) ||
          (72106 <= lookahead && lookahead <= 72144) ||
          lookahead == 72161 ||
          lookahead == 72163 ||
          lookahead == 72192 ||
          (72203 <= lookahead && lookahead <= 72242) ||
          lookahead == 72250 ||
          lookahead == 72272 ||
          (72284 <= lookahead && lookahead <= 72329) ||
          lookahead == 72349 ||
          (72384 <= lookahead && lookahead <= 72440) ||
          (72704 <= lookahead && lookahead <= 72712) ||
          (72714 <= lookahead && lookahead <= 72750) ||
          lookahead == 72768 ||
          (72818 <= lookahead && lookahead <= 72847) ||
          (72960 <= lookahead && lookahead <= 72966) ||
          lookahead == 72968 ||
          lookahead == 72969 ||
          (72971 <= lookahead && lookahead <= 73008) ||
          lookahead == 73030 ||
          (73056 <= lookahead && lookahead <= 73061) ||
          lookahead == 73063 ||
          lookahead == 73064 ||
          (73066 <= lookahead && lookahead <= 73097) ||
          lookahead == 73112 ||
          (73440 <= lookahead && lookahead <= 73458) ||
          (73728 <= lookahead && lookahead <= 74649) ||
          (74880 <= lookahead && lookahead <= 75075) ||
          (77824 <= lookahead && lookahead <= 78894) ||
          (82944 <= lookahead && lookahead <= 83526) ||
          (92160 <= lookahead && lookahead <= 92728) ||
          (92736 <= lookahead && lookahead <= 92766) ||
          (92880 <= lookahead && lookahead <= 92909) ||
          (92928 <= lookahead && lookahead <= 92975) ||
          (92992 <= lookahead && lookahead <= 92995) ||
          (93027 <= lookahead && lookahead <= 93047) ||
          (93053 <= lookahead && lookahead <= 93071) ||
          (93760 <= lookahead && lookahead <= 93823) ||
          (93952 <= lookahead && lookahead <= 94026) ||
          lookahead == 94032 ||
          (94099 <= lookahead && lookahead <= 94111) ||
          lookahead == 94176 ||
          lookahead == 94177 ||
          lookahead == 94179 ||
          (94208 <= lookahead && lookahead <= 100343) ||
          (100352 <= lookahead && lookahead <= 101106) ||
          (110592 <= lookahead && lookahead <= 110878) ||
          (110928 <= lookahead && lookahead <= 110930) ||
          (110948 <= lookahead && lookahead <= 110951) ||
          (110960 <= lookahead && lookahead <= 111355) ||
          (113664 <= lookahead && lookahead <= 113770) ||
          (113776 <= lookahead && lookahead <= 113788) ||
          (113792 <= lookahead && lookahead <= 113800) ||
          (113808 <= lookahead && lookahead <= 113817) ||
          (119808 <= lookahead && lookahead <= 119892) ||
          (119894 <= lookahead && lookahead <= 119964) ||
          lookahead == 119966 ||
          lookahead == 119967 ||
          lookahead == 119970 ||
          lookahead == 119973 ||
          lookahead == 119974 ||
          (119977 <= lookahead && lookahead <= 119980) ||
          (119982 <= lookahead && lookahead <= 119993) ||
          lookahead == 119995 ||
          (119997 <= lookahead && lookahead <= 120003) ||
          (120005 <= lookahead && lookahead <= 120069) ||
          (120071 <= lookahead && lookahead <= 120074) ||
          (120077 <= lookahead && lookahead <= 120084) ||
          (120086 <= lookahead && lookahead <= 120092) ||
          (120094 <= lookahead && lookahead <= 120121) ||
          (120123 <= lookahead && lookahead <= 120126) ||
          (120128 <= lookahead && lookahead <= 120132) ||
          lookahead == 120134 ||
          (120138 <= lookahead && lookahead <= 120144) ||
          (120146 <= lookahead && lookahead <= 120485) ||
          (120488 <= lookahead && lookahead <= 120512) ||
          (120514 <= lookahead && lookahead <= 120538) ||
          (120540 <= lookahead && lookahead <= 120570) ||
          (120572 <= lookahead && lookahead <= 120596) ||
          (120598 <= lookahead && lookahead <= 120628) ||
          (120630 <= lookahead && lookahead <= 120654) ||
          (120656 <= lookahead && lookahead <= 120686) ||
          (120688 <= lookahead && lookahead <= 120712) ||
          (120714 <= lookahead && lookahead <= 120744) ||
          (120746 <= lookahead && lookahead <= 120770) ||
          (120772 <= lookahead && lookahead <= 120779) ||
          (123136 <= lookahead && lookahead <= 123180) ||
          (123191 <= lookahead && lookahead <= 123197) ||
          lookahead == 123214 ||
          (123584 <= lookahead && lookahead <= 123627) ||
          (124928 <= lookahead && lookahead <= 125124) ||
          (125184 <= lookahead && lookahead <= 125251) ||
          lookahead == 125259 ||
          (126464 <= lookahead && lookahead <= 126467) ||
          (126469 <= lookahead && lookahead <= 126495) ||
          lookahead == 126497 ||
          lookahead == 126498 ||
          lookahead == 126500 ||
          lookahead == 126503 ||
          (126505 <= lookahead && lookahead <= 126514) ||
          (126516 <= lookahead && lookahead <= 126519) ||
          lookahead == 126521 ||
          lookahead == 126523 ||
          lookahead == 126530 ||
          lookahead == 126535 ||
          lookahead == 126537 ||
          lookahead == 126539 ||
          (126541 <= lookahead && lookahead <= 126543) ||
          lookahead == 126545 ||
          lookahead == 126546 ||
          lookahead == 126548 ||
          lookahead == 126551 ||
          lookahead == 126553 ||
          lookahead == 126555 ||
          lookahead == 126557 ||
          lookahead == 126559 ||
          lookahead == 126561 ||
          lookahead == 126562 ||
          lookahead == 126564 ||
          (126567 <= lookahead && lookahead <= 126570) ||
          (126572 <= lookahead && lookahead <= 126578) ||
          (126580 <= lookahead && lookahead <= 126583) ||
          (126585 <= lookahead && lookahead <= 126588) ||
          lookahead == 126590 ||
          (126592 <= lookahead && lookahead <= 126601) ||
          (126603 <= lookahead && lookahead <= 126619) ||
          (126625 <= lookahead && lookahead <= 126627) ||
          (126629 <= lookahead && lookahead <= 126633) ||
          (126635 <= lookahead && lookahead <= 126651) ||
          (131072 <= lookahead && lookahead <= 173782) ||
          (173824 <= lookahead && lookahead <= 177972) ||
          (177984 <= lookahead && lookahead <= 178205) ||
          (178208 <= lookahead && lookahead <= 183969) ||
          (183984 <= lookahead && lookahead <= 191456) ||
          (194560 <= lookahead && lookahead <= 195101)) ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'U') ADVANCE(13);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 170 ||
          lookahead == 181 ||
          lookahead == 186 ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 705) ||
          (710 <= lookahead && lookahead <= 721) ||
          (736 <= lookahead && lookahead <= 740) ||
          lookahead == 748 ||
          lookahead == 750 ||
          (880 <= lookahead && lookahead <= 884) ||
          lookahead == 886 ||
          lookahead == 887 ||
          (890 <= lookahead && lookahead <= 893) ||
          lookahead == 895 ||
          lookahead == 902 ||
          (904 <= lookahead && lookahead <= 906) ||
          lookahead == 908 ||
          (910 <= lookahead && lookahead <= 929) ||
          (931 <= lookahead && lookahead <= 1013) ||
          (1015 <= lookahead && lookahead <= 1153) ||
          (1162 <= lookahead && lookahead <= 1327) ||
          (1329 <= lookahead && lookahead <= 1366) ||
          lookahead == 1369 ||
          (1376 <= lookahead && lookahead <= 1416) ||
          (1488 <= lookahead && lookahead <= 1514) ||
          (1519 <= lookahead && lookahead <= 1522) ||
          (1568 <= lookahead && lookahead <= 1610) ||
          lookahead == 1646 ||
          lookahead == 1647 ||
          (1649 <= lookahead && lookahead <= 1747) ||
          lookahead == 1749 ||
          lookahead == 1765 ||
          lookahead == 1766 ||
          lookahead == 1774 ||
          lookahead == 1775 ||
          (1786 <= lookahead && lookahead <= 1788) ||
          lookahead == 1791 ||
          lookahead == 1808 ||
          (1810 <= lookahead && lookahead <= 1839) ||
          (1869 <= lookahead && lookahead <= 1957) ||
          lookahead == 1969 ||
          (1994 <= lookahead && lookahead <= 2026) ||
          lookahead == 2036 ||
          lookahead == 2037 ||
          lookahead == 2042 ||
          (2048 <= lookahead && lookahead <= 2069) ||
          lookahead == 2074 ||
          lookahead == 2084 ||
          lookahead == 2088 ||
          (2112 <= lookahead && lookahead <= 2136) ||
          (2144 <= lookahead && lookahead <= 2154) ||
          (2208 <= lookahead && lookahead <= 2228) ||
          (2230 <= lookahead && lookahead <= 2237) ||
          (2308 <= lookahead && lookahead <= 2361) ||
          lookahead == 2365 ||
          lookahead == 2384 ||
          (2392 <= lookahead && lookahead <= 2401) ||
          (2417 <= lookahead && lookahead <= 2432) ||
          (2437 <= lookahead && lookahead <= 2444) ||
          lookahead == 2447 ||
          lookahead == 2448 ||
          (2451 <= lookahead && lookahead <= 2472) ||
          (2474 <= lookahead && lookahead <= 2480) ||
          lookahead == 2482 ||
          (2486 <= lookahead && lookahead <= 2489) ||
          lookahead == 2493 ||
          lookahead == 2510 ||
          lookahead == 2524 ||
          lookahead == 2525 ||
          (2527 <= lookahead && lookahead <= 2529) ||
          lookahead == 2544 ||
          lookahead == 2545 ||
          lookahead == 2556 ||
          (2565 <= lookahead && lookahead <= 2570) ||
          lookahead == 2575 ||
          lookahead == 2576 ||
          (2579 <= lookahead && lookahead <= 2600) ||
          (2602 <= lookahead && lookahead <= 2608) ||
          lookahead == 2610 ||
          lookahead == 2611 ||
          lookahead == 2613 ||
          lookahead == 2614 ||
          lookahead == 2616 ||
          lookahead == 2617 ||
          (2649 <= lookahead && lookahead <= 2652) ||
          lookahead == 2654 ||
          (2674 <= lookahead && lookahead <= 2676) ||
          (2693 <= lookahead && lookahead <= 2701) ||
          (2703 <= lookahead && lookahead <= 2705) ||
          (2707 <= lookahead && lookahead <= 2728) ||
          (2730 <= lookahead && lookahead <= 2736) ||
          lookahead == 2738 ||
          lookahead == 2739 ||
          (2741 <= lookahead && lookahead <= 2745) ||
          lookahead == 2749 ||
          lookahead == 2768 ||
          lookahead == 2784 ||
          lookahead == 2785 ||
          lookahead == 2809 ||
          (2821 <= lookahead && lookahead <= 2828) ||
          lookahead == 2831 ||
          lookahead == 2832 ||
          (2835 <= lookahead && lookahead <= 2856) ||
          (2858 <= lookahead && lookahead <= 2864) ||
          lookahead == 2866 ||
          lookahead == 2867 ||
          (2869 <= lookahead && lookahead <= 2873) ||
          lookahead == 2877 ||
          lookahead == 2908 ||
          lookahead == 2909 ||
          (2911 <= lookahead && lookahead <= 2913) ||
          lookahead == 2929 ||
          lookahead == 2947 ||
          (2949 <= lookahead && lookahead <= 2954) ||
          (2958 <= lookahead && lookahead <= 2960) ||
          (2962 <= lookahead && lookahead <= 2965) ||
          lookahead == 2969 ||
          lookahead == 2970 ||
          lookahead == 2972 ||
          lookahead == 2974 ||
          lookahead == 2975 ||
          lookahead == 2979 ||
          lookahead == 2980 ||
          (2984 <= lookahead && lookahead <= 2986) ||
          (2990 <= lookahead && lookahead <= 3001) ||
          lookahead == 3024 ||
          (3077 <= lookahead && lookahead <= 3084) ||
          (3086 <= lookahead && lookahead <= 3088) ||
          (3090 <= lookahead && lookahead <= 3112) ||
          (3114 <= lookahead && lookahead <= 3129) ||
          lookahead == 3133 ||
          (3160 <= lookahead && lookahead <= 3162) ||
          lookahead == 3168 ||
          lookahead == 3169 ||
          lookahead == 3200 ||
          (3205 <= lookahead && lookahead <= 3212) ||
          (3214 <= lookahead && lookahead <= 3216) ||
          (3218 <= lookahead && lookahead <= 3240) ||
          (3242 <= lookahead && lookahead <= 3251) ||
          (3253 <= lookahead && lookahead <= 3257) ||
          lookahead == 3261 ||
          lookahead == 3294 ||
          lookahead == 3296 ||
          lookahead == 3297 ||
          lookahead == 3313 ||
          lookahead == 3314 ||
          (3333 <= lookahead && lookahead <= 3340) ||
          (3342 <= lookahead && lookahead <= 3344) ||
          (3346 <= lookahead && lookahead <= 3386) ||
          lookahead == 3389 ||
          lookahead == 3406 ||
          (3412 <= lookahead && lookahead <= 3414) ||
          (3423 <= lookahead && lookahead <= 3425) ||
          (3450 <= lookahead && lookahead <= 3455) ||
          (3461 <= lookahead && lookahead <= 3478) ||
          (3482 <= lookahead && lookahead <= 3505) ||
          (3507 <= lookahead && lookahead <= 3515) ||
          lookahead == 3517 ||
          (3520 <= lookahead && lookahead <= 3526) ||
          (3585 <= lookahead && lookahead <= 3632) ||
          lookahead == 3634 ||
          lookahead == 3635 ||
          (3648 <= lookahead && lookahead <= 3654) ||
          lookahead == 3713 ||
          lookahead == 3714 ||
          lookahead == 3716 ||
          (3718 <= lookahead && lookahead <= 3722) ||
          (3724 <= lookahead && lookahead <= 3747) ||
          lookahead == 3749 ||
          (3751 <= lookahead && lookahead <= 3760) ||
          lookahead == 3762 ||
          lookahead == 3763 ||
          lookahead == 3773 ||
          (3776 <= lookahead && lookahead <= 3780) ||
          lookahead == 3782 ||
          (3804 <= lookahead && lookahead <= 3807) ||
          lookahead == 3840 ||
          (3904 <= lookahead && lookahead <= 3911) ||
          (3913 <= lookahead && lookahead <= 3948) ||
          (3976 <= lookahead && lookahead <= 3980) ||
          (4096 <= lookahead && lookahead <= 4138) ||
          lookahead == 4159 ||
          (4176 <= lookahead && lookahead <= 4181) ||
          (4186 <= lookahead && lookahead <= 4189) ||
          lookahead == 4193 ||
          lookahead == 4197 ||
          lookahead == 4198 ||
          (4206 <= lookahead && lookahead <= 4208) ||
          (4213 <= lookahead && lookahead <= 4225) ||
          lookahead == 4238 ||
          (4256 <= lookahead && lookahead <= 4293) ||
          lookahead == 4295 ||
          lookahead == 4301 ||
          (4304 <= lookahead && lookahead <= 4346) ||
          (4348 <= lookahead && lookahead <= 4680) ||
          (4682 <= lookahead && lookahead <= 4685) ||
          (4688 <= lookahead && lookahead <= 4694) ||
          lookahead == 4696 ||
          (4698 <= lookahead && lookahead <= 4701) ||
          (4704 <= lookahead && lookahead <= 4744) ||
          (4746 <= lookahead && lookahead <= 4749) ||
          (4752 <= lookahead && lookahead <= 4784) ||
          (4786 <= lookahead && lookahead <= 4789) ||
          (4792 <= lookahead && lookahead <= 4798) ||
          lookahead == 4800 ||
          (4802 <= lookahead && lookahead <= 4805) ||
          (4808 <= lookahead && lookahead <= 4822) ||
          (4824 <= lookahead && lookahead <= 4880) ||
          (4882 <= lookahead && lookahead <= 4885) ||
          (4888 <= lookahead && lookahead <= 4954) ||
          (4992 <= lookahead && lookahead <= 5007) ||
          (5024 <= lookahead && lookahead <= 5109) ||
          (5112 <= lookahead && lookahead <= 5117) ||
          (5121 <= lookahead && lookahead <= 5740) ||
          (5743 <= lookahead && lookahead <= 5759) ||
          (5761 <= lookahead && lookahead <= 5786) ||
          (5792 <= lookahead && lookahead <= 5866) ||
          (5873 <= lookahead && lookahead <= 5880) ||
          (5888 <= lookahead && lookahead <= 5900) ||
          (5902 <= lookahead && lookahead <= 5905) ||
          (5920 <= lookahead && lookahead <= 5937) ||
          (5952 <= lookahead && lookahead <= 5969) ||
          (5984 <= lookahead && lookahead <= 5996) ||
          (5998 <= lookahead && lookahead <= 6000) ||
          (6016 <= lookahead && lookahead <= 6067) ||
          lookahead == 6103 ||
          lookahead == 6108 ||
          (6176 <= lookahead && lookahead <= 6264) ||
          (6272 <= lookahead && lookahead <= 6276) ||
          (6279 <= lookahead && lookahead <= 6312) ||
          lookahead == 6314 ||
          (6320 <= lookahead && lookahead <= 6389) ||
          (6400 <= lookahead && lookahead <= 6430) ||
          (6480 <= lookahead && lookahead <= 6509) ||
          (6512 <= lookahead && lookahead <= 6516) ||
          (6528 <= lookahead && lookahead <= 6571) ||
          (6576 <= lookahead && lookahead <= 6601) ||
          (6656 <= lookahead && lookahead <= 6678) ||
          (6688 <= lookahead && lookahead <= 6740) ||
          lookahead == 6823 ||
          (6917 <= lookahead && lookahead <= 6963) ||
          (6981 <= lookahead && lookahead <= 6987) ||
          (7043 <= lookahead && lookahead <= 7072) ||
          lookahead == 7086 ||
          lookahead == 7087 ||
          (7098 <= lookahead && lookahead <= 7141) ||
          (7168 <= lookahead && lookahead <= 7203) ||
          (7245 <= lookahead && lookahead <= 7247) ||
          (7258 <= lookahead && lookahead <= 7293) ||
          (7296 <= lookahead && lookahead <= 7304) ||
          (7312 <= lookahead && lookahead <= 7354) ||
          (7357 <= lookahead && lookahead <= 7359) ||
          (7401 <= lookahead && lookahead <= 7404) ||
          (7406 <= lookahead && lookahead <= 7411) ||
          lookahead == 7413 ||
          lookahead == 7414 ||
          lookahead == 7418 ||
          (7424 <= lookahead && lookahead <= 7615) ||
          (7680 <= lookahead && lookahead <= 7957) ||
          (7960 <= lookahead && lookahead <= 7965) ||
          (7968 <= lookahead && lookahead <= 8005) ||
          (8008 <= lookahead && lookahead <= 8013) ||
          (8016 <= lookahead && lookahead <= 8023) ||
          lookahead == 8025 ||
          lookahead == 8027 ||
          lookahead == 8029 ||
          (8031 <= lookahead && lookahead <= 8061) ||
          (8064 <= lookahead && lookahead <= 8116) ||
          (8118 <= lookahead && lookahead <= 8124) ||
          lookahead == 8126 ||
          (8130 <= lookahead && lookahead <= 8132) ||
          (8134 <= lookahead && lookahead <= 8140) ||
          (8144 <= lookahead && lookahead <= 8147) ||
          (8150 <= lookahead && lookahead <= 8155) ||
          (8160 <= lookahead && lookahead <= 8172) ||
          (8178 <= lookahead && lookahead <= 8180) ||
          (8182 <= lookahead && lookahead <= 8188) ||
          lookahead == 8305 ||
          lookahead == 8319 ||
          (8336 <= lookahead && lookahead <= 8348) ||
          lookahead == 8450 ||
          lookahead == 8455 ||
          (8458 <= lookahead && lookahead <= 8467) ||
          lookahead == 8469 ||
          (8473 <= lookahead && lookahead <= 8477) ||
          lookahead == 8484 ||
          lookahead == 8486 ||
          lookahead == 8488 ||
          (8490 <= lookahead && lookahead <= 8493) ||
          (8495 <= lookahead && lookahead <= 8505) ||
          (8508 <= lookahead && lookahead <= 8511) ||
          (8517 <= lookahead && lookahead <= 8521) ||
          lookahead == 8526 ||
          lookahead == 8579 ||
          lookahead == 8580 ||
          (11264 <= lookahead && lookahead <= 11310) ||
          (11312 <= lookahead && lookahead <= 11358) ||
          (11360 <= lookahead && lookahead <= 11492) ||
          (11499 <= lookahead && lookahead <= 11502) ||
          lookahead == 11506 ||
          lookahead == 11507 ||
          (11520 <= lookahead && lookahead <= 11557) ||
          lookahead == 11559 ||
          lookahead == 11565 ||
          (11568 <= lookahead && lookahead <= 11623) ||
          lookahead == 11631 ||
          (11648 <= lookahead && lookahead <= 11670) ||
          (11680 <= lookahead && lookahead <= 11686) ||
          (11688 <= lookahead && lookahead <= 11694) ||
          (11696 <= lookahead && lookahead <= 11702) ||
          (11704 <= lookahead && lookahead <= 11710) ||
          (11712 <= lookahead && lookahead <= 11718) ||
          (11720 <= lookahead && lookahead <= 11726) ||
          (11728 <= lookahead && lookahead <= 11734) ||
          (11736 <= lookahead && lookahead <= 11742) ||
          lookahead == 11823 ||
          lookahead == 12293 ||
          lookahead == 12294 ||
          (12337 <= lookahead && lookahead <= 12341) ||
          lookahead == 12347 ||
          lookahead == 12348 ||
          (12353 <= lookahead && lookahead <= 12438) ||
          (12445 <= lookahead && lookahead <= 12447) ||
          (12449 <= lookahead && lookahead <= 12538) ||
          (12540 <= lookahead && lookahead <= 12543) ||
          (12549 <= lookahead && lookahead <= 12591) ||
          (12593 <= lookahead && lookahead <= 12686) ||
          (12704 <= lookahead && lookahead <= 12730) ||
          (12784 <= lookahead && lookahead <= 12799) ||
          (13312 <= lookahead && lookahead <= 19893) ||
          (19968 <= lookahead && lookahead <= 40943) ||
          (40960 <= lookahead && lookahead <= 42124) ||
          (42192 <= lookahead && lookahead <= 42237) ||
          (42240 <= lookahead && lookahead <= 42508) ||
          (42512 <= lookahead && lookahead <= 42527) ||
          lookahead == 42538 ||
          lookahead == 42539 ||
          (42560 <= lookahead && lookahead <= 42606) ||
          (42623 <= lookahead && lookahead <= 42653) ||
          (42656 <= lookahead && lookahead <= 42725) ||
          (42775 <= lookahead && lookahead <= 42783) ||
          (42786 <= lookahead && lookahead <= 42888) ||
          (42891 <= lookahead && lookahead <= 42943) ||
          (42946 <= lookahead && lookahead <= 42950) ||
          (42999 <= lookahead && lookahead <= 43009) ||
          (43011 <= lookahead && lookahead <= 43013) ||
          (43015 <= lookahead && lookahead <= 43018) ||
          (43020 <= lookahead && lookahead <= 43042) ||
          (43072 <= lookahead && lookahead <= 43123) ||
          (43138 <= lookahead && lookahead <= 43187) ||
          (43250 <= lookahead && lookahead <= 43255) ||
          lookahead == 43259 ||
          lookahead == 43261 ||
          lookahead == 43262 ||
          (43274 <= lookahead && lookahead <= 43301) ||
          (43312 <= lookahead && lookahead <= 43334) ||
          (43360 <= lookahead && lookahead <= 43388) ||
          (43396 <= lookahead && lookahead <= 43442) ||
          lookahead == 43471 ||
          (43488 <= lookahead && lookahead <= 43492) ||
          (43494 <= lookahead && lookahead <= 43503) ||
          (43514 <= lookahead && lookahead <= 43518) ||
          (43520 <= lookahead && lookahead <= 43560) ||
          (43584 <= lookahead && lookahead <= 43586) ||
          (43588 <= lookahead && lookahead <= 43595) ||
          (43616 <= lookahead && lookahead <= 43638) ||
          lookahead == 43642 ||
          (43646 <= lookahead && lookahead <= 43695) ||
          lookahead == 43697 ||
          lookahead == 43701 ||
          lookahead == 43702 ||
          (43705 <= lookahead && lookahead <= 43709) ||
          lookahead == 43712 ||
          lookahead == 43714 ||
          (43739 <= lookahead && lookahead <= 43741) ||
          (43744 <= lookahead && lookahead <= 43754) ||
          (43762 <= lookahead && lookahead <= 43764) ||
          (43777 <= lookahead && lookahead <= 43782) ||
          (43785 <= lookahead && lookahead <= 43790) ||
          (43793 <= lookahead && lookahead <= 43798) ||
          (43808 <= lookahead && lookahead <= 43814) ||
          (43816 <= lookahead && lookahead <= 43822) ||
          (43824 <= lookahead && lookahead <= 43866) ||
          (43868 <= lookahead && lookahead <= 43879) ||
          (43888 <= lookahead && lookahead <= 44002) ||
          (44032 <= lookahead && lookahead <= 55203) ||
          (55216 <= lookahead && lookahead <= 55238) ||
          (55243 <= lookahead && lookahead <= 55291) ||
          (63744 <= lookahead && lookahead <= 64109) ||
          (64112 <= lookahead && lookahead <= 64217) ||
          (64256 <= lookahead && lookahead <= 64262) ||
          (64275 <= lookahead && lookahead <= 64279) ||
          lookahead == 64285 ||
          (64287 <= lookahead && lookahead <= 64296) ||
          (64298 <= lookahead && lookahead <= 64310) ||
          (64312 <= lookahead && lookahead <= 64316) ||
          lookahead == 64318 ||
          lookahead == 64320 ||
          lookahead == 64321 ||
          lookahead == 64323 ||
          lookahead == 64324 ||
          (64326 <= lookahead && lookahead <= 64433) ||
          (64467 <= lookahead && lookahead <= 64829) ||
          (64848 <= lookahead && lookahead <= 64911) ||
          (64914 <= lookahead && lookahead <= 64967) ||
          (65008 <= lookahead && lookahead <= 65019) ||
          (65136 <= lookahead && lookahead <= 65140) ||
          (65142 <= lookahead && lookahead <= 65276) ||
          (65313 <= lookahead && lookahead <= 65338) ||
          (65345 <= lookahead && lookahead <= 65370) ||
          (65382 <= lookahead && lookahead <= 65470) ||
          (65474 <= lookahead && lookahead <= 65479) ||
          (65482 <= lookahead && lookahead <= 65487) ||
          (65490 <= lookahead && lookahead <= 65495) ||
          (65498 <= lookahead && lookahead <= 65500) ||
          (65536 <= lookahead && lookahead <= 65547) ||
          (65549 <= lookahead && lookahead <= 65574) ||
          (65576 <= lookahead && lookahead <= 65594) ||
          lookahead == 65596 ||
          lookahead == 65597 ||
          (65599 <= lookahead && lookahead <= 65613) ||
          (65616 <= lookahead && lookahead <= 65629) ||
          (65664 <= lookahead && lookahead <= 65786) ||
          (66176 <= lookahead && lookahead <= 66204) ||
          (66208 <= lookahead && lookahead <= 66256) ||
          (66304 <= lookahead && lookahead <= 66335) ||
          (66349 <= lookahead && lookahead <= 66368) ||
          (66370 <= lookahead && lookahead <= 66377) ||
          (66384 <= lookahead && lookahead <= 66421) ||
          (66432 <= lookahead && lookahead <= 66461) ||
          (66464 <= lookahead && lookahead <= 66499) ||
          (66504 <= lookahead && lookahead <= 66511) ||
          (66560 <= lookahead && lookahead <= 66717) ||
          (66736 <= lookahead && lookahead <= 66771) ||
          (66776 <= lookahead && lookahead <= 66811) ||
          (66816 <= lookahead && lookahead <= 66855) ||
          (66864 <= lookahead && lookahead <= 66915) ||
          (67072 <= lookahead && lookahead <= 67382) ||
          (67392 <= lookahead && lookahead <= 67413) ||
          (67424 <= lookahead && lookahead <= 67431) ||
          (67584 <= lookahead && lookahead <= 67589) ||
          lookahead == 67592 ||
          (67594 <= lookahead && lookahead <= 67637) ||
          lookahead == 67639 ||
          lookahead == 67640 ||
          lookahead == 67644 ||
          (67647 <= lookahead && lookahead <= 67669) ||
          (67680 <= lookahead && lookahead <= 67702) ||
          (67712 <= lookahead && lookahead <= 67742) ||
          (67808 <= lookahead && lookahead <= 67826) ||
          lookahead == 67828 ||
          lookahead == 67829 ||
          (67840 <= lookahead && lookahead <= 67861) ||
          (67872 <= lookahead && lookahead <= 67897) ||
          (67968 <= lookahead && lookahead <= 68023) ||
          lookahead == 68030 ||
          lookahead == 68031 ||
          lookahead == 68096 ||
          (68112 <= lookahead && lookahead <= 68115) ||
          (68117 <= lookahead && lookahead <= 68119) ||
          (68121 <= lookahead && lookahead <= 68149) ||
          (68192 <= lookahead && lookahead <= 68220) ||
          (68224 <= lookahead && lookahead <= 68252) ||
          (68288 <= lookahead && lookahead <= 68295) ||
          (68297 <= lookahead && lookahead <= 68324) ||
          (68352 <= lookahead && lookahead <= 68405) ||
          (68416 <= lookahead && lookahead <= 68437) ||
          (68448 <= lookahead && lookahead <= 68466) ||
          (68480 <= lookahead && lookahead <= 68497) ||
          (68608 <= lookahead && lookahead <= 68680) ||
          (68736 <= lookahead && lookahead <= 68786) ||
          (68800 <= lookahead && lookahead <= 68850) ||
          (68864 <= lookahead && lookahead <= 68899) ||
          (69376 <= lookahead && lookahead <= 69404) ||
          lookahead == 69415 ||
          (69424 <= lookahead && lookahead <= 69445) ||
          (69600 <= lookahead && lookahead <= 69622) ||
          (69635 <= lookahead && lookahead <= 69687) ||
          (69763 <= lookahead && lookahead <= 69807) ||
          (69840 <= lookahead && lookahead <= 69864) ||
          (69891 <= lookahead && lookahead <= 69926) ||
          lookahead == 69956 ||
          (69968 <= lookahead && lookahead <= 70002) ||
          lookahead == 70006 ||
          (70019 <= lookahead && lookahead <= 70066) ||
          (70081 <= lookahead && lookahead <= 70084) ||
          lookahead == 70106 ||
          lookahead == 70108 ||
          (70144 <= lookahead && lookahead <= 70161) ||
          (70163 <= lookahead && lookahead <= 70187) ||
          (70272 <= lookahead && lookahead <= 70278) ||
          lookahead == 70280 ||
          (70282 <= lookahead && lookahead <= 70285) ||
          (70287 <= lookahead && lookahead <= 70301) ||
          (70303 <= lookahead && lookahead <= 70312) ||
          (70320 <= lookahead && lookahead <= 70366) ||
          (70405 <= lookahead && lookahead <= 70412) ||
          lookahead == 70415 ||
          lookahead == 70416 ||
          (70419 <= lookahead && lookahead <= 70440) ||
          (70442 <= lookahead && lookahead <= 70448) ||
          lookahead == 70450 ||
          lookahead == 70451 ||
          (70453 <= lookahead && lookahead <= 70457) ||
          lookahead == 70461 ||
          lookahead == 70480 ||
          (70493 <= lookahead && lookahead <= 70497) ||
          (70656 <= lookahead && lookahead <= 70708) ||
          (70727 <= lookahead && lookahead <= 70730) ||
          lookahead == 70751 ||
          (70784 <= lookahead && lookahead <= 70831) ||
          lookahead == 70852 ||
          lookahead == 70853 ||
          lookahead == 70855 ||
          (71040 <= lookahead && lookahead <= 71086) ||
          (71128 <= lookahead && lookahead <= 71131) ||
          (71168 <= lookahead && lookahead <= 71215) ||
          lookahead == 71236 ||
          (71296 <= lookahead && lookahead <= 71338) ||
          lookahead == 71352 ||
          (71424 <= lookahead && lookahead <= 71450) ||
          (71680 <= lookahead && lookahead <= 71723) ||
          (71840 <= lookahead && lookahead <= 71903) ||
          lookahead == 71935 ||
          (72096 <= lookahead && lookahead <= 72103) ||
          (72106 <= lookahead && lookahead <= 72144) ||
          lookahead == 72161 ||
          lookahead == 72163 ||
          lookahead == 72192 ||
          (72203 <= lookahead && lookahead <= 72242) ||
          lookahead == 72250 ||
          lookahead == 72272 ||
          (72284 <= lookahead && lookahead <= 72329) ||
          lookahead == 72349 ||
          (72384 <= lookahead && lookahead <= 72440) ||
          (72704 <= lookahead && lookahead <= 72712) ||
          (72714 <= lookahead && lookahead <= 72750) ||
          lookahead == 72768 ||
          (72818 <= lookahead && lookahead <= 72847) ||
          (72960 <= lookahead && lookahead <= 72966) ||
          lookahead == 72968 ||
          lookahead == 72969 ||
          (72971 <= lookahead && lookahead <= 73008) ||
          lookahead == 73030 ||
          (73056 <= lookahead && lookahead <= 73061) ||
          lookahead == 73063 ||
          lookahead == 73064 ||
          (73066 <= lookahead && lookahead <= 73097) ||
          lookahead == 73112 ||
          (73440 <= lookahead && lookahead <= 73458) ||
          (73728 <= lookahead && lookahead <= 74649) ||
          (74880 <= lookahead && lookahead <= 75075) ||
          (77824 <= lookahead && lookahead <= 78894) ||
          (82944 <= lookahead && lookahead <= 83526) ||
          (92160 <= lookahead && lookahead <= 92728) ||
          (92736 <= lookahead && lookahead <= 92766) ||
          (92880 <= lookahead && lookahead <= 92909) ||
          (92928 <= lookahead && lookahead <= 92975) ||
          (92992 <= lookahead && lookahead <= 92995) ||
          (93027 <= lookahead && lookahead <= 93047) ||
          (93053 <= lookahead && lookahead <= 93071) ||
          (93760 <= lookahead && lookahead <= 93823) ||
          (93952 <= lookahead && lookahead <= 94026) ||
          lookahead == 94032 ||
          (94099 <= lookahead && lookahead <= 94111) ||
          lookahead == 94176 ||
          lookahead == 94177 ||
          lookahead == 94179 ||
          (94208 <= lookahead && lookahead <= 100343) ||
          (100352 <= lookahead && lookahead <= 101106) ||
          (110592 <= lookahead && lookahead <= 110878) ||
          (110928 <= lookahead && lookahead <= 110930) ||
          (110948 <= lookahead && lookahead <= 110951) ||
          (110960 <= lookahead && lookahead <= 111355) ||
          (113664 <= lookahead && lookahead <= 113770) ||
          (113776 <= lookahead && lookahead <= 113788) ||
          (113792 <= lookahead && lookahead <= 113800) ||
          (113808 <= lookahead && lookahead <= 113817) ||
          (119808 <= lookahead && lookahead <= 119892) ||
          (119894 <= lookahead && lookahead <= 119964) ||
          lookahead == 119966 ||
          lookahead == 119967 ||
          lookahead == 119970 ||
          lookahead == 119973 ||
          lookahead == 119974 ||
          (119977 <= lookahead && lookahead <= 119980) ||
          (119982 <= lookahead && lookahead <= 119993) ||
          lookahead == 119995 ||
          (119997 <= lookahead && lookahead <= 120003) ||
          (120005 <= lookahead && lookahead <= 120069) ||
          (120071 <= lookahead && lookahead <= 120074) ||
          (120077 <= lookahead && lookahead <= 120084) ||
          (120086 <= lookahead && lookahead <= 120092) ||
          (120094 <= lookahead && lookahead <= 120121) ||
          (120123 <= lookahead && lookahead <= 120126) ||
          (120128 <= lookahead && lookahead <= 120132) ||
          lookahead == 120134 ||
          (120138 <= lookahead && lookahead <= 120144) ||
          (120146 <= lookahead && lookahead <= 120485) ||
          (120488 <= lookahead && lookahead <= 120512) ||
          (120514 <= lookahead && lookahead <= 120538) ||
          (120540 <= lookahead && lookahead <= 120570) ||
          (120572 <= lookahead && lookahead <= 120596) ||
          (120598 <= lookahead && lookahead <= 120628) ||
          (120630 <= lookahead && lookahead <= 120654) ||
          (120656 <= lookahead && lookahead <= 120686) ||
          (120688 <= lookahead && lookahead <= 120712) ||
          (120714 <= lookahead && lookahead <= 120744) ||
          (120746 <= lookahead && lookahead <= 120770) ||
          (120772 <= lookahead && lookahead <= 120779) ||
          (123136 <= lookahead && lookahead <= 123180) ||
          (123191 <= lookahead && lookahead <= 123197) ||
          lookahead == 123214 ||
          (123584 <= lookahead && lookahead <= 123627) ||
          (124928 <= lookahead && lookahead <= 125124) ||
          (125184 <= lookahead && lookahead <= 125251) ||
          lookahead == 125259 ||
          (126464 <= lookahead && lookahead <= 126467) ||
          (126469 <= lookahead && lookahead <= 126495) ||
          lookahead == 126497 ||
          lookahead == 126498 ||
          lookahead == 126500 ||
          lookahead == 126503 ||
          (126505 <= lookahead && lookahead <= 126514) ||
          (126516 <= lookahead && lookahead <= 126519) ||
          lookahead == 126521 ||
          lookahead == 126523 ||
          lookahead == 126530 ||
          lookahead == 126535 ||
          lookahead == 126537 ||
          lookahead == 126539 ||
          (126541 <= lookahead && lookahead <= 126543) ||
          lookahead == 126545 ||
          lookahead == 126546 ||
          lookahead == 126548 ||
          lookahead == 126551 ||
          lookahead == 126553 ||
          lookahead == 126555 ||
          lookahead == 126557 ||
          lookahead == 126559 ||
          lookahead == 126561 ||
          lookahead == 126562 ||
          lookahead == 126564 ||
          (126567 <= lookahead && lookahead <= 126570) ||
          (126572 <= lookahead && lookahead <= 126578) ||
          (126580 <= lookahead && lookahead <= 126583) ||
          (126585 <= lookahead && lookahead <= 126588) ||
          lookahead == 126590 ||
          (126592 <= lookahead && lookahead <= 126601) ||
          (126603 <= lookahead && lookahead <= 126619) ||
          (126625 <= lookahead && lookahead <= 126627) ||
          (126629 <= lookahead && lookahead <= 126633) ||
          (126635 <= lookahead && lookahead <= 126651) ||
          (131072 <= lookahead && lookahead <= 173782) ||
          (173824 <= lookahead && lookahead <= 177972) ||
          (177984 <= lookahead && lookahead <= 178205) ||
          (178208 <= lookahead && lookahead <= 183969) ||
          (183984 <= lookahead && lookahead <= 191456) ||
          (194560 <= lookahead && lookahead <= 195101)) ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 170 ||
          lookahead == 181 ||
          lookahead == 186 ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 705) ||
          (710 <= lookahead && lookahead <= 721) ||
          (736 <= lookahead && lookahead <= 740) ||
          lookahead == 748 ||
          lookahead == 750 ||
          (880 <= lookahead && lookahead <= 884) ||
          lookahead == 886 ||
          lookahead == 887 ||
          (890 <= lookahead && lookahead <= 893) ||
          lookahead == 895 ||
          lookahead == 902 ||
          (904 <= lookahead && lookahead <= 906) ||
          lookahead == 908 ||
          (910 <= lookahead && lookahead <= 929) ||
          (931 <= lookahead && lookahead <= 1013) ||
          (1015 <= lookahead && lookahead <= 1153) ||
          (1162 <= lookahead && lookahead <= 1327) ||
          (1329 <= lookahead && lookahead <= 1366) ||
          lookahead == 1369 ||
          (1376 <= lookahead && lookahead <= 1416) ||
          (1488 <= lookahead && lookahead <= 1514) ||
          (1519 <= lookahead && lookahead <= 1522) ||
          (1568 <= lookahead && lookahead <= 1610) ||
          lookahead == 1646 ||
          lookahead == 1647 ||
          (1649 <= lookahead && lookahead <= 1747) ||
          lookahead == 1749 ||
          lookahead == 1765 ||
          lookahead == 1766 ||
          lookahead == 1774 ||
          lookahead == 1775 ||
          (1786 <= lookahead && lookahead <= 1788) ||
          lookahead == 1791 ||
          lookahead == 1808 ||
          (1810 <= lookahead && lookahead <= 1839) ||
          (1869 <= lookahead && lookahead <= 1957) ||
          lookahead == 1969 ||
          (1994 <= lookahead && lookahead <= 2026) ||
          lookahead == 2036 ||
          lookahead == 2037 ||
          lookahead == 2042 ||
          (2048 <= lookahead && lookahead <= 2069) ||
          lookahead == 2074 ||
          lookahead == 2084 ||
          lookahead == 2088 ||
          (2112 <= lookahead && lookahead <= 2136) ||
          (2144 <= lookahead && lookahead <= 2154) ||
          (2208 <= lookahead && lookahead <= 2228) ||
          (2230 <= lookahead && lookahead <= 2237) ||
          (2308 <= lookahead && lookahead <= 2361) ||
          lookahead == 2365 ||
          lookahead == 2384 ||
          (2392 <= lookahead && lookahead <= 2401) ||
          (2417 <= lookahead && lookahead <= 2432) ||
          (2437 <= lookahead && lookahead <= 2444) ||
          lookahead == 2447 ||
          lookahead == 2448 ||
          (2451 <= lookahead && lookahead <= 2472) ||
          (2474 <= lookahead && lookahead <= 2480) ||
          lookahead == 2482 ||
          (2486 <= lookahead && lookahead <= 2489) ||
          lookahead == 2493 ||
          lookahead == 2510 ||
          lookahead == 2524 ||
          lookahead == 2525 ||
          (2527 <= lookahead && lookahead <= 2529) ||
          lookahead == 2544 ||
          lookahead == 2545 ||
          lookahead == 2556 ||
          (2565 <= lookahead && lookahead <= 2570) ||
          lookahead == 2575 ||
          lookahead == 2576 ||
          (2579 <= lookahead && lookahead <= 2600) ||
          (2602 <= lookahead && lookahead <= 2608) ||
          lookahead == 2610 ||
          lookahead == 2611 ||
          lookahead == 2613 ||
          lookahead == 2614 ||
          lookahead == 2616 ||
          lookahead == 2617 ||
          (2649 <= lookahead && lookahead <= 2652) ||
          lookahead == 2654 ||
          (2674 <= lookahead && lookahead <= 2676) ||
          (2693 <= lookahead && lookahead <= 2701) ||
          (2703 <= lookahead && lookahead <= 2705) ||
          (2707 <= lookahead && lookahead <= 2728) ||
          (2730 <= lookahead && lookahead <= 2736) ||
          lookahead == 2738 ||
          lookahead == 2739 ||
          (2741 <= lookahead && lookahead <= 2745) ||
          lookahead == 2749 ||
          lookahead == 2768 ||
          lookahead == 2784 ||
          lookahead == 2785 ||
          lookahead == 2809 ||
          (2821 <= lookahead && lookahead <= 2828) ||
          lookahead == 2831 ||
          lookahead == 2832 ||
          (2835 <= lookahead && lookahead <= 2856) ||
          (2858 <= lookahead && lookahead <= 2864) ||
          lookahead == 2866 ||
          lookahead == 2867 ||
          (2869 <= lookahead && lookahead <= 2873) ||
          lookahead == 2877 ||
          lookahead == 2908 ||
          lookahead == 2909 ||
          (2911 <= lookahead && lookahead <= 2913) ||
          lookahead == 2929 ||
          lookahead == 2947 ||
          (2949 <= lookahead && lookahead <= 2954) ||
          (2958 <= lookahead && lookahead <= 2960) ||
          (2962 <= lookahead && lookahead <= 2965) ||
          lookahead == 2969 ||
          lookahead == 2970 ||
          lookahead == 2972 ||
          lookahead == 2974 ||
          lookahead == 2975 ||
          lookahead == 2979 ||
          lookahead == 2980 ||
          (2984 <= lookahead && lookahead <= 2986) ||
          (2990 <= lookahead && lookahead <= 3001) ||
          lookahead == 3024 ||
          (3077 <= lookahead && lookahead <= 3084) ||
          (3086 <= lookahead && lookahead <= 3088) ||
          (3090 <= lookahead && lookahead <= 3112) ||
          (3114 <= lookahead && lookahead <= 3129) ||
          lookahead == 3133 ||
          (3160 <= lookahead && lookahead <= 3162) ||
          lookahead == 3168 ||
          lookahead == 3169 ||
          lookahead == 3200 ||
          (3205 <= lookahead && lookahead <= 3212) ||
          (3214 <= lookahead && lookahead <= 3216) ||
          (3218 <= lookahead && lookahead <= 3240) ||
          (3242 <= lookahead && lookahead <= 3251) ||
          (3253 <= lookahead && lookahead <= 3257) ||
          lookahead == 3261 ||
          lookahead == 3294 ||
          lookahead == 3296 ||
          lookahead == 3297 ||
          lookahead == 3313 ||
          lookahead == 3314 ||
          (3333 <= lookahead && lookahead <= 3340) ||
          (3342 <= lookahead && lookahead <= 3344) ||
          (3346 <= lookahead && lookahead <= 3386) ||
          lookahead == 3389 ||
          lookahead == 3406 ||
          (3412 <= lookahead && lookahead <= 3414) ||
          (3423 <= lookahead && lookahead <= 3425) ||
          (3450 <= lookahead && lookahead <= 3455) ||
          (3461 <= lookahead && lookahead <= 3478) ||
          (3482 <= lookahead && lookahead <= 3505) ||
          (3507 <= lookahead && lookahead <= 3515) ||
          lookahead == 3517 ||
          (3520 <= lookahead && lookahead <= 3526) ||
          (3585 <= lookahead && lookahead <= 3632) ||
          lookahead == 3634 ||
          lookahead == 3635 ||
          (3648 <= lookahead && lookahead <= 3654) ||
          lookahead == 3713 ||
          lookahead == 3714 ||
          lookahead == 3716 ||
          (3718 <= lookahead && lookahead <= 3722) ||
          (3724 <= lookahead && lookahead <= 3747) ||
          lookahead == 3749 ||
          (3751 <= lookahead && lookahead <= 3760) ||
          lookahead == 3762 ||
          lookahead == 3763 ||
          lookahead == 3773 ||
          (3776 <= lookahead && lookahead <= 3780) ||
          lookahead == 3782 ||
          (3804 <= lookahead && lookahead <= 3807) ||
          lookahead == 3840 ||
          (3904 <= lookahead && lookahead <= 3911) ||
          (3913 <= lookahead && lookahead <= 3948) ||
          (3976 <= lookahead && lookahead <= 3980) ||
          (4096 <= lookahead && lookahead <= 4138) ||
          lookahead == 4159 ||
          (4176 <= lookahead && lookahead <= 4181) ||
          (4186 <= lookahead && lookahead <= 4189) ||
          lookahead == 4193 ||
          lookahead == 4197 ||
          lookahead == 4198 ||
          (4206 <= lookahead && lookahead <= 4208) ||
          (4213 <= lookahead && lookahead <= 4225) ||
          lookahead == 4238 ||
          (4256 <= lookahead && lookahead <= 4293) ||
          lookahead == 4295 ||
          lookahead == 4301 ||
          (4304 <= lookahead && lookahead <= 4346) ||
          (4348 <= lookahead && lookahead <= 4680) ||
          (4682 <= lookahead && lookahead <= 4685) ||
          (4688 <= lookahead && lookahead <= 4694) ||
          lookahead == 4696 ||
          (4698 <= lookahead && lookahead <= 4701) ||
          (4704 <= lookahead && lookahead <= 4744) ||
          (4746 <= lookahead && lookahead <= 4749) ||
          (4752 <= lookahead && lookahead <= 4784) ||
          (4786 <= lookahead && lookahead <= 4789) ||
          (4792 <= lookahead && lookahead <= 4798) ||
          lookahead == 4800 ||
          (4802 <= lookahead && lookahead <= 4805) ||
          (4808 <= lookahead && lookahead <= 4822) ||
          (4824 <= lookahead && lookahead <= 4880) ||
          (4882 <= lookahead && lookahead <= 4885) ||
          (4888 <= lookahead && lookahead <= 4954) ||
          (4992 <= lookahead && lookahead <= 5007) ||
          (5024 <= lookahead && lookahead <= 5109) ||
          (5112 <= lookahead && lookahead <= 5117) ||
          (5121 <= lookahead && lookahead <= 5740) ||
          (5743 <= lookahead && lookahead <= 5759) ||
          (5761 <= lookahead && lookahead <= 5786) ||
          (5792 <= lookahead && lookahead <= 5866) ||
          (5873 <= lookahead && lookahead <= 5880) ||
          (5888 <= lookahead && lookahead <= 5900) ||
          (5902 <= lookahead && lookahead <= 5905) ||
          (5920 <= lookahead && lookahead <= 5937) ||
          (5952 <= lookahead && lookahead <= 5969) ||
          (5984 <= lookahead && lookahead <= 5996) ||
          (5998 <= lookahead && lookahead <= 6000) ||
          (6016 <= lookahead && lookahead <= 6067) ||
          lookahead == 6103 ||
          lookahead == 6108 ||
          (6176 <= lookahead && lookahead <= 6264) ||
          (6272 <= lookahead && lookahead <= 6276) ||
          (6279 <= lookahead && lookahead <= 6312) ||
          lookahead == 6314 ||
          (6320 <= lookahead && lookahead <= 6389) ||
          (6400 <= lookahead && lookahead <= 6430) ||
          (6480 <= lookahead && lookahead <= 6509) ||
          (6512 <= lookahead && lookahead <= 6516) ||
          (6528 <= lookahead && lookahead <= 6571) ||
          (6576 <= lookahead && lookahead <= 6601) ||
          (6656 <= lookahead && lookahead <= 6678) ||
          (6688 <= lookahead && lookahead <= 6740) ||
          lookahead == 6823 ||
          (6917 <= lookahead && lookahead <= 6963) ||
          (6981 <= lookahead && lookahead <= 6987) ||
          (7043 <= lookahead && lookahead <= 7072) ||
          lookahead == 7086 ||
          lookahead == 7087 ||
          (7098 <= lookahead && lookahead <= 7141) ||
          (7168 <= lookahead && lookahead <= 7203) ||
          (7245 <= lookahead && lookahead <= 7247) ||
          (7258 <= lookahead && lookahead <= 7293) ||
          (7296 <= lookahead && lookahead <= 7304) ||
          (7312 <= lookahead && lookahead <= 7354) ||
          (7357 <= lookahead && lookahead <= 7359) ||
          (7401 <= lookahead && lookahead <= 7404) ||
          (7406 <= lookahead && lookahead <= 7411) ||
          lookahead == 7413 ||
          lookahead == 7414 ||
          lookahead == 7418 ||
          (7424 <= lookahead && lookahead <= 7615) ||
          (7680 <= lookahead && lookahead <= 7957) ||
          (7960 <= lookahead && lookahead <= 7965) ||
          (7968 <= lookahead && lookahead <= 8005) ||
          (8008 <= lookahead && lookahead <= 8013) ||
          (8016 <= lookahead && lookahead <= 8023) ||
          lookahead == 8025 ||
          lookahead == 8027 ||
          lookahead == 8029 ||
          (8031 <= lookahead && lookahead <= 8061) ||
          (8064 <= lookahead && lookahead <= 8116) ||
          (8118 <= lookahead && lookahead <= 8124) ||
          lookahead == 8126 ||
          (8130 <= lookahead && lookahead <= 8132) ||
          (8134 <= lookahead && lookahead <= 8140) ||
          (8144 <= lookahead && lookahead <= 8147) ||
          (8150 <= lookahead && lookahead <= 8155) ||
          (8160 <= lookahead && lookahead <= 8172) ||
          (8178 <= lookahead && lookahead <= 8180) ||
          (8182 <= lookahead && lookahead <= 8188) ||
          lookahead == 8305 ||
          lookahead == 8319 ||
          (8336 <= lookahead && lookahead <= 8348) ||
          lookahead == 8450 ||
          lookahead == 8455 ||
          (8458 <= lookahead && lookahead <= 8467) ||
          lookahead == 8469 ||
          (8473 <= lookahead && lookahead <= 8477) ||
          lookahead == 8484 ||
          lookahead == 8486 ||
          lookahead == 8488 ||
          (8490 <= lookahead && lookahead <= 8493) ||
          (8495 <= lookahead && lookahead <= 8505) ||
          (8508 <= lookahead && lookahead <= 8511) ||
          (8517 <= lookahead && lookahead <= 8521) ||
          lookahead == 8526 ||
          lookahead == 8579 ||
          lookahead == 8580 ||
          (11264 <= lookahead && lookahead <= 11310) ||
          (11312 <= lookahead && lookahead <= 11358) ||
          (11360 <= lookahead && lookahead <= 11492) ||
          (11499 <= lookahead && lookahead <= 11502) ||
          lookahead == 11506 ||
          lookahead == 11507 ||
          (11520 <= lookahead && lookahead <= 11557) ||
          lookahead == 11559 ||
          lookahead == 11565 ||
          (11568 <= lookahead && lookahead <= 11623) ||
          lookahead == 11631 ||
          (11648 <= lookahead && lookahead <= 11670) ||
          (11680 <= lookahead && lookahead <= 11686) ||
          (11688 <= lookahead && lookahead <= 11694) ||
          (11696 <= lookahead && lookahead <= 11702) ||
          (11704 <= lookahead && lookahead <= 11710) ||
          (11712 <= lookahead && lookahead <= 11718) ||
          (11720 <= lookahead && lookahead <= 11726) ||
          (11728 <= lookahead && lookahead <= 11734) ||
          (11736 <= lookahead && lookahead <= 11742) ||
          lookahead == 11823 ||
          lookahead == 12293 ||
          lookahead == 12294 ||
          (12337 <= lookahead && lookahead <= 12341) ||
          lookahead == 12347 ||
          lookahead == 12348 ||
          (12353 <= lookahead && lookahead <= 12438) ||
          (12445 <= lookahead && lookahead <= 12447) ||
          (12449 <= lookahead && lookahead <= 12538) ||
          (12540 <= lookahead && lookahead <= 12543) ||
          (12549 <= lookahead && lookahead <= 12591) ||
          (12593 <= lookahead && lookahead <= 12686) ||
          (12704 <= lookahead && lookahead <= 12730) ||
          (12784 <= lookahead && lookahead <= 12799) ||
          (13312 <= lookahead && lookahead <= 19893) ||
          (19968 <= lookahead && lookahead <= 40943) ||
          (40960 <= lookahead && lookahead <= 42124) ||
          (42192 <= lookahead && lookahead <= 42237) ||
          (42240 <= lookahead && lookahead <= 42508) ||
          (42512 <= lookahead && lookahead <= 42527) ||
          lookahead == 42538 ||
          lookahead == 42539 ||
          (42560 <= lookahead && lookahead <= 42606) ||
          (42623 <= lookahead && lookahead <= 42653) ||
          (42656 <= lookahead && lookahead <= 42725) ||
          (42775 <= lookahead && lookahead <= 42783) ||
          (42786 <= lookahead && lookahead <= 42888) ||
          (42891 <= lookahead && lookahead <= 42943) ||
          (42946 <= lookahead && lookahead <= 42950) ||
          (42999 <= lookahead && lookahead <= 43009) ||
          (43011 <= lookahead && lookahead <= 43013) ||
          (43015 <= lookahead && lookahead <= 43018) ||
          (43020 <= lookahead && lookahead <= 43042) ||
          (43072 <= lookahead && lookahead <= 43123) ||
          (43138 <= lookahead && lookahead <= 43187) ||
          (43250 <= lookahead && lookahead <= 43255) ||
          lookahead == 43259 ||
          lookahead == 43261 ||
          lookahead == 43262 ||
          (43274 <= lookahead && lookahead <= 43301) ||
          (43312 <= lookahead && lookahead <= 43334) ||
          (43360 <= lookahead && lookahead <= 43388) ||
          (43396 <= lookahead && lookahead <= 43442) ||
          lookahead == 43471 ||
          (43488 <= lookahead && lookahead <= 43492) ||
          (43494 <= lookahead && lookahead <= 43503) ||
          (43514 <= lookahead && lookahead <= 43518) ||
          (43520 <= lookahead && lookahead <= 43560) ||
          (43584 <= lookahead && lookahead <= 43586) ||
          (43588 <= lookahead && lookahead <= 43595) ||
          (43616 <= lookahead && lookahead <= 43638) ||
          lookahead == 43642 ||
          (43646 <= lookahead && lookahead <= 43695) ||
          lookahead == 43697 ||
          lookahead == 43701 ||
          lookahead == 43702 ||
          (43705 <= lookahead && lookahead <= 43709) ||
          lookahead == 43712 ||
          lookahead == 43714 ||
          (43739 <= lookahead && lookahead <= 43741) ||
          (43744 <= lookahead && lookahead <= 43754) ||
          (43762 <= lookahead && lookahead <= 43764) ||
          (43777 <= lookahead && lookahead <= 43782) ||
          (43785 <= lookahead && lookahead <= 43790) ||
          (43793 <= lookahead && lookahead <= 43798) ||
          (43808 <= lookahead && lookahead <= 43814) ||
          (43816 <= lookahead && lookahead <= 43822) ||
          (43824 <= lookahead && lookahead <= 43866) ||
          (43868 <= lookahead && lookahead <= 43879) ||
          (43888 <= lookahead && lookahead <= 44002) ||
          (44032 <= lookahead && lookahead <= 55203) ||
          (55216 <= lookahead && lookahead <= 55238) ||
          (55243 <= lookahead && lookahead <= 55291) ||
          (63744 <= lookahead && lookahead <= 64109) ||
          (64112 <= lookahead && lookahead <= 64217) ||
          (64256 <= lookahead && lookahead <= 64262) ||
          (64275 <= lookahead && lookahead <= 64279) ||
          lookahead == 64285 ||
          (64287 <= lookahead && lookahead <= 64296) ||
          (64298 <= lookahead && lookahead <= 64310) ||
          (64312 <= lookahead && lookahead <= 64316) ||
          lookahead == 64318 ||
          lookahead == 64320 ||
          lookahead == 64321 ||
          lookahead == 64323 ||
          lookahead == 64324 ||
          (64326 <= lookahead && lookahead <= 64433) ||
          (64467 <= lookahead && lookahead <= 64829) ||
          (64848 <= lookahead && lookahead <= 64911) ||
          (64914 <= lookahead && lookahead <= 64967) ||
          (65008 <= lookahead && lookahead <= 65019) ||
          (65136 <= lookahead && lookahead <= 65140) ||
          (65142 <= lookahead && lookahead <= 65276) ||
          (65313 <= lookahead && lookahead <= 65338) ||
          (65345 <= lookahead && lookahead <= 65370) ||
          (65382 <= lookahead && lookahead <= 65470) ||
          (65474 <= lookahead && lookahead <= 65479) ||
          (65482 <= lookahead && lookahead <= 65487) ||
          (65490 <= lookahead && lookahead <= 65495) ||
          (65498 <= lookahead && lookahead <= 65500) ||
          (65536 <= lookahead && lookahead <= 65547) ||
          (65549 <= lookahead && lookahead <= 65574) ||
          (65576 <= lookahead && lookahead <= 65594) ||
          lookahead == 65596 ||
          lookahead == 65597 ||
          (65599 <= lookahead && lookahead <= 65613) ||
          (65616 <= lookahead && lookahead <= 65629) ||
          (65664 <= lookahead && lookahead <= 65786) ||
          (66176 <= lookahead && lookahead <= 66204) ||
          (66208 <= lookahead && lookahead <= 66256) ||
          (66304 <= lookahead && lookahead <= 66335) ||
          (66349 <= lookahead && lookahead <= 66368) ||
          (66370 <= lookahead && lookahead <= 66377) ||
          (66384 <= lookahead && lookahead <= 66421) ||
          (66432 <= lookahead && lookahead <= 66461) ||
          (66464 <= lookahead && lookahead <= 66499) ||
          (66504 <= lookahead && lookahead <= 66511) ||
          (66560 <= lookahead && lookahead <= 66717) ||
          (66736 <= lookahead && lookahead <= 66771) ||
          (66776 <= lookahead && lookahead <= 66811) ||
          (66816 <= lookahead && lookahead <= 66855) ||
          (66864 <= lookahead && lookahead <= 66915) ||
          (67072 <= lookahead && lookahead <= 67382) ||
          (67392 <= lookahead && lookahead <= 67413) ||
          (67424 <= lookahead && lookahead <= 67431) ||
          (67584 <= lookahead && lookahead <= 67589) ||
          lookahead == 67592 ||
          (67594 <= lookahead && lookahead <= 67637) ||
          lookahead == 67639 ||
          lookahead == 67640 ||
          lookahead == 67644 ||
          (67647 <= lookahead && lookahead <= 67669) ||
          (67680 <= lookahead && lookahead <= 67702) ||
          (67712 <= lookahead && lookahead <= 67742) ||
          (67808 <= lookahead && lookahead <= 67826) ||
          lookahead == 67828 ||
          lookahead == 67829 ||
          (67840 <= lookahead && lookahead <= 67861) ||
          (67872 <= lookahead && lookahead <= 67897) ||
          (67968 <= lookahead && lookahead <= 68023) ||
          lookahead == 68030 ||
          lookahead == 68031 ||
          lookahead == 68096 ||
          (68112 <= lookahead && lookahead <= 68115) ||
          (68117 <= lookahead && lookahead <= 68119) ||
          (68121 <= lookahead && lookahead <= 68149) ||
          (68192 <= lookahead && lookahead <= 68220) ||
          (68224 <= lookahead && lookahead <= 68252) ||
          (68288 <= lookahead && lookahead <= 68295) ||
          (68297 <= lookahead && lookahead <= 68324) ||
          (68352 <= lookahead && lookahead <= 68405) ||
          (68416 <= lookahead && lookahead <= 68437) ||
          (68448 <= lookahead && lookahead <= 68466) ||
          (68480 <= lookahead && lookahead <= 68497) ||
          (68608 <= lookahead && lookahead <= 68680) ||
          (68736 <= lookahead && lookahead <= 68786) ||
          (68800 <= lookahead && lookahead <= 68850) ||
          (68864 <= lookahead && lookahead <= 68899) ||
          (69376 <= lookahead && lookahead <= 69404) ||
          lookahead == 69415 ||
          (69424 <= lookahead && lookahead <= 69445) ||
          (69600 <= lookahead && lookahead <= 69622) ||
          (69635 <= lookahead && lookahead <= 69687) ||
          (69763 <= lookahead && lookahead <= 69807) ||
          (69840 <= lookahead && lookahead <= 69864) ||
          (69891 <= lookahead && lookahead <= 69926) ||
          lookahead == 69956 ||
          (69968 <= lookahead && lookahead <= 70002) ||
          lookahead == 70006 ||
          (70019 <= lookahead && lookahead <= 70066) ||
          (70081 <= lookahead && lookahead <= 70084) ||
          lookahead == 70106 ||
          lookahead == 70108 ||
          (70144 <= lookahead && lookahead <= 70161) ||
          (70163 <= lookahead && lookahead <= 70187) ||
          (70272 <= lookahead && lookahead <= 70278) ||
          lookahead == 70280 ||
          (70282 <= lookahead && lookahead <= 70285) ||
          (70287 <= lookahead && lookahead <= 70301) ||
          (70303 <= lookahead && lookahead <= 70312) ||
          (70320 <= lookahead && lookahead <= 70366) ||
          (70405 <= lookahead && lookahead <= 70412) ||
          lookahead == 70415 ||
          lookahead == 70416 ||
          (70419 <= lookahead && lookahead <= 70440) ||
          (70442 <= lookahead && lookahead <= 70448) ||
          lookahead == 70450 ||
          lookahead == 70451 ||
          (70453 <= lookahead && lookahead <= 70457) ||
          lookahead == 70461 ||
          lookahead == 70480 ||
          (70493 <= lookahead && lookahead <= 70497) ||
          (70656 <= lookahead && lookahead <= 70708) ||
          (70727 <= lookahead && lookahead <= 70730) ||
          lookahead == 70751 ||
          (70784 <= lookahead && lookahead <= 70831) ||
          lookahead == 70852 ||
          lookahead == 70853 ||
          lookahead == 70855 ||
          (71040 <= lookahead && lookahead <= 71086) ||
          (71128 <= lookahead && lookahead <= 71131) ||
          (71168 <= lookahead && lookahead <= 71215) ||
          lookahead == 71236 ||
          (71296 <= lookahead && lookahead <= 71338) ||
          lookahead == 71352 ||
          (71424 <= lookahead && lookahead <= 71450) ||
          (71680 <= lookahead && lookahead <= 71723) ||
          (71840 <= lookahead && lookahead <= 71903) ||
          lookahead == 71935 ||
          (72096 <= lookahead && lookahead <= 72103) ||
          (72106 <= lookahead && lookahead <= 72144) ||
          lookahead == 72161 ||
          lookahead == 72163 ||
          lookahead == 72192 ||
          (72203 <= lookahead && lookahead <= 72242) ||
          lookahead == 72250 ||
          lookahead == 72272 ||
          (72284 <= lookahead && lookahead <= 72329) ||
          lookahead == 72349 ||
          (72384 <= lookahead && lookahead <= 72440) ||
          (72704 <= lookahead && lookahead <= 72712) ||
          (72714 <= lookahead && lookahead <= 72750) ||
          lookahead == 72768 ||
          (72818 <= lookahead && lookahead <= 72847) ||
          (72960 <= lookahead && lookahead <= 72966) ||
          lookahead == 72968 ||
          lookahead == 72969 ||
          (72971 <= lookahead && lookahead <= 73008) ||
          lookahead == 73030 ||
          (73056 <= lookahead && lookahead <= 73061) ||
          lookahead == 73063 ||
          lookahead == 73064 ||
          (73066 <= lookahead && lookahead <= 73097) ||
          lookahead == 73112 ||
          (73440 <= lookahead && lookahead <= 73458) ||
          (73728 <= lookahead && lookahead <= 74649) ||
          (74880 <= lookahead && lookahead <= 75075) ||
          (77824 <= lookahead && lookahead <= 78894) ||
          (82944 <= lookahead && lookahead <= 83526) ||
          (92160 <= lookahead && lookahead <= 92728) ||
          (92736 <= lookahead && lookahead <= 92766) ||
          (92880 <= lookahead && lookahead <= 92909) ||
          (92928 <= lookahead && lookahead <= 92975) ||
          (92992 <= lookahead && lookahead <= 92995) ||
          (93027 <= lookahead && lookahead <= 93047) ||
          (93053 <= lookahead && lookahead <= 93071) ||
          (93760 <= lookahead && lookahead <= 93823) ||
          (93952 <= lookahead && lookahead <= 94026) ||
          lookahead == 94032 ||
          (94099 <= lookahead && lookahead <= 94111) ||
          lookahead == 94176 ||
          lookahead == 94177 ||
          lookahead == 94179 ||
          (94208 <= lookahead && lookahead <= 100343) ||
          (100352 <= lookahead && lookahead <= 101106) ||
          (110592 <= lookahead && lookahead <= 110878) ||
          (110928 <= lookahead && lookahead <= 110930) ||
          (110948 <= lookahead && lookahead <= 110951) ||
          (110960 <= lookahead && lookahead <= 111355) ||
          (113664 <= lookahead && lookahead <= 113770) ||
          (113776 <= lookahead && lookahead <= 113788) ||
          (113792 <= lookahead && lookahead <= 113800) ||
          (113808 <= lookahead && lookahead <= 113817) ||
          (119808 <= lookahead && lookahead <= 119892) ||
          (119894 <= lookahead && lookahead <= 119964) ||
          lookahead == 119966 ||
          lookahead == 119967 ||
          lookahead == 119970 ||
          lookahead == 119973 ||
          lookahead == 119974 ||
          (119977 <= lookahead && lookahead <= 119980) ||
          (119982 <= lookahead && lookahead <= 119993) ||
          lookahead == 119995 ||
          (119997 <= lookahead && lookahead <= 120003) ||
          (120005 <= lookahead && lookahead <= 120069) ||
          (120071 <= lookahead && lookahead <= 120074) ||
          (120077 <= lookahead && lookahead <= 120084) ||
          (120086 <= lookahead && lookahead <= 120092) ||
          (120094 <= lookahead && lookahead <= 120121) ||
          (120123 <= lookahead && lookahead <= 120126) ||
          (120128 <= lookahead && lookahead <= 120132) ||
          lookahead == 120134 ||
          (120138 <= lookahead && lookahead <= 120144) ||
          (120146 <= lookahead && lookahead <= 120485) ||
          (120488 <= lookahead && lookahead <= 120512) ||
          (120514 <= lookahead && lookahead <= 120538) ||
          (120540 <= lookahead && lookahead <= 120570) ||
          (120572 <= lookahead && lookahead <= 120596) ||
          (120598 <= lookahead && lookahead <= 120628) ||
          (120630 <= lookahead && lookahead <= 120654) ||
          (120656 <= lookahead && lookahead <= 120686) ||
          (120688 <= lookahead && lookahead <= 120712) ||
          (120714 <= lookahead && lookahead <= 120744) ||
          (120746 <= lookahead && lookahead <= 120770) ||
          (120772 <= lookahead && lookahead <= 120779) ||
          (123136 <= lookahead && lookahead <= 123180) ||
          (123191 <= lookahead && lookahead <= 123197) ||
          lookahead == 123214 ||
          (123584 <= lookahead && lookahead <= 123627) ||
          (124928 <= lookahead && lookahead <= 125124) ||
          (125184 <= lookahead && lookahead <= 125251) ||
          lookahead == 125259 ||
          (126464 <= lookahead && lookahead <= 126467) ||
          (126469 <= lookahead && lookahead <= 126495) ||
          lookahead == 126497 ||
          lookahead == 126498 ||
          lookahead == 126500 ||
          lookahead == 126503 ||
          (126505 <= lookahead && lookahead <= 126514) ||
          (126516 <= lookahead && lookahead <= 126519) ||
          lookahead == 126521 ||
          lookahead == 126523 ||
          lookahead == 126530 ||
          lookahead == 126535 ||
          lookahead == 126537 ||
          lookahead == 126539 ||
          (126541 <= lookahead && lookahead <= 126543) ||
          lookahead == 126545 ||
          lookahead == 126546 ||
          lookahead == 126548 ||
          lookahead == 126551 ||
          lookahead == 126553 ||
          lookahead == 126555 ||
          lookahead == 126557 ||
          lookahead == 126559 ||
          lookahead == 126561 ||
          lookahead == 126562 ||
          lookahead == 126564 ||
          (126567 <= lookahead && lookahead <= 126570) ||
          (126572 <= lookahead && lookahead <= 126578) ||
          (126580 <= lookahead && lookahead <= 126583) ||
          (126585 <= lookahead && lookahead <= 126588) ||
          lookahead == 126590 ||
          (126592 <= lookahead && lookahead <= 126601) ||
          (126603 <= lookahead && lookahead <= 126619) ||
          (126625 <= lookahead && lookahead <= 126627) ||
          (126629 <= lookahead && lookahead <= 126633) ||
          (126635 <= lookahead && lookahead <= 126651) ||
          (131072 <= lookahead && lookahead <= 173782) ||
          (173824 <= lookahead && lookahead <= 177972) ||
          (177984 <= lookahead && lookahead <= 178205) ||
          (178208 <= lookahead && lookahead <= 183969) ||
          (183984 <= lookahead && lookahead <= 191456) ||
          (194560 <= lookahead && lookahead <= 195101)) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == 'D') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'O') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'O') ADVANCE(134);
      END_STATE();
    case 23:
      if (lookahead == 'T') ADVANCE(21);
      if (lookahead == '}') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      END_STATE();
    case 24:
      if (lookahead == 'T') ADVANCE(21);
      if (lookahead == '}') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == 'r') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 50:
      if (lookahead == 'g') ADVANCE(126);
      END_STATE();
    case 51:
      if (lookahead == 'g') ADVANCE(125);
      END_STATE();
    case 52:
      if (lookahead == 'g') ADVANCE(55);
      END_STATE();
    case 53:
      if (lookahead == 'h') ADVANCE(65);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(62);
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(140);
      END_STATE();
    case 62:
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 64:
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 65:
      if (lookahead == 'm') ADVANCE(49);
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 66:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 80:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 81:
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 93:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 94:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 95:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 96:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 97:
      if (lookahead == 'v') ADVANCE(45);
      END_STATE();
    case 98:
      if (lookahead == 'y') ADVANCE(147);
      END_STATE();
    case 99:
      if (lookahead == 'y') ADVANCE(139);
      END_STATE();
    case 100:
      if (lookahead == '}') ADVANCE(133);
      END_STATE();
    case 101:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 102:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(107);
      END_STATE();
    case 103:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(103)
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '?') ADVANCE(178);
      if (lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222) ||
          lookahead == 256 ||
          lookahead == 258 ||
          lookahead == 260 ||
          lookahead == 262 ||
          lookahead == 264 ||
          lookahead == 266 ||
          lookahead == 268 ||
          lookahead == 270 ||
          lookahead == 272 ||
          lookahead == 274 ||
          lookahead == 276 ||
          lookahead == 278 ||
          lookahead == 280 ||
          lookahead == 282 ||
          lookahead == 284 ||
          lookahead == 286 ||
          lookahead == 288 ||
          lookahead == 290 ||
          lookahead == 292 ||
          lookahead == 294 ||
          lookahead == 296 ||
          lookahead == 298 ||
          lookahead == 300 ||
          lookahead == 302 ||
          lookahead == 304 ||
          lookahead == 306 ||
          lookahead == 308 ||
          lookahead == 310 ||
          lookahead == 313 ||
          lookahead == 315 ||
          lookahead == 317 ||
          lookahead == 319 ||
          lookahead == 321 ||
          lookahead == 323 ||
          lookahead == 325 ||
          lookahead == 327 ||
          lookahead == 330 ||
          lookahead == 332 ||
          lookahead == 334 ||
          lookahead == 336 ||
          lookahead == 338 ||
          lookahead == 340 ||
          lookahead == 342 ||
          lookahead == 344 ||
          lookahead == 346 ||
          lookahead == 348 ||
          lookahead == 350 ||
          lookahead == 352 ||
          lookahead == 354 ||
          lookahead == 356 ||
          lookahead == 358 ||
          lookahead == 360 ||
          lookahead == 362 ||
          lookahead == 364 ||
          lookahead == 366 ||
          lookahead == 368 ||
          lookahead == 370 ||
          lookahead == 372 ||
          lookahead == 374 ||
          lookahead == 376 ||
          lookahead == 377 ||
          lookahead == 379 ||
          lookahead == 381 ||
          lookahead == 385 ||
          lookahead == 386 ||
          lookahead == 388 ||
          lookahead == 390 ||
          lookahead == 391 ||
          (393 <= lookahead && lookahead <= 395) ||
          (398 <= lookahead && lookahead <= 401) ||
          lookahead == 403 ||
          lookahead == 404 ||
          (406 <= lookahead && lookahead <= 408) ||
          lookahead == 412 ||
          lookahead == 413 ||
          lookahead == 415 ||
          lookahead == 416 ||
          lookahead == 418 ||
          lookahead == 420 ||
          lookahead == 422 ||
          lookahead == 423 ||
          lookahead == 425 ||
          lookahead == 428 ||
          lookahead == 430 ||
          lookahead == 431 ||
          (433 <= lookahead && lookahead <= 435) ||
          lookahead == 437 ||
          lookahead == 439 ||
          lookahead == 440 ||
          lookahead == 444 ||
          lookahead == 452 ||
          lookahead == 455 ||
          lookahead == 458 ||
          lookahead == 461 ||
          lookahead == 463 ||
          lookahead == 465 ||
          lookahead == 467 ||
          lookahead == 469 ||
          lookahead == 471 ||
          lookahead == 473 ||
          lookahead == 475 ||
          lookahead == 478 ||
          lookahead == 480 ||
          lookahead == 482 ||
          lookahead == 484 ||
          lookahead == 486 ||
          lookahead == 488 ||
          lookahead == 490 ||
          lookahead == 492 ||
          lookahead == 494 ||
          lookahead == 497 ||
          lookahead == 500 ||
          (502 <= lookahead && lookahead <= 504) ||
          lookahead == 506 ||
          lookahead == 508 ||
          lookahead == 510 ||
          lookahead == 512 ||
          lookahead == 514 ||
          lookahead == 516 ||
          lookahead == 518 ||
          lookahead == 520 ||
          lookahead == 522 ||
          lookahead == 524 ||
          lookahead == 526 ||
          lookahead == 528 ||
          lookahead == 530 ||
          lookahead == 532 ||
          lookahead == 534 ||
          lookahead == 536 ||
          lookahead == 538 ||
          lookahead == 540 ||
          lookahead == 542 ||
          lookahead == 544 ||
          lookahead == 546 ||
          lookahead == 548 ||
          lookahead == 550 ||
          lookahead == 552 ||
          lookahead == 554 ||
          lookahead == 556 ||
          lookahead == 558 ||
          lookahead == 560 ||
          lookahead == 562 ||
          lookahead == 570 ||
          lookahead == 571 ||
          lookahead == 573 ||
          lookahead == 574 ||
          lookahead == 577 ||
          (579 <= lookahead && lookahead <= 582) ||
          lookahead == 584 ||
          lookahead == 586 ||
          lookahead == 588 ||
          lookahead == 590 ||
          lookahead == 880 ||
          lookahead == 882 ||
          lookahead == 886 ||
          lookahead == 895 ||
          lookahead == 902 ||
          (904 <= lookahead && lookahead <= 906) ||
          lookahead == 908 ||
          lookahead == 910 ||
          lookahead == 911 ||
          (913 <= lookahead && lookahead <= 929) ||
          (931 <= lookahead && lookahead <= 939) ||
          lookahead == 975 ||
          (978 <= lookahead && lookahead <= 980) ||
          lookahead == 984 ||
          lookahead == 986 ||
          lookahead == 988 ||
          lookahead == 990 ||
          lookahead == 992 ||
          lookahead == 994 ||
          lookahead == 996 ||
          lookahead == 998 ||
          lookahead == 1000 ||
          lookahead == 1002 ||
          lookahead == 1004 ||
          lookahead == 1006 ||
          lookahead == 1012 ||
          lookahead == 1015 ||
          lookahead == 1017 ||
          lookahead == 1018 ||
          (1021 <= lookahead && lookahead <= 1071) ||
          lookahead == 1120 ||
          lookahead == 1122 ||
          lookahead == 1124 ||
          lookahead == 1126 ||
          lookahead == 1128 ||
          lookahead == 1130 ||
          lookahead == 1132 ||
          lookahead == 1134 ||
          lookahead == 1136 ||
          lookahead == 1138 ||
          lookahead == 1140 ||
          lookahead == 1142 ||
          lookahead == 1144 ||
          lookahead == 1146 ||
          lookahead == 1148 ||
          lookahead == 1150 ||
          lookahead == 1152 ||
          lookahead == 1162 ||
          lookahead == 1164 ||
          lookahead == 1166 ||
          lookahead == 1168 ||
          lookahead == 1170 ||
          lookahead == 1172 ||
          lookahead == 1174 ||
          lookahead == 1176 ||
          lookahead == 1178 ||
          lookahead == 1180 ||
          lookahead == 1182 ||
          lookahead == 1184 ||
          lookahead == 1186 ||
          lookahead == 1188 ||
          lookahead == 1190 ||
          lookahead == 1192 ||
          lookahead == 1194 ||
          lookahead == 1196 ||
          lookahead == 1198 ||
          lookahead == 1200 ||
          lookahead == 1202 ||
          lookahead == 1204 ||
          lookahead == 1206 ||
          lookahead == 1208 ||
          lookahead == 1210 ||
          lookahead == 1212 ||
          lookahead == 1214 ||
          lookahead == 1216 ||
          lookahead == 1217 ||
          lookahead == 1219 ||
          lookahead == 1221 ||
          lookahead == 1223 ||
          lookahead == 1225 ||
          lookahead == 1227 ||
          lookahead == 1229 ||
          lookahead == 1232 ||
          lookahead == 1234 ||
          lookahead == 1236 ||
          lookahead == 1238 ||
          lookahead == 1240 ||
          lookahead == 1242 ||
          lookahead == 1244 ||
          lookahead == 1246 ||
          lookahead == 1248 ||
          lookahead == 1250 ||
          lookahead == 1252 ||
          lookahead == 1254 ||
          lookahead == 1256 ||
          lookahead == 1258 ||
          lookahead == 1260 ||
          lookahead == 1262 ||
          lookahead == 1264 ||
          lookahead == 1266 ||
          lookahead == 1268 ||
          lookahead == 1270 ||
          lookahead == 1272 ||
          lookahead == 1274 ||
          lookahead == 1276 ||
          lookahead == 1278 ||
          lookahead == 1280 ||
          lookahead == 1282 ||
          lookahead == 1284 ||
          lookahead == 1286 ||
          lookahead == 1288 ||
          lookahead == 1290 ||
          lookahead == 1292 ||
          lookahead == 1294 ||
          lookahead == 1296 ||
          lookahead == 1298 ||
          lookahead == 1300 ||
          lookahead == 1302 ||
          lookahead == 1304 ||
          lookahead == 1306 ||
          lookahead == 1308 ||
          lookahead == 1310 ||
          lookahead == 1312 ||
          lookahead == 1314 ||
          lookahead == 1316 ||
          lookahead == 1318 ||
          lookahead == 1320 ||
          lookahead == 1322 ||
          lookahead == 1324 ||
          lookahead == 1326 ||
          (1329 <= lookahead && lookahead <= 1366) ||
          (4256 <= lookahead && lookahead <= 4293) ||
          lookahead == 4295 ||
          lookahead == 4301 ||
          (5024 <= lookahead && lookahead <= 5109) ||
          (7312 <= lookahead && lookahead <= 7354) ||
          (7357 <= lookahead && lookahead <= 7359) ||
          lookahead == 7680 ||
          lookahead == 7682 ||
          lookahead == 7684 ||
          lookahead == 7686 ||
          lookahead == 7688 ||
          lookahead == 7690 ||
          lookahead == 7692 ||
          lookahead == 7694 ||
          lookahead == 7696 ||
          lookahead == 7698 ||
          lookahead == 7700 ||
          lookahead == 7702 ||
          lookahead == 7704 ||
          lookahead == 7706 ||
          lookahead == 7708 ||
          lookahead == 7710 ||
          lookahead == 7712 ||
          lookahead == 7714 ||
          lookahead == 7716 ||
          lookahead == 7718 ||
          lookahead == 7720 ||
          lookahead == 7722 ||
          lookahead == 7724 ||
          lookahead == 7726 ||
          lookahead == 7728 ||
          lookahead == 7730 ||
          lookahead == 7732 ||
          lookahead == 7734 ||
          lookahead == 7736 ||
          lookahead == 7738 ||
          lookahead == 7740 ||
          lookahead == 7742 ||
          lookahead == 7744 ||
          lookahead == 7746 ||
          lookahead == 7748 ||
          lookahead == 7750 ||
          lookahead == 7752 ||
          lookahead == 7754 ||
          lookahead == 7756 ||
          lookahead == 7758 ||
          lookahead == 7760 ||
          lookahead == 7762 ||
          lookahead == 7764 ||
          lookahead == 7766 ||
          lookahead == 7768 ||
          lookahead == 7770 ||
          lookahead == 7772 ||
          lookahead == 7774 ||
          lookahead == 7776 ||
          lookahead == 7778 ||
          lookahead == 7780 ||
          lookahead == 7782 ||
          lookahead == 7784 ||
          lookahead == 7786 ||
          lookahead == 7788 ||
          lookahead == 7790 ||
          lookahead == 7792 ||
          lookahead == 7794 ||
          lookahead == 7796 ||
          lookahead == 7798 ||
          lookahead == 7800 ||
          lookahead == 7802 ||
          lookahead == 7804 ||
          lookahead == 7806 ||
          lookahead == 7808 ||
          lookahead == 7810 ||
          lookahead == 7812 ||
          lookahead == 7814 ||
          lookahead == 7816 ||
          lookahead == 7818 ||
          lookahead == 7820 ||
          lookahead == 7822 ||
          lookahead == 7824 ||
          lookahead == 7826 ||
          lookahead == 7828 ||
          lookahead == 7838 ||
          lookahead == 7840 ||
          lookahead == 7842 ||
          lookahead == 7844 ||
          lookahead == 7846 ||
          lookahead == 7848 ||
          lookahead == 7850 ||
          lookahead == 7852 ||
          lookahead == 7854 ||
          lookahead == 7856 ||
          lookahead == 7858 ||
          lookahead == 7860 ||
          lookahead == 7862 ||
          lookahead == 7864 ||
          lookahead == 7866 ||
          lookahead == 7868 ||
          lookahead == 7870 ||
          lookahead == 7872 ||
          lookahead == 7874 ||
          lookahead == 7876 ||
          lookahead == 7878 ||
          lookahead == 7880 ||
          lookahead == 7882 ||
          lookahead == 7884 ||
          lookahead == 7886 ||
          lookahead == 7888 ||
          lookahead == 7890 ||
          lookahead == 7892 ||
          lookahead == 7894 ||
          lookahead == 7896 ||
          lookahead == 7898 ||
          lookahead == 7900 ||
          lookahead == 7902 ||
          lookahead == 7904 ||
          lookahead == 7906 ||
          lookahead == 7908 ||
          lookahead == 7910 ||
          lookahead == 7912 ||
          lookahead == 7914 ||
          lookahead == 7916 ||
          lookahead == 7918 ||
          lookahead == 7920 ||
          lookahead == 7922 ||
          lookahead == 7924 ||
          lookahead == 7926 ||
          lookahead == 7928 ||
          lookahead == 7930 ||
          lookahead == 7932 ||
          lookahead == 7934 ||
          (7944 <= lookahead && lookahead <= 7951) ||
          (7960 <= lookahead && lookahead <= 7965) ||
          (7976 <= lookahead && lookahead <= 7983) ||
          (7992 <= lookahead && lookahead <= 7999) ||
          (8008 <= lookahead && lookahead <= 8013) ||
          lookahead == 8025 ||
          lookahead == 8027 ||
          lookahead == 8029 ||
          lookahead == 8031 ||
          (8040 <= lookahead && lookahead <= 8047) ||
          (8120 <= lookahead && lookahead <= 8123) ||
          (8136 <= lookahead && lookahead <= 8139) ||
          (8152 <= lookahead && lookahead <= 8155) ||
          (8168 <= lookahead && lookahead <= 8172) ||
          (8184 <= lookahead && lookahead <= 8187) ||
          lookahead == 8450 ||
          lookahead == 8455 ||
          (8459 <= lookahead && lookahead <= 8461) ||
          (8464 <= lookahead && lookahead <= 8466) ||
          lookahead == 8469 ||
          (8473 <= lookahead && lookahead <= 8477) ||
          lookahead == 8484 ||
          lookahead == 8486 ||
          lookahead == 8488 ||
          (8490 <= lookahead && lookahead <= 8493) ||
          (8496 <= lookahead && lookahead <= 8499) ||
          lookahead == 8510 ||
          lookahead == 8511 ||
          lookahead == 8517 ||
          lookahead == 8579 ||
          (11264 <= lookahead && lookahead <= 11310) ||
          lookahead == 11360 ||
          (11362 <= lookahead && lookahead <= 11364) ||
          lookahead == 11367 ||
          lookahead == 11369 ||
          lookahead == 11371 ||
          (11373 <= lookahead && lookahead <= 11376) ||
          lookahead == 11378 ||
          lookahead == 11381 ||
          (11390 <= lookahead && lookahead <= 11392) ||
          lookahead == 11394 ||
          lookahead == 11396 ||
          lookahead == 11398 ||
          lookahead == 11400 ||
          lookahead == 11402 ||
          lookahead == 11404 ||
          lookahead == 11406 ||
          lookahead == 11408 ||
          lookahead == 11410 ||
          lookahead == 11412 ||
          lookahead == 11414 ||
          lookahead == 11416 ||
          lookahead == 11418 ||
          lookahead == 11420 ||
          lookahead == 11422 ||
          lookahead == 11424 ||
          lookahead == 11426 ||
          lookahead == 11428 ||
          lookahead == 11430 ||
          lookahead == 11432 ||
          lookahead == 11434 ||
          lookahead == 11436 ||
          lookahead == 11438 ||
          lookahead == 11440 ||
          lookahead == 11442 ||
          lookahead == 11444 ||
          lookahead == 11446 ||
          lookahead == 11448 ||
          lookahead == 11450 ||
          lookahead == 11452 ||
          lookahead == 11454 ||
          lookahead == 11456 ||
          lookahead == 11458 ||
          lookahead == 11460 ||
          lookahead == 11462 ||
          lookahead == 11464 ||
          lookahead == 11466 ||
          lookahead == 11468 ||
          lookahead == 11470 ||
          lookahead == 11472 ||
          lookahead == 11474 ||
          lookahead == 11476 ||
          lookahead == 11478 ||
          lookahead == 11480 ||
          lookahead == 11482 ||
          lookahead == 11484 ||
          lookahead == 11486 ||
          lookahead == 11488 ||
          lookahead == 11490 ||
          lookahead == 11499 ||
          lookahead == 11501 ||
          lookahead == 11506 ||
          lookahead == 42560 ||
          lookahead == 42562 ||
          lookahead == 42564 ||
          lookahead == 42566 ||
          lookahead == 42568 ||
          lookahead == 42570 ||
          lookahead == 42572 ||
          lookahead == 42574 ||
          lookahead == 42576 ||
          lookahead == 42578 ||
          lookahead == 42580 ||
          lookahead == 42582 ||
          lookahead == 42584 ||
          lookahead == 42586 ||
          lookahead == 42588 ||
          lookahead == 42590 ||
          lookahead == 42592 ||
          lookahead == 42594 ||
          lookahead == 42596 ||
          lookahead == 42598 ||
          lookahead == 42600 ||
          lookahead == 42602 ||
          lookahead == 42604 ||
          lookahead == 42624 ||
          lookahead == 42626 ||
          lookahead == 42628 ||
          lookahead == 42630 ||
          lookahead == 42632 ||
          lookahead == 42634 ||
          lookahead == 42636 ||
          lookahead == 42638 ||
          lookahead == 42640 ||
          lookahead == 42642 ||
          lookahead == 42644 ||
          lookahead == 42646 ||
          lookahead == 42648 ||
          lookahead == 42650 ||
          lookahead == 42786 ||
          lookahead == 42788 ||
          lookahead == 42790 ||
          lookahead == 42792 ||
          lookahead == 42794 ||
          lookahead == 42796 ||
          lookahead == 42798 ||
          lookahead == 42802 ||
          lookahead == 42804 ||
          lookahead == 42806 ||
          lookahead == 42808 ||
          lookahead == 42810 ||
          lookahead == 42812 ||
          lookahead == 42814 ||
          lookahead == 42816 ||
          lookahead == 42818 ||
          lookahead == 42820 ||
          lookahead == 42822 ||
          lookahead == 42824 ||
          lookahead == 42826 ||
          lookahead == 42828 ||
          lookahead == 42830 ||
          lookahead == 42832 ||
          lookahead == 42834 ||
          lookahead == 42836 ||
          lookahead == 42838 ||
          lookahead == 42840 ||
          lookahead == 42842 ||
          lookahead == 42844 ||
          lookahead == 42846 ||
          lookahead == 42848 ||
          lookahead == 42850 ||
          lookahead == 42852 ||
          lookahead == 42854 ||
          lookahead == 42856 ||
          lookahead == 42858 ||
          lookahead == 42860 ||
          lookahead == 42862 ||
          lookahead == 42873 ||
          lookahead == 42875 ||
          lookahead == 42877 ||
          lookahead == 42878 ||
          lookahead == 42880 ||
          lookahead == 42882 ||
          lookahead == 42884 ||
          lookahead == 42886 ||
          lookahead == 42891 ||
          lookahead == 42893 ||
          lookahead == 42896 ||
          lookahead == 42898 ||
          lookahead == 42902 ||
          lookahead == 42904 ||
          lookahead == 42906 ||
          lookahead == 42908 ||
          lookahead == 42910 ||
          lookahead == 42912 ||
          lookahead == 42914 ||
          lookahead == 42916 ||
          lookahead == 42918 ||
          lookahead == 42920 ||
          (42922 <= lookahead && lookahead <= 42926) ||
          (42928 <= lookahead && lookahead <= 42932) ||
          lookahead == 42934 ||
          lookahead == 42936 ||
          lookahead == 42938 ||
          lookahead == 42940 ||
          lookahead == 42942 ||
          lookahead == 42946 ||
          (42948 <= lookahead && lookahead <= 42950) ||
          (65313 <= lookahead && lookahead <= 65338) ||
          (66560 <= lookahead && lookahead <= 66599) ||
          (66736 <= lookahead && lookahead <= 66771) ||
          (68736 <= lookahead && lookahead <= 68786) ||
          (71840 <= lookahead && lookahead <= 71871) ||
          (93760 <= lookahead && lookahead <= 93791) ||
          (119808 <= lookahead && lookahead <= 119833) ||
          (119860 <= lookahead && lookahead <= 119885) ||
          (119912 <= lookahead && lookahead <= 119937) ||
          lookahead == 119964 ||
          lookahead == 119966 ||
          lookahead == 119967 ||
          lookahead == 119970 ||
          lookahead == 119973 ||
          lookahead == 119974 ||
          (119977 <= lookahead && lookahead <= 119980) ||
          (119982 <= lookahead && lookahead <= 119989) ||
          (120016 <= lookahead && lookahead <= 120041) ||
          lookahead == 120068 ||
          lookahead == 120069 ||
          (120071 <= lookahead && lookahead <= 120074) ||
          (120077 <= lookahead && lookahead <= 120084) ||
          (120086 <= lookahead && lookahead <= 120092) ||
          lookahead == 120120 ||
          lookahead == 120121 ||
          (120123 <= lookahead && lookahead <= 120126) ||
          (120128 <= lookahead && lookahead <= 120132) ||
          lookahead == 120134 ||
          (120138 <= lookahead && lookahead <= 120144) ||
          (120172 <= lookahead && lookahead <= 120197) ||
          (120224 <= lookahead && lookahead <= 120249) ||
          (120276 <= lookahead && lookahead <= 120301) ||
          (120328 <= lookahead && lookahead <= 120353) ||
          (120380 <= lookahead && lookahead <= 120405) ||
          (120432 <= lookahead && lookahead <= 120457) ||
          (120488 <= lookahead && lookahead <= 120512) ||
          (120546 <= lookahead && lookahead <= 120570) ||
          (120604 <= lookahead && lookahead <= 120628) ||
          (120662 <= lookahead && lookahead <= 120686) ||
          (120720 <= lookahead && lookahead <= 120744) ||
          lookahead == 120778 ||
          (125184 <= lookahead && lookahead <= 125217)) ADVANCE(18);
      END_STATE();
    case 104:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      END_STATE();
    case 105:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 106:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 107:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 108:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 110:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 111:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 112:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 113:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222) ||
          lookahead == 256 ||
          lookahead == 258 ||
          lookahead == 260 ||
          lookahead == 262 ||
          lookahead == 264 ||
          lookahead == 266 ||
          lookahead == 268 ||
          lookahead == 270 ||
          lookahead == 272 ||
          lookahead == 274 ||
          lookahead == 276 ||
          lookahead == 278 ||
          lookahead == 280 ||
          lookahead == 282 ||
          lookahead == 284 ||
          lookahead == 286 ||
          lookahead == 288 ||
          lookahead == 290 ||
          lookahead == 292 ||
          lookahead == 294 ||
          lookahead == 296 ||
          lookahead == 298 ||
          lookahead == 300 ||
          lookahead == 302 ||
          lookahead == 304 ||
          lookahead == 306 ||
          lookahead == 308 ||
          lookahead == 310 ||
          lookahead == 313 ||
          lookahead == 315 ||
          lookahead == 317 ||
          lookahead == 319 ||
          lookahead == 321 ||
          lookahead == 323 ||
          lookahead == 325 ||
          lookahead == 327 ||
          lookahead == 330 ||
          lookahead == 332 ||
          lookahead == 334 ||
          lookahead == 336 ||
          lookahead == 338 ||
          lookahead == 340 ||
          lookahead == 342 ||
          lookahead == 344 ||
          lookahead == 346 ||
          lookahead == 348 ||
          lookahead == 350 ||
          lookahead == 352 ||
          lookahead == 354 ||
          lookahead == 356 ||
          lookahead == 358 ||
          lookahead == 360 ||
          lookahead == 362 ||
          lookahead == 364 ||
          lookahead == 366 ||
          lookahead == 368 ||
          lookahead == 370 ||
          lookahead == 372 ||
          lookahead == 374 ||
          lookahead == 376 ||
          lookahead == 377 ||
          lookahead == 379 ||
          lookahead == 381 ||
          lookahead == 385 ||
          lookahead == 386 ||
          lookahead == 388 ||
          lookahead == 390 ||
          lookahead == 391 ||
          (393 <= lookahead && lookahead <= 395) ||
          (398 <= lookahead && lookahead <= 401) ||
          lookahead == 403 ||
          lookahead == 404 ||
          (406 <= lookahead && lookahead <= 408) ||
          lookahead == 412 ||
          lookahead == 413 ||
          lookahead == 415 ||
          lookahead == 416 ||
          lookahead == 418 ||
          lookahead == 420 ||
          lookahead == 422 ||
          lookahead == 423 ||
          lookahead == 425 ||
          lookahead == 428 ||
          lookahead == 430 ||
          lookahead == 431 ||
          (433 <= lookahead && lookahead <= 435) ||
          lookahead == 437 ||
          lookahead == 439 ||
          lookahead == 440 ||
          lookahead == 444 ||
          lookahead == 452 ||
          lookahead == 455 ||
          lookahead == 458 ||
          lookahead == 461 ||
          lookahead == 463 ||
          lookahead == 465 ||
          lookahead == 467 ||
          lookahead == 469 ||
          lookahead == 471 ||
          lookahead == 473 ||
          lookahead == 475 ||
          lookahead == 478 ||
          lookahead == 480 ||
          lookahead == 482 ||
          lookahead == 484 ||
          lookahead == 486 ||
          lookahead == 488 ||
          lookahead == 490 ||
          lookahead == 492 ||
          lookahead == 494 ||
          lookahead == 497 ||
          lookahead == 500 ||
          (502 <= lookahead && lookahead <= 504) ||
          lookahead == 506 ||
          lookahead == 508 ||
          lookahead == 510 ||
          lookahead == 512 ||
          lookahead == 514 ||
          lookahead == 516 ||
          lookahead == 518 ||
          lookahead == 520 ||
          lookahead == 522 ||
          lookahead == 524 ||
          lookahead == 526 ||
          lookahead == 528 ||
          lookahead == 530 ||
          lookahead == 532 ||
          lookahead == 534 ||
          lookahead == 536 ||
          lookahead == 538 ||
          lookahead == 540 ||
          lookahead == 542 ||
          lookahead == 544 ||
          lookahead == 546 ||
          lookahead == 548 ||
          lookahead == 550 ||
          lookahead == 552 ||
          lookahead == 554 ||
          lookahead == 556 ||
          lookahead == 558 ||
          lookahead == 560 ||
          lookahead == 562 ||
          lookahead == 570 ||
          lookahead == 571 ||
          lookahead == 573 ||
          lookahead == 574 ||
          lookahead == 577 ||
          (579 <= lookahead && lookahead <= 582) ||
          lookahead == 584 ||
          lookahead == 586 ||
          lookahead == 588 ||
          lookahead == 590 ||
          lookahead == 880 ||
          lookahead == 882 ||
          lookahead == 886 ||
          lookahead == 895 ||
          lookahead == 902 ||
          (904 <= lookahead && lookahead <= 906) ||
          lookahead == 908 ||
          lookahead == 910 ||
          lookahead == 911 ||
          (913 <= lookahead && lookahead <= 929) ||
          (931 <= lookahead && lookahead <= 939) ||
          lookahead == 975 ||
          (978 <= lookahead && lookahead <= 980) ||
          lookahead == 984 ||
          lookahead == 986 ||
          lookahead == 988 ||
          lookahead == 990 ||
          lookahead == 992 ||
          lookahead == 994 ||
          lookahead == 996 ||
          lookahead == 998 ||
          lookahead == 1000 ||
          lookahead == 1002 ||
          lookahead == 1004 ||
          lookahead == 1006 ||
          lookahead == 1012 ||
          lookahead == 1015 ||
          lookahead == 1017 ||
          lookahead == 1018 ||
          (1021 <= lookahead && lookahead <= 1071) ||
          lookahead == 1120 ||
          lookahead == 1122 ||
          lookahead == 1124 ||
          lookahead == 1126 ||
          lookahead == 1128 ||
          lookahead == 1130 ||
          lookahead == 1132 ||
          lookahead == 1134 ||
          lookahead == 1136 ||
          lookahead == 1138 ||
          lookahead == 1140 ||
          lookahead == 1142 ||
          lookahead == 1144 ||
          lookahead == 1146 ||
          lookahead == 1148 ||
          lookahead == 1150 ||
          lookahead == 1152 ||
          lookahead == 1162 ||
          lookahead == 1164 ||
          lookahead == 1166 ||
          lookahead == 1168 ||
          lookahead == 1170 ||
          lookahead == 1172 ||
          lookahead == 1174 ||
          lookahead == 1176 ||
          lookahead == 1178 ||
          lookahead == 1180 ||
          lookahead == 1182 ||
          lookahead == 1184 ||
          lookahead == 1186 ||
          lookahead == 1188 ||
          lookahead == 1190 ||
          lookahead == 1192 ||
          lookahead == 1194 ||
          lookahead == 1196 ||
          lookahead == 1198 ||
          lookahead == 1200 ||
          lookahead == 1202 ||
          lookahead == 1204 ||
          lookahead == 1206 ||
          lookahead == 1208 ||
          lookahead == 1210 ||
          lookahead == 1212 ||
          lookahead == 1214 ||
          lookahead == 1216 ||
          lookahead == 1217 ||
          lookahead == 1219 ||
          lookahead == 1221 ||
          lookahead == 1223 ||
          lookahead == 1225 ||
          lookahead == 1227 ||
          lookahead == 1229 ||
          lookahead == 1232 ||
          lookahead == 1234 ||
          lookahead == 1236 ||
          lookahead == 1238 ||
          lookahead == 1240 ||
          lookahead == 1242 ||
          lookahead == 1244 ||
          lookahead == 1246 ||
          lookahead == 1248 ||
          lookahead == 1250 ||
          lookahead == 1252 ||
          lookahead == 1254 ||
          lookahead == 1256 ||
          lookahead == 1258 ||
          lookahead == 1260 ||
          lookahead == 1262 ||
          lookahead == 1264 ||
          lookahead == 1266 ||
          lookahead == 1268 ||
          lookahead == 1270 ||
          lookahead == 1272 ||
          lookahead == 1274 ||
          lookahead == 1276 ||
          lookahead == 1278 ||
          lookahead == 1280 ||
          lookahead == 1282 ||
          lookahead == 1284 ||
          lookahead == 1286 ||
          lookahead == 1288 ||
          lookahead == 1290 ||
          lookahead == 1292 ||
          lookahead == 1294 ||
          lookahead == 1296 ||
          lookahead == 1298 ||
          lookahead == 1300 ||
          lookahead == 1302 ||
          lookahead == 1304 ||
          lookahead == 1306 ||
          lookahead == 1308 ||
          lookahead == 1310 ||
          lookahead == 1312 ||
          lookahead == 1314 ||
          lookahead == 1316 ||
          lookahead == 1318 ||
          lookahead == 1320 ||
          lookahead == 1322 ||
          lookahead == 1324 ||
          lookahead == 1326 ||
          (1329 <= lookahead && lookahead <= 1366) ||
          (4256 <= lookahead && lookahead <= 4293) ||
          lookahead == 4295 ||
          lookahead == 4301 ||
          (5024 <= lookahead && lookahead <= 5109) ||
          (7312 <= lookahead && lookahead <= 7354) ||
          (7357 <= lookahead && lookahead <= 7359) ||
          lookahead == 7680 ||
          lookahead == 7682 ||
          lookahead == 7684 ||
          lookahead == 7686 ||
          lookahead == 7688 ||
          lookahead == 7690 ||
          lookahead == 7692 ||
          lookahead == 7694 ||
          lookahead == 7696 ||
          lookahead == 7698 ||
          lookahead == 7700 ||
          lookahead == 7702 ||
          lookahead == 7704 ||
          lookahead == 7706 ||
          lookahead == 7708 ||
          lookahead == 7710 ||
          lookahead == 7712 ||
          lookahead == 7714 ||
          lookahead == 7716 ||
          lookahead == 7718 ||
          lookahead == 7720 ||
          lookahead == 7722 ||
          lookahead == 7724 ||
          lookahead == 7726 ||
          lookahead == 7728 ||
          lookahead == 7730 ||
          lookahead == 7732 ||
          lookahead == 7734 ||
          lookahead == 7736 ||
          lookahead == 7738 ||
          lookahead == 7740 ||
          lookahead == 7742 ||
          lookahead == 7744 ||
          lookahead == 7746 ||
          lookahead == 7748 ||
          lookahead == 7750 ||
          lookahead == 7752 ||
          lookahead == 7754 ||
          lookahead == 7756 ||
          lookahead == 7758 ||
          lookahead == 7760 ||
          lookahead == 7762 ||
          lookahead == 7764 ||
          lookahead == 7766 ||
          lookahead == 7768 ||
          lookahead == 7770 ||
          lookahead == 7772 ||
          lookahead == 7774 ||
          lookahead == 7776 ||
          lookahead == 7778 ||
          lookahead == 7780 ||
          lookahead == 7782 ||
          lookahead == 7784 ||
          lookahead == 7786 ||
          lookahead == 7788 ||
          lookahead == 7790 ||
          lookahead == 7792 ||
          lookahead == 7794 ||
          lookahead == 7796 ||
          lookahead == 7798 ||
          lookahead == 7800 ||
          lookahead == 7802 ||
          lookahead == 7804 ||
          lookahead == 7806 ||
          lookahead == 7808 ||
          lookahead == 7810 ||
          lookahead == 7812 ||
          lookahead == 7814 ||
          lookahead == 7816 ||
          lookahead == 7818 ||
          lookahead == 7820 ||
          lookahead == 7822 ||
          lookahead == 7824 ||
          lookahead == 7826 ||
          lookahead == 7828 ||
          lookahead == 7838 ||
          lookahead == 7840 ||
          lookahead == 7842 ||
          lookahead == 7844 ||
          lookahead == 7846 ||
          lookahead == 7848 ||
          lookahead == 7850 ||
          lookahead == 7852 ||
          lookahead == 7854 ||
          lookahead == 7856 ||
          lookahead == 7858 ||
          lookahead == 7860 ||
          lookahead == 7862 ||
          lookahead == 7864 ||
          lookahead == 7866 ||
          lookahead == 7868 ||
          lookahead == 7870 ||
          lookahead == 7872 ||
          lookahead == 7874 ||
          lookahead == 7876 ||
          lookahead == 7878 ||
          lookahead == 7880 ||
          lookahead == 7882 ||
          lookahead == 7884 ||
          lookahead == 7886 ||
          lookahead == 7888 ||
          lookahead == 7890 ||
          lookahead == 7892 ||
          lookahead == 7894 ||
          lookahead == 7896 ||
          lookahead == 7898 ||
          lookahead == 7900 ||
          lookahead == 7902 ||
          lookahead == 7904 ||
          lookahead == 7906 ||
          lookahead == 7908 ||
          lookahead == 7910 ||
          lookahead == 7912 ||
          lookahead == 7914 ||
          lookahead == 7916 ||
          lookahead == 7918 ||
          lookahead == 7920 ||
          lookahead == 7922 ||
          lookahead == 7924 ||
          lookahead == 7926 ||
          lookahead == 7928 ||
          lookahead == 7930 ||
          lookahead == 7932 ||
          lookahead == 7934 ||
          (7944 <= lookahead && lookahead <= 7951) ||
          (7960 <= lookahead && lookahead <= 7965) ||
          (7976 <= lookahead && lookahead <= 7983) ||
          (7992 <= lookahead && lookahead <= 7999) ||
          (8008 <= lookahead && lookahead <= 8013) ||
          lookahead == 8025 ||
          lookahead == 8027 ||
          lookahead == 8029 ||
          lookahead == 8031 ||
          (8040 <= lookahead && lookahead <= 8047) ||
          (8120 <= lookahead && lookahead <= 8123) ||
          (8136 <= lookahead && lookahead <= 8139) ||
          (8152 <= lookahead && lookahead <= 8155) ||
          (8168 <= lookahead && lookahead <= 8172) ||
          (8184 <= lookahead && lookahead <= 8187) ||
          lookahead == 8450 ||
          lookahead == 8455 ||
          (8459 <= lookahead && lookahead <= 8461) ||
          (8464 <= lookahead && lookahead <= 8466) ||
          lookahead == 8469 ||
          (8473 <= lookahead && lookahead <= 8477) ||
          lookahead == 8484 ||
          lookahead == 8486 ||
          lookahead == 8488 ||
          (8490 <= lookahead && lookahead <= 8493) ||
          (8496 <= lookahead && lookahead <= 8499) ||
          lookahead == 8510 ||
          lookahead == 8511 ||
          lookahead == 8517 ||
          lookahead == 8579 ||
          (11264 <= lookahead && lookahead <= 11310) ||
          lookahead == 11360 ||
          (11362 <= lookahead && lookahead <= 11364) ||
          lookahead == 11367 ||
          lookahead == 11369 ||
          lookahead == 11371 ||
          (11373 <= lookahead && lookahead <= 11376) ||
          lookahead == 11378 ||
          lookahead == 11381 ||
          (11390 <= lookahead && lookahead <= 11392) ||
          lookahead == 11394 ||
          lookahead == 11396 ||
          lookahead == 11398 ||
          lookahead == 11400 ||
          lookahead == 11402 ||
          lookahead == 11404 ||
          lookahead == 11406 ||
          lookahead == 11408 ||
          lookahead == 11410 ||
          lookahead == 11412 ||
          lookahead == 11414 ||
          lookahead == 11416 ||
          lookahead == 11418 ||
          lookahead == 11420 ||
          lookahead == 11422 ||
          lookahead == 11424 ||
          lookahead == 11426 ||
          lookahead == 11428 ||
          lookahead == 11430 ||
          lookahead == 11432 ||
          lookahead == 11434 ||
          lookahead == 11436 ||
          lookahead == 11438 ||
          lookahead == 11440 ||
          lookahead == 11442 ||
          lookahead == 11444 ||
          lookahead == 11446 ||
          lookahead == 11448 ||
          lookahead == 11450 ||
          lookahead == 11452 ||
          lookahead == 11454 ||
          lookahead == 11456 ||
          lookahead == 11458 ||
          lookahead == 11460 ||
          lookahead == 11462 ||
          lookahead == 11464 ||
          lookahead == 11466 ||
          lookahead == 11468 ||
          lookahead == 11470 ||
          lookahead == 11472 ||
          lookahead == 11474 ||
          lookahead == 11476 ||
          lookahead == 11478 ||
          lookahead == 11480 ||
          lookahead == 11482 ||
          lookahead == 11484 ||
          lookahead == 11486 ||
          lookahead == 11488 ||
          lookahead == 11490 ||
          lookahead == 11499 ||
          lookahead == 11501 ||
          lookahead == 11506 ||
          lookahead == 42560 ||
          lookahead == 42562 ||
          lookahead == 42564 ||
          lookahead == 42566 ||
          lookahead == 42568 ||
          lookahead == 42570 ||
          lookahead == 42572 ||
          lookahead == 42574 ||
          lookahead == 42576 ||
          lookahead == 42578 ||
          lookahead == 42580 ||
          lookahead == 42582 ||
          lookahead == 42584 ||
          lookahead == 42586 ||
          lookahead == 42588 ||
          lookahead == 42590 ||
          lookahead == 42592 ||
          lookahead == 42594 ||
          lookahead == 42596 ||
          lookahead == 42598 ||
          lookahead == 42600 ||
          lookahead == 42602 ||
          lookahead == 42604 ||
          lookahead == 42624 ||
          lookahead == 42626 ||
          lookahead == 42628 ||
          lookahead == 42630 ||
          lookahead == 42632 ||
          lookahead == 42634 ||
          lookahead == 42636 ||
          lookahead == 42638 ||
          lookahead == 42640 ||
          lookahead == 42642 ||
          lookahead == 42644 ||
          lookahead == 42646 ||
          lookahead == 42648 ||
          lookahead == 42650 ||
          lookahead == 42786 ||
          lookahead == 42788 ||
          lookahead == 42790 ||
          lookahead == 42792 ||
          lookahead == 42794 ||
          lookahead == 42796 ||
          lookahead == 42798 ||
          lookahead == 42802 ||
          lookahead == 42804 ||
          lookahead == 42806 ||
          lookahead == 42808 ||
          lookahead == 42810 ||
          lookahead == 42812 ||
          lookahead == 42814 ||
          lookahead == 42816 ||
          lookahead == 42818 ||
          lookahead == 42820 ||
          lookahead == 42822 ||
          lookahead == 42824 ||
          lookahead == 42826 ||
          lookahead == 42828 ||
          lookahead == 42830 ||
          lookahead == 42832 ||
          lookahead == 42834 ||
          lookahead == 42836 ||
          lookahead == 42838 ||
          lookahead == 42840 ||
          lookahead == 42842 ||
          lookahead == 42844 ||
          lookahead == 42846 ||
          lookahead == 42848 ||
          lookahead == 42850 ||
          lookahead == 42852 ||
          lookahead == 42854 ||
          lookahead == 42856 ||
          lookahead == 42858 ||
          lookahead == 42860 ||
          lookahead == 42862 ||
          lookahead == 42873 ||
          lookahead == 42875 ||
          lookahead == 42877 ||
          lookahead == 42878 ||
          lookahead == 42880 ||
          lookahead == 42882 ||
          lookahead == 42884 ||
          lookahead == 42886 ||
          lookahead == 42891 ||
          lookahead == 42893 ||
          lookahead == 42896 ||
          lookahead == 42898 ||
          lookahead == 42902 ||
          lookahead == 42904 ||
          lookahead == 42906 ||
          lookahead == 42908 ||
          lookahead == 42910 ||
          lookahead == 42912 ||
          lookahead == 42914 ||
          lookahead == 42916 ||
          lookahead == 42918 ||
          lookahead == 42920 ||
          (42922 <= lookahead && lookahead <= 42926) ||
          (42928 <= lookahead && lookahead <= 42932) ||
          lookahead == 42934 ||
          lookahead == 42936 ||
          lookahead == 42938 ||
          lookahead == 42940 ||
          lookahead == 42942 ||
          lookahead == 42946 ||
          (42948 <= lookahead && lookahead <= 42950) ||
          (65313 <= lookahead && lookahead <= 65338) ||
          (66560 <= lookahead && lookahead <= 66599) ||
          (66736 <= lookahead && lookahead <= 66771) ||
          (68736 <= lookahead && lookahead <= 68786) ||
          (71840 <= lookahead && lookahead <= 71871) ||
          (93760 <= lookahead && lookahead <= 93791) ||
          (119808 <= lookahead && lookahead <= 119833) ||
          (119860 <= lookahead && lookahead <= 119885) ||
          (119912 <= lookahead && lookahead <= 119937) ||
          lookahead == 119964 ||
          lookahead == 119966 ||
          lookahead == 119967 ||
          lookahead == 119970 ||
          lookahead == 119973 ||
          lookahead == 119974 ||
          (119977 <= lookahead && lookahead <= 119980) ||
          (119982 <= lookahead && lookahead <= 119989) ||
          (120016 <= lookahead && lookahead <= 120041) ||
          lookahead == 120068 ||
          lookahead == 120069 ||
          (120071 <= lookahead && lookahead <= 120074) ||
          (120077 <= lookahead && lookahead <= 120084) ||
          (120086 <= lookahead && lookahead <= 120092) ||
          lookahead == 120120 ||
          lookahead == 120121 ||
          (120123 <= lookahead && lookahead <= 120126) ||
          (120128 <= lookahead && lookahead <= 120132) ||
          lookahead == 120134 ||
          (120138 <= lookahead && lookahead <= 120144) ||
          (120172 <= lookahead && lookahead <= 120197) ||
          (120224 <= lookahead && lookahead <= 120249) ||
          (120276 <= lookahead && lookahead <= 120301) ||
          (120328 <= lookahead && lookahead <= 120353) ||
          (120380 <= lookahead && lookahead <= 120405) ||
          (120432 <= lookahead && lookahead <= 120457) ||
          (120488 <= lookahead && lookahead <= 120512) ||
          (120546 <= lookahead && lookahead <= 120570) ||
          (120604 <= lookahead && lookahead <= 120628) ||
          (120662 <= lookahead && lookahead <= 120686) ||
          (120720 <= lookahead && lookahead <= 120744) ||
          lookahead == 120778 ||
          (125184 <= lookahead && lookahead <= 125217)) ADVANCE(180);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(121);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_key_value_line_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_plugin);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_pushtag);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_poptag);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_pushmeta);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_popmeta);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(132);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(133);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_cost_comp_list);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(135);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_balance);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_close);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_document);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_pad);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_price);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 170 ||
          lookahead == 181 ||
          lookahead == 186 ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 705) ||
          (710 <= lookahead && lookahead <= 721) ||
          (736 <= lookahead && lookahead <= 740) ||
          lookahead == 748 ||
          lookahead == 750 ||
          (880 <= lookahead && lookahead <= 884) ||
          lookahead == 886 ||
          lookahead == 887 ||
          (890 <= lookahead && lookahead <= 893) ||
          lookahead == 895 ||
          lookahead == 902 ||
          (904 <= lookahead && lookahead <= 906) ||
          lookahead == 908 ||
          (910 <= lookahead && lookahead <= 929) ||
          (931 <= lookahead && lookahead <= 1013) ||
          (1015 <= lookahead && lookahead <= 1153) ||
          (1162 <= lookahead && lookahead <= 1327) ||
          (1329 <= lookahead && lookahead <= 1366) ||
          lookahead == 1369 ||
          (1376 <= lookahead && lookahead <= 1416) ||
          (1488 <= lookahead && lookahead <= 1514) ||
          (1519 <= lookahead && lookahead <= 1522) ||
          (1568 <= lookahead && lookahead <= 1610) ||
          lookahead == 1646 ||
          lookahead == 1647 ||
          (1649 <= lookahead && lookahead <= 1747) ||
          lookahead == 1749 ||
          lookahead == 1765 ||
          lookahead == 1766 ||
          lookahead == 1774 ||
          lookahead == 1775 ||
          (1786 <= lookahead && lookahead <= 1788) ||
          lookahead == 1791 ||
          lookahead == 1808 ||
          (1810 <= lookahead && lookahead <= 1839) ||
          (1869 <= lookahead && lookahead <= 1957) ||
          lookahead == 1969 ||
          (1994 <= lookahead && lookahead <= 2026) ||
          lookahead == 2036 ||
          lookahead == 2037 ||
          lookahead == 2042 ||
          (2048 <= lookahead && lookahead <= 2069) ||
          lookahead == 2074 ||
          lookahead == 2084 ||
          lookahead == 2088 ||
          (2112 <= lookahead && lookahead <= 2136) ||
          (2144 <= lookahead && lookahead <= 2154) ||
          (2208 <= lookahead && lookahead <= 2228) ||
          (2230 <= lookahead && lookahead <= 2237) ||
          (2308 <= lookahead && lookahead <= 2361) ||
          lookahead == 2365 ||
          lookahead == 2384 ||
          (2392 <= lookahead && lookahead <= 2401) ||
          (2417 <= lookahead && lookahead <= 2432) ||
          (2437 <= lookahead && lookahead <= 2444) ||
          lookahead == 2447 ||
          lookahead == 2448 ||
          (2451 <= lookahead && lookahead <= 2472) ||
          (2474 <= lookahead && lookahead <= 2480) ||
          lookahead == 2482 ||
          (2486 <= lookahead && lookahead <= 2489) ||
          lookahead == 2493 ||
          lookahead == 2510 ||
          lookahead == 2524 ||
          lookahead == 2525 ||
          (2527 <= lookahead && lookahead <= 2529) ||
          lookahead == 2544 ||
          lookahead == 2545 ||
          lookahead == 2556 ||
          (2565 <= lookahead && lookahead <= 2570) ||
          lookahead == 2575 ||
          lookahead == 2576 ||
          (2579 <= lookahead && lookahead <= 2600) ||
          (2602 <= lookahead && lookahead <= 2608) ||
          lookahead == 2610 ||
          lookahead == 2611 ||
          lookahead == 2613 ||
          lookahead == 2614 ||
          lookahead == 2616 ||
          lookahead == 2617 ||
          (2649 <= lookahead && lookahead <= 2652) ||
          lookahead == 2654 ||
          (2674 <= lookahead && lookahead <= 2676) ||
          (2693 <= lookahead && lookahead <= 2701) ||
          (2703 <= lookahead && lookahead <= 2705) ||
          (2707 <= lookahead && lookahead <= 2728) ||
          (2730 <= lookahead && lookahead <= 2736) ||
          lookahead == 2738 ||
          lookahead == 2739 ||
          (2741 <= lookahead && lookahead <= 2745) ||
          lookahead == 2749 ||
          lookahead == 2768 ||
          lookahead == 2784 ||
          lookahead == 2785 ||
          lookahead == 2809 ||
          (2821 <= lookahead && lookahead <= 2828) ||
          lookahead == 2831 ||
          lookahead == 2832 ||
          (2835 <= lookahead && lookahead <= 2856) ||
          (2858 <= lookahead && lookahead <= 2864) ||
          lookahead == 2866 ||
          lookahead == 2867 ||
          (2869 <= lookahead && lookahead <= 2873) ||
          lookahead == 2877 ||
          lookahead == 2908 ||
          lookahead == 2909 ||
          (2911 <= lookahead && lookahead <= 2913) ||
          lookahead == 2929 ||
          lookahead == 2947 ||
          (2949 <= lookahead && lookahead <= 2954) ||
          (2958 <= lookahead && lookahead <= 2960) ||
          (2962 <= lookahead && lookahead <= 2965) ||
          lookahead == 2969 ||
          lookahead == 2970 ||
          lookahead == 2972 ||
          lookahead == 2974 ||
          lookahead == 2975 ||
          lookahead == 2979 ||
          lookahead == 2980 ||
          (2984 <= lookahead && lookahead <= 2986) ||
          (2990 <= lookahead && lookahead <= 3001) ||
          lookahead == 3024 ||
          (3077 <= lookahead && lookahead <= 3084) ||
          (3086 <= lookahead && lookahead <= 3088) ||
          (3090 <= lookahead && lookahead <= 3112) ||
          (3114 <= lookahead && lookahead <= 3129) ||
          lookahead == 3133 ||
          (3160 <= lookahead && lookahead <= 3162) ||
          lookahead == 3168 ||
          lookahead == 3169 ||
          lookahead == 3200 ||
          (3205 <= lookahead && lookahead <= 3212) ||
          (3214 <= lookahead && lookahead <= 3216) ||
          (3218 <= lookahead && lookahead <= 3240) ||
          (3242 <= lookahead && lookahead <= 3251) ||
          (3253 <= lookahead && lookahead <= 3257) ||
          lookahead == 3261 ||
          lookahead == 3294 ||
          lookahead == 3296 ||
          lookahead == 3297 ||
          lookahead == 3313 ||
          lookahead == 3314 ||
          (3333 <= lookahead && lookahead <= 3340) ||
          (3342 <= lookahead && lookahead <= 3344) ||
          (3346 <= lookahead && lookahead <= 3386) ||
          lookahead == 3389 ||
          lookahead == 3406 ||
          (3412 <= lookahead && lookahead <= 3414) ||
          (3423 <= lookahead && lookahead <= 3425) ||
          (3450 <= lookahead && lookahead <= 3455) ||
          (3461 <= lookahead && lookahead <= 3478) ||
          (3482 <= lookahead && lookahead <= 3505) ||
          (3507 <= lookahead && lookahead <= 3515) ||
          lookahead == 3517 ||
          (3520 <= lookahead && lookahead <= 3526) ||
          (3585 <= lookahead && lookahead <= 3632) ||
          lookahead == 3634 ||
          lookahead == 3635 ||
          (3648 <= lookahead && lookahead <= 3654) ||
          lookahead == 3713 ||
          lookahead == 3714 ||
          lookahead == 3716 ||
          (3718 <= lookahead && lookahead <= 3722) ||
          (3724 <= lookahead && lookahead <= 3747) ||
          lookahead == 3749 ||
          (3751 <= lookahead && lookahead <= 3760) ||
          lookahead == 3762 ||
          lookahead == 3763 ||
          lookahead == 3773 ||
          (3776 <= lookahead && lookahead <= 3780) ||
          lookahead == 3782 ||
          (3804 <= lookahead && lookahead <= 3807) ||
          lookahead == 3840 ||
          (3904 <= lookahead && lookahead <= 3911) ||
          (3913 <= lookahead && lookahead <= 3948) ||
          (3976 <= lookahead && lookahead <= 3980) ||
          (4096 <= lookahead && lookahead <= 4138) ||
          lookahead == 4159 ||
          (4176 <= lookahead && lookahead <= 4181) ||
          (4186 <= lookahead && lookahead <= 4189) ||
          lookahead == 4193 ||
          lookahead == 4197 ||
          lookahead == 4198 ||
          (4206 <= lookahead && lookahead <= 4208) ||
          (4213 <= lookahead && lookahead <= 4225) ||
          lookahead == 4238 ||
          (4256 <= lookahead && lookahead <= 4293) ||
          lookahead == 4295 ||
          lookahead == 4301 ||
          (4304 <= lookahead && lookahead <= 4346) ||
          (4348 <= lookahead && lookahead <= 4680) ||
          (4682 <= lookahead && lookahead <= 4685) ||
          (4688 <= lookahead && lookahead <= 4694) ||
          lookahead == 4696 ||
          (4698 <= lookahead && lookahead <= 4701) ||
          (4704 <= lookahead && lookahead <= 4744) ||
          (4746 <= lookahead && lookahead <= 4749) ||
          (4752 <= lookahead && lookahead <= 4784) ||
          (4786 <= lookahead && lookahead <= 4789) ||
          (4792 <= lookahead && lookahead <= 4798) ||
          lookahead == 4800 ||
          (4802 <= lookahead && lookahead <= 4805) ||
          (4808 <= lookahead && lookahead <= 4822) ||
          (4824 <= lookahead && lookahead <= 4880) ||
          (4882 <= lookahead && lookahead <= 4885) ||
          (4888 <= lookahead && lookahead <= 4954) ||
          (4992 <= lookahead && lookahead <= 5007) ||
          (5024 <= lookahead && lookahead <= 5109) ||
          (5112 <= lookahead && lookahead <= 5117) ||
          (5121 <= lookahead && lookahead <= 5740) ||
          (5743 <= lookahead && lookahead <= 5759) ||
          (5761 <= lookahead && lookahead <= 5786) ||
          (5792 <= lookahead && lookahead <= 5866) ||
          (5873 <= lookahead && lookahead <= 5880) ||
          (5888 <= lookahead && lookahead <= 5900) ||
          (5902 <= lookahead && lookahead <= 5905) ||
          (5920 <= lookahead && lookahead <= 5937) ||
          (5952 <= lookahead && lookahead <= 5969) ||
          (5984 <= lookahead && lookahead <= 5996) ||
          (5998 <= lookahead && lookahead <= 6000) ||
          (6016 <= lookahead && lookahead <= 6067) ||
          lookahead == 6103 ||
          lookahead == 6108 ||
          (6176 <= lookahead && lookahead <= 6264) ||
          (6272 <= lookahead && lookahead <= 6276) ||
          (6279 <= lookahead && lookahead <= 6312) ||
          lookahead == 6314 ||
          (6320 <= lookahead && lookahead <= 6389) ||
          (6400 <= lookahead && lookahead <= 6430) ||
          (6480 <= lookahead && lookahead <= 6509) ||
          (6512 <= lookahead && lookahead <= 6516) ||
          (6528 <= lookahead && lookahead <= 6571) ||
          (6576 <= lookahead && lookahead <= 6601) ||
          (6656 <= lookahead && lookahead <= 6678) ||
          (6688 <= lookahead && lookahead <= 6740) ||
          lookahead == 6823 ||
          (6917 <= lookahead && lookahead <= 6963) ||
          (6981 <= lookahead && lookahead <= 6987) ||
          (7043 <= lookahead && lookahead <= 7072) ||
          lookahead == 7086 ||
          lookahead == 7087 ||
          (7098 <= lookahead && lookahead <= 7141) ||
          (7168 <= lookahead && lookahead <= 7203) ||
          (7245 <= lookahead && lookahead <= 7247) ||
          (7258 <= lookahead && lookahead <= 7293) ||
          (7296 <= lookahead && lookahead <= 7304) ||
          (7312 <= lookahead && lookahead <= 7354) ||
          (7357 <= lookahead && lookahead <= 7359) ||
          (7401 <= lookahead && lookahead <= 7404) ||
          (7406 <= lookahead && lookahead <= 7411) ||
          lookahead == 7413 ||
          lookahead == 7414 ||
          lookahead == 7418 ||
          (7424 <= lookahead && lookahead <= 7615) ||
          (7680 <= lookahead && lookahead <= 7957) ||
          (7960 <= lookahead && lookahead <= 7965) ||
          (7968 <= lookahead && lookahead <= 8005) ||
          (8008 <= lookahead && lookahead <= 8013) ||
          (8016 <= lookahead && lookahead <= 8023) ||
          lookahead == 8025 ||
          lookahead == 8027 ||
          lookahead == 8029 ||
          (8031 <= lookahead && lookahead <= 8061) ||
          (8064 <= lookahead && lookahead <= 8116) ||
          (8118 <= lookahead && lookahead <= 8124) ||
          lookahead == 8126 ||
          (8130 <= lookahead && lookahead <= 8132) ||
          (8134 <= lookahead && lookahead <= 8140) ||
          (8144 <= lookahead && lookahead <= 8147) ||
          (8150 <= lookahead && lookahead <= 8155) ||
          (8160 <= lookahead && lookahead <= 8172) ||
          (8178 <= lookahead && lookahead <= 8180) ||
          (8182 <= lookahead && lookahead <= 8188) ||
          lookahead == 8305 ||
          lookahead == 8319 ||
          (8336 <= lookahead && lookahead <= 8348) ||
          lookahead == 8450 ||
          lookahead == 8455 ||
          (8458 <= lookahead && lookahead <= 8467) ||
          lookahead == 8469 ||
          (8473 <= lookahead && lookahead <= 8477) ||
          lookahead == 8484 ||
          lookahead == 8486 ||
          lookahead == 8488 ||
          (8490 <= lookahead && lookahead <= 8493) ||
          (8495 <= lookahead && lookahead <= 8505) ||
          (8508 <= lookahead && lookahead <= 8511) ||
          (8517 <= lookahead && lookahead <= 8521) ||
          lookahead == 8526 ||
          lookahead == 8579 ||
          lookahead == 8580 ||
          (11264 <= lookahead && lookahead <= 11310) ||
          (11312 <= lookahead && lookahead <= 11358) ||
          (11360 <= lookahead && lookahead <= 11492) ||
          (11499 <= lookahead && lookahead <= 11502) ||
          lookahead == 11506 ||
          lookahead == 11507 ||
          (11520 <= lookahead && lookahead <= 11557) ||
          lookahead == 11559 ||
          lookahead == 11565 ||
          (11568 <= lookahead && lookahead <= 11623) ||
          lookahead == 11631 ||
          (11648 <= lookahead && lookahead <= 11670) ||
          (11680 <= lookahead && lookahead <= 11686) ||
          (11688 <= lookahead && lookahead <= 11694) ||
          (11696 <= lookahead && lookahead <= 11702) ||
          (11704 <= lookahead && lookahead <= 11710) ||
          (11712 <= lookahead && lookahead <= 11718) ||
          (11720 <= lookahead && lookahead <= 11726) ||
          (11728 <= lookahead && lookahead <= 11734) ||
          (11736 <= lookahead && lookahead <= 11742) ||
          lookahead == 11823 ||
          lookahead == 12293 ||
          lookahead == 12294 ||
          (12337 <= lookahead && lookahead <= 12341) ||
          lookahead == 12347 ||
          lookahead == 12348 ||
          (12353 <= lookahead && lookahead <= 12438) ||
          (12445 <= lookahead && lookahead <= 12447) ||
          (12449 <= lookahead && lookahead <= 12538) ||
          (12540 <= lookahead && lookahead <= 12543) ||
          (12549 <= lookahead && lookahead <= 12591) ||
          (12593 <= lookahead && lookahead <= 12686) ||
          (12704 <= lookahead && lookahead <= 12730) ||
          (12784 <= lookahead && lookahead <= 12799) ||
          (13312 <= lookahead && lookahead <= 19893) ||
          (19968 <= lookahead && lookahead <= 40943) ||
          (40960 <= lookahead && lookahead <= 42124) ||
          (42192 <= lookahead && lookahead <= 42237) ||
          (42240 <= lookahead && lookahead <= 42508) ||
          (42512 <= lookahead && lookahead <= 42527) ||
          lookahead == 42538 ||
          lookahead == 42539 ||
          (42560 <= lookahead && lookahead <= 42606) ||
          (42623 <= lookahead && lookahead <= 42653) ||
          (42656 <= lookahead && lookahead <= 42725) ||
          (42775 <= lookahead && lookahead <= 42783) ||
          (42786 <= lookahead && lookahead <= 42888) ||
          (42891 <= lookahead && lookahead <= 42943) ||
          (42946 <= lookahead && lookahead <= 42950) ||
          (42999 <= lookahead && lookahead <= 43009) ||
          (43011 <= lookahead && lookahead <= 43013) ||
          (43015 <= lookahead && lookahead <= 43018) ||
          (43020 <= lookahead && lookahead <= 43042) ||
          (43072 <= lookahead && lookahead <= 43123) ||
          (43138 <= lookahead && lookahead <= 43187) ||
          (43250 <= lookahead && lookahead <= 43255) ||
          lookahead == 43259 ||
          lookahead == 43261 ||
          lookahead == 43262 ||
          (43274 <= lookahead && lookahead <= 43301) ||
          (43312 <= lookahead && lookahead <= 43334) ||
          (43360 <= lookahead && lookahead <= 43388) ||
          (43396 <= lookahead && lookahead <= 43442) ||
          lookahead == 43471 ||
          (43488 <= lookahead && lookahead <= 43492) ||
          (43494 <= lookahead && lookahead <= 43503) ||
          (43514 <= lookahead && lookahead <= 43518) ||
          (43520 <= lookahead && lookahead <= 43560) ||
          (43584 <= lookahead && lookahead <= 43586) ||
          (43588 <= lookahead && lookahead <= 43595) ||
          (43616 <= lookahead && lookahead <= 43638) ||
          lookahead == 43642 ||
          (43646 <= lookahead && lookahead <= 43695) ||
          lookahead == 43697 ||
          lookahead == 43701 ||
          lookahead == 43702 ||
          (43705 <= lookahead && lookahead <= 43709) ||
          lookahead == 43712 ||
          lookahead == 43714 ||
          (43739 <= lookahead && lookahead <= 43741) ||
          (43744 <= lookahead && lookahead <= 43754) ||
          (43762 <= lookahead && lookahead <= 43764) ||
          (43777 <= lookahead && lookahead <= 43782) ||
          (43785 <= lookahead && lookahead <= 43790) ||
          (43793 <= lookahead && lookahead <= 43798) ||
          (43808 <= lookahead && lookahead <= 43814) ||
          (43816 <= lookahead && lookahead <= 43822) ||
          (43824 <= lookahead && lookahead <= 43866) ||
          (43868 <= lookahead && lookahead <= 43879) ||
          (43888 <= lookahead && lookahead <= 44002) ||
          (44032 <= lookahead && lookahead <= 55203) ||
          (55216 <= lookahead && lookahead <= 55238) ||
          (55243 <= lookahead && lookahead <= 55291) ||
          (63744 <= lookahead && lookahead <= 64109) ||
          (64112 <= lookahead && lookahead <= 64217) ||
          (64256 <= lookahead && lookahead <= 64262) ||
          (64275 <= lookahead && lookahead <= 64279) ||
          lookahead == 64285 ||
          (64287 <= lookahead && lookahead <= 64296) ||
          (64298 <= lookahead && lookahead <= 64310) ||
          (64312 <= lookahead && lookahead <= 64316) ||
          lookahead == 64318 ||
          lookahead == 64320 ||
          lookahead == 64321 ||
          lookahead == 64323 ||
          lookahead == 64324 ||
          (64326 <= lookahead && lookahead <= 64433) ||
          (64467 <= lookahead && lookahead <= 64829) ||
          (64848 <= lookahead && lookahead <= 64911) ||
          (64914 <= lookahead && lookahead <= 64967) ||
          (65008 <= lookahead && lookahead <= 65019) ||
          (65136 <= lookahead && lookahead <= 65140) ||
          (65142 <= lookahead && lookahead <= 65276) ||
          (65313 <= lookahead && lookahead <= 65338) ||
          (65345 <= lookahead && lookahead <= 65370) ||
          (65382 <= lookahead && lookahead <= 65470) ||
          (65474 <= lookahead && lookahead <= 65479) ||
          (65482 <= lookahead && lookahead <= 65487) ||
          (65490 <= lookahead && lookahead <= 65495) ||
          (65498 <= lookahead && lookahead <= 65500) ||
          (65536 <= lookahead && lookahead <= 65547) ||
          (65549 <= lookahead && lookahead <= 65574) ||
          (65576 <= lookahead && lookahead <= 65594) ||
          lookahead == 65596 ||
          lookahead == 65597 ||
          (65599 <= lookahead && lookahead <= 65613) ||
          (65616 <= lookahead && lookahead <= 65629) ||
          (65664 <= lookahead && lookahead <= 65786) ||
          (66176 <= lookahead && lookahead <= 66204) ||
          (66208 <= lookahead && lookahead <= 66256) ||
          (66304 <= lookahead && lookahead <= 66335) ||
          (66349 <= lookahead && lookahead <= 66368) ||
          (66370 <= lookahead && lookahead <= 66377) ||
          (66384 <= lookahead && lookahead <= 66421) ||
          (66432 <= lookahead && lookahead <= 66461) ||
          (66464 <= lookahead && lookahead <= 66499) ||
          (66504 <= lookahead && lookahead <= 66511) ||
          (66560 <= lookahead && lookahead <= 66717) ||
          (66736 <= lookahead && lookahead <= 66771) ||
          (66776 <= lookahead && lookahead <= 66811) ||
          (66816 <= lookahead && lookahead <= 66855) ||
          (66864 <= lookahead && lookahead <= 66915) ||
          (67072 <= lookahead && lookahead <= 67382) ||
          (67392 <= lookahead && lookahead <= 67413) ||
          (67424 <= lookahead && lookahead <= 67431) ||
          (67584 <= lookahead && lookahead <= 67589) ||
          lookahead == 67592 ||
          (67594 <= lookahead && lookahead <= 67637) ||
          lookahead == 67639 ||
          lookahead == 67640 ||
          lookahead == 67644 ||
          (67647 <= lookahead && lookahead <= 67669) ||
          (67680 <= lookahead && lookahead <= 67702) ||
          (67712 <= lookahead && lookahead <= 67742) ||
          (67808 <= lookahead && lookahead <= 67826) ||
          lookahead == 67828 ||
          lookahead == 67829 ||
          (67840 <= lookahead && lookahead <= 67861) ||
          (67872 <= lookahead && lookahead <= 67897) ||
          (67968 <= lookahead && lookahead <= 68023) ||
          lookahead == 68030 ||
          lookahead == 68031 ||
          lookahead == 68096 ||
          (68112 <= lookahead && lookahead <= 68115) ||
          (68117 <= lookahead && lookahead <= 68119) ||
          (68121 <= lookahead && lookahead <= 68149) ||
          (68192 <= lookahead && lookahead <= 68220) ||
          (68224 <= lookahead && lookahead <= 68252) ||
          (68288 <= lookahead && lookahead <= 68295) ||
          (68297 <= lookahead && lookahead <= 68324) ||
          (68352 <= lookahead && lookahead <= 68405) ||
          (68416 <= lookahead && lookahead <= 68437) ||
          (68448 <= lookahead && lookahead <= 68466) ||
          (68480 <= lookahead && lookahead <= 68497) ||
          (68608 <= lookahead && lookahead <= 68680) ||
          (68736 <= lookahead && lookahead <= 68786) ||
          (68800 <= lookahead && lookahead <= 68850) ||
          (68864 <= lookahead && lookahead <= 68899) ||
          (69376 <= lookahead && lookahead <= 69404) ||
          lookahead == 69415 ||
          (69424 <= lookahead && lookahead <= 69445) ||
          (69600 <= lookahead && lookahead <= 69622) ||
          (69635 <= lookahead && lookahead <= 69687) ||
          (69763 <= lookahead && lookahead <= 69807) ||
          (69840 <= lookahead && lookahead <= 69864) ||
          (69891 <= lookahead && lookahead <= 69926) ||
          lookahead == 69956 ||
          (69968 <= lookahead && lookahead <= 70002) ||
          lookahead == 70006 ||
          (70019 <= lookahead && lookahead <= 70066) ||
          (70081 <= lookahead && lookahead <= 70084) ||
          lookahead == 70106 ||
          lookahead == 70108 ||
          (70144 <= lookahead && lookahead <= 70161) ||
          (70163 <= lookahead && lookahead <= 70187) ||
          (70272 <= lookahead && lookahead <= 70278) ||
          lookahead == 70280 ||
          (70282 <= lookahead && lookahead <= 70285) ||
          (70287 <= lookahead && lookahead <= 70301) ||
          (70303 <= lookahead && lookahead <= 70312) ||
          (70320 <= lookahead && lookahead <= 70366) ||
          (70405 <= lookahead && lookahead <= 70412) ||
          lookahead == 70415 ||
          lookahead == 70416 ||
          (70419 <= lookahead && lookahead <= 70440) ||
          (70442 <= lookahead && lookahead <= 70448) ||
          lookahead == 70450 ||
          lookahead == 70451 ||
          (70453 <= lookahead && lookahead <= 70457) ||
          lookahead == 70461 ||
          lookahead == 70480 ||
          (70493 <= lookahead && lookahead <= 70497) ||
          (70656 <= lookahead && lookahead <= 70708) ||
          (70727 <= lookahead && lookahead <= 70730) ||
          lookahead == 70751 ||
          (70784 <= lookahead && lookahead <= 70831) ||
          lookahead == 70852 ||
          lookahead == 70853 ||
          lookahead == 70855 ||
          (71040 <= lookahead && lookahead <= 71086) ||
          (71128 <= lookahead && lookahead <= 71131) ||
          (71168 <= lookahead && lookahead <= 71215) ||
          lookahead == 71236 ||
          (71296 <= lookahead && lookahead <= 71338) ||
          lookahead == 71352 ||
          (71424 <= lookahead && lookahead <= 71450) ||
          (71680 <= lookahead && lookahead <= 71723) ||
          (71840 <= lookahead && lookahead <= 71903) ||
          lookahead == 71935 ||
          (72096 <= lookahead && lookahead <= 72103) ||
          (72106 <= lookahead && lookahead <= 72144) ||
          lookahead == 72161 ||
          lookahead == 72163 ||
          lookahead == 72192 ||
          (72203 <= lookahead && lookahead <= 72242) ||
          lookahead == 72250 ||
          lookahead == 72272 ||
          (72284 <= lookahead && lookahead <= 72329) ||
          lookahead == 72349 ||
          (72384 <= lookahead && lookahead <= 72440) ||
          (72704 <= lookahead && lookahead <= 72712) ||
          (72714 <= lookahead && lookahead <= 72750) ||
          lookahead == 72768 ||
          (72818 <= lookahead && lookahead <= 72847) ||
          (72960 <= lookahead && lookahead <= 72966) ||
          lookahead == 72968 ||
          lookahead == 72969 ||
          (72971 <= lookahead && lookahead <= 73008) ||
          lookahead == 73030 ||
          (73056 <= lookahead && lookahead <= 73061) ||
          lookahead == 73063 ||
          lookahead == 73064 ||
          (73066 <= lookahead && lookahead <= 73097) ||
          lookahead == 73112 ||
          (73440 <= lookahead && lookahead <= 73458) ||
          (73728 <= lookahead && lookahead <= 74649) ||
          (74880 <= lookahead && lookahead <= 75075) ||
          (77824 <= lookahead && lookahead <= 78894) ||
          (82944 <= lookahead && lookahead <= 83526) ||
          (92160 <= lookahead && lookahead <= 92728) ||
          (92736 <= lookahead && lookahead <= 92766) ||
          (92880 <= lookahead && lookahead <= 92909) ||
          (92928 <= lookahead && lookahead <= 92975) ||
          (92992 <= lookahead && lookahead <= 92995) ||
          (93027 <= lookahead && lookahead <= 93047) ||
          (93053 <= lookahead && lookahead <= 93071) ||
          (93760 <= lookahead && lookahead <= 93823) ||
          (93952 <= lookahead && lookahead <= 94026) ||
          lookahead == 94032 ||
          (94099 <= lookahead && lookahead <= 94111) ||
          lookahead == 94176 ||
          lookahead == 94177 ||
          lookahead == 94179 ||
          (94208 <= lookahead && lookahead <= 100343) ||
          (100352 <= lookahead && lookahead <= 101106) ||
          (110592 <= lookahead && lookahead <= 110878) ||
          (110928 <= lookahead && lookahead <= 110930) ||
          (110948 <= lookahead && lookahead <= 110951) ||
          (110960 <= lookahead && lookahead <= 111355) ||
          (113664 <= lookahead && lookahead <= 113770) ||
          (113776 <= lookahead && lookahead <= 113788) ||
          (113792 <= lookahead && lookahead <= 113800) ||
          (113808 <= lookahead && lookahead <= 113817) ||
          (119808 <= lookahead && lookahead <= 119892) ||
          (119894 <= lookahead && lookahead <= 119964) ||
          lookahead == 119966 ||
          lookahead == 119967 ||
          lookahead == 119970 ||
          lookahead == 119973 ||
          lookahead == 119974 ||
          (119977 <= lookahead && lookahead <= 119980) ||
          (119982 <= lookahead && lookahead <= 119993) ||
          lookahead == 119995 ||
          (119997 <= lookahead && lookahead <= 120003) ||
          (120005 <= lookahead && lookahead <= 120069) ||
          (120071 <= lookahead && lookahead <= 120074) ||
          (120077 <= lookahead && lookahead <= 120084) ||
          (120086 <= lookahead && lookahead <= 120092) ||
          (120094 <= lookahead && lookahead <= 120121) ||
          (120123 <= lookahead && lookahead <= 120126) ||
          (120128 <= lookahead && lookahead <= 120132) ||
          lookahead == 120134 ||
          (120138 <= lookahead && lookahead <= 120144) ||
          (120146 <= lookahead && lookahead <= 120485) ||
          (120488 <= lookahead && lookahead <= 120512) ||
          (120514 <= lookahead && lookahead <= 120538) ||
          (120540 <= lookahead && lookahead <= 120570) ||
          (120572 <= lookahead && lookahead <= 120596) ||
          (120598 <= lookahead && lookahead <= 120628) ||
          (120630 <= lookahead && lookahead <= 120654) ||
          (120656 <= lookahead && lookahead <= 120686) ||
          (120688 <= lookahead && lookahead <= 120712) ||
          (120714 <= lookahead && lookahead <= 120744) ||
          (120746 <= lookahead && lookahead <= 120770) ||
          (120772 <= lookahead && lookahead <= 120779) ||
          (123136 <= lookahead && lookahead <= 123180) ||
          (123191 <= lookahead && lookahead <= 123197) ||
          lookahead == 123214 ||
          (123584 <= lookahead && lookahead <= 123627) ||
          (124928 <= lookahead && lookahead <= 125124) ||
          (125184 <= lookahead && lookahead <= 125251) ||
          lookahead == 125259 ||
          (126464 <= lookahead && lookahead <= 126467) ||
          (126469 <= lookahead && lookahead <= 126495) ||
          lookahead == 126497 ||
          lookahead == 126498 ||
          lookahead == 126500 ||
          lookahead == 126503 ||
          (126505 <= lookahead && lookahead <= 126514) ||
          (126516 <= lookahead && lookahead <= 126519) ||
          lookahead == 126521 ||
          lookahead == 126523 ||
          lookahead == 126530 ||
          lookahead == 126535 ||
          lookahead == 126537 ||
          lookahead == 126539 ||
          (126541 <= lookahead && lookahead <= 126543) ||
          lookahead == 126545 ||
          lookahead == 126546 ||
          lookahead == 126548 ||
          lookahead == 126551 ||
          lookahead == 126553 ||
          lookahead == 126555 ||
          lookahead == 126557 ||
          lookahead == 126559 ||
          lookahead == 126561 ||
          lookahead == 126562 ||
          lookahead == 126564 ||
          (126567 <= lookahead && lookahead <= 126570) ||
          (126572 <= lookahead && lookahead <= 126578) ||
          (126580 <= lookahead && lookahead <= 126583) ||
          (126585 <= lookahead && lookahead <= 126588) ||
          lookahead == 126590 ||
          (126592 <= lookahead && lookahead <= 126601) ||
          (126603 <= lookahead && lookahead <= 126619) ||
          (126625 <= lookahead && lookahead <= 126627) ||
          (126629 <= lookahead && lookahead <= 126633) ||
          (126635 <= lookahead && lookahead <= 126651) ||
          (131072 <= lookahead && lookahead <= 173782) ||
          (173824 <= lookahead && lookahead <= 177972) ||
          (177984 <= lookahead && lookahead <= 178205) ||
          (178208 <= lookahead && lookahead <= 183969) ||
          (183984 <= lookahead && lookahead <= 191456) ||
          (194560 <= lookahead && lookahead <= 195101)) ADVANCE(18);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 170 ||
          lookahead == 181 ||
          lookahead == 186 ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 705) ||
          (710 <= lookahead && lookahead <= 721) ||
          (736 <= lookahead && lookahead <= 740) ||
          lookahead == 748 ||
          lookahead == 750 ||
          (880 <= lookahead && lookahead <= 884) ||
          lookahead == 886 ||
          lookahead == 887 ||
          (890 <= lookahead && lookahead <= 893) ||
          lookahead == 895 ||
          lookahead == 902 ||
          (904 <= lookahead && lookahead <= 906) ||
          lookahead == 908 ||
          (910 <= lookahead && lookahead <= 929) ||
          (931 <= lookahead && lookahead <= 1013) ||
          (1015 <= lookahead && lookahead <= 1153) ||
          (1162 <= lookahead && lookahead <= 1327) ||
          (1329 <= lookahead && lookahead <= 1366) ||
          lookahead == 1369 ||
          (1376 <= lookahead && lookahead <= 1416) ||
          (1488 <= lookahead && lookahead <= 1514) ||
          (1519 <= lookahead && lookahead <= 1522) ||
          (1568 <= lookahead && lookahead <= 1610) ||
          lookahead == 1646 ||
          lookahead == 1647 ||
          (1649 <= lookahead && lookahead <= 1747) ||
          lookahead == 1749 ||
          lookahead == 1765 ||
          lookahead == 1766 ||
          lookahead == 1774 ||
          lookahead == 1775 ||
          (1786 <= lookahead && lookahead <= 1788) ||
          lookahead == 1791 ||
          lookahead == 1808 ||
          (1810 <= lookahead && lookahead <= 1839) ||
          (1869 <= lookahead && lookahead <= 1957) ||
          lookahead == 1969 ||
          (1994 <= lookahead && lookahead <= 2026) ||
          lookahead == 2036 ||
          lookahead == 2037 ||
          lookahead == 2042 ||
          (2048 <= lookahead && lookahead <= 2069) ||
          lookahead == 2074 ||
          lookahead == 2084 ||
          lookahead == 2088 ||
          (2112 <= lookahead && lookahead <= 2136) ||
          (2144 <= lookahead && lookahead <= 2154) ||
          (2208 <= lookahead && lookahead <= 2228) ||
          (2230 <= lookahead && lookahead <= 2237) ||
          (2308 <= lookahead && lookahead <= 2361) ||
          lookahead == 2365 ||
          lookahead == 2384 ||
          (2392 <= lookahead && lookahead <= 2401) ||
          (2417 <= lookahead && lookahead <= 2432) ||
          (2437 <= lookahead && lookahead <= 2444) ||
          lookahead == 2447 ||
          lookahead == 2448 ||
          (2451 <= lookahead && lookahead <= 2472) ||
          (2474 <= lookahead && lookahead <= 2480) ||
          lookahead == 2482 ||
          (2486 <= lookahead && lookahead <= 2489) ||
          lookahead == 2493 ||
          lookahead == 2510 ||
          lookahead == 2524 ||
          lookahead == 2525 ||
          (2527 <= lookahead && lookahead <= 2529) ||
          lookahead == 2544 ||
          lookahead == 2545 ||
          lookahead == 2556 ||
          (2565 <= lookahead && lookahead <= 2570) ||
          lookahead == 2575 ||
          lookahead == 2576 ||
          (2579 <= lookahead && lookahead <= 2600) ||
          (2602 <= lookahead && lookahead <= 2608) ||
          lookahead == 2610 ||
          lookahead == 2611 ||
          lookahead == 2613 ||
          lookahead == 2614 ||
          lookahead == 2616 ||
          lookahead == 2617 ||
          (2649 <= lookahead && lookahead <= 2652) ||
          lookahead == 2654 ||
          (2674 <= lookahead && lookahead <= 2676) ||
          (2693 <= lookahead && lookahead <= 2701) ||
          (2703 <= lookahead && lookahead <= 2705) ||
          (2707 <= lookahead && lookahead <= 2728) ||
          (2730 <= lookahead && lookahead <= 2736) ||
          lookahead == 2738 ||
          lookahead == 2739 ||
          (2741 <= lookahead && lookahead <= 2745) ||
          lookahead == 2749 ||
          lookahead == 2768 ||
          lookahead == 2784 ||
          lookahead == 2785 ||
          lookahead == 2809 ||
          (2821 <= lookahead && lookahead <= 2828) ||
          lookahead == 2831 ||
          lookahead == 2832 ||
          (2835 <= lookahead && lookahead <= 2856) ||
          (2858 <= lookahead && lookahead <= 2864) ||
          lookahead == 2866 ||
          lookahead == 2867 ||
          (2869 <= lookahead && lookahead <= 2873) ||
          lookahead == 2877 ||
          lookahead == 2908 ||
          lookahead == 2909 ||
          (2911 <= lookahead && lookahead <= 2913) ||
          lookahead == 2929 ||
          lookahead == 2947 ||
          (2949 <= lookahead && lookahead <= 2954) ||
          (2958 <= lookahead && lookahead <= 2960) ||
          (2962 <= lookahead && lookahead <= 2965) ||
          lookahead == 2969 ||
          lookahead == 2970 ||
          lookahead == 2972 ||
          lookahead == 2974 ||
          lookahead == 2975 ||
          lookahead == 2979 ||
          lookahead == 2980 ||
          (2984 <= lookahead && lookahead <= 2986) ||
          (2990 <= lookahead && lookahead <= 3001) ||
          lookahead == 3024 ||
          (3077 <= lookahead && lookahead <= 3084) ||
          (3086 <= lookahead && lookahead <= 3088) ||
          (3090 <= lookahead && lookahead <= 3112) ||
          (3114 <= lookahead && lookahead <= 3129) ||
          lookahead == 3133 ||
          (3160 <= lookahead && lookahead <= 3162) ||
          lookahead == 3168 ||
          lookahead == 3169 ||
          lookahead == 3200 ||
          (3205 <= lookahead && lookahead <= 3212) ||
          (3214 <= lookahead && lookahead <= 3216) ||
          (3218 <= lookahead && lookahead <= 3240) ||
          (3242 <= lookahead && lookahead <= 3251) ||
          (3253 <= lookahead && lookahead <= 3257) ||
          lookahead == 3261 ||
          lookahead == 3294 ||
          lookahead == 3296 ||
          lookahead == 3297 ||
          lookahead == 3313 ||
          lookahead == 3314 ||
          (3333 <= lookahead && lookahead <= 3340) ||
          (3342 <= lookahead && lookahead <= 3344) ||
          (3346 <= lookahead && lookahead <= 3386) ||
          lookahead == 3389 ||
          lookahead == 3406 ||
          (3412 <= lookahead && lookahead <= 3414) ||
          (3423 <= lookahead && lookahead <= 3425) ||
          (3450 <= lookahead && lookahead <= 3455) ||
          (3461 <= lookahead && lookahead <= 3478) ||
          (3482 <= lookahead && lookahead <= 3505) ||
          (3507 <= lookahead && lookahead <= 3515) ||
          lookahead == 3517 ||
          (3520 <= lookahead && lookahead <= 3526) ||
          (3585 <= lookahead && lookahead <= 3632) ||
          lookahead == 3634 ||
          lookahead == 3635 ||
          (3648 <= lookahead && lookahead <= 3654) ||
          lookahead == 3713 ||
          lookahead == 3714 ||
          lookahead == 3716 ||
          (3718 <= lookahead && lookahead <= 3722) ||
          (3724 <= lookahead && lookahead <= 3747) ||
          lookahead == 3749 ||
          (3751 <= lookahead && lookahead <= 3760) ||
          lookahead == 3762 ||
          lookahead == 3763 ||
          lookahead == 3773 ||
          (3776 <= lookahead && lookahead <= 3780) ||
          lookahead == 3782 ||
          (3804 <= lookahead && lookahead <= 3807) ||
          lookahead == 3840 ||
          (3904 <= lookahead && lookahead <= 3911) ||
          (3913 <= lookahead && lookahead <= 3948) ||
          (3976 <= lookahead && lookahead <= 3980) ||
          (4096 <= lookahead && lookahead <= 4138) ||
          lookahead == 4159 ||
          (4176 <= lookahead && lookahead <= 4181) ||
          (4186 <= lookahead && lookahead <= 4189) ||
          lookahead == 4193 ||
          lookahead == 4197 ||
          lookahead == 4198 ||
          (4206 <= lookahead && lookahead <= 4208) ||
          (4213 <= lookahead && lookahead <= 4225) ||
          lookahead == 4238 ||
          (4256 <= lookahead && lookahead <= 4293) ||
          lookahead == 4295 ||
          lookahead == 4301 ||
          (4304 <= lookahead && lookahead <= 4346) ||
          (4348 <= lookahead && lookahead <= 4680) ||
          (4682 <= lookahead && lookahead <= 4685) ||
          (4688 <= lookahead && lookahead <= 4694) ||
          lookahead == 4696 ||
          (4698 <= lookahead && lookahead <= 4701) ||
          (4704 <= lookahead && lookahead <= 4744) ||
          (4746 <= lookahead && lookahead <= 4749) ||
          (4752 <= lookahead && lookahead <= 4784) ||
          (4786 <= lookahead && lookahead <= 4789) ||
          (4792 <= lookahead && lookahead <= 4798) ||
          lookahead == 4800 ||
          (4802 <= lookahead && lookahead <= 4805) ||
          (4808 <= lookahead && lookahead <= 4822) ||
          (4824 <= lookahead && lookahead <= 4880) ||
          (4882 <= lookahead && lookahead <= 4885) ||
          (4888 <= lookahead && lookahead <= 4954) ||
          (4992 <= lookahead && lookahead <= 5007) ||
          (5024 <= lookahead && lookahead <= 5109) ||
          (5112 <= lookahead && lookahead <= 5117) ||
          (5121 <= lookahead && lookahead <= 5740) ||
          (5743 <= lookahead && lookahead <= 5759) ||
          (5761 <= lookahead && lookahead <= 5786) ||
          (5792 <= lookahead && lookahead <= 5866) ||
          (5873 <= lookahead && lookahead <= 5880) ||
          (5888 <= lookahead && lookahead <= 5900) ||
          (5902 <= lookahead && lookahead <= 5905) ||
          (5920 <= lookahead && lookahead <= 5937) ||
          (5952 <= lookahead && lookahead <= 5969) ||
          (5984 <= lookahead && lookahead <= 5996) ||
          (5998 <= lookahead && lookahead <= 6000) ||
          (6016 <= lookahead && lookahead <= 6067) ||
          lookahead == 6103 ||
          lookahead == 6108 ||
          (6176 <= lookahead && lookahead <= 6264) ||
          (6272 <= lookahead && lookahead <= 6276) ||
          (6279 <= lookahead && lookahead <= 6312) ||
          lookahead == 6314 ||
          (6320 <= lookahead && lookahead <= 6389) ||
          (6400 <= lookahead && lookahead <= 6430) ||
          (6480 <= lookahead && lookahead <= 6509) ||
          (6512 <= lookahead && lookahead <= 6516) ||
          (6528 <= lookahead && lookahead <= 6571) ||
          (6576 <= lookahead && lookahead <= 6601) ||
          (6656 <= lookahead && lookahead <= 6678) ||
          (6688 <= lookahead && lookahead <= 6740) ||
          lookahead == 6823 ||
          (6917 <= lookahead && lookahead <= 6963) ||
          (6981 <= lookahead && lookahead <= 6987) ||
          (7043 <= lookahead && lookahead <= 7072) ||
          lookahead == 7086 ||
          lookahead == 7087 ||
          (7098 <= lookahead && lookahead <= 7141) ||
          (7168 <= lookahead && lookahead <= 7203) ||
          (7245 <= lookahead && lookahead <= 7247) ||
          (7258 <= lookahead && lookahead <= 7293) ||
          (7296 <= lookahead && lookahead <= 7304) ||
          (7312 <= lookahead && lookahead <= 7354) ||
          (7357 <= lookahead && lookahead <= 7359) ||
          (7401 <= lookahead && lookahead <= 7404) ||
          (7406 <= lookahead && lookahead <= 7411) ||
          lookahead == 7413 ||
          lookahead == 7414 ||
          lookahead == 7418 ||
          (7424 <= lookahead && lookahead <= 7615) ||
          (7680 <= lookahead && lookahead <= 7957) ||
          (7960 <= lookahead && lookahead <= 7965) ||
          (7968 <= lookahead && lookahead <= 8005) ||
          (8008 <= lookahead && lookahead <= 8013) ||
          (8016 <= lookahead && lookahead <= 8023) ||
          lookahead == 8025 ||
          lookahead == 8027 ||
          lookahead == 8029 ||
          (8031 <= lookahead && lookahead <= 8061) ||
          (8064 <= lookahead && lookahead <= 8116) ||
          (8118 <= lookahead && lookahead <= 8124) ||
          lookahead == 8126 ||
          (8130 <= lookahead && lookahead <= 8132) ||
          (8134 <= lookahead && lookahead <= 8140) ||
          (8144 <= lookahead && lookahead <= 8147) ||
          (8150 <= lookahead && lookahead <= 8155) ||
          (8160 <= lookahead && lookahead <= 8172) ||
          (8178 <= lookahead && lookahead <= 8180) ||
          (8182 <= lookahead && lookahead <= 8188) ||
          lookahead == 8305 ||
          lookahead == 8319 ||
          (8336 <= lookahead && lookahead <= 8348) ||
          lookahead == 8450 ||
          lookahead == 8455 ||
          (8458 <= lookahead && lookahead <= 8467) ||
          lookahead == 8469 ||
          (8473 <= lookahead && lookahead <= 8477) ||
          lookahead == 8484 ||
          lookahead == 8486 ||
          lookahead == 8488 ||
          (8490 <= lookahead && lookahead <= 8493) ||
          (8495 <= lookahead && lookahead <= 8505) ||
          (8508 <= lookahead && lookahead <= 8511) ||
          (8517 <= lookahead && lookahead <= 8521) ||
          lookahead == 8526 ||
          lookahead == 8579 ||
          lookahead == 8580 ||
          (11264 <= lookahead && lookahead <= 11310) ||
          (11312 <= lookahead && lookahead <= 11358) ||
          (11360 <= lookahead && lookahead <= 11492) ||
          (11499 <= lookahead && lookahead <= 11502) ||
          lookahead == 11506 ||
          lookahead == 11507 ||
          (11520 <= lookahead && lookahead <= 11557) ||
          lookahead == 11559 ||
          lookahead == 11565 ||
          (11568 <= lookahead && lookahead <= 11623) ||
          lookahead == 11631 ||
          (11648 <= lookahead && lookahead <= 11670) ||
          (11680 <= lookahead && lookahead <= 11686) ||
          (11688 <= lookahead && lookahead <= 11694) ||
          (11696 <= lookahead && lookahead <= 11702) ||
          (11704 <= lookahead && lookahead <= 11710) ||
          (11712 <= lookahead && lookahead <= 11718) ||
          (11720 <= lookahead && lookahead <= 11726) ||
          (11728 <= lookahead && lookahead <= 11734) ||
          (11736 <= lookahead && lookahead <= 11742) ||
          lookahead == 11823 ||
          lookahead == 12293 ||
          lookahead == 12294 ||
          (12337 <= lookahead && lookahead <= 12341) ||
          lookahead == 12347 ||
          lookahead == 12348 ||
          (12353 <= lookahead && lookahead <= 12438) ||
          (12445 <= lookahead && lookahead <= 12447) ||
          (12449 <= lookahead && lookahead <= 12538) ||
          (12540 <= lookahead && lookahead <= 12543) ||
          (12549 <= lookahead && lookahead <= 12591) ||
          (12593 <= lookahead && lookahead <= 12686) ||
          (12704 <= lookahead && lookahead <= 12730) ||
          (12784 <= lookahead && lookahead <= 12799) ||
          (13312 <= lookahead && lookahead <= 19893) ||
          (19968 <= lookahead && lookahead <= 40943) ||
          (40960 <= lookahead && lookahead <= 42124) ||
          (42192 <= lookahead && lookahead <= 42237) ||
          (42240 <= lookahead && lookahead <= 42508) ||
          (42512 <= lookahead && lookahead <= 42527) ||
          lookahead == 42538 ||
          lookahead == 42539 ||
          (42560 <= lookahead && lookahead <= 42606) ||
          (42623 <= lookahead && lookahead <= 42653) ||
          (42656 <= lookahead && lookahead <= 42725) ||
          (42775 <= lookahead && lookahead <= 42783) ||
          (42786 <= lookahead && lookahead <= 42888) ||
          (42891 <= lookahead && lookahead <= 42943) ||
          (42946 <= lookahead && lookahead <= 42950) ||
          (42999 <= lookahead && lookahead <= 43009) ||
          (43011 <= lookahead && lookahead <= 43013) ||
          (43015 <= lookahead && lookahead <= 43018) ||
          (43020 <= lookahead && lookahead <= 43042) ||
          (43072 <= lookahead && lookahead <= 43123) ||
          (43138 <= lookahead && lookahead <= 43187) ||
          (43250 <= lookahead && lookahead <= 43255) ||
          lookahead == 43259 ||
          lookahead == 43261 ||
          lookahead == 43262 ||
          (43274 <= lookahead && lookahead <= 43301) ||
          (43312 <= lookahead && lookahead <= 43334) ||
          (43360 <= lookahead && lookahead <= 43388) ||
          (43396 <= lookahead && lookahead <= 43442) ||
          lookahead == 43471 ||
          (43488 <= lookahead && lookahead <= 43492) ||
          (43494 <= lookahead && lookahead <= 43503) ||
          (43514 <= lookahead && lookahead <= 43518) ||
          (43520 <= lookahead && lookahead <= 43560) ||
          (43584 <= lookahead && lookahead <= 43586) ||
          (43588 <= lookahead && lookahead <= 43595) ||
          (43616 <= lookahead && lookahead <= 43638) ||
          lookahead == 43642 ||
          (43646 <= lookahead && lookahead <= 43695) ||
          lookahead == 43697 ||
          lookahead == 43701 ||
          lookahead == 43702 ||
          (43705 <= lookahead && lookahead <= 43709) ||
          lookahead == 43712 ||
          lookahead == 43714 ||
          (43739 <= lookahead && lookahead <= 43741) ||
          (43744 <= lookahead && lookahead <= 43754) ||
          (43762 <= lookahead && lookahead <= 43764) ||
          (43777 <= lookahead && lookahead <= 43782) ||
          (43785 <= lookahead && lookahead <= 43790) ||
          (43793 <= lookahead && lookahead <= 43798) ||
          (43808 <= lookahead && lookahead <= 43814) ||
          (43816 <= lookahead && lookahead <= 43822) ||
          (43824 <= lookahead && lookahead <= 43866) ||
          (43868 <= lookahead && lookahead <= 43879) ||
          (43888 <= lookahead && lookahead <= 44002) ||
          (44032 <= lookahead && lookahead <= 55203) ||
          (55216 <= lookahead && lookahead <= 55238) ||
          (55243 <= lookahead && lookahead <= 55291) ||
          (63744 <= lookahead && lookahead <= 64109) ||
          (64112 <= lookahead && lookahead <= 64217) ||
          (64256 <= lookahead && lookahead <= 64262) ||
          (64275 <= lookahead && lookahead <= 64279) ||
          lookahead == 64285 ||
          (64287 <= lookahead && lookahead <= 64296) ||
          (64298 <= lookahead && lookahead <= 64310) ||
          (64312 <= lookahead && lookahead <= 64316) ||
          lookahead == 64318 ||
          lookahead == 64320 ||
          lookahead == 64321 ||
          lookahead == 64323 ||
          lookahead == 64324 ||
          (64326 <= lookahead && lookahead <= 64433) ||
          (64467 <= lookahead && lookahead <= 64829) ||
          (64848 <= lookahead && lookahead <= 64911) ||
          (64914 <= lookahead && lookahead <= 64967) ||
          (65008 <= lookahead && lookahead <= 65019) ||
          (65136 <= lookahead && lookahead <= 65140) ||
          (65142 <= lookahead && lookahead <= 65276) ||
          (65313 <= lookahead && lookahead <= 65338) ||
          (65345 <= lookahead && lookahead <= 65370) ||
          (65382 <= lookahead && lookahead <= 65470) ||
          (65474 <= lookahead && lookahead <= 65479) ||
          (65482 <= lookahead && lookahead <= 65487) ||
          (65490 <= lookahead && lookahead <= 65495) ||
          (65498 <= lookahead && lookahead <= 65500) ||
          (65536 <= lookahead && lookahead <= 65547) ||
          (65549 <= lookahead && lookahead <= 65574) ||
          (65576 <= lookahead && lookahead <= 65594) ||
          lookahead == 65596 ||
          lookahead == 65597 ||
          (65599 <= lookahead && lookahead <= 65613) ||
          (65616 <= lookahead && lookahead <= 65629) ||
          (65664 <= lookahead && lookahead <= 65786) ||
          (66176 <= lookahead && lookahead <= 66204) ||
          (66208 <= lookahead && lookahead <= 66256) ||
          (66304 <= lookahead && lookahead <= 66335) ||
          (66349 <= lookahead && lookahead <= 66368) ||
          (66370 <= lookahead && lookahead <= 66377) ||
          (66384 <= lookahead && lookahead <= 66421) ||
          (66432 <= lookahead && lookahead <= 66461) ||
          (66464 <= lookahead && lookahead <= 66499) ||
          (66504 <= lookahead && lookahead <= 66511) ||
          (66560 <= lookahead && lookahead <= 66717) ||
          (66736 <= lookahead && lookahead <= 66771) ||
          (66776 <= lookahead && lookahead <= 66811) ||
          (66816 <= lookahead && lookahead <= 66855) ||
          (66864 <= lookahead && lookahead <= 66915) ||
          (67072 <= lookahead && lookahead <= 67382) ||
          (67392 <= lookahead && lookahead <= 67413) ||
          (67424 <= lookahead && lookahead <= 67431) ||
          (67584 <= lookahead && lookahead <= 67589) ||
          lookahead == 67592 ||
          (67594 <= lookahead && lookahead <= 67637) ||
          lookahead == 67639 ||
          lookahead == 67640 ||
          lookahead == 67644 ||
          (67647 <= lookahead && lookahead <= 67669) ||
          (67680 <= lookahead && lookahead <= 67702) ||
          (67712 <= lookahead && lookahead <= 67742) ||
          (67808 <= lookahead && lookahead <= 67826) ||
          lookahead == 67828 ||
          lookahead == 67829 ||
          (67840 <= lookahead && lookahead <= 67861) ||
          (67872 <= lookahead && lookahead <= 67897) ||
          (67968 <= lookahead && lookahead <= 68023) ||
          lookahead == 68030 ||
          lookahead == 68031 ||
          lookahead == 68096 ||
          (68112 <= lookahead && lookahead <= 68115) ||
          (68117 <= lookahead && lookahead <= 68119) ||
          (68121 <= lookahead && lookahead <= 68149) ||
          (68192 <= lookahead && lookahead <= 68220) ||
          (68224 <= lookahead && lookahead <= 68252) ||
          (68288 <= lookahead && lookahead <= 68295) ||
          (68297 <= lookahead && lookahead <= 68324) ||
          (68352 <= lookahead && lookahead <= 68405) ||
          (68416 <= lookahead && lookahead <= 68437) ||
          (68448 <= lookahead && lookahead <= 68466) ||
          (68480 <= lookahead && lookahead <= 68497) ||
          (68608 <= lookahead && lookahead <= 68680) ||
          (68736 <= lookahead && lookahead <= 68786) ||
          (68800 <= lookahead && lookahead <= 68850) ||
          (68864 <= lookahead && lookahead <= 68899) ||
          (69376 <= lookahead && lookahead <= 69404) ||
          lookahead == 69415 ||
          (69424 <= lookahead && lookahead <= 69445) ||
          (69600 <= lookahead && lookahead <= 69622) ||
          (69635 <= lookahead && lookahead <= 69687) ||
          (69763 <= lookahead && lookahead <= 69807) ||
          (69840 <= lookahead && lookahead <= 69864) ||
          (69891 <= lookahead && lookahead <= 69926) ||
          lookahead == 69956 ||
          (69968 <= lookahead && lookahead <= 70002) ||
          lookahead == 70006 ||
          (70019 <= lookahead && lookahead <= 70066) ||
          (70081 <= lookahead && lookahead <= 70084) ||
          lookahead == 70106 ||
          lookahead == 70108 ||
          (70144 <= lookahead && lookahead <= 70161) ||
          (70163 <= lookahead && lookahead <= 70187) ||
          (70272 <= lookahead && lookahead <= 70278) ||
          lookahead == 70280 ||
          (70282 <= lookahead && lookahead <= 70285) ||
          (70287 <= lookahead && lookahead <= 70301) ||
          (70303 <= lookahead && lookahead <= 70312) ||
          (70320 <= lookahead && lookahead <= 70366) ||
          (70405 <= lookahead && lookahead <= 70412) ||
          lookahead == 70415 ||
          lookahead == 70416 ||
          (70419 <= lookahead && lookahead <= 70440) ||
          (70442 <= lookahead && lookahead <= 70448) ||
          lookahead == 70450 ||
          lookahead == 70451 ||
          (70453 <= lookahead && lookahead <= 70457) ||
          lookahead == 70461 ||
          lookahead == 70480 ||
          (70493 <= lookahead && lookahead <= 70497) ||
          (70656 <= lookahead && lookahead <= 70708) ||
          (70727 <= lookahead && lookahead <= 70730) ||
          lookahead == 70751 ||
          (70784 <= lookahead && lookahead <= 70831) ||
          lookahead == 70852 ||
          lookahead == 70853 ||
          lookahead == 70855 ||
          (71040 <= lookahead && lookahead <= 71086) ||
          (71128 <= lookahead && lookahead <= 71131) ||
          (71168 <= lookahead && lookahead <= 71215) ||
          lookahead == 71236 ||
          (71296 <= lookahead && lookahead <= 71338) ||
          lookahead == 71352 ||
          (71424 <= lookahead && lookahead <= 71450) ||
          (71680 <= lookahead && lookahead <= 71723) ||
          (71840 <= lookahead && lookahead <= 71903) ||
          lookahead == 71935 ||
          (72096 <= lookahead && lookahead <= 72103) ||
          (72106 <= lookahead && lookahead <= 72144) ||
          lookahead == 72161 ||
          lookahead == 72163 ||
          lookahead == 72192 ||
          (72203 <= lookahead && lookahead <= 72242) ||
          lookahead == 72250 ||
          lookahead == 72272 ||
          (72284 <= lookahead && lookahead <= 72329) ||
          lookahead == 72349 ||
          (72384 <= lookahead && lookahead <= 72440) ||
          (72704 <= lookahead && lookahead <= 72712) ||
          (72714 <= lookahead && lookahead <= 72750) ||
          lookahead == 72768 ||
          (72818 <= lookahead && lookahead <= 72847) ||
          (72960 <= lookahead && lookahead <= 72966) ||
          lookahead == 72968 ||
          lookahead == 72969 ||
          (72971 <= lookahead && lookahead <= 73008) ||
          lookahead == 73030 ||
          (73056 <= lookahead && lookahead <= 73061) ||
          lookahead == 73063 ||
          lookahead == 73064 ||
          (73066 <= lookahead && lookahead <= 73097) ||
          lookahead == 73112 ||
          (73440 <= lookahead && lookahead <= 73458) ||
          (73728 <= lookahead && lookahead <= 74649) ||
          (74880 <= lookahead && lookahead <= 75075) ||
          (77824 <= lookahead && lookahead <= 78894) ||
          (82944 <= lookahead && lookahead <= 83526) ||
          (92160 <= lookahead && lookahead <= 92728) ||
          (92736 <= lookahead && lookahead <= 92766) ||
          (92880 <= lookahead && lookahead <= 92909) ||
          (92928 <= lookahead && lookahead <= 92975) ||
          (92992 <= lookahead && lookahead <= 92995) ||
          (93027 <= lookahead && lookahead <= 93047) ||
          (93053 <= lookahead && lookahead <= 93071) ||
          (93760 <= lookahead && lookahead <= 93823) ||
          (93952 <= lookahead && lookahead <= 94026) ||
          lookahead == 94032 ||
          (94099 <= lookahead && lookahead <= 94111) ||
          lookahead == 94176 ||
          lookahead == 94177 ||
          lookahead == 94179 ||
          (94208 <= lookahead && lookahead <= 100343) ||
          (100352 <= lookahead && lookahead <= 101106) ||
          (110592 <= lookahead && lookahead <= 110878) ||
          (110928 <= lookahead && lookahead <= 110930) ||
          (110948 <= lookahead && lookahead <= 110951) ||
          (110960 <= lookahead && lookahead <= 111355) ||
          (113664 <= lookahead && lookahead <= 113770) ||
          (113776 <= lookahead && lookahead <= 113788) ||
          (113792 <= lookahead && lookahead <= 113800) ||
          (113808 <= lookahead && lookahead <= 113817) ||
          (119808 <= lookahead && lookahead <= 119892) ||
          (119894 <= lookahead && lookahead <= 119964) ||
          lookahead == 119966 ||
          lookahead == 119967 ||
          lookahead == 119970 ||
          lookahead == 119973 ||
          lookahead == 119974 ||
          (119977 <= lookahead && lookahead <= 119980) ||
          (119982 <= lookahead && lookahead <= 119993) ||
          lookahead == 119995 ||
          (119997 <= lookahead && lookahead <= 120003) ||
          (120005 <= lookahead && lookahead <= 120069) ||
          (120071 <= lookahead && lookahead <= 120074) ||
          (120077 <= lookahead && lookahead <= 120084) ||
          (120086 <= lookahead && lookahead <= 120092) ||
          (120094 <= lookahead && lookahead <= 120121) ||
          (120123 <= lookahead && lookahead <= 120126) ||
          (120128 <= lookahead && lookahead <= 120132) ||
          lookahead == 120134 ||
          (120138 <= lookahead && lookahead <= 120144) ||
          (120146 <= lookahead && lookahead <= 120485) ||
          (120488 <= lookahead && lookahead <= 120512) ||
          (120514 <= lookahead && lookahead <= 120538) ||
          (120540 <= lookahead && lookahead <= 120570) ||
          (120572 <= lookahead && lookahead <= 120596) ||
          (120598 <= lookahead && lookahead <= 120628) ||
          (120630 <= lookahead && lookahead <= 120654) ||
          (120656 <= lookahead && lookahead <= 120686) ||
          (120688 <= lookahead && lookahead <= 120712) ||
          (120714 <= lookahead && lookahead <= 120744) ||
          (120746 <= lookahead && lookahead <= 120770) ||
          (120772 <= lookahead && lookahead <= 120779) ||
          (123136 <= lookahead && lookahead <= 123180) ||
          (123191 <= lookahead && lookahead <= 123197) ||
          lookahead == 123214 ||
          (123584 <= lookahead && lookahead <= 123627) ||
          (124928 <= lookahead && lookahead <= 125124) ||
          (125184 <= lookahead && lookahead <= 125251) ||
          lookahead == 125259 ||
          (126464 <= lookahead && lookahead <= 126467) ||
          (126469 <= lookahead && lookahead <= 126495) ||
          lookahead == 126497 ||
          lookahead == 126498 ||
          lookahead == 126500 ||
          lookahead == 126503 ||
          (126505 <= lookahead && lookahead <= 126514) ||
          (126516 <= lookahead && lookahead <= 126519) ||
          lookahead == 126521 ||
          lookahead == 126523 ||
          lookahead == 126530 ||
          lookahead == 126535 ||
          lookahead == 126537 ||
          lookahead == 126539 ||
          (126541 <= lookahead && lookahead <= 126543) ||
          lookahead == 126545 ||
          lookahead == 126546 ||
          lookahead == 126548 ||
          lookahead == 126551 ||
          lookahead == 126553 ||
          lookahead == 126555 ||
          lookahead == 126557 ||
          lookahead == 126559 ||
          lookahead == 126561 ||
          lookahead == 126562 ||
          lookahead == 126564 ||
          (126567 <= lookahead && lookahead <= 126570) ||
          (126572 <= lookahead && lookahead <= 126578) ||
          (126580 <= lookahead && lookahead <= 126583) ||
          (126585 <= lookahead && lookahead <= 126588) ||
          lookahead == 126590 ||
          (126592 <= lookahead && lookahead <= 126601) ||
          (126603 <= lookahead && lookahead <= 126619) ||
          (126625 <= lookahead && lookahead <= 126627) ||
          (126629 <= lookahead && lookahead <= 126633) ||
          (126635 <= lookahead && lookahead <= 126651) ||
          (131072 <= lookahead && lookahead <= 173782) ||
          (173824 <= lookahead && lookahead <= 177972) ||
          (177984 <= lookahead && lookahead <= 178205) ||
          (178208 <= lookahead && lookahead <= 183969) ||
          (183984 <= lookahead && lookahead <= 191456) ||
          (194560 <= lookahead && lookahead <= 195101)) ADVANCE(18);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_date);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_key);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_tag);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_link);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'E') ADVANCE(156);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 170 ||
          lookahead == 181 ||
          lookahead == 186 ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 705) ||
          (710 <= lookahead && lookahead <= 721) ||
          (736 <= lookahead && lookahead <= 740) ||
          lookahead == 748 ||
          lookahead == 750 ||
          (880 <= lookahead && lookahead <= 884) ||
          lookahead == 886 ||
          lookahead == 887 ||
          (890 <= lookahead && lookahead <= 893) ||
          lookahead == 895 ||
          lookahead == 902 ||
          (904 <= lookahead && lookahead <= 906) ||
          lookahead == 908 ||
          (910 <= lookahead && lookahead <= 929) ||
          (931 <= lookahead && lookahead <= 1013) ||
          (1015 <= lookahead && lookahead <= 1153) ||
          (1162 <= lookahead && lookahead <= 1327) ||
          (1329 <= lookahead && lookahead <= 1366) ||
          lookahead == 1369 ||
          (1376 <= lookahead && lookahead <= 1416) ||
          (1488 <= lookahead && lookahead <= 1514) ||
          (1519 <= lookahead && lookahead <= 1522) ||
          (1568 <= lookahead && lookahead <= 1610) ||
          lookahead == 1646 ||
          lookahead == 1647 ||
          (1649 <= lookahead && lookahead <= 1747) ||
          lookahead == 1749 ||
          lookahead == 1765 ||
          lookahead == 1766 ||
          lookahead == 1774 ||
          lookahead == 1775 ||
          (1786 <= lookahead && lookahead <= 1788) ||
          lookahead == 1791 ||
          lookahead == 1808 ||
          (1810 <= lookahead && lookahead <= 1839) ||
          (1869 <= lookahead && lookahead <= 1957) ||
          lookahead == 1969 ||
          (1994 <= lookahead && lookahead <= 2026) ||
          lookahead == 2036 ||
          lookahead == 2037 ||
          lookahead == 2042 ||
          (2048 <= lookahead && lookahead <= 2069) ||
          lookahead == 2074 ||
          lookahead == 2084 ||
          lookahead == 2088 ||
          (2112 <= lookahead && lookahead <= 2136) ||
          (2144 <= lookahead && lookahead <= 2154) ||
          (2208 <= lookahead && lookahead <= 2228) ||
          (2230 <= lookahead && lookahead <= 2237) ||
          (2308 <= lookahead && lookahead <= 2361) ||
          lookahead == 2365 ||
          lookahead == 2384 ||
          (2392 <= lookahead && lookahead <= 2401) ||
          (2417 <= lookahead && lookahead <= 2432) ||
          (2437 <= lookahead && lookahead <= 2444) ||
          lookahead == 2447 ||
          lookahead == 2448 ||
          (2451 <= lookahead && lookahead <= 2472) ||
          (2474 <= lookahead && lookahead <= 2480) ||
          lookahead == 2482 ||
          (2486 <= lookahead && lookahead <= 2489) ||
          lookahead == 2493 ||
          lookahead == 2510 ||
          lookahead == 2524 ||
          lookahead == 2525 ||
          (2527 <= lookahead && lookahead <= 2529) ||
          lookahead == 2544 ||
          lookahead == 2545 ||
          lookahead == 2556 ||
          (2565 <= lookahead && lookahead <= 2570) ||
          lookahead == 2575 ||
          lookahead == 2576 ||
          (2579 <= lookahead && lookahead <= 2600) ||
          (2602 <= lookahead && lookahead <= 2608) ||
          lookahead == 2610 ||
          lookahead == 2611 ||
          lookahead == 2613 ||
          lookahead == 2614 ||
          lookahead == 2616 ||
          lookahead == 2617 ||
          (2649 <= lookahead && lookahead <= 2652) ||
          lookahead == 2654 ||
          (2674 <= lookahead && lookahead <= 2676) ||
          (2693 <= lookahead && lookahead <= 2701) ||
          (2703 <= lookahead && lookahead <= 2705) ||
          (2707 <= lookahead && lookahead <= 2728) ||
          (2730 <= lookahead && lookahead <= 2736) ||
          lookahead == 2738 ||
          lookahead == 2739 ||
          (2741 <= lookahead && lookahead <= 2745) ||
          lookahead == 2749 ||
          lookahead == 2768 ||
          lookahead == 2784 ||
          lookahead == 2785 ||
          lookahead == 2809 ||
          (2821 <= lookahead && lookahead <= 2828) ||
          lookahead == 2831 ||
          lookahead == 2832 ||
          (2835 <= lookahead && lookahead <= 2856) ||
          (2858 <= lookahead && lookahead <= 2864) ||
          lookahead == 2866 ||
          lookahead == 2867 ||
          (2869 <= lookahead && lookahead <= 2873) ||
          lookahead == 2877 ||
          lookahead == 2908 ||
          lookahead == 2909 ||
          (2911 <= lookahead && lookahead <= 2913) ||
          lookahead == 2929 ||
          lookahead == 2947 ||
          (2949 <= lookahead && lookahead <= 2954) ||
          (2958 <= lookahead && lookahead <= 2960) ||
          (2962 <= lookahead && lookahead <= 2965) ||
          lookahead == 2969 ||
          lookahead == 2970 ||
          lookahead == 2972 ||
          lookahead == 2974 ||
          lookahead == 2975 ||
          lookahead == 2979 ||
          lookahead == 2980 ||
          (2984 <= lookahead && lookahead <= 2986) ||
          (2990 <= lookahead && lookahead <= 3001) ||
          lookahead == 3024 ||
          (3077 <= lookahead && lookahead <= 3084) ||
          (3086 <= lookahead && lookahead <= 3088) ||
          (3090 <= lookahead && lookahead <= 3112) ||
          (3114 <= lookahead && lookahead <= 3129) ||
          lookahead == 3133 ||
          (3160 <= lookahead && lookahead <= 3162) ||
          lookahead == 3168 ||
          lookahead == 3169 ||
          lookahead == 3200 ||
          (3205 <= lookahead && lookahead <= 3212) ||
          (3214 <= lookahead && lookahead <= 3216) ||
          (3218 <= lookahead && lookahead <= 3240) ||
          (3242 <= lookahead && lookahead <= 3251) ||
          (3253 <= lookahead && lookahead <= 3257) ||
          lookahead == 3261 ||
          lookahead == 3294 ||
          lookahead == 3296 ||
          lookahead == 3297 ||
          lookahead == 3313 ||
          lookahead == 3314 ||
          (3333 <= lookahead && lookahead <= 3340) ||
          (3342 <= lookahead && lookahead <= 3344) ||
          (3346 <= lookahead && lookahead <= 3386) ||
          lookahead == 3389 ||
          lookahead == 3406 ||
          (3412 <= lookahead && lookahead <= 3414) ||
          (3423 <= lookahead && lookahead <= 3425) ||
          (3450 <= lookahead && lookahead <= 3455) ||
          (3461 <= lookahead && lookahead <= 3478) ||
          (3482 <= lookahead && lookahead <= 3505) ||
          (3507 <= lookahead && lookahead <= 3515) ||
          lookahead == 3517 ||
          (3520 <= lookahead && lookahead <= 3526) ||
          (3585 <= lookahead && lookahead <= 3632) ||
          lookahead == 3634 ||
          lookahead == 3635 ||
          (3648 <= lookahead && lookahead <= 3654) ||
          lookahead == 3713 ||
          lookahead == 3714 ||
          lookahead == 3716 ||
          (3718 <= lookahead && lookahead <= 3722) ||
          (3724 <= lookahead && lookahead <= 3747) ||
          lookahead == 3749 ||
          (3751 <= lookahead && lookahead <= 3760) ||
          lookahead == 3762 ||
          lookahead == 3763 ||
          lookahead == 3773 ||
          (3776 <= lookahead && lookahead <= 3780) ||
          lookahead == 3782 ||
          (3804 <= lookahead && lookahead <= 3807) ||
          lookahead == 3840 ||
          (3904 <= lookahead && lookahead <= 3911) ||
          (3913 <= lookahead && lookahead <= 3948) ||
          (3976 <= lookahead && lookahead <= 3980) ||
          (4096 <= lookahead && lookahead <= 4138) ||
          lookahead == 4159 ||
          (4176 <= lookahead && lookahead <= 4181) ||
          (4186 <= lookahead && lookahead <= 4189) ||
          lookahead == 4193 ||
          lookahead == 4197 ||
          lookahead == 4198 ||
          (4206 <= lookahead && lookahead <= 4208) ||
          (4213 <= lookahead && lookahead <= 4225) ||
          lookahead == 4238 ||
          (4256 <= lookahead && lookahead <= 4293) ||
          lookahead == 4295 ||
          lookahead == 4301 ||
          (4304 <= lookahead && lookahead <= 4346) ||
          (4348 <= lookahead && lookahead <= 4680) ||
          (4682 <= lookahead && lookahead <= 4685) ||
          (4688 <= lookahead && lookahead <= 4694) ||
          lookahead == 4696 ||
          (4698 <= lookahead && lookahead <= 4701) ||
          (4704 <= lookahead && lookahead <= 4744) ||
          (4746 <= lookahead && lookahead <= 4749) ||
          (4752 <= lookahead && lookahead <= 4784) ||
          (4786 <= lookahead && lookahead <= 4789) ||
          (4792 <= lookahead && lookahead <= 4798) ||
          lookahead == 4800 ||
          (4802 <= lookahead && lookahead <= 4805) ||
          (4808 <= lookahead && lookahead <= 4822) ||
          (4824 <= lookahead && lookahead <= 4880) ||
          (4882 <= lookahead && lookahead <= 4885) ||
          (4888 <= lookahead && lookahead <= 4954) ||
          (4992 <= lookahead && lookahead <= 5007) ||
          (5024 <= lookahead && lookahead <= 5109) ||
          (5112 <= lookahead && lookahead <= 5117) ||
          (5121 <= lookahead && lookahead <= 5740) ||
          (5743 <= lookahead && lookahead <= 5759) ||
          (5761 <= lookahead && lookahead <= 5786) ||
          (5792 <= lookahead && lookahead <= 5866) ||
          (5873 <= lookahead && lookahead <= 5880) ||
          (5888 <= lookahead && lookahead <= 5900) ||
          (5902 <= lookahead && lookahead <= 5905) ||
          (5920 <= lookahead && lookahead <= 5937) ||
          (5952 <= lookahead && lookahead <= 5969) ||
          (5984 <= lookahead && lookahead <= 5996) ||
          (5998 <= lookahead && lookahead <= 6000) ||
          (6016 <= lookahead && lookahead <= 6067) ||
          lookahead == 6103 ||
          lookahead == 6108 ||
          (6176 <= lookahead && lookahead <= 6264) ||
          (6272 <= lookahead && lookahead <= 6276) ||
          (6279 <= lookahead && lookahead <= 6312) ||
          lookahead == 6314 ||
          (6320 <= lookahead && lookahead <= 6389) ||
          (6400 <= lookahead && lookahead <= 6430) ||
          (6480 <= lookahead && lookahead <= 6509) ||
          (6512 <= lookahead && lookahead <= 6516) ||
          (6528 <= lookahead && lookahead <= 6571) ||
          (6576 <= lookahead && lookahead <= 6601) ||
          (6656 <= lookahead && lookahead <= 6678) ||
          (6688 <= lookahead && lookahead <= 6740) ||
          lookahead == 6823 ||
          (6917 <= lookahead && lookahead <= 6963) ||
          (6981 <= lookahead && lookahead <= 6987) ||
          (7043 <= lookahead && lookahead <= 7072) ||
          lookahead == 7086 ||
          lookahead == 7087 ||
          (7098 <= lookahead && lookahead <= 7141) ||
          (7168 <= lookahead && lookahead <= 7203) ||
          (7245 <= lookahead && lookahead <= 7247) ||
          (7258 <= lookahead && lookahead <= 7293) ||
          (7296 <= lookahead && lookahead <= 7304) ||
          (7312 <= lookahead && lookahead <= 7354) ||
          (7357 <= lookahead && lookahead <= 7359) ||
          (7401 <= lookahead && lookahead <= 7404) ||
          (7406 <= lookahead && lookahead <= 7411) ||
          lookahead == 7413 ||
          lookahead == 7414 ||
          lookahead == 7418 ||
          (7424 <= lookahead && lookahead <= 7615) ||
          (7680 <= lookahead && lookahead <= 7957) ||
          (7960 <= lookahead && lookahead <= 7965) ||
          (7968 <= lookahead && lookahead <= 8005) ||
          (8008 <= lookahead && lookahead <= 8013) ||
          (8016 <= lookahead && lookahead <= 8023) ||
          lookahead == 8025 ||
          lookahead == 8027 ||
          lookahead == 8029 ||
          (8031 <= lookahead && lookahead <= 8061) ||
          (8064 <= lookahead && lookahead <= 8116) ||
          (8118 <= lookahead && lookahead <= 8124) ||
          lookahead == 8126 ||
          (8130 <= lookahead && lookahead <= 8132) ||
          (8134 <= lookahead && lookahead <= 8140) ||
          (8144 <= lookahead && lookahead <= 8147) ||
          (8150 <= lookahead && lookahead <= 8155) ||
          (8160 <= lookahead && lookahead <= 8172) ||
          (8178 <= lookahead && lookahead <= 8180) ||
          (8182 <= lookahead && lookahead <= 8188) ||
          lookahead == 8305 ||
          lookahead == 8319 ||
          (8336 <= lookahead && lookahead <= 8348) ||
          lookahead == 8450 ||
          lookahead == 8455 ||
          (8458 <= lookahead && lookahead <= 8467) ||
          lookahead == 8469 ||
          (8473 <= lookahead && lookahead <= 8477) ||
          lookahead == 8484 ||
          lookahead == 8486 ||
          lookahead == 8488 ||
          (8490 <= lookahead && lookahead <= 8493) ||
          (8495 <= lookahead && lookahead <= 8505) ||
          (8508 <= lookahead && lookahead <= 8511) ||
          (8517 <= lookahead && lookahead <= 8521) ||
          lookahead == 8526 ||
          lookahead == 8579 ||
          lookahead == 8580 ||
          (11264 <= lookahead && lookahead <= 11310) ||
          (11312 <= lookahead && lookahead <= 11358) ||
          (11360 <= lookahead && lookahead <= 11492) ||
          (11499 <= lookahead && lookahead <= 11502) ||
          lookahead == 11506 ||
          lookahead == 11507 ||
          (11520 <= lookahead && lookahead <= 11557) ||
          lookahead == 11559 ||
          lookahead == 11565 ||
          (11568 <= lookahead && lookahead <= 11623) ||
          lookahead == 11631 ||
          (11648 <= lookahead && lookahead <= 11670) ||
          (11680 <= lookahead && lookahead <= 11686) ||
          (11688 <= lookahead && lookahead <= 11694) ||
          (11696 <= lookahead && lookahead <= 11702) ||
          (11704 <= lookahead && lookahead <= 11710) ||
          (11712 <= lookahead && lookahead <= 11718) ||
          (11720 <= lookahead && lookahead <= 11726) ||
          (11728 <= lookahead && lookahead <= 11734) ||
          (11736 <= lookahead && lookahead <= 11742) ||
          lookahead == 11823 ||
          lookahead == 12293 ||
          lookahead == 12294 ||
          (12337 <= lookahead && lookahead <= 12341) ||
          lookahead == 12347 ||
          lookahead == 12348 ||
          (12353 <= lookahead && lookahead <= 12438) ||
          (12445 <= lookahead && lookahead <= 12447) ||
          (12449 <= lookahead && lookahead <= 12538) ||
          (12540 <= lookahead && lookahead <= 12543) ||
          (12549 <= lookahead && lookahead <= 12591) ||
          (12593 <= lookahead && lookahead <= 12686) ||
          (12704 <= lookahead && lookahead <= 12730) ||
          (12784 <= lookahead && lookahead <= 12799) ||
          (13312 <= lookahead && lookahead <= 19893) ||
          (19968 <= lookahead && lookahead <= 40943) ||
          (40960 <= lookahead && lookahead <= 42124) ||
          (42192 <= lookahead && lookahead <= 42237) ||
          (42240 <= lookahead && lookahead <= 42508) ||
          (42512 <= lookahead && lookahead <= 42527) ||
          lookahead == 42538 ||
          lookahead == 42539 ||
          (42560 <= lookahead && lookahead <= 42606) ||
          (42623 <= lookahead && lookahead <= 42653) ||
          (42656 <= lookahead && lookahead <= 42725) ||
          (42775 <= lookahead && lookahead <= 42783) ||
          (42786 <= lookahead && lookahead <= 42888) ||
          (42891 <= lookahead && lookahead <= 42943) ||
          (42946 <= lookahead && lookahead <= 42950) ||
          (42999 <= lookahead && lookahead <= 43009) ||
          (43011 <= lookahead && lookahead <= 43013) ||
          (43015 <= lookahead && lookahead <= 43018) ||
          (43020 <= lookahead && lookahead <= 43042) ||
          (43072 <= lookahead && lookahead <= 43123) ||
          (43138 <= lookahead && lookahead <= 43187) ||
          (43250 <= lookahead && lookahead <= 43255) ||
          lookahead == 43259 ||
          lookahead == 43261 ||
          lookahead == 43262 ||
          (43274 <= lookahead && lookahead <= 43301) ||
          (43312 <= lookahead && lookahead <= 43334) ||
          (43360 <= lookahead && lookahead <= 43388) ||
          (43396 <= lookahead && lookahead <= 43442) ||
          lookahead == 43471 ||
          (43488 <= lookahead && lookahead <= 43492) ||
          (43494 <= lookahead && lookahead <= 43503) ||
          (43514 <= lookahead && lookahead <= 43518) ||
          (43520 <= lookahead && lookahead <= 43560) ||
          (43584 <= lookahead && lookahead <= 43586) ||
          (43588 <= lookahead && lookahead <= 43595) ||
          (43616 <= lookahead && lookahead <= 43638) ||
          lookahead == 43642 ||
          (43646 <= lookahead && lookahead <= 43695) ||
          lookahead == 43697 ||
          lookahead == 43701 ||
          lookahead == 43702 ||
          (43705 <= lookahead && lookahead <= 43709) ||
          lookahead == 43712 ||
          lookahead == 43714 ||
          (43739 <= lookahead && lookahead <= 43741) ||
          (43744 <= lookahead && lookahead <= 43754) ||
          (43762 <= lookahead && lookahead <= 43764) ||
          (43777 <= lookahead && lookahead <= 43782) ||
          (43785 <= lookahead && lookahead <= 43790) ||
          (43793 <= lookahead && lookahead <= 43798) ||
          (43808 <= lookahead && lookahead <= 43814) ||
          (43816 <= lookahead && lookahead <= 43822) ||
          (43824 <= lookahead && lookahead <= 43866) ||
          (43868 <= lookahead && lookahead <= 43879) ||
          (43888 <= lookahead && lookahead <= 44002) ||
          (44032 <= lookahead && lookahead <= 55203) ||
          (55216 <= lookahead && lookahead <= 55238) ||
          (55243 <= lookahead && lookahead <= 55291) ||
          (63744 <= lookahead && lookahead <= 64109) ||
          (64112 <= lookahead && lookahead <= 64217) ||
          (64256 <= lookahead && lookahead <= 64262) ||
          (64275 <= lookahead && lookahead <= 64279) ||
          lookahead == 64285 ||
          (64287 <= lookahead && lookahead <= 64296) ||
          (64298 <= lookahead && lookahead <= 64310) ||
          (64312 <= lookahead && lookahead <= 64316) ||
          lookahead == 64318 ||
          lookahead == 64320 ||
          lookahead == 64321 ||
          lookahead == 64323 ||
          lookahead == 64324 ||
          (64326 <= lookahead && lookahead <= 64433) ||
          (64467 <= lookahead && lookahead <= 64829) ||
          (64848 <= lookahead && lookahead <= 64911) ||
          (64914 <= lookahead && lookahead <= 64967) ||
          (65008 <= lookahead && lookahead <= 65019) ||
          (65136 <= lookahead && lookahead <= 65140) ||
          (65142 <= lookahead && lookahead <= 65276) ||
          (65313 <= lookahead && lookahead <= 65338) ||
          (65345 <= lookahead && lookahead <= 65370) ||
          (65382 <= lookahead && lookahead <= 65470) ||
          (65474 <= lookahead && lookahead <= 65479) ||
          (65482 <= lookahead && lookahead <= 65487) ||
          (65490 <= lookahead && lookahead <= 65495) ||
          (65498 <= lookahead && lookahead <= 65500) ||
          (65536 <= lookahead && lookahead <= 65547) ||
          (65549 <= lookahead && lookahead <= 65574) ||
          (65576 <= lookahead && lookahead <= 65594) ||
          lookahead == 65596 ||
          lookahead == 65597 ||
          (65599 <= lookahead && lookahead <= 65613) ||
          (65616 <= lookahead && lookahead <= 65629) ||
          (65664 <= lookahead && lookahead <= 65786) ||
          (66176 <= lookahead && lookahead <= 66204) ||
          (66208 <= lookahead && lookahead <= 66256) ||
          (66304 <= lookahead && lookahead <= 66335) ||
          (66349 <= lookahead && lookahead <= 66368) ||
          (66370 <= lookahead && lookahead <= 66377) ||
          (66384 <= lookahead && lookahead <= 66421) ||
          (66432 <= lookahead && lookahead <= 66461) ||
          (66464 <= lookahead && lookahead <= 66499) ||
          (66504 <= lookahead && lookahead <= 66511) ||
          (66560 <= lookahead && lookahead <= 66717) ||
          (66736 <= lookahead && lookahead <= 66771) ||
          (66776 <= lookahead && lookahead <= 66811) ||
          (66816 <= lookahead && lookahead <= 66855) ||
          (66864 <= lookahead && lookahead <= 66915) ||
          (67072 <= lookahead && lookahead <= 67382) ||
          (67392 <= lookahead && lookahead <= 67413) ||
          (67424 <= lookahead && lookahead <= 67431) ||
          (67584 <= lookahead && lookahead <= 67589) ||
          lookahead == 67592 ||
          (67594 <= lookahead && lookahead <= 67637) ||
          lookahead == 67639 ||
          lookahead == 67640 ||
          lookahead == 67644 ||
          (67647 <= lookahead && lookahead <= 67669) ||
          (67680 <= lookahead && lookahead <= 67702) ||
          (67712 <= lookahead && lookahead <= 67742) ||
          (67808 <= lookahead && lookahead <= 67826) ||
          lookahead == 67828 ||
          lookahead == 67829 ||
          (67840 <= lookahead && lookahead <= 67861) ||
          (67872 <= lookahead && lookahead <= 67897) ||
          (67968 <= lookahead && lookahead <= 68023) ||
          lookahead == 68030 ||
          lookahead == 68031 ||
          lookahead == 68096 ||
          (68112 <= lookahead && lookahead <= 68115) ||
          (68117 <= lookahead && lookahead <= 68119) ||
          (68121 <= lookahead && lookahead <= 68149) ||
          (68192 <= lookahead && lookahead <= 68220) ||
          (68224 <= lookahead && lookahead <= 68252) ||
          (68288 <= lookahead && lookahead <= 68295) ||
          (68297 <= lookahead && lookahead <= 68324) ||
          (68352 <= lookahead && lookahead <= 68405) ||
          (68416 <= lookahead && lookahead <= 68437) ||
          (68448 <= lookahead && lookahead <= 68466) ||
          (68480 <= lookahead && lookahead <= 68497) ||
          (68608 <= lookahead && lookahead <= 68680) ||
          (68736 <= lookahead && lookahead <= 68786) ||
          (68800 <= lookahead && lookahead <= 68850) ||
          (68864 <= lookahead && lookahead <= 68899) ||
          (69376 <= lookahead && lookahead <= 69404) ||
          lookahead == 69415 ||
          (69424 <= lookahead && lookahead <= 69445) ||
          (69600 <= lookahead && lookahead <= 69622) ||
          (69635 <= lookahead && lookahead <= 69687) ||
          (69763 <= lookahead && lookahead <= 69807) ||
          (69840 <= lookahead && lookahead <= 69864) ||
          (69891 <= lookahead && lookahead <= 69926) ||
          lookahead == 69956 ||
          (69968 <= lookahead && lookahead <= 70002) ||
          lookahead == 70006 ||
          (70019 <= lookahead && lookahead <= 70066) ||
          (70081 <= lookahead && lookahead <= 70084) ||
          lookahead == 70106 ||
          lookahead == 70108 ||
          (70144 <= lookahead && lookahead <= 70161) ||
          (70163 <= lookahead && lookahead <= 70187) ||
          (70272 <= lookahead && lookahead <= 70278) ||
          lookahead == 70280 ||
          (70282 <= lookahead && lookahead <= 70285) ||
          (70287 <= lookahead && lookahead <= 70301) ||
          (70303 <= lookahead && lookahead <= 70312) ||
          (70320 <= lookahead && lookahead <= 70366) ||
          (70405 <= lookahead && lookahead <= 70412) ||
          lookahead == 70415 ||
          lookahead == 70416 ||
          (70419 <= lookahead && lookahead <= 70440) ||
          (70442 <= lookahead && lookahead <= 70448) ||
          lookahead == 70450 ||
          lookahead == 70451 ||
          (70453 <= lookahead && lookahead <= 70457) ||
          lookahead == 70461 ||
          lookahead == 70480 ||
          (70493 <= lookahead && lookahead <= 70497) ||
          (70656 <= lookahead && lookahead <= 70708) ||
          (70727 <= lookahead && lookahead <= 70730) ||
          lookahead == 70751 ||
          (70784 <= lookahead && lookahead <= 70831) ||
          lookahead == 70852 ||
          lookahead == 70853 ||
          lookahead == 70855 ||
          (71040 <= lookahead && lookahead <= 71086) ||
          (71128 <= lookahead && lookahead <= 71131) ||
          (71168 <= lookahead && lookahead <= 71215) ||
          lookahead == 71236 ||
          (71296 <= lookahead && lookahead <= 71338) ||
          lookahead == 71352 ||
          (71424 <= lookahead && lookahead <= 71450) ||
          (71680 <= lookahead && lookahead <= 71723) ||
          (71840 <= lookahead && lookahead <= 71903) ||
          lookahead == 71935 ||
          (72096 <= lookahead && lookahead <= 72103) ||
          (72106 <= lookahead && lookahead <= 72144) ||
          lookahead == 72161 ||
          lookahead == 72163 ||
          lookahead == 72192 ||
          (72203 <= lookahead && lookahead <= 72242) ||
          lookahead == 72250 ||
          lookahead == 72272 ||
          (72284 <= lookahead && lookahead <= 72329) ||
          lookahead == 72349 ||
          (72384 <= lookahead && lookahead <= 72440) ||
          (72704 <= lookahead && lookahead <= 72712) ||
          (72714 <= lookahead && lookahead <= 72750) ||
          lookahead == 72768 ||
          (72818 <= lookahead && lookahead <= 72847) ||
          (72960 <= lookahead && lookahead <= 72966) ||
          lookahead == 72968 ||
          lookahead == 72969 ||
          (72971 <= lookahead && lookahead <= 73008) ||
          lookahead == 73030 ||
          (73056 <= lookahead && lookahead <= 73061) ||
          lookahead == 73063 ||
          lookahead == 73064 ||
          (73066 <= lookahead && lookahead <= 73097) ||
          lookahead == 73112 ||
          (73440 <= lookahead && lookahead <= 73458) ||
          (73728 <= lookahead && lookahead <= 74649) ||
          (74880 <= lookahead && lookahead <= 75075) ||
          (77824 <= lookahead && lookahead <= 78894) ||
          (82944 <= lookahead && lookahead <= 83526) ||
          (92160 <= lookahead && lookahead <= 92728) ||
          (92736 <= lookahead && lookahead <= 92766) ||
          (92880 <= lookahead && lookahead <= 92909) ||
          (92928 <= lookahead && lookahead <= 92975) ||
          (92992 <= lookahead && lookahead <= 92995) ||
          (93027 <= lookahead && lookahead <= 93047) ||
          (93053 <= lookahead && lookahead <= 93071) ||
          (93760 <= lookahead && lookahead <= 93823) ||
          (93952 <= lookahead && lookahead <= 94026) ||
          lookahead == 94032 ||
          (94099 <= lookahead && lookahead <= 94111) ||
          lookahead == 94176 ||
          lookahead == 94177 ||
          lookahead == 94179 ||
          (94208 <= lookahead && lookahead <= 100343) ||
          (100352 <= lookahead && lookahead <= 101106) ||
          (110592 <= lookahead && lookahead <= 110878) ||
          (110928 <= lookahead && lookahead <= 110930) ||
          (110948 <= lookahead && lookahead <= 110951) ||
          (110960 <= lookahead && lookahead <= 111355) ||
          (113664 <= lookahead && lookahead <= 113770) ||
          (113776 <= lookahead && lookahead <= 113788) ||
          (113792 <= lookahead && lookahead <= 113800) ||
          (113808 <= lookahead && lookahead <= 113817) ||
          (119808 <= lookahead && lookahead <= 119892) ||
          (119894 <= lookahead && lookahead <= 119964) ||
          lookahead == 119966 ||
          lookahead == 119967 ||
          lookahead == 119970 ||
          lookahead == 119973 ||
          lookahead == 119974 ||
          (119977 <= lookahead && lookahead <= 119980) ||
          (119982 <= lookahead && lookahead <= 119993) ||
          lookahead == 119995 ||
          (119997 <= lookahead && lookahead <= 120003) ||
          (120005 <= lookahead && lookahead <= 120069) ||
          (120071 <= lookahead && lookahead <= 120074) ||
          (120077 <= lookahead && lookahead <= 120084) ||
          (120086 <= lookahead && lookahead <= 120092) ||
          (120094 <= lookahead && lookahead <= 120121) ||
          (120123 <= lookahead && lookahead <= 120126) ||
          (120128 <= lookahead && lookahead <= 120132) ||
          lookahead == 120134 ||
          (120138 <= lookahead && lookahead <= 120144) ||
          (120146 <= lookahead && lookahead <= 120485) ||
          (120488 <= lookahead && lookahead <= 120512) ||
          (120514 <= lookahead && lookahead <= 120538) ||
          (120540 <= lookahead && lookahead <= 120570) ||
          (120572 <= lookahead && lookahead <= 120596) ||
          (120598 <= lookahead && lookahead <= 120628) ||
          (120630 <= lookahead && lookahead <= 120654) ||
          (120656 <= lookahead && lookahead <= 120686) ||
          (120688 <= lookahead && lookahead <= 120712) ||
          (120714 <= lookahead && lookahead <= 120744) ||
          (120746 <= lookahead && lookahead <= 120770) ||
          (120772 <= lookahead && lookahead <= 120779) ||
          (123136 <= lookahead && lookahead <= 123180) ||
          (123191 <= lookahead && lookahead <= 123197) ||
          lookahead == 123214 ||
          (123584 <= lookahead && lookahead <= 123627) ||
          (124928 <= lookahead && lookahead <= 125124) ||
          (125184 <= lookahead && lookahead <= 125251) ||
          lookahead == 125259 ||
          (126464 <= lookahead && lookahead <= 126467) ||
          (126469 <= lookahead && lookahead <= 126495) ||
          lookahead == 126497 ||
          lookahead == 126498 ||
          lookahead == 126500 ||
          lookahead == 126503 ||
          (126505 <= lookahead && lookahead <= 126514) ||
          (126516 <= lookahead && lookahead <= 126519) ||
          lookahead == 126521 ||
          lookahead == 126523 ||
          lookahead == 126530 ||
          lookahead == 126535 ||
          lookahead == 126537 ||
          lookahead == 126539 ||
          (126541 <= lookahead && lookahead <= 126543) ||
          lookahead == 126545 ||
          lookahead == 126546 ||
          lookahead == 126548 ||
          lookahead == 126551 ||
          lookahead == 126553 ||
          lookahead == 126555 ||
          lookahead == 126557 ||
          lookahead == 126559 ||
          lookahead == 126561 ||
          lookahead == 126562 ||
          lookahead == 126564 ||
          (126567 <= lookahead && lookahead <= 126570) ||
          (126572 <= lookahead && lookahead <= 126578) ||
          (126580 <= lookahead && lookahead <= 126583) ||
          (126585 <= lookahead && lookahead <= 126588) ||
          lookahead == 126590 ||
          (126592 <= lookahead && lookahead <= 126601) ||
          (126603 <= lookahead && lookahead <= 126619) ||
          (126625 <= lookahead && lookahead <= 126627) ||
          (126629 <= lookahead && lookahead <= 126633) ||
          (126635 <= lookahead && lookahead <= 126651) ||
          (131072 <= lookahead && lookahead <= 173782) ||
          (173824 <= lookahead && lookahead <= 177972) ||
          (177984 <= lookahead && lookahead <= 178205) ||
          (178208 <= lookahead && lookahead <= 183969) ||
          (183984 <= lookahead && lookahead <= 191456) ||
          (194560 <= lookahead && lookahead <= 195101)) ADVANCE(18);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(165);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 170 ||
          lookahead == 181 ||
          lookahead == 186 ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 705) ||
          (710 <= lookahead && lookahead <= 721) ||
          (736 <= lookahead && lookahead <= 740) ||
          lookahead == 748 ||
          lookahead == 750 ||
          (880 <= lookahead && lookahead <= 884) ||
          lookahead == 886 ||
          lookahead == 887 ||
          (890 <= lookahead && lookahead <= 893) ||
          lookahead == 895 ||
          lookahead == 902 ||
          (904 <= lookahead && lookahead <= 906) ||
          lookahead == 908 ||
          (910 <= lookahead && lookahead <= 929) ||
          (931 <= lookahead && lookahead <= 1013) ||
          (1015 <= lookahead && lookahead <= 1153) ||
          (1162 <= lookahead && lookahead <= 1327) ||
          (1329 <= lookahead && lookahead <= 1366) ||
          lookahead == 1369 ||
          (1376 <= lookahead && lookahead <= 1416) ||
          (1488 <= lookahead && lookahead <= 1514) ||
          (1519 <= lookahead && lookahead <= 1522) ||
          (1568 <= lookahead && lookahead <= 1610) ||
          lookahead == 1646 ||
          lookahead == 1647 ||
          (1649 <= lookahead && lookahead <= 1747) ||
          lookahead == 1749 ||
          lookahead == 1765 ||
          lookahead == 1766 ||
          lookahead == 1774 ||
          lookahead == 1775 ||
          (1786 <= lookahead && lookahead <= 1788) ||
          lookahead == 1791 ||
          lookahead == 1808 ||
          (1810 <= lookahead && lookahead <= 1839) ||
          (1869 <= lookahead && lookahead <= 1957) ||
          lookahead == 1969 ||
          (1994 <= lookahead && lookahead <= 2026) ||
          lookahead == 2036 ||
          lookahead == 2037 ||
          lookahead == 2042 ||
          (2048 <= lookahead && lookahead <= 2069) ||
          lookahead == 2074 ||
          lookahead == 2084 ||
          lookahead == 2088 ||
          (2112 <= lookahead && lookahead <= 2136) ||
          (2144 <= lookahead && lookahead <= 2154) ||
          (2208 <= lookahead && lookahead <= 2228) ||
          (2230 <= lookahead && lookahead <= 2237) ||
          (2308 <= lookahead && lookahead <= 2361) ||
          lookahead == 2365 ||
          lookahead == 2384 ||
          (2392 <= lookahead && lookahead <= 2401) ||
          (2417 <= lookahead && lookahead <= 2432) ||
          (2437 <= lookahead && lookahead <= 2444) ||
          lookahead == 2447 ||
          lookahead == 2448 ||
          (2451 <= lookahead && lookahead <= 2472) ||
          (2474 <= lookahead && lookahead <= 2480) ||
          lookahead == 2482 ||
          (2486 <= lookahead && lookahead <= 2489) ||
          lookahead == 2493 ||
          lookahead == 2510 ||
          lookahead == 2524 ||
          lookahead == 2525 ||
          (2527 <= lookahead && lookahead <= 2529) ||
          lookahead == 2544 ||
          lookahead == 2545 ||
          lookahead == 2556 ||
          (2565 <= lookahead && lookahead <= 2570) ||
          lookahead == 2575 ||
          lookahead == 2576 ||
          (2579 <= lookahead && lookahead <= 2600) ||
          (2602 <= lookahead && lookahead <= 2608) ||
          lookahead == 2610 ||
          lookahead == 2611 ||
          lookahead == 2613 ||
          lookahead == 2614 ||
          lookahead == 2616 ||
          lookahead == 2617 ||
          (2649 <= lookahead && lookahead <= 2652) ||
          lookahead == 2654 ||
          (2674 <= lookahead && lookahead <= 2676) ||
          (2693 <= lookahead && lookahead <= 2701) ||
          (2703 <= lookahead && lookahead <= 2705) ||
          (2707 <= lookahead && lookahead <= 2728) ||
          (2730 <= lookahead && lookahead <= 2736) ||
          lookahead == 2738 ||
          lookahead == 2739 ||
          (2741 <= lookahead && lookahead <= 2745) ||
          lookahead == 2749 ||
          lookahead == 2768 ||
          lookahead == 2784 ||
          lookahead == 2785 ||
          lookahead == 2809 ||
          (2821 <= lookahead && lookahead <= 2828) ||
          lookahead == 2831 ||
          lookahead == 2832 ||
          (2835 <= lookahead && lookahead <= 2856) ||
          (2858 <= lookahead && lookahead <= 2864) ||
          lookahead == 2866 ||
          lookahead == 2867 ||
          (2869 <= lookahead && lookahead <= 2873) ||
          lookahead == 2877 ||
          lookahead == 2908 ||
          lookahead == 2909 ||
          (2911 <= lookahead && lookahead <= 2913) ||
          lookahead == 2929 ||
          lookahead == 2947 ||
          (2949 <= lookahead && lookahead <= 2954) ||
          (2958 <= lookahead && lookahead <= 2960) ||
          (2962 <= lookahead && lookahead <= 2965) ||
          lookahead == 2969 ||
          lookahead == 2970 ||
          lookahead == 2972 ||
          lookahead == 2974 ||
          lookahead == 2975 ||
          lookahead == 2979 ||
          lookahead == 2980 ||
          (2984 <= lookahead && lookahead <= 2986) ||
          (2990 <= lookahead && lookahead <= 3001) ||
          lookahead == 3024 ||
          (3077 <= lookahead && lookahead <= 3084) ||
          (3086 <= lookahead && lookahead <= 3088) ||
          (3090 <= lookahead && lookahead <= 3112) ||
          (3114 <= lookahead && lookahead <= 3129) ||
          lookahead == 3133 ||
          (3160 <= lookahead && lookahead <= 3162) ||
          lookahead == 3168 ||
          lookahead == 3169 ||
          lookahead == 3200 ||
          (3205 <= lookahead && lookahead <= 3212) ||
          (3214 <= lookahead && lookahead <= 3216) ||
          (3218 <= lookahead && lookahead <= 3240) ||
          (3242 <= lookahead && lookahead <= 3251) ||
          (3253 <= lookahead && lookahead <= 3257) ||
          lookahead == 3261 ||
          lookahead == 3294 ||
          lookahead == 3296 ||
          lookahead == 3297 ||
          lookahead == 3313 ||
          lookahead == 3314 ||
          (3333 <= lookahead && lookahead <= 3340) ||
          (3342 <= lookahead && lookahead <= 3344) ||
          (3346 <= lookahead && lookahead <= 3386) ||
          lookahead == 3389 ||
          lookahead == 3406 ||
          (3412 <= lookahead && lookahead <= 3414) ||
          (3423 <= lookahead && lookahead <= 3425) ||
          (3450 <= lookahead && lookahead <= 3455) ||
          (3461 <= lookahead && lookahead <= 3478) ||
          (3482 <= lookahead && lookahead <= 3505) ||
          (3507 <= lookahead && lookahead <= 3515) ||
          lookahead == 3517 ||
          (3520 <= lookahead && lookahead <= 3526) ||
          (3585 <= lookahead && lookahead <= 3632) ||
          lookahead == 3634 ||
          lookahead == 3635 ||
          (3648 <= lookahead && lookahead <= 3654) ||
          lookahead == 3713 ||
          lookahead == 3714 ||
          lookahead == 3716 ||
          (3718 <= lookahead && lookahead <= 3722) ||
          (3724 <= lookahead && lookahead <= 3747) ||
          lookahead == 3749 ||
          (3751 <= lookahead && lookahead <= 3760) ||
          lookahead == 3762 ||
          lookahead == 3763 ||
          lookahead == 3773 ||
          (3776 <= lookahead && lookahead <= 3780) ||
          lookahead == 3782 ||
          (3804 <= lookahead && lookahead <= 3807) ||
          lookahead == 3840 ||
          (3904 <= lookahead && lookahead <= 3911) ||
          (3913 <= lookahead && lookahead <= 3948) ||
          (3976 <= lookahead && lookahead <= 3980) ||
          (4096 <= lookahead && lookahead <= 4138) ||
          lookahead == 4159 ||
          (4176 <= lookahead && lookahead <= 4181) ||
          (4186 <= lookahead && lookahead <= 4189) ||
          lookahead == 4193 ||
          lookahead == 4197 ||
          lookahead == 4198 ||
          (4206 <= lookahead && lookahead <= 4208) ||
          (4213 <= lookahead && lookahead <= 4225) ||
          lookahead == 4238 ||
          (4256 <= lookahead && lookahead <= 4293) ||
          lookahead == 4295 ||
          lookahead == 4301 ||
          (4304 <= lookahead && lookahead <= 4346) ||
          (4348 <= lookahead && lookahead <= 4680) ||
          (4682 <= lookahead && lookahead <= 4685) ||
          (4688 <= lookahead && lookahead <= 4694) ||
          lookahead == 4696 ||
          (4698 <= lookahead && lookahead <= 4701) ||
          (4704 <= lookahead && lookahead <= 4744) ||
          (4746 <= lookahead && lookahead <= 4749) ||
          (4752 <= lookahead && lookahead <= 4784) ||
          (4786 <= lookahead && lookahead <= 4789) ||
          (4792 <= lookahead && lookahead <= 4798) ||
          lookahead == 4800 ||
          (4802 <= lookahead && lookahead <= 4805) ||
          (4808 <= lookahead && lookahead <= 4822) ||
          (4824 <= lookahead && lookahead <= 4880) ||
          (4882 <= lookahead && lookahead <= 4885) ||
          (4888 <= lookahead && lookahead <= 4954) ||
          (4992 <= lookahead && lookahead <= 5007) ||
          (5024 <= lookahead && lookahead <= 5109) ||
          (5112 <= lookahead && lookahead <= 5117) ||
          (5121 <= lookahead && lookahead <= 5740) ||
          (5743 <= lookahead && lookahead <= 5759) ||
          (5761 <= lookahead && lookahead <= 5786) ||
          (5792 <= lookahead && lookahead <= 5866) ||
          (5873 <= lookahead && lookahead <= 5880) ||
          (5888 <= lookahead && lookahead <= 5900) ||
          (5902 <= lookahead && lookahead <= 5905) ||
          (5920 <= lookahead && lookahead <= 5937) ||
          (5952 <= lookahead && lookahead <= 5969) ||
          (5984 <= lookahead && lookahead <= 5996) ||
          (5998 <= lookahead && lookahead <= 6000) ||
          (6016 <= lookahead && lookahead <= 6067) ||
          lookahead == 6103 ||
          lookahead == 6108 ||
          (6176 <= lookahead && lookahead <= 6264) ||
          (6272 <= lookahead && lookahead <= 6276) ||
          (6279 <= lookahead && lookahead <= 6312) ||
          lookahead == 6314 ||
          (6320 <= lookahead && lookahead <= 6389) ||
          (6400 <= lookahead && lookahead <= 6430) ||
          (6480 <= lookahead && lookahead <= 6509) ||
          (6512 <= lookahead && lookahead <= 6516) ||
          (6528 <= lookahead && lookahead <= 6571) ||
          (6576 <= lookahead && lookahead <= 6601) ||
          (6656 <= lookahead && lookahead <= 6678) ||
          (6688 <= lookahead && lookahead <= 6740) ||
          lookahead == 6823 ||
          (6917 <= lookahead && lookahead <= 6963) ||
          (6981 <= lookahead && lookahead <= 6987) ||
          (7043 <= lookahead && lookahead <= 7072) ||
          lookahead == 7086 ||
          lookahead == 7087 ||
          (7098 <= lookahead && lookahead <= 7141) ||
          (7168 <= lookahead && lookahead <= 7203) ||
          (7245 <= lookahead && lookahead <= 7247) ||
          (7258 <= lookahead && lookahead <= 7293) ||
          (7296 <= lookahead && lookahead <= 7304) ||
          (7312 <= lookahead && lookahead <= 7354) ||
          (7357 <= lookahead && lookahead <= 7359) ||
          (7401 <= lookahead && lookahead <= 7404) ||
          (7406 <= lookahead && lookahead <= 7411) ||
          lookahead == 7413 ||
          lookahead == 7414 ||
          lookahead == 7418 ||
          (7424 <= lookahead && lookahead <= 7615) ||
          (7680 <= lookahead && lookahead <= 7957) ||
          (7960 <= lookahead && lookahead <= 7965) ||
          (7968 <= lookahead && lookahead <= 8005) ||
          (8008 <= lookahead && lookahead <= 8013) ||
          (8016 <= lookahead && lookahead <= 8023) ||
          lookahead == 8025 ||
          lookahead == 8027 ||
          lookahead == 8029 ||
          (8031 <= lookahead && lookahead <= 8061) ||
          (8064 <= lookahead && lookahead <= 8116) ||
          (8118 <= lookahead && lookahead <= 8124) ||
          lookahead == 8126 ||
          (8130 <= lookahead && lookahead <= 8132) ||
          (8134 <= lookahead && lookahead <= 8140) ||
          (8144 <= lookahead && lookahead <= 8147) ||
          (8150 <= lookahead && lookahead <= 8155) ||
          (8160 <= lookahead && lookahead <= 8172) ||
          (8178 <= lookahead && lookahead <= 8180) ||
          (8182 <= lookahead && lookahead <= 8188) ||
          lookahead == 8305 ||
          lookahead == 8319 ||
          (8336 <= lookahead && lookahead <= 8348) ||
          lookahead == 8450 ||
          lookahead == 8455 ||
          (8458 <= lookahead && lookahead <= 8467) ||
          lookahead == 8469 ||
          (8473 <= lookahead && lookahead <= 8477) ||
          lookahead == 8484 ||
          lookahead == 8486 ||
          lookahead == 8488 ||
          (8490 <= lookahead && lookahead <= 8493) ||
          (8495 <= lookahead && lookahead <= 8505) ||
          (8508 <= lookahead && lookahead <= 8511) ||
          (8517 <= lookahead && lookahead <= 8521) ||
          lookahead == 8526 ||
          lookahead == 8579 ||
          lookahead == 8580 ||
          (11264 <= lookahead && lookahead <= 11310) ||
          (11312 <= lookahead && lookahead <= 11358) ||
          (11360 <= lookahead && lookahead <= 11492) ||
          (11499 <= lookahead && lookahead <= 11502) ||
          lookahead == 11506 ||
          lookahead == 11507 ||
          (11520 <= lookahead && lookahead <= 11557) ||
          lookahead == 11559 ||
          lookahead == 11565 ||
          (11568 <= lookahead && lookahead <= 11623) ||
          lookahead == 11631 ||
          (11648 <= lookahead && lookahead <= 11670) ||
          (11680 <= lookahead && lookahead <= 11686) ||
          (11688 <= lookahead && lookahead <= 11694) ||
          (11696 <= lookahead && lookahead <= 11702) ||
          (11704 <= lookahead && lookahead <= 11710) ||
          (11712 <= lookahead && lookahead <= 11718) ||
          (11720 <= lookahead && lookahead <= 11726) ||
          (11728 <= lookahead && lookahead <= 11734) ||
          (11736 <= lookahead && lookahead <= 11742) ||
          lookahead == 11823 ||
          lookahead == 12293 ||
          lookahead == 12294 ||
          (12337 <= lookahead && lookahead <= 12341) ||
          lookahead == 12347 ||
          lookahead == 12348 ||
          (12353 <= lookahead && lookahead <= 12438) ||
          (12445 <= lookahead && lookahead <= 12447) ||
          (12449 <= lookahead && lookahead <= 12538) ||
          (12540 <= lookahead && lookahead <= 12543) ||
          (12549 <= lookahead && lookahead <= 12591) ||
          (12593 <= lookahead && lookahead <= 12686) ||
          (12704 <= lookahead && lookahead <= 12730) ||
          (12784 <= lookahead && lookahead <= 12799) ||
          (13312 <= lookahead && lookahead <= 19893) ||
          (19968 <= lookahead && lookahead <= 40943) ||
          (40960 <= lookahead && lookahead <= 42124) ||
          (42192 <= lookahead && lookahead <= 42237) ||
          (42240 <= lookahead && lookahead <= 42508) ||
          (42512 <= lookahead && lookahead <= 42527) ||
          lookahead == 42538 ||
          lookahead == 42539 ||
          (42560 <= lookahead && lookahead <= 42606) ||
          (42623 <= lookahead && lookahead <= 42653) ||
          (42656 <= lookahead && lookahead <= 42725) ||
          (42775 <= lookahead && lookahead <= 42783) ||
          (42786 <= lookahead && lookahead <= 42888) ||
          (42891 <= lookahead && lookahead <= 42943) ||
          (42946 <= lookahead && lookahead <= 42950) ||
          (42999 <= lookahead && lookahead <= 43009) ||
          (43011 <= lookahead && lookahead <= 43013) ||
          (43015 <= lookahead && lookahead <= 43018) ||
          (43020 <= lookahead && lookahead <= 43042) ||
          (43072 <= lookahead && lookahead <= 43123) ||
          (43138 <= lookahead && lookahead <= 43187) ||
          (43250 <= lookahead && lookahead <= 43255) ||
          lookahead == 43259 ||
          lookahead == 43261 ||
          lookahead == 43262 ||
          (43274 <= lookahead && lookahead <= 43301) ||
          (43312 <= lookahead && lookahead <= 43334) ||
          (43360 <= lookahead && lookahead <= 43388) ||
          (43396 <= lookahead && lookahead <= 43442) ||
          lookahead == 43471 ||
          (43488 <= lookahead && lookahead <= 43492) ||
          (43494 <= lookahead && lookahead <= 43503) ||
          (43514 <= lookahead && lookahead <= 43518) ||
          (43520 <= lookahead && lookahead <= 43560) ||
          (43584 <= lookahead && lookahead <= 43586) ||
          (43588 <= lookahead && lookahead <= 43595) ||
          (43616 <= lookahead && lookahead <= 43638) ||
          lookahead == 43642 ||
          (43646 <= lookahead && lookahead <= 43695) ||
          lookahead == 43697 ||
          lookahead == 43701 ||
          lookahead == 43702 ||
          (43705 <= lookahead && lookahead <= 43709) ||
          lookahead == 43712 ||
          lookahead == 43714 ||
          (43739 <= lookahead && lookahead <= 43741) ||
          (43744 <= lookahead && lookahead <= 43754) ||
          (43762 <= lookahead && lookahead <= 43764) ||
          (43777 <= lookahead && lookahead <= 43782) ||
          (43785 <= lookahead && lookahead <= 43790) ||
          (43793 <= lookahead && lookahead <= 43798) ||
          (43808 <= lookahead && lookahead <= 43814) ||
          (43816 <= lookahead && lookahead <= 43822) ||
          (43824 <= lookahead && lookahead <= 43866) ||
          (43868 <= lookahead && lookahead <= 43879) ||
          (43888 <= lookahead && lookahead <= 44002) ||
          (44032 <= lookahead && lookahead <= 55203) ||
          (55216 <= lookahead && lookahead <= 55238) ||
          (55243 <= lookahead && lookahead <= 55291) ||
          (63744 <= lookahead && lookahead <= 64109) ||
          (64112 <= lookahead && lookahead <= 64217) ||
          (64256 <= lookahead && lookahead <= 64262) ||
          (64275 <= lookahead && lookahead <= 64279) ||
          lookahead == 64285 ||
          (64287 <= lookahead && lookahead <= 64296) ||
          (64298 <= lookahead && lookahead <= 64310) ||
          (64312 <= lookahead && lookahead <= 64316) ||
          lookahead == 64318 ||
          lookahead == 64320 ||
          lookahead == 64321 ||
          lookahead == 64323 ||
          lookahead == 64324 ||
          (64326 <= lookahead && lookahead <= 64433) ||
          (64467 <= lookahead && lookahead <= 64829) ||
          (64848 <= lookahead && lookahead <= 64911) ||
          (64914 <= lookahead && lookahead <= 64967) ||
          (65008 <= lookahead && lookahead <= 65019) ||
          (65136 <= lookahead && lookahead <= 65140) ||
          (65142 <= lookahead && lookahead <= 65276) ||
          (65313 <= lookahead && lookahead <= 65338) ||
          (65345 <= lookahead && lookahead <= 65370) ||
          (65382 <= lookahead && lookahead <= 65470) ||
          (65474 <= lookahead && lookahead <= 65479) ||
          (65482 <= lookahead && lookahead <= 65487) ||
          (65490 <= lookahead && lookahead <= 65495) ||
          (65498 <= lookahead && lookahead <= 65500) ||
          (65536 <= lookahead && lookahead <= 65547) ||
          (65549 <= lookahead && lookahead <= 65574) ||
          (65576 <= lookahead && lookahead <= 65594) ||
          lookahead == 65596 ||
          lookahead == 65597 ||
          (65599 <= lookahead && lookahead <= 65613) ||
          (65616 <= lookahead && lookahead <= 65629) ||
          (65664 <= lookahead && lookahead <= 65786) ||
          (66176 <= lookahead && lookahead <= 66204) ||
          (66208 <= lookahead && lookahead <= 66256) ||
          (66304 <= lookahead && lookahead <= 66335) ||
          (66349 <= lookahead && lookahead <= 66368) ||
          (66370 <= lookahead && lookahead <= 66377) ||
          (66384 <= lookahead && lookahead <= 66421) ||
          (66432 <= lookahead && lookahead <= 66461) ||
          (66464 <= lookahead && lookahead <= 66499) ||
          (66504 <= lookahead && lookahead <= 66511) ||
          (66560 <= lookahead && lookahead <= 66717) ||
          (66736 <= lookahead && lookahead <= 66771) ||
          (66776 <= lookahead && lookahead <= 66811) ||
          (66816 <= lookahead && lookahead <= 66855) ||
          (66864 <= lookahead && lookahead <= 66915) ||
          (67072 <= lookahead && lookahead <= 67382) ||
          (67392 <= lookahead && lookahead <= 67413) ||
          (67424 <= lookahead && lookahead <= 67431) ||
          (67584 <= lookahead && lookahead <= 67589) ||
          lookahead == 67592 ||
          (67594 <= lookahead && lookahead <= 67637) ||
          lookahead == 67639 ||
          lookahead == 67640 ||
          lookahead == 67644 ||
          (67647 <= lookahead && lookahead <= 67669) ||
          (67680 <= lookahead && lookahead <= 67702) ||
          (67712 <= lookahead && lookahead <= 67742) ||
          (67808 <= lookahead && lookahead <= 67826) ||
          lookahead == 67828 ||
          lookahead == 67829 ||
          (67840 <= lookahead && lookahead <= 67861) ||
          (67872 <= lookahead && lookahead <= 67897) ||
          (67968 <= lookahead && lookahead <= 68023) ||
          lookahead == 68030 ||
          lookahead == 68031 ||
          lookahead == 68096 ||
          (68112 <= lookahead && lookahead <= 68115) ||
          (68117 <= lookahead && lookahead <= 68119) ||
          (68121 <= lookahead && lookahead <= 68149) ||
          (68192 <= lookahead && lookahead <= 68220) ||
          (68224 <= lookahead && lookahead <= 68252) ||
          (68288 <= lookahead && lookahead <= 68295) ||
          (68297 <= lookahead && lookahead <= 68324) ||
          (68352 <= lookahead && lookahead <= 68405) ||
          (68416 <= lookahead && lookahead <= 68437) ||
          (68448 <= lookahead && lookahead <= 68466) ||
          (68480 <= lookahead && lookahead <= 68497) ||
          (68608 <= lookahead && lookahead <= 68680) ||
          (68736 <= lookahead && lookahead <= 68786) ||
          (68800 <= lookahead && lookahead <= 68850) ||
          (68864 <= lookahead && lookahead <= 68899) ||
          (69376 <= lookahead && lookahead <= 69404) ||
          lookahead == 69415 ||
          (69424 <= lookahead && lookahead <= 69445) ||
          (69600 <= lookahead && lookahead <= 69622) ||
          (69635 <= lookahead && lookahead <= 69687) ||
          (69763 <= lookahead && lookahead <= 69807) ||
          (69840 <= lookahead && lookahead <= 69864) ||
          (69891 <= lookahead && lookahead <= 69926) ||
          lookahead == 69956 ||
          (69968 <= lookahead && lookahead <= 70002) ||
          lookahead == 70006 ||
          (70019 <= lookahead && lookahead <= 70066) ||
          (70081 <= lookahead && lookahead <= 70084) ||
          lookahead == 70106 ||
          lookahead == 70108 ||
          (70144 <= lookahead && lookahead <= 70161) ||
          (70163 <= lookahead && lookahead <= 70187) ||
          (70272 <= lookahead && lookahead <= 70278) ||
          lookahead == 70280 ||
          (70282 <= lookahead && lookahead <= 70285) ||
          (70287 <= lookahead && lookahead <= 70301) ||
          (70303 <= lookahead && lookahead <= 70312) ||
          (70320 <= lookahead && lookahead <= 70366) ||
          (70405 <= lookahead && lookahead <= 70412) ||
          lookahead == 70415 ||
          lookahead == 70416 ||
          (70419 <= lookahead && lookahead <= 70440) ||
          (70442 <= lookahead && lookahead <= 70448) ||
          lookahead == 70450 ||
          lookahead == 70451 ||
          (70453 <= lookahead && lookahead <= 70457) ||
          lookahead == 70461 ||
          lookahead == 70480 ||
          (70493 <= lookahead && lookahead <= 70497) ||
          (70656 <= lookahead && lookahead <= 70708) ||
          (70727 <= lookahead && lookahead <= 70730) ||
          lookahead == 70751 ||
          (70784 <= lookahead && lookahead <= 70831) ||
          lookahead == 70852 ||
          lookahead == 70853 ||
          lookahead == 70855 ||
          (71040 <= lookahead && lookahead <= 71086) ||
          (71128 <= lookahead && lookahead <= 71131) ||
          (71168 <= lookahead && lookahead <= 71215) ||
          lookahead == 71236 ||
          (71296 <= lookahead && lookahead <= 71338) ||
          lookahead == 71352 ||
          (71424 <= lookahead && lookahead <= 71450) ||
          (71680 <= lookahead && lookahead <= 71723) ||
          (71840 <= lookahead && lookahead <= 71903) ||
          lookahead == 71935 ||
          (72096 <= lookahead && lookahead <= 72103) ||
          (72106 <= lookahead && lookahead <= 72144) ||
          lookahead == 72161 ||
          lookahead == 72163 ||
          lookahead == 72192 ||
          (72203 <= lookahead && lookahead <= 72242) ||
          lookahead == 72250 ||
          lookahead == 72272 ||
          (72284 <= lookahead && lookahead <= 72329) ||
          lookahead == 72349 ||
          (72384 <= lookahead && lookahead <= 72440) ||
          (72704 <= lookahead && lookahead <= 72712) ||
          (72714 <= lookahead && lookahead <= 72750) ||
          lookahead == 72768 ||
          (72818 <= lookahead && lookahead <= 72847) ||
          (72960 <= lookahead && lookahead <= 72966) ||
          lookahead == 72968 ||
          lookahead == 72969 ||
          (72971 <= lookahead && lookahead <= 73008) ||
          lookahead == 73030 ||
          (73056 <= lookahead && lookahead <= 73061) ||
          lookahead == 73063 ||
          lookahead == 73064 ||
          (73066 <= lookahead && lookahead <= 73097) ||
          lookahead == 73112 ||
          (73440 <= lookahead && lookahead <= 73458) ||
          (73728 <= lookahead && lookahead <= 74649) ||
          (74880 <= lookahead && lookahead <= 75075) ||
          (77824 <= lookahead && lookahead <= 78894) ||
          (82944 <= lookahead && lookahead <= 83526) ||
          (92160 <= lookahead && lookahead <= 92728) ||
          (92736 <= lookahead && lookahead <= 92766) ||
          (92880 <= lookahead && lookahead <= 92909) ||
          (92928 <= lookahead && lookahead <= 92975) ||
          (92992 <= lookahead && lookahead <= 92995) ||
          (93027 <= lookahead && lookahead <= 93047) ||
          (93053 <= lookahead && lookahead <= 93071) ||
          (93760 <= lookahead && lookahead <= 93823) ||
          (93952 <= lookahead && lookahead <= 94026) ||
          lookahead == 94032 ||
          (94099 <= lookahead && lookahead <= 94111) ||
          lookahead == 94176 ||
          lookahead == 94177 ||
          lookahead == 94179 ||
          (94208 <= lookahead && lookahead <= 100343) ||
          (100352 <= lookahead && lookahead <= 101106) ||
          (110592 <= lookahead && lookahead <= 110878) ||
          (110928 <= lookahead && lookahead <= 110930) ||
          (110948 <= lookahead && lookahead <= 110951) ||
          (110960 <= lookahead && lookahead <= 111355) ||
          (113664 <= lookahead && lookahead <= 113770) ||
          (113776 <= lookahead && lookahead <= 113788) ||
          (113792 <= lookahead && lookahead <= 113800) ||
          (113808 <= lookahead && lookahead <= 113817) ||
          (119808 <= lookahead && lookahead <= 119892) ||
          (119894 <= lookahead && lookahead <= 119964) ||
          lookahead == 119966 ||
          lookahead == 119967 ||
          lookahead == 119970 ||
          lookahead == 119973 ||
          lookahead == 119974 ||
          (119977 <= lookahead && lookahead <= 119980) ||
          (119982 <= lookahead && lookahead <= 119993) ||
          lookahead == 119995 ||
          (119997 <= lookahead && lookahead <= 120003) ||
          (120005 <= lookahead && lookahead <= 120069) ||
          (120071 <= lookahead && lookahead <= 120074) ||
          (120077 <= lookahead && lookahead <= 120084) ||
          (120086 <= lookahead && lookahead <= 120092) ||
          (120094 <= lookahead && lookahead <= 120121) ||
          (120123 <= lookahead && lookahead <= 120126) ||
          (120128 <= lookahead && lookahead <= 120132) ||
          lookahead == 120134 ||
          (120138 <= lookahead && lookahead <= 120144) ||
          (120146 <= lookahead && lookahead <= 120485) ||
          (120488 <= lookahead && lookahead <= 120512) ||
          (120514 <= lookahead && lookahead <= 120538) ||
          (120540 <= lookahead && lookahead <= 120570) ||
          (120572 <= lookahead && lookahead <= 120596) ||
          (120598 <= lookahead && lookahead <= 120628) ||
          (120630 <= lookahead && lookahead <= 120654) ||
          (120656 <= lookahead && lookahead <= 120686) ||
          (120688 <= lookahead && lookahead <= 120712) ||
          (120714 <= lookahead && lookahead <= 120744) ||
          (120746 <= lookahead && lookahead <= 120770) ||
          (120772 <= lookahead && lookahead <= 120779) ||
          (123136 <= lookahead && lookahead <= 123180) ||
          (123191 <= lookahead && lookahead <= 123197) ||
          lookahead == 123214 ||
          (123584 <= lookahead && lookahead <= 123627) ||
          (124928 <= lookahead && lookahead <= 125124) ||
          (125184 <= lookahead && lookahead <= 125251) ||
          lookahead == 125259 ||
          (126464 <= lookahead && lookahead <= 126467) ||
          (126469 <= lookahead && lookahead <= 126495) ||
          lookahead == 126497 ||
          lookahead == 126498 ||
          lookahead == 126500 ||
          lookahead == 126503 ||
          (126505 <= lookahead && lookahead <= 126514) ||
          (126516 <= lookahead && lookahead <= 126519) ||
          lookahead == 126521 ||
          lookahead == 126523 ||
          lookahead == 126530 ||
          lookahead == 126535 ||
          lookahead == 126537 ||
          lookahead == 126539 ||
          (126541 <= lookahead && lookahead <= 126543) ||
          lookahead == 126545 ||
          lookahead == 126546 ||
          lookahead == 126548 ||
          lookahead == 126551 ||
          lookahead == 126553 ||
          lookahead == 126555 ||
          lookahead == 126557 ||
          lookahead == 126559 ||
          lookahead == 126561 ||
          lookahead == 126562 ||
          lookahead == 126564 ||
          (126567 <= lookahead && lookahead <= 126570) ||
          (126572 <= lookahead && lookahead <= 126578) ||
          (126580 <= lookahead && lookahead <= 126583) ||
          (126585 <= lookahead && lookahead <= 126588) ||
          lookahead == 126590 ||
          (126592 <= lookahead && lookahead <= 126601) ||
          (126603 <= lookahead && lookahead <= 126619) ||
          (126625 <= lookahead && lookahead <= 126627) ||
          (126629 <= lookahead && lookahead <= 126633) ||
          (126635 <= lookahead && lookahead <= 126651) ||
          (131072 <= lookahead && lookahead <= 173782) ||
          (173824 <= lookahead && lookahead <= 177972) ||
          (177984 <= lookahead && lookahead <= 178205) ||
          (178208 <= lookahead && lookahead <= 183969) ||
          (183984 <= lookahead && lookahead <= 191456) ||
          (194560 <= lookahead && lookahead <= 195101)) ADVANCE(18);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'S') ADVANCE(163);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 170 ||
          lookahead == 181 ||
          lookahead == 186 ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 705) ||
          (710 <= lookahead && lookahead <= 721) ||
          (736 <= lookahead && lookahead <= 740) ||
          lookahead == 748 ||
          lookahead == 750 ||
          (880 <= lookahead && lookahead <= 884) ||
          lookahead == 886 ||
          lookahead == 887 ||
          (890 <= lookahead && lookahead <= 893) ||
          lookahead == 895 ||
          lookahead == 902 ||
          (904 <= lookahead && lookahead <= 906) ||
          lookahead == 908 ||
          (910 <= lookahead && lookahead <= 929) ||
          (931 <= lookahead && lookahead <= 1013) ||
          (1015 <= lookahead && lookahead <= 1153) ||
          (1162 <= lookahead && lookahead <= 1327) ||
          (1329 <= lookahead && lookahead <= 1366) ||
          lookahead == 1369 ||
          (1376 <= lookahead && lookahead <= 1416) ||
          (1488 <= lookahead && lookahead <= 1514) ||
          (1519 <= lookahead && lookahead <= 1522) ||
          (1568 <= lookahead && lookahead <= 1610) ||
          lookahead == 1646 ||
          lookahead == 1647 ||
          (1649 <= lookahead && lookahead <= 1747) ||
          lookahead == 1749 ||
          lookahead == 1765 ||
          lookahead == 1766 ||
          lookahead == 1774 ||
          lookahead == 1775 ||
          (1786 <= lookahead && lookahead <= 1788) ||
          lookahead == 1791 ||
          lookahead == 1808 ||
          (1810 <= lookahead && lookahead <= 1839) ||
          (1869 <= lookahead && lookahead <= 1957) ||
          lookahead == 1969 ||
          (1994 <= lookahead && lookahead <= 2026) ||
          lookahead == 2036 ||
          lookahead == 2037 ||
          lookahead == 2042 ||
          (2048 <= lookahead && lookahead <= 2069) ||
          lookahead == 2074 ||
          lookahead == 2084 ||
          lookahead == 2088 ||
          (2112 <= lookahead && lookahead <= 2136) ||
          (2144 <= lookahead && lookahead <= 2154) ||
          (2208 <= lookahead && lookahead <= 2228) ||
          (2230 <= lookahead && lookahead <= 2237) ||
          (2308 <= lookahead && lookahead <= 2361) ||
          lookahead == 2365 ||
          lookahead == 2384 ||
          (2392 <= lookahead && lookahead <= 2401) ||
          (2417 <= lookahead && lookahead <= 2432) ||
          (2437 <= lookahead && lookahead <= 2444) ||
          lookahead == 2447 ||
          lookahead == 2448 ||
          (2451 <= lookahead && lookahead <= 2472) ||
          (2474 <= lookahead && lookahead <= 2480) ||
          lookahead == 2482 ||
          (2486 <= lookahead && lookahead <= 2489) ||
          lookahead == 2493 ||
          lookahead == 2510 ||
          lookahead == 2524 ||
          lookahead == 2525 ||
          (2527 <= lookahead && lookahead <= 2529) ||
          lookahead == 2544 ||
          lookahead == 2545 ||
          lookahead == 2556 ||
          (2565 <= lookahead && lookahead <= 2570) ||
          lookahead == 2575 ||
          lookahead == 2576 ||
          (2579 <= lookahead && lookahead <= 2600) ||
          (2602 <= lookahead && lookahead <= 2608) ||
          lookahead == 2610 ||
          lookahead == 2611 ||
          lookahead == 2613 ||
          lookahead == 2614 ||
          lookahead == 2616 ||
          lookahead == 2617 ||
          (2649 <= lookahead && lookahead <= 2652) ||
          lookahead == 2654 ||
          (2674 <= lookahead && lookahead <= 2676) ||
          (2693 <= lookahead && lookahead <= 2701) ||
          (2703 <= lookahead && lookahead <= 2705) ||
          (2707 <= lookahead && lookahead <= 2728) ||
          (2730 <= lookahead && lookahead <= 2736) ||
          lookahead == 2738 ||
          lookahead == 2739 ||
          (2741 <= lookahead && lookahead <= 2745) ||
          lookahead == 2749 ||
          lookahead == 2768 ||
          lookahead == 2784 ||
          lookahead == 2785 ||
          lookahead == 2809 ||
          (2821 <= lookahead && lookahead <= 2828) ||
          lookahead == 2831 ||
          lookahead == 2832 ||
          (2835 <= lookahead && lookahead <= 2856) ||
          (2858 <= lookahead && lookahead <= 2864) ||
          lookahead == 2866 ||
          lookahead == 2867 ||
          (2869 <= lookahead && lookahead <= 2873) ||
          lookahead == 2877 ||
          lookahead == 2908 ||
          lookahead == 2909 ||
          (2911 <= lookahead && lookahead <= 2913) ||
          lookahead == 2929 ||
          lookahead == 2947 ||
          (2949 <= lookahead && lookahead <= 2954) ||
          (2958 <= lookahead && lookahead <= 2960) ||
          (2962 <= lookahead && lookahead <= 2965) ||
          lookahead == 2969 ||
          lookahead == 2970 ||
          lookahead == 2972 ||
          lookahead == 2974 ||
          lookahead == 2975 ||
          lookahead == 2979 ||
          lookahead == 2980 ||
          (2984 <= lookahead && lookahead <= 2986) ||
          (2990 <= lookahead && lookahead <= 3001) ||
          lookahead == 3024 ||
          (3077 <= lookahead && lookahead <= 3084) ||
          (3086 <= lookahead && lookahead <= 3088) ||
          (3090 <= lookahead && lookahead <= 3112) ||
          (3114 <= lookahead && lookahead <= 3129) ||
          lookahead == 3133 ||
          (3160 <= lookahead && lookahead <= 3162) ||
          lookahead == 3168 ||
          lookahead == 3169 ||
          lookahead == 3200 ||
          (3205 <= lookahead && lookahead <= 3212) ||
          (3214 <= lookahead && lookahead <= 3216) ||
          (3218 <= lookahead && lookahead <= 3240) ||
          (3242 <= lookahead && lookahead <= 3251) ||
          (3253 <= lookahead && lookahead <= 3257) ||
          lookahead == 3261 ||
          lookahead == 3294 ||
          lookahead == 3296 ||
          lookahead == 3297 ||
          lookahead == 3313 ||
          lookahead == 3314 ||
          (3333 <= lookahead && lookahead <= 3340) ||
          (3342 <= lookahead && lookahead <= 3344) ||
          (3346 <= lookahead && lookahead <= 3386) ||
          lookahead == 3389 ||
          lookahead == 3406 ||
          (3412 <= lookahead && lookahead <= 3414) ||
          (3423 <= lookahead && lookahead <= 3425) ||
          (3450 <= lookahead && lookahead <= 3455) ||
          (3461 <= lookahead && lookahead <= 3478) ||
          (3482 <= lookahead && lookahead <= 3505) ||
          (3507 <= lookahead && lookahead <= 3515) ||
          lookahead == 3517 ||
          (3520 <= lookahead && lookahead <= 3526) ||
          (3585 <= lookahead && lookahead <= 3632) ||
          lookahead == 3634 ||
          lookahead == 3635 ||
          (3648 <= lookahead && lookahead <= 3654) ||
          lookahead == 3713 ||
          lookahead == 3714 ||
          lookahead == 3716 ||
          (3718 <= lookahead && lookahead <= 3722) ||
          (3724 <= lookahead && lookahead <= 3747) ||
          lookahead == 3749 ||
          (3751 <= lookahead && lookahead <= 3760) ||
          lookahead == 3762 ||
          lookahead == 3763 ||
          lookahead == 3773 ||
          (3776 <= lookahead && lookahead <= 3780) ||
          lookahead == 3782 ||
          (3804 <= lookahead && lookahead <= 3807) ||
          lookahead == 3840 ||
          (3904 <= lookahead && lookahead <= 3911) ||
          (3913 <= lookahead && lookahead <= 3948) ||
          (3976 <= lookahead && lookahead <= 3980) ||
          (4096 <= lookahead && lookahead <= 4138) ||
          lookahead == 4159 ||
          (4176 <= lookahead && lookahead <= 4181) ||
          (4186 <= lookahead && lookahead <= 4189) ||
          lookahead == 4193 ||
          lookahead == 4197 ||
          lookahead == 4198 ||
          (4206 <= lookahead && lookahead <= 4208) ||
          (4213 <= lookahead && lookahead <= 4225) ||
          lookahead == 4238 ||
          (4256 <= lookahead && lookahead <= 4293) ||
          lookahead == 4295 ||
          lookahead == 4301 ||
          (4304 <= lookahead && lookahead <= 4346) ||
          (4348 <= lookahead && lookahead <= 4680) ||
          (4682 <= lookahead && lookahead <= 4685) ||
          (4688 <= lookahead && lookahead <= 4694) ||
          lookahead == 4696 ||
          (4698 <= lookahead && lookahead <= 4701) ||
          (4704 <= lookahead && lookahead <= 4744) ||
          (4746 <= lookahead && lookahead <= 4749) ||
          (4752 <= lookahead && lookahead <= 4784) ||
          (4786 <= lookahead && lookahead <= 4789) ||
          (4792 <= lookahead && lookahead <= 4798) ||
          lookahead == 4800 ||
          (4802 <= lookahead && lookahead <= 4805) ||
          (4808 <= lookahead && lookahead <= 4822) ||
          (4824 <= lookahead && lookahead <= 4880) ||
          (4882 <= lookahead && lookahead <= 4885) ||
          (4888 <= lookahead && lookahead <= 4954) ||
          (4992 <= lookahead && lookahead <= 5007) ||
          (5024 <= lookahead && lookahead <= 5109) ||
          (5112 <= lookahead && lookahead <= 5117) ||
          (5121 <= lookahead && lookahead <= 5740) ||
          (5743 <= lookahead && lookahead <= 5759) ||
          (5761 <= lookahead && lookahead <= 5786) ||
          (5792 <= lookahead && lookahead <= 5866) ||
          (5873 <= lookahead && lookahead <= 5880) ||
          (5888 <= lookahead && lookahead <= 5900) ||
          (5902 <= lookahead && lookahead <= 5905) ||
          (5920 <= lookahead && lookahead <= 5937) ||
          (5952 <= lookahead && lookahead <= 5969) ||
          (5984 <= lookahead && lookahead <= 5996) ||
          (5998 <= lookahead && lookahead <= 6000) ||
          (6016 <= lookahead && lookahead <= 6067) ||
          lookahead == 6103 ||
          lookahead == 6108 ||
          (6176 <= lookahead && lookahead <= 6264) ||
          (6272 <= lookahead && lookahead <= 6276) ||
          (6279 <= lookahead && lookahead <= 6312) ||
          lookahead == 6314 ||
          (6320 <= lookahead && lookahead <= 6389) ||
          (6400 <= lookahead && lookahead <= 6430) ||
          (6480 <= lookahead && lookahead <= 6509) ||
          (6512 <= lookahead && lookahead <= 6516) ||
          (6528 <= lookahead && lookahead <= 6571) ||
          (6576 <= lookahead && lookahead <= 6601) ||
          (6656 <= lookahead && lookahead <= 6678) ||
          (6688 <= lookahead && lookahead <= 6740) ||
          lookahead == 6823 ||
          (6917 <= lookahead && lookahead <= 6963) ||
          (6981 <= lookahead && lookahead <= 6987) ||
          (7043 <= lookahead && lookahead <= 7072) ||
          lookahead == 7086 ||
          lookahead == 7087 ||
          (7098 <= lookahead && lookahead <= 7141) ||
          (7168 <= lookahead && lookahead <= 7203) ||
          (7245 <= lookahead && lookahead <= 7247) ||
          (7258 <= lookahead && lookahead <= 7293) ||
          (7296 <= lookahead && lookahead <= 7304) ||
          (7312 <= lookahead && lookahead <= 7354) ||
          (7357 <= lookahead && lookahead <= 7359) ||
          (7401 <= lookahead && lookahead <= 7404) ||
          (7406 <= lookahead && lookahead <= 7411) ||
          lookahead == 7413 ||
          lookahead == 7414 ||
          lookahead == 7418 ||
          (7424 <= lookahead && lookahead <= 7615) ||
          (7680 <= lookahead && lookahead <= 7957) ||
          (7960 <= lookahead && lookahead <= 7965) ||
          (7968 <= lookahead && lookahead <= 8005) ||
          (8008 <= lookahead && lookahead <= 8013) ||
          (8016 <= lookahead && lookahead <= 8023) ||
          lookahead == 8025 ||
          lookahead == 8027 ||
          lookahead == 8029 ||
          (8031 <= lookahead && lookahead <= 8061) ||
          (8064 <= lookahead && lookahead <= 8116) ||
          (8118 <= lookahead && lookahead <= 8124) ||
          lookahead == 8126 ||
          (8130 <= lookahead && lookahead <= 8132) ||
          (8134 <= lookahead && lookahead <= 8140) ||
          (8144 <= lookahead && lookahead <= 8147) ||
          (8150 <= lookahead && lookahead <= 8155) ||
          (8160 <= lookahead && lookahead <= 8172) ||
          (8178 <= lookahead && lookahead <= 8180) ||
          (8182 <= lookahead && lookahead <= 8188) ||
          lookahead == 8305 ||
          lookahead == 8319 ||
          (8336 <= lookahead && lookahead <= 8348) ||
          lookahead == 8450 ||
          lookahead == 8455 ||
          (8458 <= lookahead && lookahead <= 8467) ||
          lookahead == 8469 ||
          (8473 <= lookahead && lookahead <= 8477) ||
          lookahead == 8484 ||
          lookahead == 8486 ||
          lookahead == 8488 ||
          (8490 <= lookahead && lookahead <= 8493) ||
          (8495 <= lookahead && lookahead <= 8505) ||
          (8508 <= lookahead && lookahead <= 8511) ||
          (8517 <= lookahead && lookahead <= 8521) ||
          lookahead == 8526 ||
          lookahead == 8579 ||
          lookahead == 8580 ||
          (11264 <= lookahead && lookahead <= 11310) ||
          (11312 <= lookahead && lookahead <= 11358) ||
          (11360 <= lookahead && lookahead <= 11492) ||
          (11499 <= lookahead && lookahead <= 11502) ||
          lookahead == 11506 ||
          lookahead == 11507 ||
          (11520 <= lookahead && lookahead <= 11557) ||
          lookahead == 11559 ||
          lookahead == 11565 ||
          (11568 <= lookahead && lookahead <= 11623) ||
          lookahead == 11631 ||
          (11648 <= lookahead && lookahead <= 11670) ||
          (11680 <= lookahead && lookahead <= 11686) ||
          (11688 <= lookahead && lookahead <= 11694) ||
          (11696 <= lookahead && lookahead <= 11702) ||
          (11704 <= lookahead && lookahead <= 11710) ||
          (11712 <= lookahead && lookahead <= 11718) ||
          (11720 <= lookahead && lookahead <= 11726) ||
          (11728 <= lookahead && lookahead <= 11734) ||
          (11736 <= lookahead && lookahead <= 11742) ||
          lookahead == 11823 ||
          lookahead == 12293 ||
          lookahead == 12294 ||
          (12337 <= lookahead && lookahead <= 12341) ||
          lookahead == 12347 ||
          lookahead == 12348 ||
          (12353 <= lookahead && lookahead <= 12438) ||
          (12445 <= lookahead && lookahead <= 12447) ||
          (12449 <= lookahead && lookahead <= 12538) ||
          (12540 <= lookahead && lookahead <= 12543) ||
          (12549 <= lookahead && lookahead <= 12591) ||
          (12593 <= lookahead && lookahead <= 12686) ||
          (12704 <= lookahead && lookahead <= 12730) ||
          (12784 <= lookahead && lookahead <= 12799) ||
          (13312 <= lookahead && lookahead <= 19893) ||
          (19968 <= lookahead && lookahead <= 40943) ||
          (40960 <= lookahead && lookahead <= 42124) ||
          (42192 <= lookahead && lookahead <= 42237) ||
          (42240 <= lookahead && lookahead <= 42508) ||
          (42512 <= lookahead && lookahead <= 42527) ||
          lookahead == 42538 ||
          lookahead == 42539 ||
          (42560 <= lookahead && lookahead <= 42606) ||
          (42623 <= lookahead && lookahead <= 42653) ||
          (42656 <= lookahead && lookahead <= 42725) ||
          (42775 <= lookahead && lookahead <= 42783) ||
          (42786 <= lookahead && lookahead <= 42888) ||
          (42891 <= lookahead && lookahead <= 42943) ||
          (42946 <= lookahead && lookahead <= 42950) ||
          (42999 <= lookahead && lookahead <= 43009) ||
          (43011 <= lookahead && lookahead <= 43013) ||
          (43015 <= lookahead && lookahead <= 43018) ||
          (43020 <= lookahead && lookahead <= 43042) ||
          (43072 <= lookahead && lookahead <= 43123) ||
          (43138 <= lookahead && lookahead <= 43187) ||
          (43250 <= lookahead && lookahead <= 43255) ||
          lookahead == 43259 ||
          lookahead == 43261 ||
          lookahead == 43262 ||
          (43274 <= lookahead && lookahead <= 43301) ||
          (43312 <= lookahead && lookahead <= 43334) ||
          (43360 <= lookahead && lookahead <= 43388) ||
          (43396 <= lookahead && lookahead <= 43442) ||
          lookahead == 43471 ||
          (43488 <= lookahead && lookahead <= 43492) ||
          (43494 <= lookahead && lookahead <= 43503) ||
          (43514 <= lookahead && lookahead <= 43518) ||
          (43520 <= lookahead && lookahead <= 43560) ||
          (43584 <= lookahead && lookahead <= 43586) ||
          (43588 <= lookahead && lookahead <= 43595) ||
          (43616 <= lookahead && lookahead <= 43638) ||
          lookahead == 43642 ||
          (43646 <= lookahead && lookahead <= 43695) ||
          lookahead == 43697 ||
          lookahead == 43701 ||
          lookahead == 43702 ||
          (43705 <= lookahead && lookahead <= 43709) ||
          lookahead == 43712 ||
          lookahead == 43714 ||
          (43739 <= lookahead && lookahead <= 43741) ||
          (43744 <= lookahead && lookahead <= 43754) ||
          (43762 <= lookahead && lookahead <= 43764) ||
          (43777 <= lookahead && lookahead <= 43782) ||
          (43785 <= lookahead && lookahead <= 43790) ||
          (43793 <= lookahead && lookahead <= 43798) ||
          (43808 <= lookahead && lookahead <= 43814) ||
          (43816 <= lookahead && lookahead <= 43822) ||
          (43824 <= lookahead && lookahead <= 43866) ||
          (43868 <= lookahead && lookahead <= 43879) ||
          (43888 <= lookahead && lookahead <= 44002) ||
          (44032 <= lookahead && lookahead <= 55203) ||
          (55216 <= lookahead && lookahead <= 55238) ||
          (55243 <= lookahead && lookahead <= 55291) ||
          (63744 <= lookahead && lookahead <= 64109) ||
          (64112 <= lookahead && lookahead <= 64217) ||
          (64256 <= lookahead && lookahead <= 64262) ||
          (64275 <= lookahead && lookahead <= 64279) ||
          lookahead == 64285 ||
          (64287 <= lookahead && lookahead <= 64296) ||
          (64298 <= lookahead && lookahead <= 64310) ||
          (64312 <= lookahead && lookahead <= 64316) ||
          lookahead == 64318 ||
          lookahead == 64320 ||
          lookahead == 64321 ||
          lookahead == 64323 ||
          lookahead == 64324 ||
          (64326 <= lookahead && lookahead <= 64433) ||
          (64467 <= lookahead && lookahead <= 64829) ||
          (64848 <= lookahead && lookahead <= 64911) ||
          (64914 <= lookahead && lookahead <= 64967) ||
          (65008 <= lookahead && lookahead <= 65019) ||
          (65136 <= lookahead && lookahead <= 65140) ||
          (65142 <= lookahead && lookahead <= 65276) ||
          (65313 <= lookahead && lookahead <= 65338) ||
          (65345 <= lookahead && lookahead <= 65370) ||
          (65382 <= lookahead && lookahead <= 65470) ||
          (65474 <= lookahead && lookahead <= 65479) ||
          (65482 <= lookahead && lookahead <= 65487) ||
          (65490 <= lookahead && lookahead <= 65495) ||
          (65498 <= lookahead && lookahead <= 65500) ||
          (65536 <= lookahead && lookahead <= 65547) ||
          (65549 <= lookahead && lookahead <= 65574) ||
          (65576 <= lookahead && lookahead <= 65594) ||
          lookahead == 65596 ||
          lookahead == 65597 ||
          (65599 <= lookahead && lookahead <= 65613) ||
          (65616 <= lookahead && lookahead <= 65629) ||
          (65664 <= lookahead && lookahead <= 65786) ||
          (66176 <= lookahead && lookahead <= 66204) ||
          (66208 <= lookahead && lookahead <= 66256) ||
          (66304 <= lookahead && lookahead <= 66335) ||
          (66349 <= lookahead && lookahead <= 66368) ||
          (66370 <= lookahead && lookahead <= 66377) ||
          (66384 <= lookahead && lookahead <= 66421) ||
          (66432 <= lookahead && lookahead <= 66461) ||
          (66464 <= lookahead && lookahead <= 66499) ||
          (66504 <= lookahead && lookahead <= 66511) ||
          (66560 <= lookahead && lookahead <= 66717) ||
          (66736 <= lookahead && lookahead <= 66771) ||
          (66776 <= lookahead && lookahead <= 66811) ||
          (66816 <= lookahead && lookahead <= 66855) ||
          (66864 <= lookahead && lookahead <= 66915) ||
          (67072 <= lookahead && lookahead <= 67382) ||
          (67392 <= lookahead && lookahead <= 67413) ||
          (67424 <= lookahead && lookahead <= 67431) ||
          (67584 <= lookahead && lookahead <= 67589) ||
          lookahead == 67592 ||
          (67594 <= lookahead && lookahead <= 67637) ||
          lookahead == 67639 ||
          lookahead == 67640 ||
          lookahead == 67644 ||
          (67647 <= lookahead && lookahead <= 67669) ||
          (67680 <= lookahead && lookahead <= 67702) ||
          (67712 <= lookahead && lookahead <= 67742) ||
          (67808 <= lookahead && lookahead <= 67826) ||
          lookahead == 67828 ||
          lookahead == 67829 ||
          (67840 <= lookahead && lookahead <= 67861) ||
          (67872 <= lookahead && lookahead <= 67897) ||
          (67968 <= lookahead && lookahead <= 68023) ||
          lookahead == 68030 ||
          lookahead == 68031 ||
          lookahead == 68096 ||
          (68112 <= lookahead && lookahead <= 68115) ||
          (68117 <= lookahead && lookahead <= 68119) ||
          (68121 <= lookahead && lookahead <= 68149) ||
          (68192 <= lookahead && lookahead <= 68220) ||
          (68224 <= lookahead && lookahead <= 68252) ||
          (68288 <= lookahead && lookahead <= 68295) ||
          (68297 <= lookahead && lookahead <= 68324) ||
          (68352 <= lookahead && lookahead <= 68405) ||
          (68416 <= lookahead && lookahead <= 68437) ||
          (68448 <= lookahead && lookahead <= 68466) ||
          (68480 <= lookahead && lookahead <= 68497) ||
          (68608 <= lookahead && lookahead <= 68680) ||
          (68736 <= lookahead && lookahead <= 68786) ||
          (68800 <= lookahead && lookahead <= 68850) ||
          (68864 <= lookahead && lookahead <= 68899) ||
          (69376 <= lookahead && lookahead <= 69404) ||
          lookahead == 69415 ||
          (69424 <= lookahead && lookahead <= 69445) ||
          (69600 <= lookahead && lookahead <= 69622) ||
          (69635 <= lookahead && lookahead <= 69687) ||
          (69763 <= lookahead && lookahead <= 69807) ||
          (69840 <= lookahead && lookahead <= 69864) ||
          (69891 <= lookahead && lookahead <= 69926) ||
          lookahead == 69956 ||
          (69968 <= lookahead && lookahead <= 70002) ||
          lookahead == 70006 ||
          (70019 <= lookahead && lookahead <= 70066) ||
          (70081 <= lookahead && lookahead <= 70084) ||
          lookahead == 70106 ||
          lookahead == 70108 ||
          (70144 <= lookahead && lookahead <= 70161) ||
          (70163 <= lookahead && lookahead <= 70187) ||
          (70272 <= lookahead && lookahead <= 70278) ||
          lookahead == 70280 ||
          (70282 <= lookahead && lookahead <= 70285) ||
          (70287 <= lookahead && lookahead <= 70301) ||
          (70303 <= lookahead && lookahead <= 70312) ||
          (70320 <= lookahead && lookahead <= 70366) ||
          (70405 <= lookahead && lookahead <= 70412) ||
          lookahead == 70415 ||
          lookahead == 70416 ||
          (70419 <= lookahead && lookahead <= 70440) ||
          (70442 <= lookahead && lookahead <= 70448) ||
          lookahead == 70450 ||
          lookahead == 70451 ||
          (70453 <= lookahead && lookahead <= 70457) ||
          lookahead == 70461 ||
          lookahead == 70480 ||
          (70493 <= lookahead && lookahead <= 70497) ||
          (70656 <= lookahead && lookahead <= 70708) ||
          (70727 <= lookahead && lookahead <= 70730) ||
          lookahead == 70751 ||
          (70784 <= lookahead && lookahead <= 70831) ||
          lookahead == 70852 ||
          lookahead == 70853 ||
          lookahead == 70855 ||
          (71040 <= lookahead && lookahead <= 71086) ||
          (71128 <= lookahead && lookahead <= 71131) ||
          (71168 <= lookahead && lookahead <= 71215) ||
          lookahead == 71236 ||
          (71296 <= lookahead && lookahead <= 71338) ||
          lookahead == 71352 ||
          (71424 <= lookahead && lookahead <= 71450) ||
          (71680 <= lookahead && lookahead <= 71723) ||
          (71840 <= lookahead && lookahead <= 71903) ||
          lookahead == 71935 ||
          (72096 <= lookahead && lookahead <= 72103) ||
          (72106 <= lookahead && lookahead <= 72144) ||
          lookahead == 72161 ||
          lookahead == 72163 ||
          lookahead == 72192 ||
          (72203 <= lookahead && lookahead <= 72242) ||
          lookahead == 72250 ||
          lookahead == 72272 ||
          (72284 <= lookahead && lookahead <= 72329) ||
          lookahead == 72349 ||
          (72384 <= lookahead && lookahead <= 72440) ||
          (72704 <= lookahead && lookahead <= 72712) ||
          (72714 <= lookahead && lookahead <= 72750) ||
          lookahead == 72768 ||
          (72818 <= lookahead && lookahead <= 72847) ||
          (72960 <= lookahead && lookahead <= 72966) ||
          lookahead == 72968 ||
          lookahead == 72969 ||
          (72971 <= lookahead && lookahead <= 73008) ||
          lookahead == 73030 ||
          (73056 <= lookahead && lookahead <= 73061) ||
          lookahead == 73063 ||
          lookahead == 73064 ||
          (73066 <= lookahead && lookahead <= 73097) ||
          lookahead == 73112 ||
          (73440 <= lookahead && lookahead <= 73458) ||
          (73728 <= lookahead && lookahead <= 74649) ||
          (74880 <= lookahead && lookahead <= 75075) ||
          (77824 <= lookahead && lookahead <= 78894) ||
          (82944 <= lookahead && lookahead <= 83526) ||
          (92160 <= lookahead && lookahead <= 92728) ||
          (92736 <= lookahead && lookahead <= 92766) ||
          (92880 <= lookahead && lookahead <= 92909) ||
          (92928 <= lookahead && lookahead <= 92975) ||
          (92992 <= lookahead && lookahead <= 92995) ||
          (93027 <= lookahead && lookahead <= 93047) ||
          (93053 <= lookahead && lookahead <= 93071) ||
          (93760 <= lookahead && lookahead <= 93823) ||
          (93952 <= lookahead && lookahead <= 94026) ||
          lookahead == 94032 ||
          (94099 <= lookahead && lookahead <= 94111) ||
          lookahead == 94176 ||
          lookahead == 94177 ||
          lookahead == 94179 ||
          (94208 <= lookahead && lookahead <= 100343) ||
          (100352 <= lookahead && lookahead <= 101106) ||
          (110592 <= lookahead && lookahead <= 110878) ||
          (110928 <= lookahead && lookahead <= 110930) ||
          (110948 <= lookahead && lookahead <= 110951) ||
          (110960 <= lookahead && lookahead <= 111355) ||
          (113664 <= lookahead && lookahead <= 113770) ||
          (113776 <= lookahead && lookahead <= 113788) ||
          (113792 <= lookahead && lookahead <= 113800) ||
          (113808 <= lookahead && lookahead <= 113817) ||
          (119808 <= lookahead && lookahead <= 119892) ||
          (119894 <= lookahead && lookahead <= 119964) ||
          lookahead == 119966 ||
          lookahead == 119967 ||
          lookahead == 119970 ||
          lookahead == 119973 ||
          lookahead == 119974 ||
          (119977 <= lookahead && lookahead <= 119980) ||
          (119982 <= lookahead && lookahead <= 119993) ||
          lookahead == 119995 ||
          (119997 <= lookahead && lookahead <= 120003) ||
          (120005 <= lookahead && lookahead <= 120069) ||
          (120071 <= lookahead && lookahead <= 120074) ||
          (120077 <= lookahead && lookahead <= 120084) ||
          (120086 <= lookahead && lookahead <= 120092) ||
          (120094 <= lookahead && lookahead <= 120121) ||
          (120123 <= lookahead && lookahead <= 120126) ||
          (120128 <= lookahead && lookahead <= 120132) ||
          lookahead == 120134 ||
          (120138 <= lookahead && lookahead <= 120144) ||
          (120146 <= lookahead && lookahead <= 120485) ||
          (120488 <= lookahead && lookahead <= 120512) ||
          (120514 <= lookahead && lookahead <= 120538) ||
          (120540 <= lookahead && lookahead <= 120570) ||
          (120572 <= lookahead && lookahead <= 120596) ||
          (120598 <= lookahead && lookahead <= 120628) ||
          (120630 <= lookahead && lookahead <= 120654) ||
          (120656 <= lookahead && lookahead <= 120686) ||
          (120688 <= lookahead && lookahead <= 120712) ||
          (120714 <= lookahead && lookahead <= 120744) ||
          (120746 <= lookahead && lookahead <= 120770) ||
          (120772 <= lookahead && lookahead <= 120779) ||
          (123136 <= lookahead && lookahead <= 123180) ||
          (123191 <= lookahead && lookahead <= 123197) ||
          lookahead == 123214 ||
          (123584 <= lookahead && lookahead <= 123627) ||
          (124928 <= lookahead && lookahead <= 125124) ||
          (125184 <= lookahead && lookahead <= 125251) ||
          lookahead == 125259 ||
          (126464 <= lookahead && lookahead <= 126467) ||
          (126469 <= lookahead && lookahead <= 126495) ||
          lookahead == 126497 ||
          lookahead == 126498 ||
          lookahead == 126500 ||
          lookahead == 126503 ||
          (126505 <= lookahead && lookahead <= 126514) ||
          (126516 <= lookahead && lookahead <= 126519) ||
          lookahead == 126521 ||
          lookahead == 126523 ||
          lookahead == 126530 ||
          lookahead == 126535 ||
          lookahead == 126537 ||
          lookahead == 126539 ||
          (126541 <= lookahead && lookahead <= 126543) ||
          lookahead == 126545 ||
          lookahead == 126546 ||
          lookahead == 126548 ||
          lookahead == 126551 ||
          lookahead == 126553 ||
          lookahead == 126555 ||
          lookahead == 126557 ||
          lookahead == 126559 ||
          lookahead == 126561 ||
          lookahead == 126562 ||
          lookahead == 126564 ||
          (126567 <= lookahead && lookahead <= 126570) ||
          (126572 <= lookahead && lookahead <= 126578) ||
          (126580 <= lookahead && lookahead <= 126583) ||
          (126585 <= lookahead && lookahead <= 126588) ||
          lookahead == 126590 ||
          (126592 <= lookahead && lookahead <= 126601) ||
          (126603 <= lookahead && lookahead <= 126619) ||
          (126625 <= lookahead && lookahead <= 126627) ||
          (126629 <= lookahead && lookahead <= 126633) ||
          (126635 <= lookahead && lookahead <= 126651) ||
          (131072 <= lookahead && lookahead <= 173782) ||
          (173824 <= lookahead && lookahead <= 177972) ||
          (177984 <= lookahead && lookahead <= 178205) ||
          (178208 <= lookahead && lookahead <= 183969) ||
          (183984 <= lookahead && lookahead <= 191456) ||
          (194560 <= lookahead && lookahead <= 195101)) ADVANCE(18);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'U') ADVANCE(163);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 170 ||
          lookahead == 181 ||
          lookahead == 186 ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 705) ||
          (710 <= lookahead && lookahead <= 721) ||
          (736 <= lookahead && lookahead <= 740) ||
          lookahead == 748 ||
          lookahead == 750 ||
          (880 <= lookahead && lookahead <= 884) ||
          lookahead == 886 ||
          lookahead == 887 ||
          (890 <= lookahead && lookahead <= 893) ||
          lookahead == 895 ||
          lookahead == 902 ||
          (904 <= lookahead && lookahead <= 906) ||
          lookahead == 908 ||
          (910 <= lookahead && lookahead <= 929) ||
          (931 <= lookahead && lookahead <= 1013) ||
          (1015 <= lookahead && lookahead <= 1153) ||
          (1162 <= lookahead && lookahead <= 1327) ||
          (1329 <= lookahead && lookahead <= 1366) ||
          lookahead == 1369 ||
          (1376 <= lookahead && lookahead <= 1416) ||
          (1488 <= lookahead && lookahead <= 1514) ||
          (1519 <= lookahead && lookahead <= 1522) ||
          (1568 <= lookahead && lookahead <= 1610) ||
          lookahead == 1646 ||
          lookahead == 1647 ||
          (1649 <= lookahead && lookahead <= 1747) ||
          lookahead == 1749 ||
          lookahead == 1765 ||
          lookahead == 1766 ||
          lookahead == 1774 ||
          lookahead == 1775 ||
          (1786 <= lookahead && lookahead <= 1788) ||
          lookahead == 1791 ||
          lookahead == 1808 ||
          (1810 <= lookahead && lookahead <= 1839) ||
          (1869 <= lookahead && lookahead <= 1957) ||
          lookahead == 1969 ||
          (1994 <= lookahead && lookahead <= 2026) ||
          lookahead == 2036 ||
          lookahead == 2037 ||
          lookahead == 2042 ||
          (2048 <= lookahead && lookahead <= 2069) ||
          lookahead == 2074 ||
          lookahead == 2084 ||
          lookahead == 2088 ||
          (2112 <= lookahead && lookahead <= 2136) ||
          (2144 <= lookahead && lookahead <= 2154) ||
          (2208 <= lookahead && lookahead <= 2228) ||
          (2230 <= lookahead && lookahead <= 2237) ||
          (2308 <= lookahead && lookahead <= 2361) ||
          lookahead == 2365 ||
          lookahead == 2384 ||
          (2392 <= lookahead && lookahead <= 2401) ||
          (2417 <= lookahead && lookahead <= 2432) ||
          (2437 <= lookahead && lookahead <= 2444) ||
          lookahead == 2447 ||
          lookahead == 2448 ||
          (2451 <= lookahead && lookahead <= 2472) ||
          (2474 <= lookahead && lookahead <= 2480) ||
          lookahead == 2482 ||
          (2486 <= lookahead && lookahead <= 2489) ||
          lookahead == 2493 ||
          lookahead == 2510 ||
          lookahead == 2524 ||
          lookahead == 2525 ||
          (2527 <= lookahead && lookahead <= 2529) ||
          lookahead == 2544 ||
          lookahead == 2545 ||
          lookahead == 2556 ||
          (2565 <= lookahead && lookahead <= 2570) ||
          lookahead == 2575 ||
          lookahead == 2576 ||
          (2579 <= lookahead && lookahead <= 2600) ||
          (2602 <= lookahead && lookahead <= 2608) ||
          lookahead == 2610 ||
          lookahead == 2611 ||
          lookahead == 2613 ||
          lookahead == 2614 ||
          lookahead == 2616 ||
          lookahead == 2617 ||
          (2649 <= lookahead && lookahead <= 2652) ||
          lookahead == 2654 ||
          (2674 <= lookahead && lookahead <= 2676) ||
          (2693 <= lookahead && lookahead <= 2701) ||
          (2703 <= lookahead && lookahead <= 2705) ||
          (2707 <= lookahead && lookahead <= 2728) ||
          (2730 <= lookahead && lookahead <= 2736) ||
          lookahead == 2738 ||
          lookahead == 2739 ||
          (2741 <= lookahead && lookahead <= 2745) ||
          lookahead == 2749 ||
          lookahead == 2768 ||
          lookahead == 2784 ||
          lookahead == 2785 ||
          lookahead == 2809 ||
          (2821 <= lookahead && lookahead <= 2828) ||
          lookahead == 2831 ||
          lookahead == 2832 ||
          (2835 <= lookahead && lookahead <= 2856) ||
          (2858 <= lookahead && lookahead <= 2864) ||
          lookahead == 2866 ||
          lookahead == 2867 ||
          (2869 <= lookahead && lookahead <= 2873) ||
          lookahead == 2877 ||
          lookahead == 2908 ||
          lookahead == 2909 ||
          (2911 <= lookahead && lookahead <= 2913) ||
          lookahead == 2929 ||
          lookahead == 2947 ||
          (2949 <= lookahead && lookahead <= 2954) ||
          (2958 <= lookahead && lookahead <= 2960) ||
          (2962 <= lookahead && lookahead <= 2965) ||
          lookahead == 2969 ||
          lookahead == 2970 ||
          lookahead == 2972 ||
          lookahead == 2974 ||
          lookahead == 2975 ||
          lookahead == 2979 ||
          lookahead == 2980 ||
          (2984 <= lookahead && lookahead <= 2986) ||
          (2990 <= lookahead && lookahead <= 3001) ||
          lookahead == 3024 ||
          (3077 <= lookahead && lookahead <= 3084) ||
          (3086 <= lookahead && lookahead <= 3088) ||
          (3090 <= lookahead && lookahead <= 3112) ||
          (3114 <= lookahead && lookahead <= 3129) ||
          lookahead == 3133 ||
          (3160 <= lookahead && lookahead <= 3162) ||
          lookahead == 3168 ||
          lookahead == 3169 ||
          lookahead == 3200 ||
          (3205 <= lookahead && lookahead <= 3212) ||
          (3214 <= lookahead && lookahead <= 3216) ||
          (3218 <= lookahead && lookahead <= 3240) ||
          (3242 <= lookahead && lookahead <= 3251) ||
          (3253 <= lookahead && lookahead <= 3257) ||
          lookahead == 3261 ||
          lookahead == 3294 ||
          lookahead == 3296 ||
          lookahead == 3297 ||
          lookahead == 3313 ||
          lookahead == 3314 ||
          (3333 <= lookahead && lookahead <= 3340) ||
          (3342 <= lookahead && lookahead <= 3344) ||
          (3346 <= lookahead && lookahead <= 3386) ||
          lookahead == 3389 ||
          lookahead == 3406 ||
          (3412 <= lookahead && lookahead <= 3414) ||
          (3423 <= lookahead && lookahead <= 3425) ||
          (3450 <= lookahead && lookahead <= 3455) ||
          (3461 <= lookahead && lookahead <= 3478) ||
          (3482 <= lookahead && lookahead <= 3505) ||
          (3507 <= lookahead && lookahead <= 3515) ||
          lookahead == 3517 ||
          (3520 <= lookahead && lookahead <= 3526) ||
          (3585 <= lookahead && lookahead <= 3632) ||
          lookahead == 3634 ||
          lookahead == 3635 ||
          (3648 <= lookahead && lookahead <= 3654) ||
          lookahead == 3713 ||
          lookahead == 3714 ||
          lookahead == 3716 ||
          (3718 <= lookahead && lookahead <= 3722) ||
          (3724 <= lookahead && lookahead <= 3747) ||
          lookahead == 3749 ||
          (3751 <= lookahead && lookahead <= 3760) ||
          lookahead == 3762 ||
          lookahead == 3763 ||
          lookahead == 3773 ||
          (3776 <= lookahead && lookahead <= 3780) ||
          lookahead == 3782 ||
          (3804 <= lookahead && lookahead <= 3807) ||
          lookahead == 3840 ||
          (3904 <= lookahead && lookahead <= 3911) ||
          (3913 <= lookahead && lookahead <= 3948) ||
          (3976 <= lookahead && lookahead <= 3980) ||
          (4096 <= lookahead && lookahead <= 4138) ||
          lookahead == 4159 ||
          (4176 <= lookahead && lookahead <= 4181) ||
          (4186 <= lookahead && lookahead <= 4189) ||
          lookahead == 4193 ||
          lookahead == 4197 ||
          lookahead == 4198 ||
          (4206 <= lookahead && lookahead <= 4208) ||
          (4213 <= lookahead && lookahead <= 4225) ||
          lookahead == 4238 ||
          (4256 <= lookahead && lookahead <= 4293) ||
          lookahead == 4295 ||
          lookahead == 4301 ||
          (4304 <= lookahead && lookahead <= 4346) ||
          (4348 <= lookahead && lookahead <= 4680) ||
          (4682 <= lookahead && lookahead <= 4685) ||
          (4688 <= lookahead && lookahead <= 4694) ||
          lookahead == 4696 ||
          (4698 <= lookahead && lookahead <= 4701) ||
          (4704 <= lookahead && lookahead <= 4744) ||
          (4746 <= lookahead && lookahead <= 4749) ||
          (4752 <= lookahead && lookahead <= 4784) ||
          (4786 <= lookahead && lookahead <= 4789) ||
          (4792 <= lookahead && lookahead <= 4798) ||
          lookahead == 4800 ||
          (4802 <= lookahead && lookahead <= 4805) ||
          (4808 <= lookahead && lookahead <= 4822) ||
          (4824 <= lookahead && lookahead <= 4880) ||
          (4882 <= lookahead && lookahead <= 4885) ||
          (4888 <= lookahead && lookahead <= 4954) ||
          (4992 <= lookahead && lookahead <= 5007) ||
          (5024 <= lookahead && lookahead <= 5109) ||
          (5112 <= lookahead && lookahead <= 5117) ||
          (5121 <= lookahead && lookahead <= 5740) ||
          (5743 <= lookahead && lookahead <= 5759) ||
          (5761 <= lookahead && lookahead <= 5786) ||
          (5792 <= lookahead && lookahead <= 5866) ||
          (5873 <= lookahead && lookahead <= 5880) ||
          (5888 <= lookahead && lookahead <= 5900) ||
          (5902 <= lookahead && lookahead <= 5905) ||
          (5920 <= lookahead && lookahead <= 5937) ||
          (5952 <= lookahead && lookahead <= 5969) ||
          (5984 <= lookahead && lookahead <= 5996) ||
          (5998 <= lookahead && lookahead <= 6000) ||
          (6016 <= lookahead && lookahead <= 6067) ||
          lookahead == 6103 ||
          lookahead == 6108 ||
          (6176 <= lookahead && lookahead <= 6264) ||
          (6272 <= lookahead && lookahead <= 6276) ||
          (6279 <= lookahead && lookahead <= 6312) ||
          lookahead == 6314 ||
          (6320 <= lookahead && lookahead <= 6389) ||
          (6400 <= lookahead && lookahead <= 6430) ||
          (6480 <= lookahead && lookahead <= 6509) ||
          (6512 <= lookahead && lookahead <= 6516) ||
          (6528 <= lookahead && lookahead <= 6571) ||
          (6576 <= lookahead && lookahead <= 6601) ||
          (6656 <= lookahead && lookahead <= 6678) ||
          (6688 <= lookahead && lookahead <= 6740) ||
          lookahead == 6823 ||
          (6917 <= lookahead && lookahead <= 6963) ||
          (6981 <= lookahead && lookahead <= 6987) ||
          (7043 <= lookahead && lookahead <= 7072) ||
          lookahead == 7086 ||
          lookahead == 7087 ||
          (7098 <= lookahead && lookahead <= 7141) ||
          (7168 <= lookahead && lookahead <= 7203) ||
          (7245 <= lookahead && lookahead <= 7247) ||
          (7258 <= lookahead && lookahead <= 7293) ||
          (7296 <= lookahead && lookahead <= 7304) ||
          (7312 <= lookahead && lookahead <= 7354) ||
          (7357 <= lookahead && lookahead <= 7359) ||
          (7401 <= lookahead && lookahead <= 7404) ||
          (7406 <= lookahead && lookahead <= 7411) ||
          lookahead == 7413 ||
          lookahead == 7414 ||
          lookahead == 7418 ||
          (7424 <= lookahead && lookahead <= 7615) ||
          (7680 <= lookahead && lookahead <= 7957) ||
          (7960 <= lookahead && lookahead <= 7965) ||
          (7968 <= lookahead && lookahead <= 8005) ||
          (8008 <= lookahead && lookahead <= 8013) ||
          (8016 <= lookahead && lookahead <= 8023) ||
          lookahead == 8025 ||
          lookahead == 8027 ||
          lookahead == 8029 ||
          (8031 <= lookahead && lookahead <= 8061) ||
          (8064 <= lookahead && lookahead <= 8116) ||
          (8118 <= lookahead && lookahead <= 8124) ||
          lookahead == 8126 ||
          (8130 <= lookahead && lookahead <= 8132) ||
          (8134 <= lookahead && lookahead <= 8140) ||
          (8144 <= lookahead && lookahead <= 8147) ||
          (8150 <= lookahead && lookahead <= 8155) ||
          (8160 <= lookahead && lookahead <= 8172) ||
          (8178 <= lookahead && lookahead <= 8180) ||
          (8182 <= lookahead && lookahead <= 8188) ||
          lookahead == 8305 ||
          lookahead == 8319 ||
          (8336 <= lookahead && lookahead <= 8348) ||
          lookahead == 8450 ||
          lookahead == 8455 ||
          (8458 <= lookahead && lookahead <= 8467) ||
          lookahead == 8469 ||
          (8473 <= lookahead && lookahead <= 8477) ||
          lookahead == 8484 ||
          lookahead == 8486 ||
          lookahead == 8488 ||
          (8490 <= lookahead && lookahead <= 8493) ||
          (8495 <= lookahead && lookahead <= 8505) ||
          (8508 <= lookahead && lookahead <= 8511) ||
          (8517 <= lookahead && lookahead <= 8521) ||
          lookahead == 8526 ||
          lookahead == 8579 ||
          lookahead == 8580 ||
          (11264 <= lookahead && lookahead <= 11310) ||
          (11312 <= lookahead && lookahead <= 11358) ||
          (11360 <= lookahead && lookahead <= 11492) ||
          (11499 <= lookahead && lookahead <= 11502) ||
          lookahead == 11506 ||
          lookahead == 11507 ||
          (11520 <= lookahead && lookahead <= 11557) ||
          lookahead == 11559 ||
          lookahead == 11565 ||
          (11568 <= lookahead && lookahead <= 11623) ||
          lookahead == 11631 ||
          (11648 <= lookahead && lookahead <= 11670) ||
          (11680 <= lookahead && lookahead <= 11686) ||
          (11688 <= lookahead && lookahead <= 11694) ||
          (11696 <= lookahead && lookahead <= 11702) ||
          (11704 <= lookahead && lookahead <= 11710) ||
          (11712 <= lookahead && lookahead <= 11718) ||
          (11720 <= lookahead && lookahead <= 11726) ||
          (11728 <= lookahead && lookahead <= 11734) ||
          (11736 <= lookahead && lookahead <= 11742) ||
          lookahead == 11823 ||
          lookahead == 12293 ||
          lookahead == 12294 ||
          (12337 <= lookahead && lookahead <= 12341) ||
          lookahead == 12347 ||
          lookahead == 12348 ||
          (12353 <= lookahead && lookahead <= 12438) ||
          (12445 <= lookahead && lookahead <= 12447) ||
          (12449 <= lookahead && lookahead <= 12538) ||
          (12540 <= lookahead && lookahead <= 12543) ||
          (12549 <= lookahead && lookahead <= 12591) ||
          (12593 <= lookahead && lookahead <= 12686) ||
          (12704 <= lookahead && lookahead <= 12730) ||
          (12784 <= lookahead && lookahead <= 12799) ||
          (13312 <= lookahead && lookahead <= 19893) ||
          (19968 <= lookahead && lookahead <= 40943) ||
          (40960 <= lookahead && lookahead <= 42124) ||
          (42192 <= lookahead && lookahead <= 42237) ||
          (42240 <= lookahead && lookahead <= 42508) ||
          (42512 <= lookahead && lookahead <= 42527) ||
          lookahead == 42538 ||
          lookahead == 42539 ||
          (42560 <= lookahead && lookahead <= 42606) ||
          (42623 <= lookahead && lookahead <= 42653) ||
          (42656 <= lookahead && lookahead <= 42725) ||
          (42775 <= lookahead && lookahead <= 42783) ||
          (42786 <= lookahead && lookahead <= 42888) ||
          (42891 <= lookahead && lookahead <= 42943) ||
          (42946 <= lookahead && lookahead <= 42950) ||
          (42999 <= lookahead && lookahead <= 43009) ||
          (43011 <= lookahead && lookahead <= 43013) ||
          (43015 <= lookahead && lookahead <= 43018) ||
          (43020 <= lookahead && lookahead <= 43042) ||
          (43072 <= lookahead && lookahead <= 43123) ||
          (43138 <= lookahead && lookahead <= 43187) ||
          (43250 <= lookahead && lookahead <= 43255) ||
          lookahead == 43259 ||
          lookahead == 43261 ||
          lookahead == 43262 ||
          (43274 <= lookahead && lookahead <= 43301) ||
          (43312 <= lookahead && lookahead <= 43334) ||
          (43360 <= lookahead && lookahead <= 43388) ||
          (43396 <= lookahead && lookahead <= 43442) ||
          lookahead == 43471 ||
          (43488 <= lookahead && lookahead <= 43492) ||
          (43494 <= lookahead && lookahead <= 43503) ||
          (43514 <= lookahead && lookahead <= 43518) ||
          (43520 <= lookahead && lookahead <= 43560) ||
          (43584 <= lookahead && lookahead <= 43586) ||
          (43588 <= lookahead && lookahead <= 43595) ||
          (43616 <= lookahead && lookahead <= 43638) ||
          lookahead == 43642 ||
          (43646 <= lookahead && lookahead <= 43695) ||
          lookahead == 43697 ||
          lookahead == 43701 ||
          lookahead == 43702 ||
          (43705 <= lookahead && lookahead <= 43709) ||
          lookahead == 43712 ||
          lookahead == 43714 ||
          (43739 <= lookahead && lookahead <= 43741) ||
          (43744 <= lookahead && lookahead <= 43754) ||
          (43762 <= lookahead && lookahead <= 43764) ||
          (43777 <= lookahead && lookahead <= 43782) ||
          (43785 <= lookahead && lookahead <= 43790) ||
          (43793 <= lookahead && lookahead <= 43798) ||
          (43808 <= lookahead && lookahead <= 43814) ||
          (43816 <= lookahead && lookahead <= 43822) ||
          (43824 <= lookahead && lookahead <= 43866) ||
          (43868 <= lookahead && lookahead <= 43879) ||
          (43888 <= lookahead && lookahead <= 44002) ||
          (44032 <= lookahead && lookahead <= 55203) ||
          (55216 <= lookahead && lookahead <= 55238) ||
          (55243 <= lookahead && lookahead <= 55291) ||
          (63744 <= lookahead && lookahead <= 64109) ||
          (64112 <= lookahead && lookahead <= 64217) ||
          (64256 <= lookahead && lookahead <= 64262) ||
          (64275 <= lookahead && lookahead <= 64279) ||
          lookahead == 64285 ||
          (64287 <= lookahead && lookahead <= 64296) ||
          (64298 <= lookahead && lookahead <= 64310) ||
          (64312 <= lookahead && lookahead <= 64316) ||
          lookahead == 64318 ||
          lookahead == 64320 ||
          lookahead == 64321 ||
          lookahead == 64323 ||
          lookahead == 64324 ||
          (64326 <= lookahead && lookahead <= 64433) ||
          (64467 <= lookahead && lookahead <= 64829) ||
          (64848 <= lookahead && lookahead <= 64911) ||
          (64914 <= lookahead && lookahead <= 64967) ||
          (65008 <= lookahead && lookahead <= 65019) ||
          (65136 <= lookahead && lookahead <= 65140) ||
          (65142 <= lookahead && lookahead <= 65276) ||
          (65313 <= lookahead && lookahead <= 65338) ||
          (65345 <= lookahead && lookahead <= 65370) ||
          (65382 <= lookahead && lookahead <= 65470) ||
          (65474 <= lookahead && lookahead <= 65479) ||
          (65482 <= lookahead && lookahead <= 65487) ||
          (65490 <= lookahead && lookahead <= 65495) ||
          (65498 <= lookahead && lookahead <= 65500) ||
          (65536 <= lookahead && lookahead <= 65547) ||
          (65549 <= lookahead && lookahead <= 65574) ||
          (65576 <= lookahead && lookahead <= 65594) ||
          lookahead == 65596 ||
          lookahead == 65597 ||
          (65599 <= lookahead && lookahead <= 65613) ||
          (65616 <= lookahead && lookahead <= 65629) ||
          (65664 <= lookahead && lookahead <= 65786) ||
          (66176 <= lookahead && lookahead <= 66204) ||
          (66208 <= lookahead && lookahead <= 66256) ||
          (66304 <= lookahead && lookahead <= 66335) ||
          (66349 <= lookahead && lookahead <= 66368) ||
          (66370 <= lookahead && lookahead <= 66377) ||
          (66384 <= lookahead && lookahead <= 66421) ||
          (66432 <= lookahead && lookahead <= 66461) ||
          (66464 <= lookahead && lookahead <= 66499) ||
          (66504 <= lookahead && lookahead <= 66511) ||
          (66560 <= lookahead && lookahead <= 66717) ||
          (66736 <= lookahead && lookahead <= 66771) ||
          (66776 <= lookahead && lookahead <= 66811) ||
          (66816 <= lookahead && lookahead <= 66855) ||
          (66864 <= lookahead && lookahead <= 66915) ||
          (67072 <= lookahead && lookahead <= 67382) ||
          (67392 <= lookahead && lookahead <= 67413) ||
          (67424 <= lookahead && lookahead <= 67431) ||
          (67584 <= lookahead && lookahead <= 67589) ||
          lookahead == 67592 ||
          (67594 <= lookahead && lookahead <= 67637) ||
          lookahead == 67639 ||
          lookahead == 67640 ||
          lookahead == 67644 ||
          (67647 <= lookahead && lookahead <= 67669) ||
          (67680 <= lookahead && lookahead <= 67702) ||
          (67712 <= lookahead && lookahead <= 67742) ||
          (67808 <= lookahead && lookahead <= 67826) ||
          lookahead == 67828 ||
          lookahead == 67829 ||
          (67840 <= lookahead && lookahead <= 67861) ||
          (67872 <= lookahead && lookahead <= 67897) ||
          (67968 <= lookahead && lookahead <= 68023) ||
          lookahead == 68030 ||
          lookahead == 68031 ||
          lookahead == 68096 ||
          (68112 <= lookahead && lookahead <= 68115) ||
          (68117 <= lookahead && lookahead <= 68119) ||
          (68121 <= lookahead && lookahead <= 68149) ||
          (68192 <= lookahead && lookahead <= 68220) ||
          (68224 <= lookahead && lookahead <= 68252) ||
          (68288 <= lookahead && lookahead <= 68295) ||
          (68297 <= lookahead && lookahead <= 68324) ||
          (68352 <= lookahead && lookahead <= 68405) ||
          (68416 <= lookahead && lookahead <= 68437) ||
          (68448 <= lookahead && lookahead <= 68466) ||
          (68480 <= lookahead && lookahead <= 68497) ||
          (68608 <= lookahead && lookahead <= 68680) ||
          (68736 <= lookahead && lookahead <= 68786) ||
          (68800 <= lookahead && lookahead <= 68850) ||
          (68864 <= lookahead && lookahead <= 68899) ||
          (69376 <= lookahead && lookahead <= 69404) ||
          lookahead == 69415 ||
          (69424 <= lookahead && lookahead <= 69445) ||
          (69600 <= lookahead && lookahead <= 69622) ||
          (69635 <= lookahead && lookahead <= 69687) ||
          (69763 <= lookahead && lookahead <= 69807) ||
          (69840 <= lookahead && lookahead <= 69864) ||
          (69891 <= lookahead && lookahead <= 69926) ||
          lookahead == 69956 ||
          (69968 <= lookahead && lookahead <= 70002) ||
          lookahead == 70006 ||
          (70019 <= lookahead && lookahead <= 70066) ||
          (70081 <= lookahead && lookahead <= 70084) ||
          lookahead == 70106 ||
          lookahead == 70108 ||
          (70144 <= lookahead && lookahead <= 70161) ||
          (70163 <= lookahead && lookahead <= 70187) ||
          (70272 <= lookahead && lookahead <= 70278) ||
          lookahead == 70280 ||
          (70282 <= lookahead && lookahead <= 70285) ||
          (70287 <= lookahead && lookahead <= 70301) ||
          (70303 <= lookahead && lookahead <= 70312) ||
          (70320 <= lookahead && lookahead <= 70366) ||
          (70405 <= lookahead && lookahead <= 70412) ||
          lookahead == 70415 ||
          lookahead == 70416 ||
          (70419 <= lookahead && lookahead <= 70440) ||
          (70442 <= lookahead && lookahead <= 70448) ||
          lookahead == 70450 ||
          lookahead == 70451 ||
          (70453 <= lookahead && lookahead <= 70457) ||
          lookahead == 70461 ||
          lookahead == 70480 ||
          (70493 <= lookahead && lookahead <= 70497) ||
          (70656 <= lookahead && lookahead <= 70708) ||
          (70727 <= lookahead && lookahead <= 70730) ||
          lookahead == 70751 ||
          (70784 <= lookahead && lookahead <= 70831) ||
          lookahead == 70852 ||
          lookahead == 70853 ||
          lookahead == 70855 ||
          (71040 <= lookahead && lookahead <= 71086) ||
          (71128 <= lookahead && lookahead <= 71131) ||
          (71168 <= lookahead && lookahead <= 71215) ||
          lookahead == 71236 ||
          (71296 <= lookahead && lookahead <= 71338) ||
          lookahead == 71352 ||
          (71424 <= lookahead && lookahead <= 71450) ||
          (71680 <= lookahead && lookahead <= 71723) ||
          (71840 <= lookahead && lookahead <= 71903) ||
          lookahead == 71935 ||
          (72096 <= lookahead && lookahead <= 72103) ||
          (72106 <= lookahead && lookahead <= 72144) ||
          lookahead == 72161 ||
          lookahead == 72163 ||
          lookahead == 72192 ||
          (72203 <= lookahead && lookahead <= 72242) ||
          lookahead == 72250 ||
          lookahead == 72272 ||
          (72284 <= lookahead && lookahead <= 72329) ||
          lookahead == 72349 ||
          (72384 <= lookahead && lookahead <= 72440) ||
          (72704 <= lookahead && lookahead <= 72712) ||
          (72714 <= lookahead && lookahead <= 72750) ||
          lookahead == 72768 ||
          (72818 <= lookahead && lookahead <= 72847) ||
          (72960 <= lookahead && lookahead <= 72966) ||
          lookahead == 72968 ||
          lookahead == 72969 ||
          (72971 <= lookahead && lookahead <= 73008) ||
          lookahead == 73030 ||
          (73056 <= lookahead && lookahead <= 73061) ||
          lookahead == 73063 ||
          lookahead == 73064 ||
          (73066 <= lookahead && lookahead <= 73097) ||
          lookahead == 73112 ||
          (73440 <= lookahead && lookahead <= 73458) ||
          (73728 <= lookahead && lookahead <= 74649) ||
          (74880 <= lookahead && lookahead <= 75075) ||
          (77824 <= lookahead && lookahead <= 78894) ||
          (82944 <= lookahead && lookahead <= 83526) ||
          (92160 <= lookahead && lookahead <= 92728) ||
          (92736 <= lookahead && lookahead <= 92766) ||
          (92880 <= lookahead && lookahead <= 92909) ||
          (92928 <= lookahead && lookahead <= 92975) ||
          (92992 <= lookahead && lookahead <= 92995) ||
          (93027 <= lookahead && lookahead <= 93047) ||
          (93053 <= lookahead && lookahead <= 93071) ||
          (93760 <= lookahead && lookahead <= 93823) ||
          (93952 <= lookahead && lookahead <= 94026) ||
          lookahead == 94032 ||
          (94099 <= lookahead && lookahead <= 94111) ||
          lookahead == 94176 ||
          lookahead == 94177 ||
          lookahead == 94179 ||
          (94208 <= lookahead && lookahead <= 100343) ||
          (100352 <= lookahead && lookahead <= 101106) ||
          (110592 <= lookahead && lookahead <= 110878) ||
          (110928 <= lookahead && lookahead <= 110930) ||
          (110948 <= lookahead && lookahead <= 110951) ||
          (110960 <= lookahead && lookahead <= 111355) ||
          (113664 <= lookahead && lookahead <= 113770) ||
          (113776 <= lookahead && lookahead <= 113788) ||
          (113792 <= lookahead && lookahead <= 113800) ||
          (113808 <= lookahead && lookahead <= 113817) ||
          (119808 <= lookahead && lookahead <= 119892) ||
          (119894 <= lookahead && lookahead <= 119964) ||
          lookahead == 119966 ||
          lookahead == 119967 ||
          lookahead == 119970 ||
          lookahead == 119973 ||
          lookahead == 119974 ||
          (119977 <= lookahead && lookahead <= 119980) ||
          (119982 <= lookahead && lookahead <= 119993) ||
          lookahead == 119995 ||
          (119997 <= lookahead && lookahead <= 120003) ||
          (120005 <= lookahead && lookahead <= 120069) ||
          (120071 <= lookahead && lookahead <= 120074) ||
          (120077 <= lookahead && lookahead <= 120084) ||
          (120086 <= lookahead && lookahead <= 120092) ||
          (120094 <= lookahead && lookahead <= 120121) ||
          (120123 <= lookahead && lookahead <= 120126) ||
          (120128 <= lookahead && lookahead <= 120132) ||
          lookahead == 120134 ||
          (120138 <= lookahead && lookahead <= 120144) ||
          (120146 <= lookahead && lookahead <= 120485) ||
          (120488 <= lookahead && lookahead <= 120512) ||
          (120514 <= lookahead && lookahead <= 120538) ||
          (120540 <= lookahead && lookahead <= 120570) ||
          (120572 <= lookahead && lookahead <= 120596) ||
          (120598 <= lookahead && lookahead <= 120628) ||
          (120630 <= lookahead && lookahead <= 120654) ||
          (120656 <= lookahead && lookahead <= 120686) ||
          (120688 <= lookahead && lookahead <= 120712) ||
          (120714 <= lookahead && lookahead <= 120744) ||
          (120746 <= lookahead && lookahead <= 120770) ||
          (120772 <= lookahead && lookahead <= 120779) ||
          (123136 <= lookahead && lookahead <= 123180) ||
          (123191 <= lookahead && lookahead <= 123197) ||
          lookahead == 123214 ||
          (123584 <= lookahead && lookahead <= 123627) ||
          (124928 <= lookahead && lookahead <= 125124) ||
          (125184 <= lookahead && lookahead <= 125251) ||
          lookahead == 125259 ||
          (126464 <= lookahead && lookahead <= 126467) ||
          (126469 <= lookahead && lookahead <= 126495) ||
          lookahead == 126497 ||
          lookahead == 126498 ||
          lookahead == 126500 ||
          lookahead == 126503 ||
          (126505 <= lookahead && lookahead <= 126514) ||
          (126516 <= lookahead && lookahead <= 126519) ||
          lookahead == 126521 ||
          lookahead == 126523 ||
          lookahead == 126530 ||
          lookahead == 126535 ||
          lookahead == 126537 ||
          lookahead == 126539 ||
          (126541 <= lookahead && lookahead <= 126543) ||
          lookahead == 126545 ||
          lookahead == 126546 ||
          lookahead == 126548 ||
          lookahead == 126551 ||
          lookahead == 126553 ||
          lookahead == 126555 ||
          lookahead == 126557 ||
          lookahead == 126559 ||
          lookahead == 126561 ||
          lookahead == 126562 ||
          lookahead == 126564 ||
          (126567 <= lookahead && lookahead <= 126570) ||
          (126572 <= lookahead && lookahead <= 126578) ||
          (126580 <= lookahead && lookahead <= 126583) ||
          (126585 <= lookahead && lookahead <= 126588) ||
          lookahead == 126590 ||
          (126592 <= lookahead && lookahead <= 126601) ||
          (126603 <= lookahead && lookahead <= 126619) ||
          (126625 <= lookahead && lookahead <= 126627) ||
          (126629 <= lookahead && lookahead <= 126633) ||
          (126635 <= lookahead && lookahead <= 126651) ||
          (131072 <= lookahead && lookahead <= 173782) ||
          (173824 <= lookahead && lookahead <= 177972) ||
          (177984 <= lookahead && lookahead <= 178205) ||
          (178208 <= lookahead && lookahead <= 183969) ||
          (183984 <= lookahead && lookahead <= 191456) ||
          (194560 <= lookahead && lookahead <= 195101)) ADVANCE(18);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 170 ||
          lookahead == 181 ||
          lookahead == 186 ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 705) ||
          (710 <= lookahead && lookahead <= 721) ||
          (736 <= lookahead && lookahead <= 740) ||
          lookahead == 748 ||
          lookahead == 750 ||
          (880 <= lookahead && lookahead <= 884) ||
          lookahead == 886 ||
          lookahead == 887 ||
          (890 <= lookahead && lookahead <= 893) ||
          lookahead == 895 ||
          lookahead == 902 ||
          (904 <= lookahead && lookahead <= 906) ||
          lookahead == 908 ||
          (910 <= lookahead && lookahead <= 929) ||
          (931 <= lookahead && lookahead <= 1013) ||
          (1015 <= lookahead && lookahead <= 1153) ||
          (1162 <= lookahead && lookahead <= 1327) ||
          (1329 <= lookahead && lookahead <= 1366) ||
          lookahead == 1369 ||
          (1376 <= lookahead && lookahead <= 1416) ||
          (1488 <= lookahead && lookahead <= 1514) ||
          (1519 <= lookahead && lookahead <= 1522) ||
          (1568 <= lookahead && lookahead <= 1610) ||
          lookahead == 1646 ||
          lookahead == 1647 ||
          (1649 <= lookahead && lookahead <= 1747) ||
          lookahead == 1749 ||
          lookahead == 1765 ||
          lookahead == 1766 ||
          lookahead == 1774 ||
          lookahead == 1775 ||
          (1786 <= lookahead && lookahead <= 1788) ||
          lookahead == 1791 ||
          lookahead == 1808 ||
          (1810 <= lookahead && lookahead <= 1839) ||
          (1869 <= lookahead && lookahead <= 1957) ||
          lookahead == 1969 ||
          (1994 <= lookahead && lookahead <= 2026) ||
          lookahead == 2036 ||
          lookahead == 2037 ||
          lookahead == 2042 ||
          (2048 <= lookahead && lookahead <= 2069) ||
          lookahead == 2074 ||
          lookahead == 2084 ||
          lookahead == 2088 ||
          (2112 <= lookahead && lookahead <= 2136) ||
          (2144 <= lookahead && lookahead <= 2154) ||
          (2208 <= lookahead && lookahead <= 2228) ||
          (2230 <= lookahead && lookahead <= 2237) ||
          (2308 <= lookahead && lookahead <= 2361) ||
          lookahead == 2365 ||
          lookahead == 2384 ||
          (2392 <= lookahead && lookahead <= 2401) ||
          (2417 <= lookahead && lookahead <= 2432) ||
          (2437 <= lookahead && lookahead <= 2444) ||
          lookahead == 2447 ||
          lookahead == 2448 ||
          (2451 <= lookahead && lookahead <= 2472) ||
          (2474 <= lookahead && lookahead <= 2480) ||
          lookahead == 2482 ||
          (2486 <= lookahead && lookahead <= 2489) ||
          lookahead == 2493 ||
          lookahead == 2510 ||
          lookahead == 2524 ||
          lookahead == 2525 ||
          (2527 <= lookahead && lookahead <= 2529) ||
          lookahead == 2544 ||
          lookahead == 2545 ||
          lookahead == 2556 ||
          (2565 <= lookahead && lookahead <= 2570) ||
          lookahead == 2575 ||
          lookahead == 2576 ||
          (2579 <= lookahead && lookahead <= 2600) ||
          (2602 <= lookahead && lookahead <= 2608) ||
          lookahead == 2610 ||
          lookahead == 2611 ||
          lookahead == 2613 ||
          lookahead == 2614 ||
          lookahead == 2616 ||
          lookahead == 2617 ||
          (2649 <= lookahead && lookahead <= 2652) ||
          lookahead == 2654 ||
          (2674 <= lookahead && lookahead <= 2676) ||
          (2693 <= lookahead && lookahead <= 2701) ||
          (2703 <= lookahead && lookahead <= 2705) ||
          (2707 <= lookahead && lookahead <= 2728) ||
          (2730 <= lookahead && lookahead <= 2736) ||
          lookahead == 2738 ||
          lookahead == 2739 ||
          (2741 <= lookahead && lookahead <= 2745) ||
          lookahead == 2749 ||
          lookahead == 2768 ||
          lookahead == 2784 ||
          lookahead == 2785 ||
          lookahead == 2809 ||
          (2821 <= lookahead && lookahead <= 2828) ||
          lookahead == 2831 ||
          lookahead == 2832 ||
          (2835 <= lookahead && lookahead <= 2856) ||
          (2858 <= lookahead && lookahead <= 2864) ||
          lookahead == 2866 ||
          lookahead == 2867 ||
          (2869 <= lookahead && lookahead <= 2873) ||
          lookahead == 2877 ||
          lookahead == 2908 ||
          lookahead == 2909 ||
          (2911 <= lookahead && lookahead <= 2913) ||
          lookahead == 2929 ||
          lookahead == 2947 ||
          (2949 <= lookahead && lookahead <= 2954) ||
          (2958 <= lookahead && lookahead <= 2960) ||
          (2962 <= lookahead && lookahead <= 2965) ||
          lookahead == 2969 ||
          lookahead == 2970 ||
          lookahead == 2972 ||
          lookahead == 2974 ||
          lookahead == 2975 ||
          lookahead == 2979 ||
          lookahead == 2980 ||
          (2984 <= lookahead && lookahead <= 2986) ||
          (2990 <= lookahead && lookahead <= 3001) ||
          lookahead == 3024 ||
          (3077 <= lookahead && lookahead <= 3084) ||
          (3086 <= lookahead && lookahead <= 3088) ||
          (3090 <= lookahead && lookahead <= 3112) ||
          (3114 <= lookahead && lookahead <= 3129) ||
          lookahead == 3133 ||
          (3160 <= lookahead && lookahead <= 3162) ||
          lookahead == 3168 ||
          lookahead == 3169 ||
          lookahead == 3200 ||
          (3205 <= lookahead && lookahead <= 3212) ||
          (3214 <= lookahead && lookahead <= 3216) ||
          (3218 <= lookahead && lookahead <= 3240) ||
          (3242 <= lookahead && lookahead <= 3251) ||
          (3253 <= lookahead && lookahead <= 3257) ||
          lookahead == 3261 ||
          lookahead == 3294 ||
          lookahead == 3296 ||
          lookahead == 3297 ||
          lookahead == 3313 ||
          lookahead == 3314 ||
          (3333 <= lookahead && lookahead <= 3340) ||
          (3342 <= lookahead && lookahead <= 3344) ||
          (3346 <= lookahead && lookahead <= 3386) ||
          lookahead == 3389 ||
          lookahead == 3406 ||
          (3412 <= lookahead && lookahead <= 3414) ||
          (3423 <= lookahead && lookahead <= 3425) ||
          (3450 <= lookahead && lookahead <= 3455) ||
          (3461 <= lookahead && lookahead <= 3478) ||
          (3482 <= lookahead && lookahead <= 3505) ||
          (3507 <= lookahead && lookahead <= 3515) ||
          lookahead == 3517 ||
          (3520 <= lookahead && lookahead <= 3526) ||
          (3585 <= lookahead && lookahead <= 3632) ||
          lookahead == 3634 ||
          lookahead == 3635 ||
          (3648 <= lookahead && lookahead <= 3654) ||
          lookahead == 3713 ||
          lookahead == 3714 ||
          lookahead == 3716 ||
          (3718 <= lookahead && lookahead <= 3722) ||
          (3724 <= lookahead && lookahead <= 3747) ||
          lookahead == 3749 ||
          (3751 <= lookahead && lookahead <= 3760) ||
          lookahead == 3762 ||
          lookahead == 3763 ||
          lookahead == 3773 ||
          (3776 <= lookahead && lookahead <= 3780) ||
          lookahead == 3782 ||
          (3804 <= lookahead && lookahead <= 3807) ||
          lookahead == 3840 ||
          (3904 <= lookahead && lookahead <= 3911) ||
          (3913 <= lookahead && lookahead <= 3948) ||
          (3976 <= lookahead && lookahead <= 3980) ||
          (4096 <= lookahead && lookahead <= 4138) ||
          lookahead == 4159 ||
          (4176 <= lookahead && lookahead <= 4181) ||
          (4186 <= lookahead && lookahead <= 4189) ||
          lookahead == 4193 ||
          lookahead == 4197 ||
          lookahead == 4198 ||
          (4206 <= lookahead && lookahead <= 4208) ||
          (4213 <= lookahead && lookahead <= 4225) ||
          lookahead == 4238 ||
          (4256 <= lookahead && lookahead <= 4293) ||
          lookahead == 4295 ||
          lookahead == 4301 ||
          (4304 <= lookahead && lookahead <= 4346) ||
          (4348 <= lookahead && lookahead <= 4680) ||
          (4682 <= lookahead && lookahead <= 4685) ||
          (4688 <= lookahead && lookahead <= 4694) ||
          lookahead == 4696 ||
          (4698 <= lookahead && lookahead <= 4701) ||
          (4704 <= lookahead && lookahead <= 4744) ||
          (4746 <= lookahead && lookahead <= 4749) ||
          (4752 <= lookahead && lookahead <= 4784) ||
          (4786 <= lookahead && lookahead <= 4789) ||
          (4792 <= lookahead && lookahead <= 4798) ||
          lookahead == 4800 ||
          (4802 <= lookahead && lookahead <= 4805) ||
          (4808 <= lookahead && lookahead <= 4822) ||
          (4824 <= lookahead && lookahead <= 4880) ||
          (4882 <= lookahead && lookahead <= 4885) ||
          (4888 <= lookahead && lookahead <= 4954) ||
          (4992 <= lookahead && lookahead <= 5007) ||
          (5024 <= lookahead && lookahead <= 5109) ||
          (5112 <= lookahead && lookahead <= 5117) ||
          (5121 <= lookahead && lookahead <= 5740) ||
          (5743 <= lookahead && lookahead <= 5759) ||
          (5761 <= lookahead && lookahead <= 5786) ||
          (5792 <= lookahead && lookahead <= 5866) ||
          (5873 <= lookahead && lookahead <= 5880) ||
          (5888 <= lookahead && lookahead <= 5900) ||
          (5902 <= lookahead && lookahead <= 5905) ||
          (5920 <= lookahead && lookahead <= 5937) ||
          (5952 <= lookahead && lookahead <= 5969) ||
          (5984 <= lookahead && lookahead <= 5996) ||
          (5998 <= lookahead && lookahead <= 6000) ||
          (6016 <= lookahead && lookahead <= 6067) ||
          lookahead == 6103 ||
          lookahead == 6108 ||
          (6176 <= lookahead && lookahead <= 6264) ||
          (6272 <= lookahead && lookahead <= 6276) ||
          (6279 <= lookahead && lookahead <= 6312) ||
          lookahead == 6314 ||
          (6320 <= lookahead && lookahead <= 6389) ||
          (6400 <= lookahead && lookahead <= 6430) ||
          (6480 <= lookahead && lookahead <= 6509) ||
          (6512 <= lookahead && lookahead <= 6516) ||
          (6528 <= lookahead && lookahead <= 6571) ||
          (6576 <= lookahead && lookahead <= 6601) ||
          (6656 <= lookahead && lookahead <= 6678) ||
          (6688 <= lookahead && lookahead <= 6740) ||
          lookahead == 6823 ||
          (6917 <= lookahead && lookahead <= 6963) ||
          (6981 <= lookahead && lookahead <= 6987) ||
          (7043 <= lookahead && lookahead <= 7072) ||
          lookahead == 7086 ||
          lookahead == 7087 ||
          (7098 <= lookahead && lookahead <= 7141) ||
          (7168 <= lookahead && lookahead <= 7203) ||
          (7245 <= lookahead && lookahead <= 7247) ||
          (7258 <= lookahead && lookahead <= 7293) ||
          (7296 <= lookahead && lookahead <= 7304) ||
          (7312 <= lookahead && lookahead <= 7354) ||
          (7357 <= lookahead && lookahead <= 7359) ||
          (7401 <= lookahead && lookahead <= 7404) ||
          (7406 <= lookahead && lookahead <= 7411) ||
          lookahead == 7413 ||
          lookahead == 7414 ||
          lookahead == 7418 ||
          (7424 <= lookahead && lookahead <= 7615) ||
          (7680 <= lookahead && lookahead <= 7957) ||
          (7960 <= lookahead && lookahead <= 7965) ||
          (7968 <= lookahead && lookahead <= 8005) ||
          (8008 <= lookahead && lookahead <= 8013) ||
          (8016 <= lookahead && lookahead <= 8023) ||
          lookahead == 8025 ||
          lookahead == 8027 ||
          lookahead == 8029 ||
          (8031 <= lookahead && lookahead <= 8061) ||
          (8064 <= lookahead && lookahead <= 8116) ||
          (8118 <= lookahead && lookahead <= 8124) ||
          lookahead == 8126 ||
          (8130 <= lookahead && lookahead <= 8132) ||
          (8134 <= lookahead && lookahead <= 8140) ||
          (8144 <= lookahead && lookahead <= 8147) ||
          (8150 <= lookahead && lookahead <= 8155) ||
          (8160 <= lookahead && lookahead <= 8172) ||
          (8178 <= lookahead && lookahead <= 8180) ||
          (8182 <= lookahead && lookahead <= 8188) ||
          lookahead == 8305 ||
          lookahead == 8319 ||
          (8336 <= lookahead && lookahead <= 8348) ||
          lookahead == 8450 ||
          lookahead == 8455 ||
          (8458 <= lookahead && lookahead <= 8467) ||
          lookahead == 8469 ||
          (8473 <= lookahead && lookahead <= 8477) ||
          lookahead == 8484 ||
          lookahead == 8486 ||
          lookahead == 8488 ||
          (8490 <= lookahead && lookahead <= 8493) ||
          (8495 <= lookahead && lookahead <= 8505) ||
          (8508 <= lookahead && lookahead <= 8511) ||
          (8517 <= lookahead && lookahead <= 8521) ||
          lookahead == 8526 ||
          lookahead == 8579 ||
          lookahead == 8580 ||
          (11264 <= lookahead && lookahead <= 11310) ||
          (11312 <= lookahead && lookahead <= 11358) ||
          (11360 <= lookahead && lookahead <= 11492) ||
          (11499 <= lookahead && lookahead <= 11502) ||
          lookahead == 11506 ||
          lookahead == 11507 ||
          (11520 <= lookahead && lookahead <= 11557) ||
          lookahead == 11559 ||
          lookahead == 11565 ||
          (11568 <= lookahead && lookahead <= 11623) ||
          lookahead == 11631 ||
          (11648 <= lookahead && lookahead <= 11670) ||
          (11680 <= lookahead && lookahead <= 11686) ||
          (11688 <= lookahead && lookahead <= 11694) ||
          (11696 <= lookahead && lookahead <= 11702) ||
          (11704 <= lookahead && lookahead <= 11710) ||
          (11712 <= lookahead && lookahead <= 11718) ||
          (11720 <= lookahead && lookahead <= 11726) ||
          (11728 <= lookahead && lookahead <= 11734) ||
          (11736 <= lookahead && lookahead <= 11742) ||
          lookahead == 11823 ||
          lookahead == 12293 ||
          lookahead == 12294 ||
          (12337 <= lookahead && lookahead <= 12341) ||
          lookahead == 12347 ||
          lookahead == 12348 ||
          (12353 <= lookahead && lookahead <= 12438) ||
          (12445 <= lookahead && lookahead <= 12447) ||
          (12449 <= lookahead && lookahead <= 12538) ||
          (12540 <= lookahead && lookahead <= 12543) ||
          (12549 <= lookahead && lookahead <= 12591) ||
          (12593 <= lookahead && lookahead <= 12686) ||
          (12704 <= lookahead && lookahead <= 12730) ||
          (12784 <= lookahead && lookahead <= 12799) ||
          (13312 <= lookahead && lookahead <= 19893) ||
          (19968 <= lookahead && lookahead <= 40943) ||
          (40960 <= lookahead && lookahead <= 42124) ||
          (42192 <= lookahead && lookahead <= 42237) ||
          (42240 <= lookahead && lookahead <= 42508) ||
          (42512 <= lookahead && lookahead <= 42527) ||
          lookahead == 42538 ||
          lookahead == 42539 ||
          (42560 <= lookahead && lookahead <= 42606) ||
          (42623 <= lookahead && lookahead <= 42653) ||
          (42656 <= lookahead && lookahead <= 42725) ||
          (42775 <= lookahead && lookahead <= 42783) ||
          (42786 <= lookahead && lookahead <= 42888) ||
          (42891 <= lookahead && lookahead <= 42943) ||
          (42946 <= lookahead && lookahead <= 42950) ||
          (42999 <= lookahead && lookahead <= 43009) ||
          (43011 <= lookahead && lookahead <= 43013) ||
          (43015 <= lookahead && lookahead <= 43018) ||
          (43020 <= lookahead && lookahead <= 43042) ||
          (43072 <= lookahead && lookahead <= 43123) ||
          (43138 <= lookahead && lookahead <= 43187) ||
          (43250 <= lookahead && lookahead <= 43255) ||
          lookahead == 43259 ||
          lookahead == 43261 ||
          lookahead == 43262 ||
          (43274 <= lookahead && lookahead <= 43301) ||
          (43312 <= lookahead && lookahead <= 43334) ||
          (43360 <= lookahead && lookahead <= 43388) ||
          (43396 <= lookahead && lookahead <= 43442) ||
          lookahead == 43471 ||
          (43488 <= lookahead && lookahead <= 43492) ||
          (43494 <= lookahead && lookahead <= 43503) ||
          (43514 <= lookahead && lookahead <= 43518) ||
          (43520 <= lookahead && lookahead <= 43560) ||
          (43584 <= lookahead && lookahead <= 43586) ||
          (43588 <= lookahead && lookahead <= 43595) ||
          (43616 <= lookahead && lookahead <= 43638) ||
          lookahead == 43642 ||
          (43646 <= lookahead && lookahead <= 43695) ||
          lookahead == 43697 ||
          lookahead == 43701 ||
          lookahead == 43702 ||
          (43705 <= lookahead && lookahead <= 43709) ||
          lookahead == 43712 ||
          lookahead == 43714 ||
          (43739 <= lookahead && lookahead <= 43741) ||
          (43744 <= lookahead && lookahead <= 43754) ||
          (43762 <= lookahead && lookahead <= 43764) ||
          (43777 <= lookahead && lookahead <= 43782) ||
          (43785 <= lookahead && lookahead <= 43790) ||
          (43793 <= lookahead && lookahead <= 43798) ||
          (43808 <= lookahead && lookahead <= 43814) ||
          (43816 <= lookahead && lookahead <= 43822) ||
          (43824 <= lookahead && lookahead <= 43866) ||
          (43868 <= lookahead && lookahead <= 43879) ||
          (43888 <= lookahead && lookahead <= 44002) ||
          (44032 <= lookahead && lookahead <= 55203) ||
          (55216 <= lookahead && lookahead <= 55238) ||
          (55243 <= lookahead && lookahead <= 55291) ||
          (63744 <= lookahead && lookahead <= 64109) ||
          (64112 <= lookahead && lookahead <= 64217) ||
          (64256 <= lookahead && lookahead <= 64262) ||
          (64275 <= lookahead && lookahead <= 64279) ||
          lookahead == 64285 ||
          (64287 <= lookahead && lookahead <= 64296) ||
          (64298 <= lookahead && lookahead <= 64310) ||
          (64312 <= lookahead && lookahead <= 64316) ||
          lookahead == 64318 ||
          lookahead == 64320 ||
          lookahead == 64321 ||
          lookahead == 64323 ||
          lookahead == 64324 ||
          (64326 <= lookahead && lookahead <= 64433) ||
          (64467 <= lookahead && lookahead <= 64829) ||
          (64848 <= lookahead && lookahead <= 64911) ||
          (64914 <= lookahead && lookahead <= 64967) ||
          (65008 <= lookahead && lookahead <= 65019) ||
          (65136 <= lookahead && lookahead <= 65140) ||
          (65142 <= lookahead && lookahead <= 65276) ||
          (65313 <= lookahead && lookahead <= 65338) ||
          (65345 <= lookahead && lookahead <= 65370) ||
          (65382 <= lookahead && lookahead <= 65470) ||
          (65474 <= lookahead && lookahead <= 65479) ||
          (65482 <= lookahead && lookahead <= 65487) ||
          (65490 <= lookahead && lookahead <= 65495) ||
          (65498 <= lookahead && lookahead <= 65500) ||
          (65536 <= lookahead && lookahead <= 65547) ||
          (65549 <= lookahead && lookahead <= 65574) ||
          (65576 <= lookahead && lookahead <= 65594) ||
          lookahead == 65596 ||
          lookahead == 65597 ||
          (65599 <= lookahead && lookahead <= 65613) ||
          (65616 <= lookahead && lookahead <= 65629) ||
          (65664 <= lookahead && lookahead <= 65786) ||
          (66176 <= lookahead && lookahead <= 66204) ||
          (66208 <= lookahead && lookahead <= 66256) ||
          (66304 <= lookahead && lookahead <= 66335) ||
          (66349 <= lookahead && lookahead <= 66368) ||
          (66370 <= lookahead && lookahead <= 66377) ||
          (66384 <= lookahead && lookahead <= 66421) ||
          (66432 <= lookahead && lookahead <= 66461) ||
          (66464 <= lookahead && lookahead <= 66499) ||
          (66504 <= lookahead && lookahead <= 66511) ||
          (66560 <= lookahead && lookahead <= 66717) ||
          (66736 <= lookahead && lookahead <= 66771) ||
          (66776 <= lookahead && lookahead <= 66811) ||
          (66816 <= lookahead && lookahead <= 66855) ||
          (66864 <= lookahead && lookahead <= 66915) ||
          (67072 <= lookahead && lookahead <= 67382) ||
          (67392 <= lookahead && lookahead <= 67413) ||
          (67424 <= lookahead && lookahead <= 67431) ||
          (67584 <= lookahead && lookahead <= 67589) ||
          lookahead == 67592 ||
          (67594 <= lookahead && lookahead <= 67637) ||
          lookahead == 67639 ||
          lookahead == 67640 ||
          lookahead == 67644 ||
          (67647 <= lookahead && lookahead <= 67669) ||
          (67680 <= lookahead && lookahead <= 67702) ||
          (67712 <= lookahead && lookahead <= 67742) ||
          (67808 <= lookahead && lookahead <= 67826) ||
          lookahead == 67828 ||
          lookahead == 67829 ||
          (67840 <= lookahead && lookahead <= 67861) ||
          (67872 <= lookahead && lookahead <= 67897) ||
          (67968 <= lookahead && lookahead <= 68023) ||
          lookahead == 68030 ||
          lookahead == 68031 ||
          lookahead == 68096 ||
          (68112 <= lookahead && lookahead <= 68115) ||
          (68117 <= lookahead && lookahead <= 68119) ||
          (68121 <= lookahead && lookahead <= 68149) ||
          (68192 <= lookahead && lookahead <= 68220) ||
          (68224 <= lookahead && lookahead <= 68252) ||
          (68288 <= lookahead && lookahead <= 68295) ||
          (68297 <= lookahead && lookahead <= 68324) ||
          (68352 <= lookahead && lookahead <= 68405) ||
          (68416 <= lookahead && lookahead <= 68437) ||
          (68448 <= lookahead && lookahead <= 68466) ||
          (68480 <= lookahead && lookahead <= 68497) ||
          (68608 <= lookahead && lookahead <= 68680) ||
          (68736 <= lookahead && lookahead <= 68786) ||
          (68800 <= lookahead && lookahead <= 68850) ||
          (68864 <= lookahead && lookahead <= 68899) ||
          (69376 <= lookahead && lookahead <= 69404) ||
          lookahead == 69415 ||
          (69424 <= lookahead && lookahead <= 69445) ||
          (69600 <= lookahead && lookahead <= 69622) ||
          (69635 <= lookahead && lookahead <= 69687) ||
          (69763 <= lookahead && lookahead <= 69807) ||
          (69840 <= lookahead && lookahead <= 69864) ||
          (69891 <= lookahead && lookahead <= 69926) ||
          lookahead == 69956 ||
          (69968 <= lookahead && lookahead <= 70002) ||
          lookahead == 70006 ||
          (70019 <= lookahead && lookahead <= 70066) ||
          (70081 <= lookahead && lookahead <= 70084) ||
          lookahead == 70106 ||
          lookahead == 70108 ||
          (70144 <= lookahead && lookahead <= 70161) ||
          (70163 <= lookahead && lookahead <= 70187) ||
          (70272 <= lookahead && lookahead <= 70278) ||
          lookahead == 70280 ||
          (70282 <= lookahead && lookahead <= 70285) ||
          (70287 <= lookahead && lookahead <= 70301) ||
          (70303 <= lookahead && lookahead <= 70312) ||
          (70320 <= lookahead && lookahead <= 70366) ||
          (70405 <= lookahead && lookahead <= 70412) ||
          lookahead == 70415 ||
          lookahead == 70416 ||
          (70419 <= lookahead && lookahead <= 70440) ||
          (70442 <= lookahead && lookahead <= 70448) ||
          lookahead == 70450 ||
          lookahead == 70451 ||
          (70453 <= lookahead && lookahead <= 70457) ||
          lookahead == 70461 ||
          lookahead == 70480 ||
          (70493 <= lookahead && lookahead <= 70497) ||
          (70656 <= lookahead && lookahead <= 70708) ||
          (70727 <= lookahead && lookahead <= 70730) ||
          lookahead == 70751 ||
          (70784 <= lookahead && lookahead <= 70831) ||
          lookahead == 70852 ||
          lookahead == 70853 ||
          lookahead == 70855 ||
          (71040 <= lookahead && lookahead <= 71086) ||
          (71128 <= lookahead && lookahead <= 71131) ||
          (71168 <= lookahead && lookahead <= 71215) ||
          lookahead == 71236 ||
          (71296 <= lookahead && lookahead <= 71338) ||
          lookahead == 71352 ||
          (71424 <= lookahead && lookahead <= 71450) ||
          (71680 <= lookahead && lookahead <= 71723) ||
          (71840 <= lookahead && lookahead <= 71903) ||
          lookahead == 71935 ||
          (72096 <= lookahead && lookahead <= 72103) ||
          (72106 <= lookahead && lookahead <= 72144) ||
          lookahead == 72161 ||
          lookahead == 72163 ||
          lookahead == 72192 ||
          (72203 <= lookahead && lookahead <= 72242) ||
          lookahead == 72250 ||
          lookahead == 72272 ||
          (72284 <= lookahead && lookahead <= 72329) ||
          lookahead == 72349 ||
          (72384 <= lookahead && lookahead <= 72440) ||
          (72704 <= lookahead && lookahead <= 72712) ||
          (72714 <= lookahead && lookahead <= 72750) ||
          lookahead == 72768 ||
          (72818 <= lookahead && lookahead <= 72847) ||
          (72960 <= lookahead && lookahead <= 72966) ||
          lookahead == 72968 ||
          lookahead == 72969 ||
          (72971 <= lookahead && lookahead <= 73008) ||
          lookahead == 73030 ||
          (73056 <= lookahead && lookahead <= 73061) ||
          lookahead == 73063 ||
          lookahead == 73064 ||
          (73066 <= lookahead && lookahead <= 73097) ||
          lookahead == 73112 ||
          (73440 <= lookahead && lookahead <= 73458) ||
          (73728 <= lookahead && lookahead <= 74649) ||
          (74880 <= lookahead && lookahead <= 75075) ||
          (77824 <= lookahead && lookahead <= 78894) ||
          (82944 <= lookahead && lookahead <= 83526) ||
          (92160 <= lookahead && lookahead <= 92728) ||
          (92736 <= lookahead && lookahead <= 92766) ||
          (92880 <= lookahead && lookahead <= 92909) ||
          (92928 <= lookahead && lookahead <= 92975) ||
          (92992 <= lookahead && lookahead <= 92995) ||
          (93027 <= lookahead && lookahead <= 93047) ||
          (93053 <= lookahead && lookahead <= 93071) ||
          (93760 <= lookahead && lookahead <= 93823) ||
          (93952 <= lookahead && lookahead <= 94026) ||
          lookahead == 94032 ||
          (94099 <= lookahead && lookahead <= 94111) ||
          lookahead == 94176 ||
          lookahead == 94177 ||
          lookahead == 94179 ||
          (94208 <= lookahead && lookahead <= 100343) ||
          (100352 <= lookahead && lookahead <= 101106) ||
          (110592 <= lookahead && lookahead <= 110878) ||
          (110928 <= lookahead && lookahead <= 110930) ||
          (110948 <= lookahead && lookahead <= 110951) ||
          (110960 <= lookahead && lookahead <= 111355) ||
          (113664 <= lookahead && lookahead <= 113770) ||
          (113776 <= lookahead && lookahead <= 113788) ||
          (113792 <= lookahead && lookahead <= 113800) ||
          (113808 <= lookahead && lookahead <= 113817) ||
          (119808 <= lookahead && lookahead <= 119892) ||
          (119894 <= lookahead && lookahead <= 119964) ||
          lookahead == 119966 ||
          lookahead == 119967 ||
          lookahead == 119970 ||
          lookahead == 119973 ||
          lookahead == 119974 ||
          (119977 <= lookahead && lookahead <= 119980) ||
          (119982 <= lookahead && lookahead <= 119993) ||
          lookahead == 119995 ||
          (119997 <= lookahead && lookahead <= 120003) ||
          (120005 <= lookahead && lookahead <= 120069) ||
          (120071 <= lookahead && lookahead <= 120074) ||
          (120077 <= lookahead && lookahead <= 120084) ||
          (120086 <= lookahead && lookahead <= 120092) ||
          (120094 <= lookahead && lookahead <= 120121) ||
          (120123 <= lookahead && lookahead <= 120126) ||
          (120128 <= lookahead && lookahead <= 120132) ||
          lookahead == 120134 ||
          (120138 <= lookahead && lookahead <= 120144) ||
          (120146 <= lookahead && lookahead <= 120485) ||
          (120488 <= lookahead && lookahead <= 120512) ||
          (120514 <= lookahead && lookahead <= 120538) ||
          (120540 <= lookahead && lookahead <= 120570) ||
          (120572 <= lookahead && lookahead <= 120596) ||
          (120598 <= lookahead && lookahead <= 120628) ||
          (120630 <= lookahead && lookahead <= 120654) ||
          (120656 <= lookahead && lookahead <= 120686) ||
          (120688 <= lookahead && lookahead <= 120712) ||
          (120714 <= lookahead && lookahead <= 120744) ||
          (120746 <= lookahead && lookahead <= 120770) ||
          (120772 <= lookahead && lookahead <= 120779) ||
          (123136 <= lookahead && lookahead <= 123180) ||
          (123191 <= lookahead && lookahead <= 123197) ||
          lookahead == 123214 ||
          (123584 <= lookahead && lookahead <= 123627) ||
          (124928 <= lookahead && lookahead <= 125124) ||
          (125184 <= lookahead && lookahead <= 125251) ||
          lookahead == 125259 ||
          (126464 <= lookahead && lookahead <= 126467) ||
          (126469 <= lookahead && lookahead <= 126495) ||
          lookahead == 126497 ||
          lookahead == 126498 ||
          lookahead == 126500 ||
          lookahead == 126503 ||
          (126505 <= lookahead && lookahead <= 126514) ||
          (126516 <= lookahead && lookahead <= 126519) ||
          lookahead == 126521 ||
          lookahead == 126523 ||
          lookahead == 126530 ||
          lookahead == 126535 ||
          lookahead == 126537 ||
          lookahead == 126539 ||
          (126541 <= lookahead && lookahead <= 126543) ||
          lookahead == 126545 ||
          lookahead == 126546 ||
          lookahead == 126548 ||
          lookahead == 126551 ||
          lookahead == 126553 ||
          lookahead == 126555 ||
          lookahead == 126557 ||
          lookahead == 126559 ||
          lookahead == 126561 ||
          lookahead == 126562 ||
          lookahead == 126564 ||
          (126567 <= lookahead && lookahead <= 126570) ||
          (126572 <= lookahead && lookahead <= 126578) ||
          (126580 <= lookahead && lookahead <= 126583) ||
          (126585 <= lookahead && lookahead <= 126588) ||
          lookahead == 126590 ||
          (126592 <= lookahead && lookahead <= 126601) ||
          (126603 <= lookahead && lookahead <= 126619) ||
          (126625 <= lookahead && lookahead <= 126627) ||
          (126629 <= lookahead && lookahead <= 126633) ||
          (126635 <= lookahead && lookahead <= 126651) ||
          (131072 <= lookahead && lookahead <= 173782) ||
          (173824 <= lookahead && lookahead <= 177972) ||
          (177984 <= lookahead && lookahead <= 178205) ||
          (178208 <= lookahead && lookahead <= 183969) ||
          (183984 <= lookahead && lookahead <= 191456) ||
          (194560 <= lookahead && lookahead <= 195101)) ADVANCE(18);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_flag);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_flag);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 170 ||
          lookahead == 181 ||
          lookahead == 186 ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 705) ||
          (710 <= lookahead && lookahead <= 721) ||
          (736 <= lookahead && lookahead <= 740) ||
          lookahead == 748 ||
          lookahead == 750 ||
          (880 <= lookahead && lookahead <= 884) ||
          lookahead == 886 ||
          lookahead == 887 ||
          (890 <= lookahead && lookahead <= 893) ||
          lookahead == 895 ||
          lookahead == 902 ||
          (904 <= lookahead && lookahead <= 906) ||
          lookahead == 908 ||
          (910 <= lookahead && lookahead <= 929) ||
          (931 <= lookahead && lookahead <= 1013) ||
          (1015 <= lookahead && lookahead <= 1153) ||
          (1162 <= lookahead && lookahead <= 1327) ||
          (1329 <= lookahead && lookahead <= 1366) ||
          lookahead == 1369 ||
          (1376 <= lookahead && lookahead <= 1416) ||
          (1488 <= lookahead && lookahead <= 1514) ||
          (1519 <= lookahead && lookahead <= 1522) ||
          (1568 <= lookahead && lookahead <= 1610) ||
          lookahead == 1646 ||
          lookahead == 1647 ||
          (1649 <= lookahead && lookahead <= 1747) ||
          lookahead == 1749 ||
          lookahead == 1765 ||
          lookahead == 1766 ||
          lookahead == 1774 ||
          lookahead == 1775 ||
          (1786 <= lookahead && lookahead <= 1788) ||
          lookahead == 1791 ||
          lookahead == 1808 ||
          (1810 <= lookahead && lookahead <= 1839) ||
          (1869 <= lookahead && lookahead <= 1957) ||
          lookahead == 1969 ||
          (1994 <= lookahead && lookahead <= 2026) ||
          lookahead == 2036 ||
          lookahead == 2037 ||
          lookahead == 2042 ||
          (2048 <= lookahead && lookahead <= 2069) ||
          lookahead == 2074 ||
          lookahead == 2084 ||
          lookahead == 2088 ||
          (2112 <= lookahead && lookahead <= 2136) ||
          (2144 <= lookahead && lookahead <= 2154) ||
          (2208 <= lookahead && lookahead <= 2228) ||
          (2230 <= lookahead && lookahead <= 2237) ||
          (2308 <= lookahead && lookahead <= 2361) ||
          lookahead == 2365 ||
          lookahead == 2384 ||
          (2392 <= lookahead && lookahead <= 2401) ||
          (2417 <= lookahead && lookahead <= 2432) ||
          (2437 <= lookahead && lookahead <= 2444) ||
          lookahead == 2447 ||
          lookahead == 2448 ||
          (2451 <= lookahead && lookahead <= 2472) ||
          (2474 <= lookahead && lookahead <= 2480) ||
          lookahead == 2482 ||
          (2486 <= lookahead && lookahead <= 2489) ||
          lookahead == 2493 ||
          lookahead == 2510 ||
          lookahead == 2524 ||
          lookahead == 2525 ||
          (2527 <= lookahead && lookahead <= 2529) ||
          lookahead == 2544 ||
          lookahead == 2545 ||
          lookahead == 2556 ||
          (2565 <= lookahead && lookahead <= 2570) ||
          lookahead == 2575 ||
          lookahead == 2576 ||
          (2579 <= lookahead && lookahead <= 2600) ||
          (2602 <= lookahead && lookahead <= 2608) ||
          lookahead == 2610 ||
          lookahead == 2611 ||
          lookahead == 2613 ||
          lookahead == 2614 ||
          lookahead == 2616 ||
          lookahead == 2617 ||
          (2649 <= lookahead && lookahead <= 2652) ||
          lookahead == 2654 ||
          (2674 <= lookahead && lookahead <= 2676) ||
          (2693 <= lookahead && lookahead <= 2701) ||
          (2703 <= lookahead && lookahead <= 2705) ||
          (2707 <= lookahead && lookahead <= 2728) ||
          (2730 <= lookahead && lookahead <= 2736) ||
          lookahead == 2738 ||
          lookahead == 2739 ||
          (2741 <= lookahead && lookahead <= 2745) ||
          lookahead == 2749 ||
          lookahead == 2768 ||
          lookahead == 2784 ||
          lookahead == 2785 ||
          lookahead == 2809 ||
          (2821 <= lookahead && lookahead <= 2828) ||
          lookahead == 2831 ||
          lookahead == 2832 ||
          (2835 <= lookahead && lookahead <= 2856) ||
          (2858 <= lookahead && lookahead <= 2864) ||
          lookahead == 2866 ||
          lookahead == 2867 ||
          (2869 <= lookahead && lookahead <= 2873) ||
          lookahead == 2877 ||
          lookahead == 2908 ||
          lookahead == 2909 ||
          (2911 <= lookahead && lookahead <= 2913) ||
          lookahead == 2929 ||
          lookahead == 2947 ||
          (2949 <= lookahead && lookahead <= 2954) ||
          (2958 <= lookahead && lookahead <= 2960) ||
          (2962 <= lookahead && lookahead <= 2965) ||
          lookahead == 2969 ||
          lookahead == 2970 ||
          lookahead == 2972 ||
          lookahead == 2974 ||
          lookahead == 2975 ||
          lookahead == 2979 ||
          lookahead == 2980 ||
          (2984 <= lookahead && lookahead <= 2986) ||
          (2990 <= lookahead && lookahead <= 3001) ||
          lookahead == 3024 ||
          (3077 <= lookahead && lookahead <= 3084) ||
          (3086 <= lookahead && lookahead <= 3088) ||
          (3090 <= lookahead && lookahead <= 3112) ||
          (3114 <= lookahead && lookahead <= 3129) ||
          lookahead == 3133 ||
          (3160 <= lookahead && lookahead <= 3162) ||
          lookahead == 3168 ||
          lookahead == 3169 ||
          lookahead == 3200 ||
          (3205 <= lookahead && lookahead <= 3212) ||
          (3214 <= lookahead && lookahead <= 3216) ||
          (3218 <= lookahead && lookahead <= 3240) ||
          (3242 <= lookahead && lookahead <= 3251) ||
          (3253 <= lookahead && lookahead <= 3257) ||
          lookahead == 3261 ||
          lookahead == 3294 ||
          lookahead == 3296 ||
          lookahead == 3297 ||
          lookahead == 3313 ||
          lookahead == 3314 ||
          (3333 <= lookahead && lookahead <= 3340) ||
          (3342 <= lookahead && lookahead <= 3344) ||
          (3346 <= lookahead && lookahead <= 3386) ||
          lookahead == 3389 ||
          lookahead == 3406 ||
          (3412 <= lookahead && lookahead <= 3414) ||
          (3423 <= lookahead && lookahead <= 3425) ||
          (3450 <= lookahead && lookahead <= 3455) ||
          (3461 <= lookahead && lookahead <= 3478) ||
          (3482 <= lookahead && lookahead <= 3505) ||
          (3507 <= lookahead && lookahead <= 3515) ||
          lookahead == 3517 ||
          (3520 <= lookahead && lookahead <= 3526) ||
          (3585 <= lookahead && lookahead <= 3632) ||
          lookahead == 3634 ||
          lookahead == 3635 ||
          (3648 <= lookahead && lookahead <= 3654) ||
          lookahead == 3713 ||
          lookahead == 3714 ||
          lookahead == 3716 ||
          (3718 <= lookahead && lookahead <= 3722) ||
          (3724 <= lookahead && lookahead <= 3747) ||
          lookahead == 3749 ||
          (3751 <= lookahead && lookahead <= 3760) ||
          lookahead == 3762 ||
          lookahead == 3763 ||
          lookahead == 3773 ||
          (3776 <= lookahead && lookahead <= 3780) ||
          lookahead == 3782 ||
          (3804 <= lookahead && lookahead <= 3807) ||
          lookahead == 3840 ||
          (3904 <= lookahead && lookahead <= 3911) ||
          (3913 <= lookahead && lookahead <= 3948) ||
          (3976 <= lookahead && lookahead <= 3980) ||
          (4096 <= lookahead && lookahead <= 4138) ||
          lookahead == 4159 ||
          (4176 <= lookahead && lookahead <= 4181) ||
          (4186 <= lookahead && lookahead <= 4189) ||
          lookahead == 4193 ||
          lookahead == 4197 ||
          lookahead == 4198 ||
          (4206 <= lookahead && lookahead <= 4208) ||
          (4213 <= lookahead && lookahead <= 4225) ||
          lookahead == 4238 ||
          (4256 <= lookahead && lookahead <= 4293) ||
          lookahead == 4295 ||
          lookahead == 4301 ||
          (4304 <= lookahead && lookahead <= 4346) ||
          (4348 <= lookahead && lookahead <= 4680) ||
          (4682 <= lookahead && lookahead <= 4685) ||
          (4688 <= lookahead && lookahead <= 4694) ||
          lookahead == 4696 ||
          (4698 <= lookahead && lookahead <= 4701) ||
          (4704 <= lookahead && lookahead <= 4744) ||
          (4746 <= lookahead && lookahead <= 4749) ||
          (4752 <= lookahead && lookahead <= 4784) ||
          (4786 <= lookahead && lookahead <= 4789) ||
          (4792 <= lookahead && lookahead <= 4798) ||
          lookahead == 4800 ||
          (4802 <= lookahead && lookahead <= 4805) ||
          (4808 <= lookahead && lookahead <= 4822) ||
          (4824 <= lookahead && lookahead <= 4880) ||
          (4882 <= lookahead && lookahead <= 4885) ||
          (4888 <= lookahead && lookahead <= 4954) ||
          (4992 <= lookahead && lookahead <= 5007) ||
          (5024 <= lookahead && lookahead <= 5109) ||
          (5112 <= lookahead && lookahead <= 5117) ||
          (5121 <= lookahead && lookahead <= 5740) ||
          (5743 <= lookahead && lookahead <= 5759) ||
          (5761 <= lookahead && lookahead <= 5786) ||
          (5792 <= lookahead && lookahead <= 5866) ||
          (5873 <= lookahead && lookahead <= 5880) ||
          (5888 <= lookahead && lookahead <= 5900) ||
          (5902 <= lookahead && lookahead <= 5905) ||
          (5920 <= lookahead && lookahead <= 5937) ||
          (5952 <= lookahead && lookahead <= 5969) ||
          (5984 <= lookahead && lookahead <= 5996) ||
          (5998 <= lookahead && lookahead <= 6000) ||
          (6016 <= lookahead && lookahead <= 6067) ||
          lookahead == 6103 ||
          lookahead == 6108 ||
          (6176 <= lookahead && lookahead <= 6264) ||
          (6272 <= lookahead && lookahead <= 6276) ||
          (6279 <= lookahead && lookahead <= 6312) ||
          lookahead == 6314 ||
          (6320 <= lookahead && lookahead <= 6389) ||
          (6400 <= lookahead && lookahead <= 6430) ||
          (6480 <= lookahead && lookahead <= 6509) ||
          (6512 <= lookahead && lookahead <= 6516) ||
          (6528 <= lookahead && lookahead <= 6571) ||
          (6576 <= lookahead && lookahead <= 6601) ||
          (6656 <= lookahead && lookahead <= 6678) ||
          (6688 <= lookahead && lookahead <= 6740) ||
          lookahead == 6823 ||
          (6917 <= lookahead && lookahead <= 6963) ||
          (6981 <= lookahead && lookahead <= 6987) ||
          (7043 <= lookahead && lookahead <= 7072) ||
          lookahead == 7086 ||
          lookahead == 7087 ||
          (7098 <= lookahead && lookahead <= 7141) ||
          (7168 <= lookahead && lookahead <= 7203) ||
          (7245 <= lookahead && lookahead <= 7247) ||
          (7258 <= lookahead && lookahead <= 7293) ||
          (7296 <= lookahead && lookahead <= 7304) ||
          (7312 <= lookahead && lookahead <= 7354) ||
          (7357 <= lookahead && lookahead <= 7359) ||
          (7401 <= lookahead && lookahead <= 7404) ||
          (7406 <= lookahead && lookahead <= 7411) ||
          lookahead == 7413 ||
          lookahead == 7414 ||
          lookahead == 7418 ||
          (7424 <= lookahead && lookahead <= 7615) ||
          (7680 <= lookahead && lookahead <= 7957) ||
          (7960 <= lookahead && lookahead <= 7965) ||
          (7968 <= lookahead && lookahead <= 8005) ||
          (8008 <= lookahead && lookahead <= 8013) ||
          (8016 <= lookahead && lookahead <= 8023) ||
          lookahead == 8025 ||
          lookahead == 8027 ||
          lookahead == 8029 ||
          (8031 <= lookahead && lookahead <= 8061) ||
          (8064 <= lookahead && lookahead <= 8116) ||
          (8118 <= lookahead && lookahead <= 8124) ||
          lookahead == 8126 ||
          (8130 <= lookahead && lookahead <= 8132) ||
          (8134 <= lookahead && lookahead <= 8140) ||
          (8144 <= lookahead && lookahead <= 8147) ||
          (8150 <= lookahead && lookahead <= 8155) ||
          (8160 <= lookahead && lookahead <= 8172) ||
          (8178 <= lookahead && lookahead <= 8180) ||
          (8182 <= lookahead && lookahead <= 8188) ||
          lookahead == 8305 ||
          lookahead == 8319 ||
          (8336 <= lookahead && lookahead <= 8348) ||
          lookahead == 8450 ||
          lookahead == 8455 ||
          (8458 <= lookahead && lookahead <= 8467) ||
          lookahead == 8469 ||
          (8473 <= lookahead && lookahead <= 8477) ||
          lookahead == 8484 ||
          lookahead == 8486 ||
          lookahead == 8488 ||
          (8490 <= lookahead && lookahead <= 8493) ||
          (8495 <= lookahead && lookahead <= 8505) ||
          (8508 <= lookahead && lookahead <= 8511) ||
          (8517 <= lookahead && lookahead <= 8521) ||
          lookahead == 8526 ||
          lookahead == 8579 ||
          lookahead == 8580 ||
          (11264 <= lookahead && lookahead <= 11310) ||
          (11312 <= lookahead && lookahead <= 11358) ||
          (11360 <= lookahead && lookahead <= 11492) ||
          (11499 <= lookahead && lookahead <= 11502) ||
          lookahead == 11506 ||
          lookahead == 11507 ||
          (11520 <= lookahead && lookahead <= 11557) ||
          lookahead == 11559 ||
          lookahead == 11565 ||
          (11568 <= lookahead && lookahead <= 11623) ||
          lookahead == 11631 ||
          (11648 <= lookahead && lookahead <= 11670) ||
          (11680 <= lookahead && lookahead <= 11686) ||
          (11688 <= lookahead && lookahead <= 11694) ||
          (11696 <= lookahead && lookahead <= 11702) ||
          (11704 <= lookahead && lookahead <= 11710) ||
          (11712 <= lookahead && lookahead <= 11718) ||
          (11720 <= lookahead && lookahead <= 11726) ||
          (11728 <= lookahead && lookahead <= 11734) ||
          (11736 <= lookahead && lookahead <= 11742) ||
          lookahead == 11823 ||
          lookahead == 12293 ||
          lookahead == 12294 ||
          (12337 <= lookahead && lookahead <= 12341) ||
          lookahead == 12347 ||
          lookahead == 12348 ||
          (12353 <= lookahead && lookahead <= 12438) ||
          (12445 <= lookahead && lookahead <= 12447) ||
          (12449 <= lookahead && lookahead <= 12538) ||
          (12540 <= lookahead && lookahead <= 12543) ||
          (12549 <= lookahead && lookahead <= 12591) ||
          (12593 <= lookahead && lookahead <= 12686) ||
          (12704 <= lookahead && lookahead <= 12730) ||
          (12784 <= lookahead && lookahead <= 12799) ||
          (13312 <= lookahead && lookahead <= 19893) ||
          (19968 <= lookahead && lookahead <= 40943) ||
          (40960 <= lookahead && lookahead <= 42124) ||
          (42192 <= lookahead && lookahead <= 42237) ||
          (42240 <= lookahead && lookahead <= 42508) ||
          (42512 <= lookahead && lookahead <= 42527) ||
          lookahead == 42538 ||
          lookahead == 42539 ||
          (42560 <= lookahead && lookahead <= 42606) ||
          (42623 <= lookahead && lookahead <= 42653) ||
          (42656 <= lookahead && lookahead <= 42725) ||
          (42775 <= lookahead && lookahead <= 42783) ||
          (42786 <= lookahead && lookahead <= 42888) ||
          (42891 <= lookahead && lookahead <= 42943) ||
          (42946 <= lookahead && lookahead <= 42950) ||
          (42999 <= lookahead && lookahead <= 43009) ||
          (43011 <= lookahead && lookahead <= 43013) ||
          (43015 <= lookahead && lookahead <= 43018) ||
          (43020 <= lookahead && lookahead <= 43042) ||
          (43072 <= lookahead && lookahead <= 43123) ||
          (43138 <= lookahead && lookahead <= 43187) ||
          (43250 <= lookahead && lookahead <= 43255) ||
          lookahead == 43259 ||
          lookahead == 43261 ||
          lookahead == 43262 ||
          (43274 <= lookahead && lookahead <= 43301) ||
          (43312 <= lookahead && lookahead <= 43334) ||
          (43360 <= lookahead && lookahead <= 43388) ||
          (43396 <= lookahead && lookahead <= 43442) ||
          lookahead == 43471 ||
          (43488 <= lookahead && lookahead <= 43492) ||
          (43494 <= lookahead && lookahead <= 43503) ||
          (43514 <= lookahead && lookahead <= 43518) ||
          (43520 <= lookahead && lookahead <= 43560) ||
          (43584 <= lookahead && lookahead <= 43586) ||
          (43588 <= lookahead && lookahead <= 43595) ||
          (43616 <= lookahead && lookahead <= 43638) ||
          lookahead == 43642 ||
          (43646 <= lookahead && lookahead <= 43695) ||
          lookahead == 43697 ||
          lookahead == 43701 ||
          lookahead == 43702 ||
          (43705 <= lookahead && lookahead <= 43709) ||
          lookahead == 43712 ||
          lookahead == 43714 ||
          (43739 <= lookahead && lookahead <= 43741) ||
          (43744 <= lookahead && lookahead <= 43754) ||
          (43762 <= lookahead && lookahead <= 43764) ||
          (43777 <= lookahead && lookahead <= 43782) ||
          (43785 <= lookahead && lookahead <= 43790) ||
          (43793 <= lookahead && lookahead <= 43798) ||
          (43808 <= lookahead && lookahead <= 43814) ||
          (43816 <= lookahead && lookahead <= 43822) ||
          (43824 <= lookahead && lookahead <= 43866) ||
          (43868 <= lookahead && lookahead <= 43879) ||
          (43888 <= lookahead && lookahead <= 44002) ||
          (44032 <= lookahead && lookahead <= 55203) ||
          (55216 <= lookahead && lookahead <= 55238) ||
          (55243 <= lookahead && lookahead <= 55291) ||
          (63744 <= lookahead && lookahead <= 64109) ||
          (64112 <= lookahead && lookahead <= 64217) ||
          (64256 <= lookahead && lookahead <= 64262) ||
          (64275 <= lookahead && lookahead <= 64279) ||
          lookahead == 64285 ||
          (64287 <= lookahead && lookahead <= 64296) ||
          (64298 <= lookahead && lookahead <= 64310) ||
          (64312 <= lookahead && lookahead <= 64316) ||
          lookahead == 64318 ||
          lookahead == 64320 ||
          lookahead == 64321 ||
          lookahead == 64323 ||
          lookahead == 64324 ||
          (64326 <= lookahead && lookahead <= 64433) ||
          (64467 <= lookahead && lookahead <= 64829) ||
          (64848 <= lookahead && lookahead <= 64911) ||
          (64914 <= lookahead && lookahead <= 64967) ||
          (65008 <= lookahead && lookahead <= 65019) ||
          (65136 <= lookahead && lookahead <= 65140) ||
          (65142 <= lookahead && lookahead <= 65276) ||
          (65313 <= lookahead && lookahead <= 65338) ||
          (65345 <= lookahead && lookahead <= 65370) ||
          (65382 <= lookahead && lookahead <= 65470) ||
          (65474 <= lookahead && lookahead <= 65479) ||
          (65482 <= lookahead && lookahead <= 65487) ||
          (65490 <= lookahead && lookahead <= 65495) ||
          (65498 <= lookahead && lookahead <= 65500) ||
          (65536 <= lookahead && lookahead <= 65547) ||
          (65549 <= lookahead && lookahead <= 65574) ||
          (65576 <= lookahead && lookahead <= 65594) ||
          lookahead == 65596 ||
          lookahead == 65597 ||
          (65599 <= lookahead && lookahead <= 65613) ||
          (65616 <= lookahead && lookahead <= 65629) ||
          (65664 <= lookahead && lookahead <= 65786) ||
          (66176 <= lookahead && lookahead <= 66204) ||
          (66208 <= lookahead && lookahead <= 66256) ||
          (66304 <= lookahead && lookahead <= 66335) ||
          (66349 <= lookahead && lookahead <= 66368) ||
          (66370 <= lookahead && lookahead <= 66377) ||
          (66384 <= lookahead && lookahead <= 66421) ||
          (66432 <= lookahead && lookahead <= 66461) ||
          (66464 <= lookahead && lookahead <= 66499) ||
          (66504 <= lookahead && lookahead <= 66511) ||
          (66560 <= lookahead && lookahead <= 66717) ||
          (66736 <= lookahead && lookahead <= 66771) ||
          (66776 <= lookahead && lookahead <= 66811) ||
          (66816 <= lookahead && lookahead <= 66855) ||
          (66864 <= lookahead && lookahead <= 66915) ||
          (67072 <= lookahead && lookahead <= 67382) ||
          (67392 <= lookahead && lookahead <= 67413) ||
          (67424 <= lookahead && lookahead <= 67431) ||
          (67584 <= lookahead && lookahead <= 67589) ||
          lookahead == 67592 ||
          (67594 <= lookahead && lookahead <= 67637) ||
          lookahead == 67639 ||
          lookahead == 67640 ||
          lookahead == 67644 ||
          (67647 <= lookahead && lookahead <= 67669) ||
          (67680 <= lookahead && lookahead <= 67702) ||
          (67712 <= lookahead && lookahead <= 67742) ||
          (67808 <= lookahead && lookahead <= 67826) ||
          lookahead == 67828 ||
          lookahead == 67829 ||
          (67840 <= lookahead && lookahead <= 67861) ||
          (67872 <= lookahead && lookahead <= 67897) ||
          (67968 <= lookahead && lookahead <= 68023) ||
          lookahead == 68030 ||
          lookahead == 68031 ||
          lookahead == 68096 ||
          (68112 <= lookahead && lookahead <= 68115) ||
          (68117 <= lookahead && lookahead <= 68119) ||
          (68121 <= lookahead && lookahead <= 68149) ||
          (68192 <= lookahead && lookahead <= 68220) ||
          (68224 <= lookahead && lookahead <= 68252) ||
          (68288 <= lookahead && lookahead <= 68295) ||
          (68297 <= lookahead && lookahead <= 68324) ||
          (68352 <= lookahead && lookahead <= 68405) ||
          (68416 <= lookahead && lookahead <= 68437) ||
          (68448 <= lookahead && lookahead <= 68466) ||
          (68480 <= lookahead && lookahead <= 68497) ||
          (68608 <= lookahead && lookahead <= 68680) ||
          (68736 <= lookahead && lookahead <= 68786) ||
          (68800 <= lookahead && lookahead <= 68850) ||
          (68864 <= lookahead && lookahead <= 68899) ||
          (69376 <= lookahead && lookahead <= 69404) ||
          lookahead == 69415 ||
          (69424 <= lookahead && lookahead <= 69445) ||
          (69600 <= lookahead && lookahead <= 69622) ||
          (69635 <= lookahead && lookahead <= 69687) ||
          (69763 <= lookahead && lookahead <= 69807) ||
          (69840 <= lookahead && lookahead <= 69864) ||
          (69891 <= lookahead && lookahead <= 69926) ||
          lookahead == 69956 ||
          (69968 <= lookahead && lookahead <= 70002) ||
          lookahead == 70006 ||
          (70019 <= lookahead && lookahead <= 70066) ||
          (70081 <= lookahead && lookahead <= 70084) ||
          lookahead == 70106 ||
          lookahead == 70108 ||
          (70144 <= lookahead && lookahead <= 70161) ||
          (70163 <= lookahead && lookahead <= 70187) ||
          (70272 <= lookahead && lookahead <= 70278) ||
          lookahead == 70280 ||
          (70282 <= lookahead && lookahead <= 70285) ||
          (70287 <= lookahead && lookahead <= 70301) ||
          (70303 <= lookahead && lookahead <= 70312) ||
          (70320 <= lookahead && lookahead <= 70366) ||
          (70405 <= lookahead && lookahead <= 70412) ||
          lookahead == 70415 ||
          lookahead == 70416 ||
          (70419 <= lookahead && lookahead <= 70440) ||
          (70442 <= lookahead && lookahead <= 70448) ||
          lookahead == 70450 ||
          lookahead == 70451 ||
          (70453 <= lookahead && lookahead <= 70457) ||
          lookahead == 70461 ||
          lookahead == 70480 ||
          (70493 <= lookahead && lookahead <= 70497) ||
          (70656 <= lookahead && lookahead <= 70708) ||
          (70727 <= lookahead && lookahead <= 70730) ||
          lookahead == 70751 ||
          (70784 <= lookahead && lookahead <= 70831) ||
          lookahead == 70852 ||
          lookahead == 70853 ||
          lookahead == 70855 ||
          (71040 <= lookahead && lookahead <= 71086) ||
          (71128 <= lookahead && lookahead <= 71131) ||
          (71168 <= lookahead && lookahead <= 71215) ||
          lookahead == 71236 ||
          (71296 <= lookahead && lookahead <= 71338) ||
          lookahead == 71352 ||
          (71424 <= lookahead && lookahead <= 71450) ||
          (71680 <= lookahead && lookahead <= 71723) ||
          (71840 <= lookahead && lookahead <= 71903) ||
          lookahead == 71935 ||
          (72096 <= lookahead && lookahead <= 72103) ||
          (72106 <= lookahead && lookahead <= 72144) ||
          lookahead == 72161 ||
          lookahead == 72163 ||
          lookahead == 72192 ||
          (72203 <= lookahead && lookahead <= 72242) ||
          lookahead == 72250 ||
          lookahead == 72272 ||
          (72284 <= lookahead && lookahead <= 72329) ||
          lookahead == 72349 ||
          (72384 <= lookahead && lookahead <= 72440) ||
          (72704 <= lookahead && lookahead <= 72712) ||
          (72714 <= lookahead && lookahead <= 72750) ||
          lookahead == 72768 ||
          (72818 <= lookahead && lookahead <= 72847) ||
          (72960 <= lookahead && lookahead <= 72966) ||
          lookahead == 72968 ||
          lookahead == 72969 ||
          (72971 <= lookahead && lookahead <= 73008) ||
          lookahead == 73030 ||
          (73056 <= lookahead && lookahead <= 73061) ||
          lookahead == 73063 ||
          lookahead == 73064 ||
          (73066 <= lookahead && lookahead <= 73097) ||
          lookahead == 73112 ||
          (73440 <= lookahead && lookahead <= 73458) ||
          (73728 <= lookahead && lookahead <= 74649) ||
          (74880 <= lookahead && lookahead <= 75075) ||
          (77824 <= lookahead && lookahead <= 78894) ||
          (82944 <= lookahead && lookahead <= 83526) ||
          (92160 <= lookahead && lookahead <= 92728) ||
          (92736 <= lookahead && lookahead <= 92766) ||
          (92880 <= lookahead && lookahead <= 92909) ||
          (92928 <= lookahead && lookahead <= 92975) ||
          (92992 <= lookahead && lookahead <= 92995) ||
          (93027 <= lookahead && lookahead <= 93047) ||
          (93053 <= lookahead && lookahead <= 93071) ||
          (93760 <= lookahead && lookahead <= 93823) ||
          (93952 <= lookahead && lookahead <= 94026) ||
          lookahead == 94032 ||
          (94099 <= lookahead && lookahead <= 94111) ||
          lookahead == 94176 ||
          lookahead == 94177 ||
          lookahead == 94179 ||
          (94208 <= lookahead && lookahead <= 100343) ||
          (100352 <= lookahead && lookahead <= 101106) ||
          (110592 <= lookahead && lookahead <= 110878) ||
          (110928 <= lookahead && lookahead <= 110930) ||
          (110948 <= lookahead && lookahead <= 110951) ||
          (110960 <= lookahead && lookahead <= 111355) ||
          (113664 <= lookahead && lookahead <= 113770) ||
          (113776 <= lookahead && lookahead <= 113788) ||
          (113792 <= lookahead && lookahead <= 113800) ||
          (113808 <= lookahead && lookahead <= 113817) ||
          (119808 <= lookahead && lookahead <= 119892) ||
          (119894 <= lookahead && lookahead <= 119964) ||
          lookahead == 119966 ||
          lookahead == 119967 ||
          lookahead == 119970 ||
          lookahead == 119973 ||
          lookahead == 119974 ||
          (119977 <= lookahead && lookahead <= 119980) ||
          (119982 <= lookahead && lookahead <= 119993) ||
          lookahead == 119995 ||
          (119997 <= lookahead && lookahead <= 120003) ||
          (120005 <= lookahead && lookahead <= 120069) ||
          (120071 <= lookahead && lookahead <= 120074) ||
          (120077 <= lookahead && lookahead <= 120084) ||
          (120086 <= lookahead && lookahead <= 120092) ||
          (120094 <= lookahead && lookahead <= 120121) ||
          (120123 <= lookahead && lookahead <= 120126) ||
          (120128 <= lookahead && lookahead <= 120132) ||
          lookahead == 120134 ||
          (120138 <= lookahead && lookahead <= 120144) ||
          (120146 <= lookahead && lookahead <= 120485) ||
          (120488 <= lookahead && lookahead <= 120512) ||
          (120514 <= lookahead && lookahead <= 120538) ||
          (120540 <= lookahead && lookahead <= 120570) ||
          (120572 <= lookahead && lookahead <= 120596) ||
          (120598 <= lookahead && lookahead <= 120628) ||
          (120630 <= lookahead && lookahead <= 120654) ||
          (120656 <= lookahead && lookahead <= 120686) ||
          (120688 <= lookahead && lookahead <= 120712) ||
          (120714 <= lookahead && lookahead <= 120744) ||
          (120746 <= lookahead && lookahead <= 120770) ||
          (120772 <= lookahead && lookahead <= 120779) ||
          (123136 <= lookahead && lookahead <= 123180) ||
          (123191 <= lookahead && lookahead <= 123197) ||
          lookahead == 123214 ||
          (123584 <= lookahead && lookahead <= 123627) ||
          (124928 <= lookahead && lookahead <= 125124) ||
          (125184 <= lookahead && lookahead <= 125251) ||
          lookahead == 125259 ||
          (126464 <= lookahead && lookahead <= 126467) ||
          (126469 <= lookahead && lookahead <= 126495) ||
          lookahead == 126497 ||
          lookahead == 126498 ||
          lookahead == 126500 ||
          lookahead == 126503 ||
          (126505 <= lookahead && lookahead <= 126514) ||
          (126516 <= lookahead && lookahead <= 126519) ||
          lookahead == 126521 ||
          lookahead == 126523 ||
          lookahead == 126530 ||
          lookahead == 126535 ||
          lookahead == 126537 ||
          lookahead == 126539 ||
          (126541 <= lookahead && lookahead <= 126543) ||
          lookahead == 126545 ||
          lookahead == 126546 ||
          lookahead == 126548 ||
          lookahead == 126551 ||
          lookahead == 126553 ||
          lookahead == 126555 ||
          lookahead == 126557 ||
          lookahead == 126559 ||
          lookahead == 126561 ||
          lookahead == 126562 ||
          lookahead == 126564 ||
          (126567 <= lookahead && lookahead <= 126570) ||
          (126572 <= lookahead && lookahead <= 126578) ||
          (126580 <= lookahead && lookahead <= 126583) ||
          (126585 <= lookahead && lookahead <= 126588) ||
          lookahead == 126590 ||
          (126592 <= lookahead && lookahead <= 126601) ||
          (126603 <= lookahead && lookahead <= 126619) ||
          (126625 <= lookahead && lookahead <= 126627) ||
          (126629 <= lookahead && lookahead <= 126633) ||
          (126635 <= lookahead && lookahead <= 126651) ||
          (131072 <= lookahead && lookahead <= 173782) ||
          (173824 <= lookahead && lookahead <= 177972) ||
          (177984 <= lookahead && lookahead <= 178205) ||
          (178208 <= lookahead && lookahead <= 183969) ||
          (183984 <= lookahead && lookahead <= 191456) ||
          (194560 <= lookahead && lookahead <= 195101)) ADVANCE(18);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 170 ||
          lookahead == 181 ||
          lookahead == 186 ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 705) ||
          (710 <= lookahead && lookahead <= 721) ||
          (736 <= lookahead && lookahead <= 740) ||
          lookahead == 748 ||
          lookahead == 750 ||
          (880 <= lookahead && lookahead <= 884) ||
          lookahead == 886 ||
          lookahead == 887 ||
          (890 <= lookahead && lookahead <= 893) ||
          lookahead == 895 ||
          lookahead == 902 ||
          (904 <= lookahead && lookahead <= 906) ||
          lookahead == 908 ||
          (910 <= lookahead && lookahead <= 929) ||
          (931 <= lookahead && lookahead <= 1013) ||
          (1015 <= lookahead && lookahead <= 1153) ||
          (1162 <= lookahead && lookahead <= 1327) ||
          (1329 <= lookahead && lookahead <= 1366) ||
          lookahead == 1369 ||
          (1376 <= lookahead && lookahead <= 1416) ||
          (1488 <= lookahead && lookahead <= 1514) ||
          (1519 <= lookahead && lookahead <= 1522) ||
          (1568 <= lookahead && lookahead <= 1610) ||
          lookahead == 1646 ||
          lookahead == 1647 ||
          (1649 <= lookahead && lookahead <= 1747) ||
          lookahead == 1749 ||
          lookahead == 1765 ||
          lookahead == 1766 ||
          lookahead == 1774 ||
          lookahead == 1775 ||
          (1786 <= lookahead && lookahead <= 1788) ||
          lookahead == 1791 ||
          lookahead == 1808 ||
          (1810 <= lookahead && lookahead <= 1839) ||
          (1869 <= lookahead && lookahead <= 1957) ||
          lookahead == 1969 ||
          (1994 <= lookahead && lookahead <= 2026) ||
          lookahead == 2036 ||
          lookahead == 2037 ||
          lookahead == 2042 ||
          (2048 <= lookahead && lookahead <= 2069) ||
          lookahead == 2074 ||
          lookahead == 2084 ||
          lookahead == 2088 ||
          (2112 <= lookahead && lookahead <= 2136) ||
          (2144 <= lookahead && lookahead <= 2154) ||
          (2208 <= lookahead && lookahead <= 2228) ||
          (2230 <= lookahead && lookahead <= 2237) ||
          (2308 <= lookahead && lookahead <= 2361) ||
          lookahead == 2365 ||
          lookahead == 2384 ||
          (2392 <= lookahead && lookahead <= 2401) ||
          (2417 <= lookahead && lookahead <= 2432) ||
          (2437 <= lookahead && lookahead <= 2444) ||
          lookahead == 2447 ||
          lookahead == 2448 ||
          (2451 <= lookahead && lookahead <= 2472) ||
          (2474 <= lookahead && lookahead <= 2480) ||
          lookahead == 2482 ||
          (2486 <= lookahead && lookahead <= 2489) ||
          lookahead == 2493 ||
          lookahead == 2510 ||
          lookahead == 2524 ||
          lookahead == 2525 ||
          (2527 <= lookahead && lookahead <= 2529) ||
          lookahead == 2544 ||
          lookahead == 2545 ||
          lookahead == 2556 ||
          (2565 <= lookahead && lookahead <= 2570) ||
          lookahead == 2575 ||
          lookahead == 2576 ||
          (2579 <= lookahead && lookahead <= 2600) ||
          (2602 <= lookahead && lookahead <= 2608) ||
          lookahead == 2610 ||
          lookahead == 2611 ||
          lookahead == 2613 ||
          lookahead == 2614 ||
          lookahead == 2616 ||
          lookahead == 2617 ||
          (2649 <= lookahead && lookahead <= 2652) ||
          lookahead == 2654 ||
          (2674 <= lookahead && lookahead <= 2676) ||
          (2693 <= lookahead && lookahead <= 2701) ||
          (2703 <= lookahead && lookahead <= 2705) ||
          (2707 <= lookahead && lookahead <= 2728) ||
          (2730 <= lookahead && lookahead <= 2736) ||
          lookahead == 2738 ||
          lookahead == 2739 ||
          (2741 <= lookahead && lookahead <= 2745) ||
          lookahead == 2749 ||
          lookahead == 2768 ||
          lookahead == 2784 ||
          lookahead == 2785 ||
          lookahead == 2809 ||
          (2821 <= lookahead && lookahead <= 2828) ||
          lookahead == 2831 ||
          lookahead == 2832 ||
          (2835 <= lookahead && lookahead <= 2856) ||
          (2858 <= lookahead && lookahead <= 2864) ||
          lookahead == 2866 ||
          lookahead == 2867 ||
          (2869 <= lookahead && lookahead <= 2873) ||
          lookahead == 2877 ||
          lookahead == 2908 ||
          lookahead == 2909 ||
          (2911 <= lookahead && lookahead <= 2913) ||
          lookahead == 2929 ||
          lookahead == 2947 ||
          (2949 <= lookahead && lookahead <= 2954) ||
          (2958 <= lookahead && lookahead <= 2960) ||
          (2962 <= lookahead && lookahead <= 2965) ||
          lookahead == 2969 ||
          lookahead == 2970 ||
          lookahead == 2972 ||
          lookahead == 2974 ||
          lookahead == 2975 ||
          lookahead == 2979 ||
          lookahead == 2980 ||
          (2984 <= lookahead && lookahead <= 2986) ||
          (2990 <= lookahead && lookahead <= 3001) ||
          lookahead == 3024 ||
          (3077 <= lookahead && lookahead <= 3084) ||
          (3086 <= lookahead && lookahead <= 3088) ||
          (3090 <= lookahead && lookahead <= 3112) ||
          (3114 <= lookahead && lookahead <= 3129) ||
          lookahead == 3133 ||
          (3160 <= lookahead && lookahead <= 3162) ||
          lookahead == 3168 ||
          lookahead == 3169 ||
          lookahead == 3200 ||
          (3205 <= lookahead && lookahead <= 3212) ||
          (3214 <= lookahead && lookahead <= 3216) ||
          (3218 <= lookahead && lookahead <= 3240) ||
          (3242 <= lookahead && lookahead <= 3251) ||
          (3253 <= lookahead && lookahead <= 3257) ||
          lookahead == 3261 ||
          lookahead == 3294 ||
          lookahead == 3296 ||
          lookahead == 3297 ||
          lookahead == 3313 ||
          lookahead == 3314 ||
          (3333 <= lookahead && lookahead <= 3340) ||
          (3342 <= lookahead && lookahead <= 3344) ||
          (3346 <= lookahead && lookahead <= 3386) ||
          lookahead == 3389 ||
          lookahead == 3406 ||
          (3412 <= lookahead && lookahead <= 3414) ||
          (3423 <= lookahead && lookahead <= 3425) ||
          (3450 <= lookahead && lookahead <= 3455) ||
          (3461 <= lookahead && lookahead <= 3478) ||
          (3482 <= lookahead && lookahead <= 3505) ||
          (3507 <= lookahead && lookahead <= 3515) ||
          lookahead == 3517 ||
          (3520 <= lookahead && lookahead <= 3526) ||
          (3585 <= lookahead && lookahead <= 3632) ||
          lookahead == 3634 ||
          lookahead == 3635 ||
          (3648 <= lookahead && lookahead <= 3654) ||
          lookahead == 3713 ||
          lookahead == 3714 ||
          lookahead == 3716 ||
          (3718 <= lookahead && lookahead <= 3722) ||
          (3724 <= lookahead && lookahead <= 3747) ||
          lookahead == 3749 ||
          (3751 <= lookahead && lookahead <= 3760) ||
          lookahead == 3762 ||
          lookahead == 3763 ||
          lookahead == 3773 ||
          (3776 <= lookahead && lookahead <= 3780) ||
          lookahead == 3782 ||
          (3804 <= lookahead && lookahead <= 3807) ||
          lookahead == 3840 ||
          (3904 <= lookahead && lookahead <= 3911) ||
          (3913 <= lookahead && lookahead <= 3948) ||
          (3976 <= lookahead && lookahead <= 3980) ||
          (4096 <= lookahead && lookahead <= 4138) ||
          lookahead == 4159 ||
          (4176 <= lookahead && lookahead <= 4181) ||
          (4186 <= lookahead && lookahead <= 4189) ||
          lookahead == 4193 ||
          lookahead == 4197 ||
          lookahead == 4198 ||
          (4206 <= lookahead && lookahead <= 4208) ||
          (4213 <= lookahead && lookahead <= 4225) ||
          lookahead == 4238 ||
          (4256 <= lookahead && lookahead <= 4293) ||
          lookahead == 4295 ||
          lookahead == 4301 ||
          (4304 <= lookahead && lookahead <= 4346) ||
          (4348 <= lookahead && lookahead <= 4680) ||
          (4682 <= lookahead && lookahead <= 4685) ||
          (4688 <= lookahead && lookahead <= 4694) ||
          lookahead == 4696 ||
          (4698 <= lookahead && lookahead <= 4701) ||
          (4704 <= lookahead && lookahead <= 4744) ||
          (4746 <= lookahead && lookahead <= 4749) ||
          (4752 <= lookahead && lookahead <= 4784) ||
          (4786 <= lookahead && lookahead <= 4789) ||
          (4792 <= lookahead && lookahead <= 4798) ||
          lookahead == 4800 ||
          (4802 <= lookahead && lookahead <= 4805) ||
          (4808 <= lookahead && lookahead <= 4822) ||
          (4824 <= lookahead && lookahead <= 4880) ||
          (4882 <= lookahead && lookahead <= 4885) ||
          (4888 <= lookahead && lookahead <= 4954) ||
          (4992 <= lookahead && lookahead <= 5007) ||
          (5024 <= lookahead && lookahead <= 5109) ||
          (5112 <= lookahead && lookahead <= 5117) ||
          (5121 <= lookahead && lookahead <= 5740) ||
          (5743 <= lookahead && lookahead <= 5759) ||
          (5761 <= lookahead && lookahead <= 5786) ||
          (5792 <= lookahead && lookahead <= 5866) ||
          (5873 <= lookahead && lookahead <= 5880) ||
          (5888 <= lookahead && lookahead <= 5900) ||
          (5902 <= lookahead && lookahead <= 5905) ||
          (5920 <= lookahead && lookahead <= 5937) ||
          (5952 <= lookahead && lookahead <= 5969) ||
          (5984 <= lookahead && lookahead <= 5996) ||
          (5998 <= lookahead && lookahead <= 6000) ||
          (6016 <= lookahead && lookahead <= 6067) ||
          lookahead == 6103 ||
          lookahead == 6108 ||
          (6176 <= lookahead && lookahead <= 6264) ||
          (6272 <= lookahead && lookahead <= 6276) ||
          (6279 <= lookahead && lookahead <= 6312) ||
          lookahead == 6314 ||
          (6320 <= lookahead && lookahead <= 6389) ||
          (6400 <= lookahead && lookahead <= 6430) ||
          (6480 <= lookahead && lookahead <= 6509) ||
          (6512 <= lookahead && lookahead <= 6516) ||
          (6528 <= lookahead && lookahead <= 6571) ||
          (6576 <= lookahead && lookahead <= 6601) ||
          (6656 <= lookahead && lookahead <= 6678) ||
          (6688 <= lookahead && lookahead <= 6740) ||
          lookahead == 6823 ||
          (6917 <= lookahead && lookahead <= 6963) ||
          (6981 <= lookahead && lookahead <= 6987) ||
          (7043 <= lookahead && lookahead <= 7072) ||
          lookahead == 7086 ||
          lookahead == 7087 ||
          (7098 <= lookahead && lookahead <= 7141) ||
          (7168 <= lookahead && lookahead <= 7203) ||
          (7245 <= lookahead && lookahead <= 7247) ||
          (7258 <= lookahead && lookahead <= 7293) ||
          (7296 <= lookahead && lookahead <= 7304) ||
          (7312 <= lookahead && lookahead <= 7354) ||
          (7357 <= lookahead && lookahead <= 7359) ||
          (7401 <= lookahead && lookahead <= 7404) ||
          (7406 <= lookahead && lookahead <= 7411) ||
          lookahead == 7413 ||
          lookahead == 7414 ||
          lookahead == 7418 ||
          (7424 <= lookahead && lookahead <= 7615) ||
          (7680 <= lookahead && lookahead <= 7957) ||
          (7960 <= lookahead && lookahead <= 7965) ||
          (7968 <= lookahead && lookahead <= 8005) ||
          (8008 <= lookahead && lookahead <= 8013) ||
          (8016 <= lookahead && lookahead <= 8023) ||
          lookahead == 8025 ||
          lookahead == 8027 ||
          lookahead == 8029 ||
          (8031 <= lookahead && lookahead <= 8061) ||
          (8064 <= lookahead && lookahead <= 8116) ||
          (8118 <= lookahead && lookahead <= 8124) ||
          lookahead == 8126 ||
          (8130 <= lookahead && lookahead <= 8132) ||
          (8134 <= lookahead && lookahead <= 8140) ||
          (8144 <= lookahead && lookahead <= 8147) ||
          (8150 <= lookahead && lookahead <= 8155) ||
          (8160 <= lookahead && lookahead <= 8172) ||
          (8178 <= lookahead && lookahead <= 8180) ||
          (8182 <= lookahead && lookahead <= 8188) ||
          lookahead == 8305 ||
          lookahead == 8319 ||
          (8336 <= lookahead && lookahead <= 8348) ||
          lookahead == 8450 ||
          lookahead == 8455 ||
          (8458 <= lookahead && lookahead <= 8467) ||
          lookahead == 8469 ||
          (8473 <= lookahead && lookahead <= 8477) ||
          lookahead == 8484 ||
          lookahead == 8486 ||
          lookahead == 8488 ||
          (8490 <= lookahead && lookahead <= 8493) ||
          (8495 <= lookahead && lookahead <= 8505) ||
          (8508 <= lookahead && lookahead <= 8511) ||
          (8517 <= lookahead && lookahead <= 8521) ||
          lookahead == 8526 ||
          lookahead == 8579 ||
          lookahead == 8580 ||
          (11264 <= lookahead && lookahead <= 11310) ||
          (11312 <= lookahead && lookahead <= 11358) ||
          (11360 <= lookahead && lookahead <= 11492) ||
          (11499 <= lookahead && lookahead <= 11502) ||
          lookahead == 11506 ||
          lookahead == 11507 ||
          (11520 <= lookahead && lookahead <= 11557) ||
          lookahead == 11559 ||
          lookahead == 11565 ||
          (11568 <= lookahead && lookahead <= 11623) ||
          lookahead == 11631 ||
          (11648 <= lookahead && lookahead <= 11670) ||
          (11680 <= lookahead && lookahead <= 11686) ||
          (11688 <= lookahead && lookahead <= 11694) ||
          (11696 <= lookahead && lookahead <= 11702) ||
          (11704 <= lookahead && lookahead <= 11710) ||
          (11712 <= lookahead && lookahead <= 11718) ||
          (11720 <= lookahead && lookahead <= 11726) ||
          (11728 <= lookahead && lookahead <= 11734) ||
          (11736 <= lookahead && lookahead <= 11742) ||
          lookahead == 11823 ||
          lookahead == 12293 ||
          lookahead == 12294 ||
          (12337 <= lookahead && lookahead <= 12341) ||
          lookahead == 12347 ||
          lookahead == 12348 ||
          (12353 <= lookahead && lookahead <= 12438) ||
          (12445 <= lookahead && lookahead <= 12447) ||
          (12449 <= lookahead && lookahead <= 12538) ||
          (12540 <= lookahead && lookahead <= 12543) ||
          (12549 <= lookahead && lookahead <= 12591) ||
          (12593 <= lookahead && lookahead <= 12686) ||
          (12704 <= lookahead && lookahead <= 12730) ||
          (12784 <= lookahead && lookahead <= 12799) ||
          (13312 <= lookahead && lookahead <= 19893) ||
          (19968 <= lookahead && lookahead <= 40943) ||
          (40960 <= lookahead && lookahead <= 42124) ||
          (42192 <= lookahead && lookahead <= 42237) ||
          (42240 <= lookahead && lookahead <= 42508) ||
          (42512 <= lookahead && lookahead <= 42527) ||
          lookahead == 42538 ||
          lookahead == 42539 ||
          (42560 <= lookahead && lookahead <= 42606) ||
          (42623 <= lookahead && lookahead <= 42653) ||
          (42656 <= lookahead && lookahead <= 42725) ||
          (42775 <= lookahead && lookahead <= 42783) ||
          (42786 <= lookahead && lookahead <= 42888) ||
          (42891 <= lookahead && lookahead <= 42943) ||
          (42946 <= lookahead && lookahead <= 42950) ||
          (42999 <= lookahead && lookahead <= 43009) ||
          (43011 <= lookahead && lookahead <= 43013) ||
          (43015 <= lookahead && lookahead <= 43018) ||
          (43020 <= lookahead && lookahead <= 43042) ||
          (43072 <= lookahead && lookahead <= 43123) ||
          (43138 <= lookahead && lookahead <= 43187) ||
          (43250 <= lookahead && lookahead <= 43255) ||
          lookahead == 43259 ||
          lookahead == 43261 ||
          lookahead == 43262 ||
          (43274 <= lookahead && lookahead <= 43301) ||
          (43312 <= lookahead && lookahead <= 43334) ||
          (43360 <= lookahead && lookahead <= 43388) ||
          (43396 <= lookahead && lookahead <= 43442) ||
          lookahead == 43471 ||
          (43488 <= lookahead && lookahead <= 43492) ||
          (43494 <= lookahead && lookahead <= 43503) ||
          (43514 <= lookahead && lookahead <= 43518) ||
          (43520 <= lookahead && lookahead <= 43560) ||
          (43584 <= lookahead && lookahead <= 43586) ||
          (43588 <= lookahead && lookahead <= 43595) ||
          (43616 <= lookahead && lookahead <= 43638) ||
          lookahead == 43642 ||
          (43646 <= lookahead && lookahead <= 43695) ||
          lookahead == 43697 ||
          lookahead == 43701 ||
          lookahead == 43702 ||
          (43705 <= lookahead && lookahead <= 43709) ||
          lookahead == 43712 ||
          lookahead == 43714 ||
          (43739 <= lookahead && lookahead <= 43741) ||
          (43744 <= lookahead && lookahead <= 43754) ||
          (43762 <= lookahead && lookahead <= 43764) ||
          (43777 <= lookahead && lookahead <= 43782) ||
          (43785 <= lookahead && lookahead <= 43790) ||
          (43793 <= lookahead && lookahead <= 43798) ||
          (43808 <= lookahead && lookahead <= 43814) ||
          (43816 <= lookahead && lookahead <= 43822) ||
          (43824 <= lookahead && lookahead <= 43866) ||
          (43868 <= lookahead && lookahead <= 43879) ||
          (43888 <= lookahead && lookahead <= 44002) ||
          (44032 <= lookahead && lookahead <= 55203) ||
          (55216 <= lookahead && lookahead <= 55238) ||
          (55243 <= lookahead && lookahead <= 55291) ||
          (63744 <= lookahead && lookahead <= 64109) ||
          (64112 <= lookahead && lookahead <= 64217) ||
          (64256 <= lookahead && lookahead <= 64262) ||
          (64275 <= lookahead && lookahead <= 64279) ||
          lookahead == 64285 ||
          (64287 <= lookahead && lookahead <= 64296) ||
          (64298 <= lookahead && lookahead <= 64310) ||
          (64312 <= lookahead && lookahead <= 64316) ||
          lookahead == 64318 ||
          lookahead == 64320 ||
          lookahead == 64321 ||
          lookahead == 64323 ||
          lookahead == 64324 ||
          (64326 <= lookahead && lookahead <= 64433) ||
          (64467 <= lookahead && lookahead <= 64829) ||
          (64848 <= lookahead && lookahead <= 64911) ||
          (64914 <= lookahead && lookahead <= 64967) ||
          (65008 <= lookahead && lookahead <= 65019) ||
          (65136 <= lookahead && lookahead <= 65140) ||
          (65142 <= lookahead && lookahead <= 65276) ||
          (65313 <= lookahead && lookahead <= 65338) ||
          (65345 <= lookahead && lookahead <= 65370) ||
          (65382 <= lookahead && lookahead <= 65470) ||
          (65474 <= lookahead && lookahead <= 65479) ||
          (65482 <= lookahead && lookahead <= 65487) ||
          (65490 <= lookahead && lookahead <= 65495) ||
          (65498 <= lookahead && lookahead <= 65500) ||
          (65536 <= lookahead && lookahead <= 65547) ||
          (65549 <= lookahead && lookahead <= 65574) ||
          (65576 <= lookahead && lookahead <= 65594) ||
          lookahead == 65596 ||
          lookahead == 65597 ||
          (65599 <= lookahead && lookahead <= 65613) ||
          (65616 <= lookahead && lookahead <= 65629) ||
          (65664 <= lookahead && lookahead <= 65786) ||
          (66176 <= lookahead && lookahead <= 66204) ||
          (66208 <= lookahead && lookahead <= 66256) ||
          (66304 <= lookahead && lookahead <= 66335) ||
          (66349 <= lookahead && lookahead <= 66368) ||
          (66370 <= lookahead && lookahead <= 66377) ||
          (66384 <= lookahead && lookahead <= 66421) ||
          (66432 <= lookahead && lookahead <= 66461) ||
          (66464 <= lookahead && lookahead <= 66499) ||
          (66504 <= lookahead && lookahead <= 66511) ||
          (66560 <= lookahead && lookahead <= 66717) ||
          (66736 <= lookahead && lookahead <= 66771) ||
          (66776 <= lookahead && lookahead <= 66811) ||
          (66816 <= lookahead && lookahead <= 66855) ||
          (66864 <= lookahead && lookahead <= 66915) ||
          (67072 <= lookahead && lookahead <= 67382) ||
          (67392 <= lookahead && lookahead <= 67413) ||
          (67424 <= lookahead && lookahead <= 67431) ||
          (67584 <= lookahead && lookahead <= 67589) ||
          lookahead == 67592 ||
          (67594 <= lookahead && lookahead <= 67637) ||
          lookahead == 67639 ||
          lookahead == 67640 ||
          lookahead == 67644 ||
          (67647 <= lookahead && lookahead <= 67669) ||
          (67680 <= lookahead && lookahead <= 67702) ||
          (67712 <= lookahead && lookahead <= 67742) ||
          (67808 <= lookahead && lookahead <= 67826) ||
          lookahead == 67828 ||
          lookahead == 67829 ||
          (67840 <= lookahead && lookahead <= 67861) ||
          (67872 <= lookahead && lookahead <= 67897) ||
          (67968 <= lookahead && lookahead <= 68023) ||
          lookahead == 68030 ||
          lookahead == 68031 ||
          lookahead == 68096 ||
          (68112 <= lookahead && lookahead <= 68115) ||
          (68117 <= lookahead && lookahead <= 68119) ||
          (68121 <= lookahead && lookahead <= 68149) ||
          (68192 <= lookahead && lookahead <= 68220) ||
          (68224 <= lookahead && lookahead <= 68252) ||
          (68288 <= lookahead && lookahead <= 68295) ||
          (68297 <= lookahead && lookahead <= 68324) ||
          (68352 <= lookahead && lookahead <= 68405) ||
          (68416 <= lookahead && lookahead <= 68437) ||
          (68448 <= lookahead && lookahead <= 68466) ||
          (68480 <= lookahead && lookahead <= 68497) ||
          (68608 <= lookahead && lookahead <= 68680) ||
          (68736 <= lookahead && lookahead <= 68786) ||
          (68800 <= lookahead && lookahead <= 68850) ||
          (68864 <= lookahead && lookahead <= 68899) ||
          (69376 <= lookahead && lookahead <= 69404) ||
          lookahead == 69415 ||
          (69424 <= lookahead && lookahead <= 69445) ||
          (69600 <= lookahead && lookahead <= 69622) ||
          (69635 <= lookahead && lookahead <= 69687) ||
          (69763 <= lookahead && lookahead <= 69807) ||
          (69840 <= lookahead && lookahead <= 69864) ||
          (69891 <= lookahead && lookahead <= 69926) ||
          lookahead == 69956 ||
          (69968 <= lookahead && lookahead <= 70002) ||
          lookahead == 70006 ||
          (70019 <= lookahead && lookahead <= 70066) ||
          (70081 <= lookahead && lookahead <= 70084) ||
          lookahead == 70106 ||
          lookahead == 70108 ||
          (70144 <= lookahead && lookahead <= 70161) ||
          (70163 <= lookahead && lookahead <= 70187) ||
          (70272 <= lookahead && lookahead <= 70278) ||
          lookahead == 70280 ||
          (70282 <= lookahead && lookahead <= 70285) ||
          (70287 <= lookahead && lookahead <= 70301) ||
          (70303 <= lookahead && lookahead <= 70312) ||
          (70320 <= lookahead && lookahead <= 70366) ||
          (70405 <= lookahead && lookahead <= 70412) ||
          lookahead == 70415 ||
          lookahead == 70416 ||
          (70419 <= lookahead && lookahead <= 70440) ||
          (70442 <= lookahead && lookahead <= 70448) ||
          lookahead == 70450 ||
          lookahead == 70451 ||
          (70453 <= lookahead && lookahead <= 70457) ||
          lookahead == 70461 ||
          lookahead == 70480 ||
          (70493 <= lookahead && lookahead <= 70497) ||
          (70656 <= lookahead && lookahead <= 70708) ||
          (70727 <= lookahead && lookahead <= 70730) ||
          lookahead == 70751 ||
          (70784 <= lookahead && lookahead <= 70831) ||
          lookahead == 70852 ||
          lookahead == 70853 ||
          lookahead == 70855 ||
          (71040 <= lookahead && lookahead <= 71086) ||
          (71128 <= lookahead && lookahead <= 71131) ||
          (71168 <= lookahead && lookahead <= 71215) ||
          lookahead == 71236 ||
          (71296 <= lookahead && lookahead <= 71338) ||
          lookahead == 71352 ||
          (71424 <= lookahead && lookahead <= 71450) ||
          (71680 <= lookahead && lookahead <= 71723) ||
          (71840 <= lookahead && lookahead <= 71903) ||
          lookahead == 71935 ||
          (72096 <= lookahead && lookahead <= 72103) ||
          (72106 <= lookahead && lookahead <= 72144) ||
          lookahead == 72161 ||
          lookahead == 72163 ||
          lookahead == 72192 ||
          (72203 <= lookahead && lookahead <= 72242) ||
          lookahead == 72250 ||
          lookahead == 72272 ||
          (72284 <= lookahead && lookahead <= 72329) ||
          lookahead == 72349 ||
          (72384 <= lookahead && lookahead <= 72440) ||
          (72704 <= lookahead && lookahead <= 72712) ||
          (72714 <= lookahead && lookahead <= 72750) ||
          lookahead == 72768 ||
          (72818 <= lookahead && lookahead <= 72847) ||
          (72960 <= lookahead && lookahead <= 72966) ||
          lookahead == 72968 ||
          lookahead == 72969 ||
          (72971 <= lookahead && lookahead <= 73008) ||
          lookahead == 73030 ||
          (73056 <= lookahead && lookahead <= 73061) ||
          lookahead == 73063 ||
          lookahead == 73064 ||
          (73066 <= lookahead && lookahead <= 73097) ||
          lookahead == 73112 ||
          (73440 <= lookahead && lookahead <= 73458) ||
          (73728 <= lookahead && lookahead <= 74649) ||
          (74880 <= lookahead && lookahead <= 75075) ||
          (77824 <= lookahead && lookahead <= 78894) ||
          (82944 <= lookahead && lookahead <= 83526) ||
          (92160 <= lookahead && lookahead <= 92728) ||
          (92736 <= lookahead && lookahead <= 92766) ||
          (92880 <= lookahead && lookahead <= 92909) ||
          (92928 <= lookahead && lookahead <= 92975) ||
          (92992 <= lookahead && lookahead <= 92995) ||
          (93027 <= lookahead && lookahead <= 93047) ||
          (93053 <= lookahead && lookahead <= 93071) ||
          (93760 <= lookahead && lookahead <= 93823) ||
          (93952 <= lookahead && lookahead <= 94026) ||
          lookahead == 94032 ||
          (94099 <= lookahead && lookahead <= 94111) ||
          lookahead == 94176 ||
          lookahead == 94177 ||
          lookahead == 94179 ||
          (94208 <= lookahead && lookahead <= 100343) ||
          (100352 <= lookahead && lookahead <= 101106) ||
          (110592 <= lookahead && lookahead <= 110878) ||
          (110928 <= lookahead && lookahead <= 110930) ||
          (110948 <= lookahead && lookahead <= 110951) ||
          (110960 <= lookahead && lookahead <= 111355) ||
          (113664 <= lookahead && lookahead <= 113770) ||
          (113776 <= lookahead && lookahead <= 113788) ||
          (113792 <= lookahead && lookahead <= 113800) ||
          (113808 <= lookahead && lookahead <= 113817) ||
          (119808 <= lookahead && lookahead <= 119892) ||
          (119894 <= lookahead && lookahead <= 119964) ||
          lookahead == 119966 ||
          lookahead == 119967 ||
          lookahead == 119970 ||
          lookahead == 119973 ||
          lookahead == 119974 ||
          (119977 <= lookahead && lookahead <= 119980) ||
          (119982 <= lookahead && lookahead <= 119993) ||
          lookahead == 119995 ||
          (119997 <= lookahead && lookahead <= 120003) ||
          (120005 <= lookahead && lookahead <= 120069) ||
          (120071 <= lookahead && lookahead <= 120074) ||
          (120077 <= lookahead && lookahead <= 120084) ||
          (120086 <= lookahead && lookahead <= 120092) ||
          (120094 <= lookahead && lookahead <= 120121) ||
          (120123 <= lookahead && lookahead <= 120126) ||
          (120128 <= lookahead && lookahead <= 120132) ||
          lookahead == 120134 ||
          (120138 <= lookahead && lookahead <= 120144) ||
          (120146 <= lookahead && lookahead <= 120485) ||
          (120488 <= lookahead && lookahead <= 120512) ||
          (120514 <= lookahead && lookahead <= 120538) ||
          (120540 <= lookahead && lookahead <= 120570) ||
          (120572 <= lookahead && lookahead <= 120596) ||
          (120598 <= lookahead && lookahead <= 120628) ||
          (120630 <= lookahead && lookahead <= 120654) ||
          (120656 <= lookahead && lookahead <= 120686) ||
          (120688 <= lookahead && lookahead <= 120712) ||
          (120714 <= lookahead && lookahead <= 120744) ||
          (120746 <= lookahead && lookahead <= 120770) ||
          (120772 <= lookahead && lookahead <= 120779) ||
          (123136 <= lookahead && lookahead <= 123180) ||
          (123191 <= lookahead && lookahead <= 123197) ||
          lookahead == 123214 ||
          (123584 <= lookahead && lookahead <= 123627) ||
          (124928 <= lookahead && lookahead <= 125124) ||
          (125184 <= lookahead && lookahead <= 125251) ||
          lookahead == 125259 ||
          (126464 <= lookahead && lookahead <= 126467) ||
          (126469 <= lookahead && lookahead <= 126495) ||
          lookahead == 126497 ||
          lookahead == 126498 ||
          lookahead == 126500 ||
          lookahead == 126503 ||
          (126505 <= lookahead && lookahead <= 126514) ||
          (126516 <= lookahead && lookahead <= 126519) ||
          lookahead == 126521 ||
          lookahead == 126523 ||
          lookahead == 126530 ||
          lookahead == 126535 ||
          lookahead == 126537 ||
          lookahead == 126539 ||
          (126541 <= lookahead && lookahead <= 126543) ||
          lookahead == 126545 ||
          lookahead == 126546 ||
          lookahead == 126548 ||
          lookahead == 126551 ||
          lookahead == 126553 ||
          lookahead == 126555 ||
          lookahead == 126557 ||
          lookahead == 126559 ||
          lookahead == 126561 ||
          lookahead == 126562 ||
          lookahead == 126564 ||
          (126567 <= lookahead && lookahead <= 126570) ||
          (126572 <= lookahead && lookahead <= 126578) ||
          (126580 <= lookahead && lookahead <= 126583) ||
          (126585 <= lookahead && lookahead <= 126588) ||
          lookahead == 126590 ||
          (126592 <= lookahead && lookahead <= 126601) ||
          (126603 <= lookahead && lookahead <= 126619) ||
          (126625 <= lookahead && lookahead <= 126627) ||
          (126629 <= lookahead && lookahead <= 126633) ||
          (126635 <= lookahead && lookahead <= 126651) ||
          (131072 <= lookahead && lookahead <= 173782) ||
          (173824 <= lookahead && lookahead <= 177972) ||
          (177984 <= lookahead && lookahead <= 178205) ||
          (178208 <= lookahead && lookahead <= 183969) ||
          (183984 <= lookahead && lookahead <= 191456) ||
          (194560 <= lookahead && lookahead <= 195101)) ADVANCE(180);
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
  [133] = {.lex_state = 103},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 103},
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
  [154] = {.lex_state = 23},
  [155] = {.lex_state = 24},
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
  [217] = {.lex_state = 118},
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
