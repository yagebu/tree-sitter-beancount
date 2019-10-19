#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 241
#define SYMBOL_COUNT 99
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
  sym_key_value_value = 51,
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
  sym_transaction = 71,
  sym_balance = 72,
  sym_close = 73,
  sym_commodity = 74,
  sym_custom = 75,
  sym_document = 76,
  sym_event = 77,
  sym_note = 78,
  sym_open = 79,
  sym_pad = 80,
  sym_price = 81,
  sym_query = 82,
  sym_currency_list = 83,
  sym_amount = 84,
  sym_amount_with_tolerance = 85,
  sym__num_expr = 86,
  sym__paren_num_expr = 87,
  sym_unary_num_expr = 88,
  sym_binary_num_expr = 89,
  sym__tag_or_link = 90,
  aux_sym_beancount_file_repeat1 = 91,
  aux_sym_metadata_repeat1 = 92,
  aux_sym_cost_comp_list_repeat1 = 93,
  aux_sym_postings_repeat1 = 94,
  aux_sym_transaction_repeat1 = 95,
  aux_sym_custom_repeat1 = 96,
  aux_sym_document_repeat1 = 97,
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
  [sym_key_value_value] = "key_value_value",
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
  [aux_sym_transaction_repeat1] = "transaction_repeat1",
  [aux_sym_custom_repeat1] = "custom_repeat1",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_currency_list_repeat1] = "currency_list_repeat1",
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
  [sym_key_value_value] = {
    .visible = true,
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
  [aux_sym_transaction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_custom_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat1] = {
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
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 3},
  [6] = {.index = 9, .length = 3},
  [7] = {.index = 12, .length = 3},
  [8] = {.index = 15, .length = 2},
  [9] = {.index = 17, .length = 3},
  [10] = {.index = 20, .length = 3},
  [11] = {.index = 23, .length = 3},
  [12] = {.index = 26, .length = 3},
  [13] = {.index = 29, .length = 3},
  [14] = {.index = 32, .length = 3},
  [15] = {.index = 35, .length = 3},
  [16] = {.index = 38, .length = 3},
  [17] = {.index = 41, .length = 3},
  [18] = {.index = 44, .length = 1},
  [19] = {.index = 45, .length = 2},
  [20] = {.index = 47, .length = 2},
  [21] = {.index = 49, .length = 2},
  [22] = {.index = 51, .length = 4},
  [23] = {.index = 55, .length = 4},
  [24] = {.index = 59, .length = 4},
  [25] = {.index = 63, .length = 3},
  [26] = {.index = 66, .length = 4},
  [27] = {.index = 70, .length = 4},
  [28] = {.index = 74, .length = 4},
  [29] = {.index = 78, .length = 4},
  [30] = {.index = 82, .length = 4},
  [31] = {.index = 86, .length = 4},
  [32] = {.index = 90, .length = 4},
  [33] = {.index = 94, .length = 4},
  [34] = {.index = 98, .length = 4},
  [35] = {.index = 102, .length = 4},
  [36] = {.index = 106, .length = 2},
  [37] = {.index = 108, .length = 2},
  [38] = {.index = 110, .length = 2},
  [39] = {.index = 112, .length = 3},
  [40] = {.index = 115, .length = 3},
  [41] = {.index = 118, .length = 3},
  [42] = {.index = 121, .length = 5},
  [43] = {.index = 126, .length = 5},
  [44] = {.index = 131, .length = 5},
  [45] = {.index = 136, .length = 5},
  [46] = {.index = 141, .length = 3},
  [47] = {.index = 144, .length = 3},
  [48] = {.index = 147, .length = 3},
  [49] = {.index = 150, .length = 4},
  [50] = {.index = 154, .length = 6},
  [51] = {.index = 160, .length = 4},
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
    {field_account, 1},
  [6] =
    {field_date, 0},
    {field_flag, 1},
    {field_postings, 2},
  [9] =
    {field_account, 2},
    {field_amount, 3},
    {field_date, 0},
  [12] =
    {field_account, 2},
    {field_date, 0},
    {field_metadata, 3},
  [15] =
    {field_date, 0},
    {field_metadata, 3},
  [17] =
    {field_date, 0},
    {field_metadata, 3},
    {field_name, 2},
  [20] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
  [23] =
    {field_date, 0},
    {field_description, 3},
    {field_type, 2},
  [26] =
    {field_account, 2},
    {field_date, 0},
    {field_note, 3},
  [29] =
    {field_account, 2},
    {field_booking, 3},
    {field_date, 0},
  [32] =
    {field_account, 2},
    {field_currencies, 3},
    {field_date, 0},
  [35] =
    {field_account, 2},
    {field_date, 0},
    {field_from_account, 3},
  [38] =
    {field_amount, 3},
    {field_currency, 2},
    {field_date, 0},
  [41] =
    {field_date, 0},
    {field_name, 2},
    {field_query, 3},
  [44] =
    {field_account, 2},
  [45] =
    {field_account, 1},
    {field_cost_spec, 2},
  [47] =
    {field_account, 1},
    {field_amount, 2},
  [49] =
    {field_account, 1},
    {field_price_annotation, 2},
  [51] =
    {field_date, 0},
    {field_flag, 1},
    {field_postings, 3},
    {field_txn_strings, 2},
  [55] =
    {field_date, 0},
    {field_flag, 1},
    {field_postings, 3},
    {field_tags_and_links, 2},
  [59] =
    {field_account, 2},
    {field_amount, 3},
    {field_date, 0},
    {field_metadata, 4},
  [63] =
    {field_date, 0},
    {field_metadata, 4},
    {field_name, 2},
  [66] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
    {field_metadata, 4},
  [70] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
    {field_tags_and_links, 4},
  [74] =
    {field_date, 0},
    {field_description, 3},
    {field_metadata, 4},
    {field_type, 2},
  [78] =
    {field_account, 2},
    {field_date, 0},
    {field_metadata, 4},
    {field_note, 3},
  [82] =
    {field_account, 2},
    {field_booking, 3},
    {field_date, 0},
    {field_metadata, 4},
  [86] =
    {field_account, 2},
    {field_booking, 4},
    {field_currencies, 3},
    {field_date, 0},
  [90] =
    {field_account, 2},
    {field_currencies, 3},
    {field_date, 0},
    {field_metadata, 4},
  [94] =
    {field_account, 2},
    {field_date, 0},
    {field_from_account, 3},
    {field_metadata, 4},
  [98] =
    {field_amount, 3},
    {field_currency, 2},
    {field_date, 0},
    {field_metadata, 4},
  [102] =
    {field_date, 0},
    {field_metadata, 4},
    {field_name, 2},
    {field_query, 3},
  [106] =
    {field_account, 2},
    {field_cost_spec, 3},
  [108] =
    {field_account, 2},
    {field_amount, 3},
  [110] =
    {field_account, 2},
    {field_price_annotation, 3},
  [112] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_price_annotation, 3},
  [115] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
  [118] =
    {field_account, 1},
    {field_amount, 2},
    {field_price_annotation, 3},
  [121] =
    {field_date, 0},
    {field_flag, 1},
    {field_postings, 4},
    {field_txn_strings, 2},
    {field_txn_strings, 3},
  [126] =
    {field_date, 0},
    {field_flag, 1},
    {field_postings, 4},
    {field_tags_and_links, 3},
    {field_txn_strings, 2},
  [131] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
    {field_metadata, 5},
    {field_tags_and_links, 4},
  [136] =
    {field_account, 2},
    {field_booking, 4},
    {field_currencies, 3},
    {field_date, 0},
    {field_metadata, 5},
  [141] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_price_annotation, 4},
  [144] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
  [147] =
    {field_account, 2},
    {field_amount, 3},
    {field_price_annotation, 4},
  [150] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_price_annotation, 4},
  [154] =
    {field_date, 0},
    {field_flag, 1},
    {field_postings, 5},
    {field_tags_and_links, 4},
    {field_txn_strings, 2},
    {field_txn_strings, 3},
  [160] =
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
      if (lookahead == 0) ADVANCE(156);
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '"') ADVANCE(9);
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
      if (lookahead == '^') ADVANCE(153);
      if (lookahead == 'b') ADVANCE(46);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'd') ADVANCE(95);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(101);
      if (lookahead == 'p') ADVANCE(47);
      if (lookahead == 'q') ADVANCE(115);
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
          (lookahead < '' || '>' < lookahead) &&
          (lookahead < '[' || '' < lookahead)) ADVANCE(42);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(156);
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == ':') ADVANCE(161);
      if (lookahead == ';') ADVANCE(162);
      if (lookahead == 'b') ADVANCE(46);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'd') ADVANCE(95);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(101);
      if (lookahead == 'p') ADVANCE(47);
      if (lookahead == 'q') ADVANCE(115);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
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
    case 2:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(178);
      if (lookahead == '(') ADVANCE(193);
      if (lookahead == '*') ADVANCE(177);
      if (lookahead == '+') ADVANCE(196);
      if (lookahead == ',') ADVANCE(176);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == '@') ADVANCE(180);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '}') ADVANCE(173);
      if (lookahead == '~') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '(') ADVANCE(193);
      if (lookahead == ')') ADVANCE(194);
      if (lookahead == '*') ADVANCE(177);
      if (lookahead == '+') ADVANCE(196);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == 'F') ADVANCE(36);
      if (lookahead == 'T') ADVANCE(39);
      if (lookahead == '^') ADVANCE(153);
      if (lookahead == '}') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead != 0 &&
          (lookahead < 0 || '@' < lookahead) &&
          (lookahead < '[' || '' < lookahead)) ADVANCE(42);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '(') ADVANCE(193);
      if (lookahead == '*') ADVANCE(177);
      if (lookahead == '+') ADVANCE(196);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == 'F') ADVANCE(33);
      if (lookahead == 'T') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(35);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead)) ADVANCE(42);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(178);
      if (lookahead == '(') ADVANCE(193);
      if (lookahead == '*') ADVANCE(177);
      if (lookahead == '+') ADVANCE(196);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '(') ADVANCE(193);
      if (lookahead == '+') ADVANCE(196);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'F') ADVANCE(33);
      if (lookahead == 'T') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(35);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead)) ADVANCE(42);
      END_STATE();
    case 7:
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
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(178);
      if (lookahead == '(') ADVANCE(193);
      if (lookahead == '*') ADVANCE(177);
      if (lookahead == '+') ADVANCE(196);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '}') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == ';') ADVANCE(162);
      if (lookahead == '^') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
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
          (lookahead < '[' || '' < lookahead)) ADVANCE(42);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 11:
      if (lookahead == ',') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(151);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(234);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(209);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(124);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(126);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(211);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(127);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(208);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(213);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(210);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(130);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(215);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(131);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(212);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(217);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(133);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(214);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(134);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(219);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(135);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(216);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(221);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(223);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(226);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(222);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(232);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == 'A') ADVANCE(227);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(229);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == 'R') ADVANCE(228);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(229);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(229);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == 'A') ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == 'E') ADVANCE(200);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == 'L') ADVANCE(40);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == 'R') ADVANCE(41);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == 'S') ADVANCE(37);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == 'U') ADVANCE(37);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          (lookahead < '.' || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(233);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == ';') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
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
          (lookahead < '[' || '' < lookahead)) ADVANCE(42);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'l') ADVANCE(114);
      if (lookahead == 'o') ADVANCE(102);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(189);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(168);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(167);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(86);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(184);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(97);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(70);
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 114:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 117:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 118:
      if (lookahead == 'v') ADVANCE(66);
      END_STATE();
    case 119:
      if (lookahead == 'y') ADVANCE(191);
      END_STATE();
    case 120:
      if (lookahead == 'y') ADVANCE(183);
      END_STATE();
    case 121:
      if (lookahead == '}') ADVANCE(175);
      END_STATE();
    case 122:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 123:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(148);
      END_STATE();
    case 124:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(256);
      END_STATE();
    case 125:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(235);
      END_STATE();
    case 126:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      END_STATE();
    case 127:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(236);
      END_STATE();
    case 128:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(240);
      END_STATE();
    case 129:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(237);
      END_STATE();
    case 130:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(242);
      END_STATE();
    case 131:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(239);
      END_STATE();
    case 132:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      END_STATE();
    case 133:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      END_STATE();
    case 134:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(246);
      END_STATE();
    case 135:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(243);
      END_STATE();
    case 136:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(248);
      END_STATE();
    case 137:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(245);
      END_STATE();
    case 138:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(250);
      END_STATE();
    case 139:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(247);
      END_STATE();
    case 140:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 141:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 142:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 143:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(251);
      END_STATE();
    case 144:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 145:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(253);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      END_STATE();
    case 152:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 153:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 154:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 155:
      if (lookahead != 0 &&
          (lookahead < 0 || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '' < lookahead)) ADVANCE(269);
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
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(226);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(222);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
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
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(151);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(234);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(209);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(124);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(126);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(127);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(208);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(210);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(130);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(215);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(131);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(212);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(217);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(133);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(214);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(134);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(135);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(216);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(223);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == 'E') ADVANCE(199);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(226);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(222);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == 'L') ADVANCE(231);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(232);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == 'U') ADVANCE(230);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(232);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(232);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == 'E') ADVANCE(198);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == 'S') ADVANCE(224);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          (lookahead < '.' || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(233);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(256);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(235);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(236);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(240);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(237);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(239);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(243);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(245);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(247);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(251);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(142);
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
      if (lookahead == ',') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(146);
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
      if (lookahead == ':') ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(42);
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
      if (lookahead == ':') ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '' < lookahead)) ADVANCE(269);
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
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
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
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 45},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
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
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 2},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 157},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 1},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 1},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 1},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 3},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 3},
  [236] = {.lex_state = 3},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 1},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
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
    [sym_beancount_file] = STATE(232),
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
  [2] = {
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
    [ts_builtin_sym_end] = ACTIONS(27),
    [aux_sym__skipped_lines_token2] = ACTIONS(29),
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym__skipped_lines_token3] = ACTIONS(35),
    [anon_sym_include] = ACTIONS(38),
    [anon_sym_option] = ACTIONS(41),
    [anon_sym_plugin] = ACTIONS(44),
    [anon_sym_pushtag] = ACTIONS(47),
    [anon_sym_poptag] = ACTIONS(50),
    [anon_sym_pushmeta] = ACTIONS(53),
    [anon_sym_popmeta] = ACTIONS(56),
    [sym_date] = ACTIONS(59),
    [sym_flag] = ACTIONS(32),
  },
  [3] = {
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
    [ts_builtin_sym_end] = ACTIONS(62),
    [aux_sym__skipped_lines_token2] = ACTIONS(64),
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
  [4] = {
    [sym_metadata] = STATE(190),
    [sym_amount] = STATE(12),
    [sym__num_expr] = STATE(60),
    [sym__paren_num_expr] = STATE(60),
    [sym_unary_num_expr] = STATE(60),
    [sym_binary_num_expr] = STATE(60),
    [aux_sym_metadata_repeat1] = STATE(157),
    [aux_sym_custom_repeat1] = STATE(12),
    [aux_sym__skipped_lines_token2] = ACTIONS(66),
    [aux_sym_metadata_token1] = ACTIONS(68),
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
    [sym_metadata] = STATE(179),
    [sym_amount] = STATE(4),
    [sym__num_expr] = STATE(60),
    [sym__paren_num_expr] = STATE(60),
    [sym_unary_num_expr] = STATE(60),
    [sym_binary_num_expr] = STATE(60),
    [aux_sym_metadata_repeat1] = STATE(157),
    [aux_sym_custom_repeat1] = STATE(4),
    [aux_sym__skipped_lines_token2] = ACTIONS(80),
    [aux_sym_metadata_token1] = ACTIONS(68),
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
    [sym_cost_spec] = STATE(133),
    [sym_incomplete_amount] = STATE(90),
    [sym_price_annotation] = STATE(173),
    [sym__num_expr] = STATE(73),
    [sym__paren_num_expr] = STATE(73),
    [sym_unary_num_expr] = STATE(73),
    [sym_binary_num_expr] = STATE(73),
    [aux_sym__skipped_lines_token2] = ACTIONS(86),
    [aux_sym_metadata_token1] = ACTIONS(88),
    [anon_sym_LBRACE] = ACTIONS(90),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(92),
    [anon_sym_AT_AT] = ACTIONS(94),
    [anon_sym_AT] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_DASH] = ACTIONS(100),
    [anon_sym_PLUS] = ACTIONS(100),
    [sym_currency] = ACTIONS(102),
    [sym_number] = ACTIONS(104),
  },
  [7] = {
    [sym_cost_spec] = STATE(118),
    [sym_incomplete_amount] = STATE(101),
    [sym_price_annotation] = STATE(164),
    [sym__num_expr] = STATE(73),
    [sym__paren_num_expr] = STATE(73),
    [sym_unary_num_expr] = STATE(73),
    [sym_binary_num_expr] = STATE(73),
    [aux_sym__skipped_lines_token2] = ACTIONS(106),
    [aux_sym_metadata_token1] = ACTIONS(108),
    [anon_sym_LBRACE] = ACTIONS(90),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(92),
    [anon_sym_AT_AT] = ACTIONS(94),
    [anon_sym_AT] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_DASH] = ACTIONS(100),
    [anon_sym_PLUS] = ACTIONS(100),
    [sym_currency] = ACTIONS(102),
    [sym_number] = ACTIONS(104),
  },
  [8] = {
    [sym_key_value_value] = STATE(161),
    [sym_amount] = STATE(163),
    [sym__num_expr] = STATE(108),
    [sym__paren_num_expr] = STATE(108),
    [sym_unary_num_expr] = STATE(108),
    [sym_binary_num_expr] = STATE(108),
    [aux_sym__skipped_lines_token2] = ACTIONS(110),
    [aux_sym_metadata_token1] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_DASH] = ACTIONS(100),
    [anon_sym_PLUS] = ACTIONS(100),
    [sym_bool] = ACTIONS(114),
    [sym_date] = ACTIONS(116),
    [sym_tag] = ACTIONS(116),
    [sym_string] = ACTIONS(116),
    [sym_currency] = ACTIONS(114),
    [sym_number] = ACTIONS(118),
    [sym_account] = ACTIONS(116),
  },
  [9] = {
    [sym_cost_comp_list] = STATE(188),
    [sym_cost_comp] = STATE(141),
    [sym_compound_amount] = STATE(152),
    [sym__num_expr] = STATE(89),
    [sym__paren_num_expr] = STATE(89),
    [sym_unary_num_expr] = STATE(89),
    [sym_binary_num_expr] = STATE(89),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(122),
    [anon_sym_POUND] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [sym_date] = ACTIONS(122),
    [sym_string] = ACTIONS(122),
    [sym_currency] = ACTIONS(130),
    [sym_number] = ACTIONS(132),
  },
  [10] = {
    [sym_cost_comp_list] = STATE(191),
    [sym_cost_comp] = STATE(141),
    [sym_compound_amount] = STATE(152),
    [sym__num_expr] = STATE(89),
    [sym__paren_num_expr] = STATE(89),
    [sym_unary_num_expr] = STATE(89),
    [sym_binary_num_expr] = STATE(89),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(122),
    [anon_sym_POUND] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [sym_date] = ACTIONS(122),
    [sym_string] = ACTIONS(122),
    [sym_currency] = ACTIONS(130),
    [sym_number] = ACTIONS(132),
  },
  [11] = {
    [sym_key_value_value] = STATE(193),
    [sym_amount] = STATE(178),
    [sym__num_expr] = STATE(112),
    [sym__paren_num_expr] = STATE(112),
    [sym_unary_num_expr] = STATE(112),
    [sym_binary_num_expr] = STATE(112),
    [aux_sym__skipped_lines_token2] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [sym_bool] = ACTIONS(134),
    [sym_date] = ACTIONS(136),
    [sym_tag] = ACTIONS(136),
    [sym_string] = ACTIONS(136),
    [sym_currency] = ACTIONS(134),
    [sym_number] = ACTIONS(138),
    [sym_account] = ACTIONS(136),
  },
  [12] = {
    [sym_amount] = STATE(12),
    [sym__num_expr] = STATE(60),
    [sym__paren_num_expr] = STATE(60),
    [sym_unary_num_expr] = STATE(60),
    [sym_binary_num_expr] = STATE(60),
    [aux_sym_custom_repeat1] = STATE(12),
    [aux_sym__skipped_lines_token2] = ACTIONS(140),
    [aux_sym_metadata_token1] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [sym_bool] = ACTIONS(150),
    [sym_date] = ACTIONS(153),
    [sym_string] = ACTIONS(153),
    [sym_number] = ACTIONS(156),
    [sym_account] = ACTIONS(153),
  },
  [13] = {
    [sym_cost_comp] = STATE(160),
    [sym_compound_amount] = STATE(152),
    [sym__num_expr] = STATE(89),
    [sym__paren_num_expr] = STATE(89),
    [sym_unary_num_expr] = STATE(89),
    [sym_binary_num_expr] = STATE(89),
    [anon_sym_STAR] = ACTIONS(122),
    [anon_sym_POUND] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [sym_date] = ACTIONS(122),
    [sym_string] = ACTIONS(122),
    [sym_currency] = ACTIONS(130),
    [sym_number] = ACTIONS(132),
  },
  [14] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(159),
    [aux_sym_metadata_token1] = ACTIONS(161),
    [anon_sym_STAR] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(161),
    [anon_sym_PLUS] = ACTIONS(161),
    [anon_sym_SLASH] = ACTIONS(161),
    [sym_bool] = ACTIONS(159),
    [sym_date] = ACTIONS(161),
    [sym_string] = ACTIONS(161),
    [sym_currency] = ACTIONS(159),
    [sym_number] = ACTIONS(159),
    [sym_account] = ACTIONS(161),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [aux_sym__skipped_lines_token2] = ACTIONS(163),
    [anon_sym_COLON] = ACTIONS(163),
    [aux_sym__skipped_lines_token3] = ACTIONS(163),
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
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [aux_sym__skipped_lines_token2] = ACTIONS(165),
    [anon_sym_COLON] = ACTIONS(165),
    [aux_sym__skipped_lines_token3] = ACTIONS(165),
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
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [aux_sym__skipped_lines_token2] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(167),
    [aux_sym__skipped_lines_token3] = ACTIONS(167),
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
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [aux_sym__skipped_lines_token2] = ACTIONS(169),
    [anon_sym_COLON] = ACTIONS(169),
    [aux_sym__skipped_lines_token3] = ACTIONS(169),
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
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [aux_sym__skipped_lines_token2] = ACTIONS(171),
    [anon_sym_COLON] = ACTIONS(171),
    [aux_sym__skipped_lines_token3] = ACTIONS(171),
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
  [20] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(159),
    [aux_sym_metadata_token1] = ACTIONS(161),
    [anon_sym_STAR] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(161),
    [anon_sym_PLUS] = ACTIONS(161),
    [anon_sym_SLASH] = ACTIONS(173),
    [sym_bool] = ACTIONS(159),
    [sym_date] = ACTIONS(161),
    [sym_string] = ACTIONS(161),
    [sym_currency] = ACTIONS(159),
    [sym_number] = ACTIONS(159),
    [sym_account] = ACTIONS(161),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [aux_sym__skipped_lines_token2] = ACTIONS(175),
    [anon_sym_COLON] = ACTIONS(175),
    [aux_sym__skipped_lines_token3] = ACTIONS(175),
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
  [22] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(177),
    [aux_sym_metadata_token1] = ACTIONS(179),
    [anon_sym_STAR] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(179),
    [sym_bool] = ACTIONS(177),
    [sym_date] = ACTIONS(179),
    [sym_string] = ACTIONS(179),
    [sym_currency] = ACTIONS(177),
    [sym_number] = ACTIONS(177),
    [sym_account] = ACTIONS(179),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [aux_sym__skipped_lines_token2] = ACTIONS(181),
    [anon_sym_COLON] = ACTIONS(181),
    [aux_sym__skipped_lines_token3] = ACTIONS(181),
    [anon_sym_include] = ACTIONS(181),
    [anon_sym_option] = ACTIONS(181),
    [anon_sym_plugin] = ACTIONS(181),
    [anon_sym_pushtag] = ACTIONS(181),
    [anon_sym_poptag] = ACTIONS(181),
    [anon_sym_pushmeta] = ACTIONS(181),
    [anon_sym_popmeta] = ACTIONS(181),
    [sym_date] = ACTIONS(181),
    [sym_flag] = ACTIONS(181),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(183),
    [aux_sym__skipped_lines_token2] = ACTIONS(183),
    [anon_sym_COLON] = ACTIONS(183),
    [aux_sym__skipped_lines_token3] = ACTIONS(183),
    [anon_sym_include] = ACTIONS(183),
    [anon_sym_option] = ACTIONS(183),
    [anon_sym_plugin] = ACTIONS(183),
    [anon_sym_pushtag] = ACTIONS(183),
    [anon_sym_poptag] = ACTIONS(183),
    [anon_sym_pushmeta] = ACTIONS(183),
    [anon_sym_popmeta] = ACTIONS(183),
    [sym_date] = ACTIONS(183),
    [sym_flag] = ACTIONS(183),
  },
  [25] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(185),
    [aux_sym_metadata_token1] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(187),
    [anon_sym_LPAREN] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(187),
    [sym_bool] = ACTIONS(185),
    [sym_date] = ACTIONS(187),
    [sym_string] = ACTIONS(187),
    [sym_currency] = ACTIONS(185),
    [sym_number] = ACTIONS(185),
    [sym_account] = ACTIONS(187),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [aux_sym__skipped_lines_token2] = ACTIONS(189),
    [anon_sym_COLON] = ACTIONS(189),
    [aux_sym__skipped_lines_token3] = ACTIONS(189),
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
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [aux_sym__skipped_lines_token2] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(191),
    [aux_sym__skipped_lines_token3] = ACTIONS(191),
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
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [aux_sym__skipped_lines_token2] = ACTIONS(193),
    [anon_sym_COLON] = ACTIONS(193),
    [aux_sym__skipped_lines_token3] = ACTIONS(193),
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
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [aux_sym__skipped_lines_token2] = ACTIONS(195),
    [anon_sym_COLON] = ACTIONS(195),
    [aux_sym__skipped_lines_token3] = ACTIONS(195),
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
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [aux_sym__skipped_lines_token2] = ACTIONS(197),
    [anon_sym_COLON] = ACTIONS(197),
    [aux_sym__skipped_lines_token3] = ACTIONS(197),
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
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [aux_sym__skipped_lines_token2] = ACTIONS(199),
    [anon_sym_COLON] = ACTIONS(199),
    [aux_sym__skipped_lines_token3] = ACTIONS(199),
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
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [aux_sym__skipped_lines_token2] = ACTIONS(201),
    [anon_sym_COLON] = ACTIONS(201),
    [aux_sym__skipped_lines_token3] = ACTIONS(201),
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
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [aux_sym__skipped_lines_token2] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(203),
    [aux_sym__skipped_lines_token3] = ACTIONS(203),
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
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [aux_sym__skipped_lines_token2] = ACTIONS(205),
    [anon_sym_COLON] = ACTIONS(205),
    [aux_sym__skipped_lines_token3] = ACTIONS(205),
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
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [aux_sym__skipped_lines_token2] = ACTIONS(207),
    [anon_sym_COLON] = ACTIONS(207),
    [aux_sym__skipped_lines_token3] = ACTIONS(207),
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
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [aux_sym__skipped_lines_token2] = ACTIONS(209),
    [anon_sym_COLON] = ACTIONS(209),
    [aux_sym__skipped_lines_token3] = ACTIONS(209),
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
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [aux_sym__skipped_lines_token2] = ACTIONS(211),
    [anon_sym_COLON] = ACTIONS(211),
    [aux_sym__skipped_lines_token3] = ACTIONS(211),
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
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [aux_sym__skipped_lines_token2] = ACTIONS(213),
    [anon_sym_COLON] = ACTIONS(213),
    [aux_sym__skipped_lines_token3] = ACTIONS(213),
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
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(215),
    [aux_sym__skipped_lines_token2] = ACTIONS(215),
    [anon_sym_COLON] = ACTIONS(215),
    [aux_sym__skipped_lines_token3] = ACTIONS(215),
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
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [aux_sym__skipped_lines_token2] = ACTIONS(217),
    [anon_sym_COLON] = ACTIONS(217),
    [aux_sym__skipped_lines_token3] = ACTIONS(217),
    [anon_sym_include] = ACTIONS(217),
    [anon_sym_option] = ACTIONS(217),
    [anon_sym_plugin] = ACTIONS(217),
    [anon_sym_pushtag] = ACTIONS(217),
    [anon_sym_poptag] = ACTIONS(217),
    [anon_sym_pushmeta] = ACTIONS(217),
    [anon_sym_popmeta] = ACTIONS(217),
    [sym_date] = ACTIONS(217),
    [sym_flag] = ACTIONS(217),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(219),
    [aux_sym__skipped_lines_token2] = ACTIONS(219),
    [anon_sym_COLON] = ACTIONS(219),
    [aux_sym__skipped_lines_token3] = ACTIONS(219),
    [anon_sym_include] = ACTIONS(219),
    [anon_sym_option] = ACTIONS(219),
    [anon_sym_plugin] = ACTIONS(219),
    [anon_sym_pushtag] = ACTIONS(219),
    [anon_sym_poptag] = ACTIONS(219),
    [anon_sym_pushmeta] = ACTIONS(219),
    [anon_sym_popmeta] = ACTIONS(219),
    [sym_date] = ACTIONS(219),
    [sym_flag] = ACTIONS(219),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(221),
    [aux_sym__skipped_lines_token2] = ACTIONS(221),
    [anon_sym_COLON] = ACTIONS(221),
    [aux_sym__skipped_lines_token3] = ACTIONS(221),
    [anon_sym_include] = ACTIONS(221),
    [anon_sym_option] = ACTIONS(221),
    [anon_sym_plugin] = ACTIONS(221),
    [anon_sym_pushtag] = ACTIONS(221),
    [anon_sym_poptag] = ACTIONS(221),
    [anon_sym_pushmeta] = ACTIONS(221),
    [anon_sym_popmeta] = ACTIONS(221),
    [sym_date] = ACTIONS(221),
    [sym_flag] = ACTIONS(221),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(223),
    [aux_sym__skipped_lines_token2] = ACTIONS(223),
    [anon_sym_COLON] = ACTIONS(223),
    [aux_sym__skipped_lines_token3] = ACTIONS(223),
    [anon_sym_include] = ACTIONS(223),
    [anon_sym_option] = ACTIONS(223),
    [anon_sym_plugin] = ACTIONS(223),
    [anon_sym_pushtag] = ACTIONS(223),
    [anon_sym_poptag] = ACTIONS(223),
    [anon_sym_pushmeta] = ACTIONS(223),
    [anon_sym_popmeta] = ACTIONS(223),
    [sym_date] = ACTIONS(223),
    [sym_flag] = ACTIONS(223),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(225),
    [aux_sym__skipped_lines_token2] = ACTIONS(225),
    [anon_sym_COLON] = ACTIONS(225),
    [aux_sym__skipped_lines_token3] = ACTIONS(225),
    [anon_sym_include] = ACTIONS(225),
    [anon_sym_option] = ACTIONS(225),
    [anon_sym_plugin] = ACTIONS(225),
    [anon_sym_pushtag] = ACTIONS(225),
    [anon_sym_poptag] = ACTIONS(225),
    [anon_sym_pushmeta] = ACTIONS(225),
    [anon_sym_popmeta] = ACTIONS(225),
    [sym_date] = ACTIONS(225),
    [sym_flag] = ACTIONS(225),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(227),
    [aux_sym__skipped_lines_token2] = ACTIONS(227),
    [anon_sym_COLON] = ACTIONS(227),
    [aux_sym__skipped_lines_token3] = ACTIONS(227),
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
    [aux_sym__skipped_lines_token2] = ACTIONS(229),
    [anon_sym_COLON] = ACTIONS(229),
    [aux_sym__skipped_lines_token3] = ACTIONS(229),
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
    [ts_builtin_sym_end] = ACTIONS(231),
    [aux_sym__skipped_lines_token2] = ACTIONS(231),
    [anon_sym_COLON] = ACTIONS(231),
    [aux_sym__skipped_lines_token3] = ACTIONS(231),
    [anon_sym_include] = ACTIONS(231),
    [anon_sym_option] = ACTIONS(231),
    [anon_sym_plugin] = ACTIONS(231),
    [anon_sym_pushtag] = ACTIONS(231),
    [anon_sym_poptag] = ACTIONS(231),
    [anon_sym_pushmeta] = ACTIONS(231),
    [anon_sym_popmeta] = ACTIONS(231),
    [sym_date] = ACTIONS(231),
    [sym_flag] = ACTIONS(231),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(233),
    [aux_sym__skipped_lines_token2] = ACTIONS(233),
    [anon_sym_COLON] = ACTIONS(233),
    [aux_sym__skipped_lines_token3] = ACTIONS(233),
    [anon_sym_include] = ACTIONS(233),
    [anon_sym_option] = ACTIONS(233),
    [anon_sym_plugin] = ACTIONS(233),
    [anon_sym_pushtag] = ACTIONS(233),
    [anon_sym_poptag] = ACTIONS(233),
    [anon_sym_pushmeta] = ACTIONS(233),
    [anon_sym_popmeta] = ACTIONS(233),
    [sym_date] = ACTIONS(233),
    [sym_flag] = ACTIONS(233),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(235),
    [aux_sym__skipped_lines_token2] = ACTIONS(235),
    [anon_sym_COLON] = ACTIONS(235),
    [aux_sym__skipped_lines_token3] = ACTIONS(235),
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
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [aux_sym__skipped_lines_token2] = ACTIONS(237),
    [anon_sym_COLON] = ACTIONS(237),
    [aux_sym__skipped_lines_token3] = ACTIONS(237),
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
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [aux_sym__skipped_lines_token2] = ACTIONS(239),
    [anon_sym_COLON] = ACTIONS(239),
    [aux_sym__skipped_lines_token3] = ACTIONS(239),
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
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(241),
    [aux_sym__skipped_lines_token2] = ACTIONS(241),
    [anon_sym_COLON] = ACTIONS(241),
    [aux_sym__skipped_lines_token3] = ACTIONS(241),
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
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(243),
    [aux_sym__skipped_lines_token2] = ACTIONS(243),
    [anon_sym_COLON] = ACTIONS(243),
    [aux_sym__skipped_lines_token3] = ACTIONS(243),
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
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(245),
    [aux_sym__skipped_lines_token2] = ACTIONS(245),
    [anon_sym_COLON] = ACTIONS(245),
    [aux_sym__skipped_lines_token3] = ACTIONS(245),
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
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(247),
    [aux_sym__skipped_lines_token2] = ACTIONS(247),
    [anon_sym_COLON] = ACTIONS(247),
    [aux_sym__skipped_lines_token3] = ACTIONS(247),
    [anon_sym_include] = ACTIONS(247),
    [anon_sym_option] = ACTIONS(247),
    [anon_sym_plugin] = ACTIONS(247),
    [anon_sym_pushtag] = ACTIONS(247),
    [anon_sym_poptag] = ACTIONS(247),
    [anon_sym_pushmeta] = ACTIONS(247),
    [anon_sym_popmeta] = ACTIONS(247),
    [sym_date] = ACTIONS(247),
    [sym_flag] = ACTIONS(247),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(249),
    [aux_sym__skipped_lines_token2] = ACTIONS(249),
    [anon_sym_COLON] = ACTIONS(249),
    [aux_sym__skipped_lines_token3] = ACTIONS(249),
    [anon_sym_include] = ACTIONS(249),
    [anon_sym_option] = ACTIONS(249),
    [anon_sym_plugin] = ACTIONS(249),
    [anon_sym_pushtag] = ACTIONS(249),
    [anon_sym_poptag] = ACTIONS(249),
    [anon_sym_pushmeta] = ACTIONS(249),
    [anon_sym_popmeta] = ACTIONS(249),
    [sym_date] = ACTIONS(249),
    [sym_flag] = ACTIONS(249),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(251),
    [aux_sym__skipped_lines_token2] = ACTIONS(251),
    [anon_sym_COLON] = ACTIONS(251),
    [aux_sym__skipped_lines_token3] = ACTIONS(251),
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
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [aux_sym__skipped_lines_token2] = ACTIONS(253),
    [anon_sym_COLON] = ACTIONS(253),
    [aux_sym__skipped_lines_token3] = ACTIONS(253),
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
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(255),
    [aux_sym__skipped_lines_token2] = ACTIONS(255),
    [anon_sym_COLON] = ACTIONS(255),
    [aux_sym__skipped_lines_token3] = ACTIONS(255),
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
  [60] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(257),
    [aux_sym_metadata_token1] = ACTIONS(259),
    [anon_sym_STAR] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(259),
    [anon_sym_DASH] = ACTIONS(261),
    [anon_sym_PLUS] = ACTIONS(261),
    [anon_sym_SLASH] = ACTIONS(173),
    [sym_bool] = ACTIONS(257),
    [sym_date] = ACTIONS(259),
    [sym_string] = ACTIONS(259),
    [sym_currency] = ACTIONS(263),
    [sym_number] = ACTIONS(257),
    [sym_account] = ACTIONS(259),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(265),
    [aux_sym__skipped_lines_token2] = ACTIONS(265),
    [anon_sym_COLON] = ACTIONS(265),
    [aux_sym__skipped_lines_token3] = ACTIONS(265),
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
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(267),
    [aux_sym__skipped_lines_token2] = ACTIONS(267),
    [anon_sym_COLON] = ACTIONS(267),
    [aux_sym__skipped_lines_token3] = ACTIONS(267),
    [anon_sym_include] = ACTIONS(267),
    [anon_sym_option] = ACTIONS(267),
    [anon_sym_plugin] = ACTIONS(267),
    [anon_sym_pushtag] = ACTIONS(267),
    [anon_sym_poptag] = ACTIONS(267),
    [anon_sym_pushmeta] = ACTIONS(267),
    [anon_sym_popmeta] = ACTIONS(267),
    [sym_date] = ACTIONS(267),
    [sym_flag] = ACTIONS(267),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [aux_sym__skipped_lines_token2] = ACTIONS(269),
    [anon_sym_COLON] = ACTIONS(269),
    [aux_sym__skipped_lines_token3] = ACTIONS(269),
    [anon_sym_include] = ACTIONS(269),
    [anon_sym_option] = ACTIONS(269),
    [anon_sym_plugin] = ACTIONS(269),
    [anon_sym_pushtag] = ACTIONS(269),
    [anon_sym_poptag] = ACTIONS(269),
    [anon_sym_pushmeta] = ACTIONS(269),
    [anon_sym_popmeta] = ACTIONS(269),
    [sym_date] = ACTIONS(269),
    [sym_flag] = ACTIONS(269),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(271),
    [aux_sym__skipped_lines_token2] = ACTIONS(271),
    [anon_sym_COLON] = ACTIONS(271),
    [aux_sym__skipped_lines_token3] = ACTIONS(271),
    [anon_sym_include] = ACTIONS(271),
    [anon_sym_option] = ACTIONS(271),
    [anon_sym_plugin] = ACTIONS(271),
    [anon_sym_pushtag] = ACTIONS(271),
    [anon_sym_poptag] = ACTIONS(271),
    [anon_sym_pushmeta] = ACTIONS(271),
    [anon_sym_popmeta] = ACTIONS(271),
    [sym_date] = ACTIONS(271),
    [sym_flag] = ACTIONS(271),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(273),
    [aux_sym__skipped_lines_token2] = ACTIONS(273),
    [anon_sym_COLON] = ACTIONS(273),
    [aux_sym__skipped_lines_token3] = ACTIONS(273),
    [anon_sym_include] = ACTIONS(273),
    [anon_sym_option] = ACTIONS(273),
    [anon_sym_plugin] = ACTIONS(273),
    [anon_sym_pushtag] = ACTIONS(273),
    [anon_sym_poptag] = ACTIONS(273),
    [anon_sym_pushmeta] = ACTIONS(273),
    [anon_sym_popmeta] = ACTIONS(273),
    [sym_date] = ACTIONS(273),
    [sym_flag] = ACTIONS(273),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(275),
    [aux_sym__skipped_lines_token2] = ACTIONS(275),
    [anon_sym_COLON] = ACTIONS(275),
    [aux_sym__skipped_lines_token3] = ACTIONS(275),
    [anon_sym_include] = ACTIONS(275),
    [anon_sym_option] = ACTIONS(275),
    [anon_sym_plugin] = ACTIONS(275),
    [anon_sym_pushtag] = ACTIONS(275),
    [anon_sym_poptag] = ACTIONS(275),
    [anon_sym_pushmeta] = ACTIONS(275),
    [anon_sym_popmeta] = ACTIONS(275),
    [sym_date] = ACTIONS(275),
    [sym_flag] = ACTIONS(275),
  },
  [67] = {
    [sym_incomplete_amount] = STATE(174),
    [sym__num_expr] = STATE(73),
    [sym__paren_num_expr] = STATE(73),
    [sym_unary_num_expr] = STATE(73),
    [sym_binary_num_expr] = STATE(73),
    [aux_sym__skipped_lines_token2] = ACTIONS(277),
    [aux_sym_metadata_token1] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_DASH] = ACTIONS(100),
    [anon_sym_PLUS] = ACTIONS(100),
    [sym_currency] = ACTIONS(102),
    [sym_number] = ACTIONS(104),
  },
  [68] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(179),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(179),
    [anon_sym_COMMA] = ACTIONS(179),
    [anon_sym_STAR] = ACTIONS(179),
    [anon_sym_POUND] = ACTIONS(179),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_RPAREN] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(179),
    [sym_currency] = ACTIONS(179),
  },
  [69] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(161),
    [anon_sym_RBRACE] = ACTIONS(159),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(161),
    [anon_sym_COMMA] = ACTIONS(161),
    [anon_sym_STAR] = ACTIONS(161),
    [anon_sym_POUND] = ACTIONS(161),
    [anon_sym_TILDE] = ACTIONS(161),
    [anon_sym_RPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(161),
    [anon_sym_PLUS] = ACTIONS(161),
    [anon_sym_SLASH] = ACTIONS(161),
    [sym_currency] = ACTIONS(161),
  },
  [70] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(187),
    [anon_sym_RBRACE] = ACTIONS(185),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(187),
    [anon_sym_COMMA] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(187),
    [anon_sym_POUND] = ACTIONS(187),
    [anon_sym_TILDE] = ACTIONS(187),
    [anon_sym_RPAREN] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(187),
    [sym_currency] = ACTIONS(187),
  },
  [71] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(161),
    [anon_sym_RBRACE] = ACTIONS(159),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(161),
    [anon_sym_COMMA] = ACTIONS(161),
    [anon_sym_STAR] = ACTIONS(281),
    [anon_sym_POUND] = ACTIONS(161),
    [anon_sym_TILDE] = ACTIONS(161),
    [anon_sym_RPAREN] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(161),
    [anon_sym_PLUS] = ACTIONS(161),
    [anon_sym_SLASH] = ACTIONS(281),
    [sym_currency] = ACTIONS(161),
  },
  [72] = {
    [anon_sym_balance] = ACTIONS(283),
    [anon_sym_close] = ACTIONS(285),
    [anon_sym_commodity] = ACTIONS(287),
    [anon_sym_custom] = ACTIONS(289),
    [anon_sym_document] = ACTIONS(291),
    [anon_sym_event] = ACTIONS(293),
    [anon_sym_note] = ACTIONS(295),
    [anon_sym_open] = ACTIONS(297),
    [anon_sym_pad] = ACTIONS(299),
    [anon_sym_price] = ACTIONS(301),
    [anon_sym_query] = ACTIONS(303),
    [sym_flag] = ACTIONS(305),
  },
  [73] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(307),
    [aux_sym_metadata_token1] = ACTIONS(309),
    [anon_sym_LBRACE] = ACTIONS(307),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(309),
    [anon_sym_STAR] = ACTIONS(311),
    [anon_sym_AT_AT] = ACTIONS(309),
    [anon_sym_AT] = ACTIONS(307),
    [anon_sym_DASH] = ACTIONS(313),
    [anon_sym_PLUS] = ACTIONS(313),
    [anon_sym_SLASH] = ACTIONS(311),
    [sym_currency] = ACTIONS(315),
  },
  [74] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(159),
    [aux_sym_metadata_token1] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(159),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(161),
    [anon_sym_STAR] = ACTIONS(311),
    [anon_sym_AT_AT] = ACTIONS(161),
    [anon_sym_AT] = ACTIONS(159),
    [anon_sym_DASH] = ACTIONS(161),
    [anon_sym_PLUS] = ACTIONS(161),
    [anon_sym_SLASH] = ACTIONS(311),
    [sym_currency] = ACTIONS(161),
  },
  [75] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(159),
    [aux_sym_metadata_token1] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(159),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(161),
    [anon_sym_STAR] = ACTIONS(161),
    [anon_sym_AT_AT] = ACTIONS(161),
    [anon_sym_AT] = ACTIONS(159),
    [anon_sym_DASH] = ACTIONS(161),
    [anon_sym_PLUS] = ACTIONS(161),
    [anon_sym_SLASH] = ACTIONS(161),
    [sym_currency] = ACTIONS(161),
  },
  [76] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(177),
    [aux_sym_metadata_token1] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(177),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(179),
    [anon_sym_STAR] = ACTIONS(179),
    [anon_sym_AT_AT] = ACTIONS(179),
    [anon_sym_AT] = ACTIONS(177),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(179),
    [sym_currency] = ACTIONS(179),
  },
  [77] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(185),
    [aux_sym_metadata_token1] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(187),
    [anon_sym_AT_AT] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(185),
    [anon_sym_DASH] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(187),
    [sym_currency] = ACTIONS(187),
  },
  [78] = {
    [sym_metadata] = STATE(110),
    [sym_posting] = STATE(110),
    [sym_postings] = STATE(194),
    [sym__tag_or_link] = STATE(82),
    [aux_sym_metadata_repeat1] = STATE(156),
    [aux_sym_postings_repeat1] = STATE(110),
    [aux_sym_transaction_repeat1] = STATE(82),
    [aux_sym_metadata_token1] = ACTIONS(317),
    [sym_tag] = ACTIONS(319),
    [sym_link] = ACTIONS(319),
    [sym_string] = ACTIONS(321),
  },
  [79] = {
    [sym_metadata] = STATE(110),
    [sym_posting] = STATE(110),
    [sym_postings] = STATE(182),
    [sym__tag_or_link] = STATE(81),
    [aux_sym_metadata_repeat1] = STATE(156),
    [aux_sym_postings_repeat1] = STATE(110),
    [aux_sym_transaction_repeat1] = STATE(81),
    [aux_sym_metadata_token1] = ACTIONS(317),
    [sym_tag] = ACTIONS(323),
    [sym_link] = ACTIONS(323),
    [sym_string] = ACTIONS(325),
  },
  [80] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(327),
    [aux_sym_metadata_token1] = ACTIONS(329),
    [anon_sym_LPAREN] = ACTIONS(329),
    [anon_sym_DASH] = ACTIONS(329),
    [anon_sym_PLUS] = ACTIONS(329),
    [sym_bool] = ACTIONS(327),
    [sym_date] = ACTIONS(329),
    [sym_string] = ACTIONS(329),
    [sym_number] = ACTIONS(327),
    [sym_account] = ACTIONS(329),
  },
  [81] = {
    [sym_metadata] = STATE(110),
    [sym_posting] = STATE(110),
    [sym_postings] = STATE(221),
    [sym__tag_or_link] = STATE(121),
    [aux_sym_metadata_repeat1] = STATE(156),
    [aux_sym_postings_repeat1] = STATE(110),
    [aux_sym_transaction_repeat1] = STATE(121),
    [aux_sym_metadata_token1] = ACTIONS(317),
    [sym_tag] = ACTIONS(331),
    [sym_link] = ACTIONS(331),
  },
  [82] = {
    [sym_metadata] = STATE(110),
    [sym_posting] = STATE(110),
    [sym_postings] = STATE(228),
    [sym__tag_or_link] = STATE(121),
    [aux_sym_metadata_repeat1] = STATE(156),
    [aux_sym_postings_repeat1] = STATE(110),
    [aux_sym_transaction_repeat1] = STATE(121),
    [aux_sym_metadata_token1] = ACTIONS(317),
    [sym_tag] = ACTIONS(331),
    [sym_link] = ACTIONS(331),
  },
  [83] = {
    [sym_metadata] = STATE(110),
    [sym_posting] = STATE(110),
    [sym_postings] = STATE(197),
    [sym__tag_or_link] = STATE(85),
    [aux_sym_metadata_repeat1] = STATE(156),
    [aux_sym_postings_repeat1] = STATE(110),
    [aux_sym_transaction_repeat1] = STATE(85),
    [aux_sym_metadata_token1] = ACTIONS(317),
    [sym_tag] = ACTIONS(333),
    [sym_link] = ACTIONS(333),
  },
  [84] = {
    [sym_amount] = STATE(142),
    [sym_amount_with_tolerance] = STATE(142),
    [sym__num_expr] = STATE(113),
    [sym__paren_num_expr] = STATE(113),
    [sym_unary_num_expr] = STATE(113),
    [sym_binary_num_expr] = STATE(113),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [sym_number] = ACTIONS(335),
  },
  [85] = {
    [sym_metadata] = STATE(110),
    [sym_posting] = STATE(110),
    [sym_postings] = STATE(195),
    [sym__tag_or_link] = STATE(121),
    [aux_sym_metadata_repeat1] = STATE(156),
    [aux_sym_postings_repeat1] = STATE(110),
    [aux_sym_transaction_repeat1] = STATE(121),
    [aux_sym_metadata_token1] = ACTIONS(317),
    [sym_tag] = ACTIONS(331),
    [sym_link] = ACTIONS(331),
  },
  [86] = {
    [sym__num_expr] = STATE(122),
    [sym__paren_num_expr] = STATE(122),
    [sym_unary_num_expr] = STATE(122),
    [sym_binary_num_expr] = STATE(122),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [sym_currency] = ACTIONS(337),
    [sym_number] = ACTIONS(339),
  },
  [87] = {
    [sym__num_expr] = STATE(119),
    [sym__paren_num_expr] = STATE(119),
    [sym_unary_num_expr] = STATE(119),
    [sym_binary_num_expr] = STATE(119),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [sym_currency] = ACTIONS(341),
    [sym_number] = ACTIONS(343),
  },
  [88] = {
    [sym_amount] = STATE(148),
    [sym__num_expr] = STATE(124),
    [sym__paren_num_expr] = STATE(124),
    [sym_unary_num_expr] = STATE(124),
    [sym_binary_num_expr] = STATE(124),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [sym_number] = ACTIONS(345),
  },
  [89] = {
    [anon_sym_RBRACE] = ACTIONS(347),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(349),
    [anon_sym_COMMA] = ACTIONS(349),
    [anon_sym_STAR] = ACTIONS(281),
    [anon_sym_POUND] = ACTIONS(351),
    [anon_sym_DASH] = ACTIONS(353),
    [anon_sym_PLUS] = ACTIONS(353),
    [anon_sym_SLASH] = ACTIONS(281),
    [sym_currency] = ACTIONS(337),
  },
  [90] = {
    [sym_cost_spec] = STATE(123),
    [sym_price_annotation] = STATE(168),
    [aux_sym__skipped_lines_token2] = ACTIONS(355),
    [aux_sym_metadata_token1] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(90),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(92),
    [anon_sym_AT_AT] = ACTIONS(94),
    [anon_sym_AT] = ACTIONS(96),
  },
  [91] = {
    [sym__num_expr] = STATE(132),
    [sym__paren_num_expr] = STATE(132),
    [sym_unary_num_expr] = STATE(132),
    [sym_binary_num_expr] = STATE(132),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [sym_number] = ACTIONS(359),
  },
  [92] = {
    [sym__num_expr] = STATE(130),
    [sym__paren_num_expr] = STATE(130),
    [sym_unary_num_expr] = STATE(130),
    [sym_binary_num_expr] = STATE(130),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [sym_number] = ACTIONS(361),
  },
  [93] = {
    [sym__num_expr] = STATE(77),
    [sym__paren_num_expr] = STATE(77),
    [sym_unary_num_expr] = STATE(77),
    [sym_binary_num_expr] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_DASH] = ACTIONS(100),
    [anon_sym_PLUS] = ACTIONS(100),
    [sym_number] = ACTIONS(363),
  },
  [94] = {
    [sym__num_expr] = STATE(25),
    [sym__paren_num_expr] = STATE(25),
    [sym_unary_num_expr] = STATE(25),
    [sym_binary_num_expr] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_PLUS] = ACTIONS(72),
    [sym_number] = ACTIONS(365),
  },
  [95] = {
    [sym__num_expr] = STATE(69),
    [sym__paren_num_expr] = STATE(69),
    [sym_unary_num_expr] = STATE(69),
    [sym_binary_num_expr] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [sym_number] = ACTIONS(367),
  },
  [96] = {
    [sym__num_expr] = STATE(71),
    [sym__paren_num_expr] = STATE(71),
    [sym_unary_num_expr] = STATE(71),
    [sym_binary_num_expr] = STATE(71),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [sym_number] = ACTIONS(369),
  },
  [97] = {
    [sym_metadata] = STATE(212),
    [sym__tag_or_link] = STATE(114),
    [aux_sym_metadata_repeat1] = STATE(157),
    [aux_sym_document_repeat1] = STATE(114),
    [aux_sym__skipped_lines_token2] = ACTIONS(371),
    [aux_sym_metadata_token1] = ACTIONS(68),
    [sym_tag] = ACTIONS(373),
    [sym_link] = ACTIONS(373),
  },
  [98] = {
    [sym__num_expr] = STATE(74),
    [sym__paren_num_expr] = STATE(74),
    [sym_unary_num_expr] = STATE(74),
    [sym_binary_num_expr] = STATE(74),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_DASH] = ACTIONS(100),
    [anon_sym_PLUS] = ACTIONS(100),
    [sym_number] = ACTIONS(375),
  },
  [99] = {
    [sym__num_expr] = STATE(75),
    [sym__paren_num_expr] = STATE(75),
    [sym_unary_num_expr] = STATE(75),
    [sym_binary_num_expr] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_DASH] = ACTIONS(100),
    [anon_sym_PLUS] = ACTIONS(100),
    [sym_number] = ACTIONS(377),
  },
  [100] = {
    [sym__num_expr] = STATE(20),
    [sym__paren_num_expr] = STATE(20),
    [sym_unary_num_expr] = STATE(20),
    [sym_binary_num_expr] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_PLUS] = ACTIONS(72),
    [sym_number] = ACTIONS(379),
  },
  [101] = {
    [sym_cost_spec] = STATE(127),
    [sym_price_annotation] = STATE(172),
    [aux_sym__skipped_lines_token2] = ACTIONS(381),
    [aux_sym_metadata_token1] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(90),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(92),
    [anon_sym_AT_AT] = ACTIONS(94),
    [anon_sym_AT] = ACTIONS(96),
  },
  [102] = {
    [sym__num_expr] = STATE(14),
    [sym__paren_num_expr] = STATE(14),
    [sym_unary_num_expr] = STATE(14),
    [sym_binary_num_expr] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_PLUS] = ACTIONS(72),
    [sym_number] = ACTIONS(385),
  },
  [103] = {
    [sym__num_expr] = STATE(126),
    [sym__paren_num_expr] = STATE(126),
    [sym_unary_num_expr] = STATE(126),
    [sym_binary_num_expr] = STATE(126),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [sym_number] = ACTIONS(387),
  },
  [104] = {
    [sym_key_value] = STATE(176),
    [sym__tag_or_link] = STATE(155),
    [aux_sym__skipped_lines_token3] = ACTIONS(389),
    [sym_key] = ACTIONS(391),
    [sym_tag] = ACTIONS(393),
    [sym_link] = ACTIONS(393),
    [sym_flag] = ACTIONS(395),
    [sym_account] = ACTIONS(397),
  },
  [105] = {
    [sym_metadata] = STATE(205),
    [sym__tag_or_link] = STATE(97),
    [aux_sym_metadata_repeat1] = STATE(157),
    [aux_sym_document_repeat1] = STATE(97),
    [aux_sym__skipped_lines_token2] = ACTIONS(399),
    [aux_sym_metadata_token1] = ACTIONS(68),
    [sym_tag] = ACTIONS(401),
    [sym_link] = ACTIONS(401),
  },
  [106] = {
    [sym__num_expr] = STATE(70),
    [sym__paren_num_expr] = STATE(70),
    [sym_unary_num_expr] = STATE(70),
    [sym_binary_num_expr] = STATE(70),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [sym_number] = ACTIONS(403),
  },
  [107] = {
    [sym__num_expr] = STATE(120),
    [sym__paren_num_expr] = STATE(120),
    [sym_unary_num_expr] = STATE(120),
    [sym_binary_num_expr] = STATE(120),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [sym_number] = ACTIONS(405),
  },
  [108] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(407),
    [aux_sym_metadata_token1] = ACTIONS(409),
    [anon_sym_STAR] = ACTIONS(311),
    [anon_sym_DASH] = ACTIONS(313),
    [anon_sym_PLUS] = ACTIONS(313),
    [anon_sym_SLASH] = ACTIONS(311),
    [sym_currency] = ACTIONS(411),
  },
  [109] = {
    [sym_metadata] = STATE(218),
    [sym_currency_list] = STATE(125),
    [aux_sym_metadata_repeat1] = STATE(157),
    [aux_sym__skipped_lines_token2] = ACTIONS(413),
    [aux_sym_metadata_token1] = ACTIONS(68),
    [sym_string] = ACTIONS(415),
    [sym_currency] = ACTIONS(417),
  },
  [110] = {
    [sym_metadata] = STATE(116),
    [sym_posting] = STATE(116),
    [aux_sym_metadata_repeat1] = STATE(156),
    [aux_sym_postings_repeat1] = STATE(116),
    [aux_sym__skipped_lines_token2] = ACTIONS(419),
    [aux_sym_metadata_token1] = ACTIONS(421),
  },
  [111] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(423),
    [aux_sym_metadata_token1] = ACTIONS(425),
    [anon_sym_LBRACE] = ACTIONS(423),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(425),
    [anon_sym_AT_AT] = ACTIONS(425),
    [anon_sym_AT] = ACTIONS(423),
  },
  [112] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(409),
    [anon_sym_STAR] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(353),
    [anon_sym_PLUS] = ACTIONS(353),
    [anon_sym_SLASH] = ACTIONS(281),
    [sym_currency] = ACTIONS(427),
  },
  [113] = {
    [anon_sym_STAR] = ACTIONS(281),
    [anon_sym_TILDE] = ACTIONS(429),
    [anon_sym_DASH] = ACTIONS(353),
    [anon_sym_PLUS] = ACTIONS(353),
    [anon_sym_SLASH] = ACTIONS(281),
    [sym_currency] = ACTIONS(411),
  },
  [114] = {
    [sym__tag_or_link] = STATE(114),
    [aux_sym_document_repeat1] = STATE(114),
    [aux_sym__skipped_lines_token2] = ACTIONS(431),
    [aux_sym_metadata_token1] = ACTIONS(433),
    [sym_tag] = ACTIONS(435),
    [sym_link] = ACTIONS(435),
  },
  [115] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(307),
    [aux_sym_metadata_token1] = ACTIONS(309),
    [anon_sym_LBRACE] = ACTIONS(307),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(309),
    [anon_sym_AT_AT] = ACTIONS(309),
    [anon_sym_AT] = ACTIONS(307),
  },
  [116] = {
    [sym_metadata] = STATE(116),
    [sym_posting] = STATE(116),
    [aux_sym_metadata_repeat1] = STATE(156),
    [aux_sym_postings_repeat1] = STATE(116),
    [aux_sym__skipped_lines_token2] = ACTIONS(438),
    [aux_sym_metadata_token1] = ACTIONS(440),
  },
  [117] = {
    [aux_sym_currency_list_repeat1] = STATE(117),
    [aux_sym__skipped_lines_token2] = ACTIONS(443),
    [aux_sym_metadata_token1] = ACTIONS(445),
    [anon_sym_COMMA] = ACTIONS(447),
    [sym_string] = ACTIONS(445),
  },
  [118] = {
    [sym_price_annotation] = STATE(177),
    [aux_sym__skipped_lines_token2] = ACTIONS(450),
    [aux_sym_metadata_token1] = ACTIONS(452),
    [anon_sym_AT_AT] = ACTIONS(94),
    [anon_sym_AT] = ACTIONS(96),
  },
  [119] = {
    [anon_sym_STAR] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(353),
    [anon_sym_PLUS] = ACTIONS(353),
    [anon_sym_SLASH] = ACTIONS(281),
    [sym_currency] = ACTIONS(454),
  },
  [120] = {
    [anon_sym_STAR] = ACTIONS(281),
    [anon_sym_RPAREN] = ACTIONS(456),
    [anon_sym_DASH] = ACTIONS(353),
    [anon_sym_PLUS] = ACTIONS(353),
    [anon_sym_SLASH] = ACTIONS(281),
  },
  [121] = {
    [sym__tag_or_link] = STATE(121),
    [aux_sym_transaction_repeat1] = STATE(121),
    [aux_sym_metadata_token1] = ACTIONS(458),
    [sym_tag] = ACTIONS(461),
    [sym_link] = ACTIONS(461),
  },
  [122] = {
    [anon_sym_STAR] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(353),
    [anon_sym_PLUS] = ACTIONS(353),
    [anon_sym_SLASH] = ACTIONS(281),
    [sym_currency] = ACTIONS(341),
  },
  [123] = {
    [sym_price_annotation] = STATE(165),
    [aux_sym__skipped_lines_token2] = ACTIONS(464),
    [aux_sym_metadata_token1] = ACTIONS(466),
    [anon_sym_AT_AT] = ACTIONS(94),
    [anon_sym_AT] = ACTIONS(96),
  },
  [124] = {
    [anon_sym_STAR] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(353),
    [anon_sym_PLUS] = ACTIONS(353),
    [anon_sym_SLASH] = ACTIONS(281),
    [sym_currency] = ACTIONS(411),
  },
  [125] = {
    [sym_metadata] = STATE(207),
    [aux_sym_metadata_repeat1] = STATE(157),
    [aux_sym__skipped_lines_token2] = ACTIONS(468),
    [aux_sym_metadata_token1] = ACTIONS(68),
    [sym_string] = ACTIONS(470),
  },
  [126] = {
    [anon_sym_STAR] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(353),
    [anon_sym_PLUS] = ACTIONS(353),
    [anon_sym_SLASH] = ACTIONS(281),
    [sym_currency] = ACTIONS(472),
  },
  [127] = {
    [sym_price_annotation] = STATE(166),
    [aux_sym__skipped_lines_token2] = ACTIONS(474),
    [aux_sym_metadata_token1] = ACTIONS(476),
    [anon_sym_AT_AT] = ACTIONS(94),
    [anon_sym_AT] = ACTIONS(96),
  },
  [128] = {
    [aux_sym_currency_list_repeat1] = STATE(117),
    [aux_sym__skipped_lines_token2] = ACTIONS(478),
    [aux_sym_metadata_token1] = ACTIONS(480),
    [anon_sym_COMMA] = ACTIONS(482),
    [sym_string] = ACTIONS(480),
  },
  [129] = {
    [aux_sym_currency_list_repeat1] = STATE(128),
    [aux_sym__skipped_lines_token2] = ACTIONS(484),
    [aux_sym_metadata_token1] = ACTIONS(486),
    [anon_sym_COMMA] = ACTIONS(482),
    [sym_string] = ACTIONS(486),
  },
  [130] = {
    [anon_sym_STAR] = ACTIONS(281),
    [anon_sym_RPAREN] = ACTIONS(488),
    [anon_sym_DASH] = ACTIONS(353),
    [anon_sym_PLUS] = ACTIONS(353),
    [anon_sym_SLASH] = ACTIONS(281),
  },
  [131] = {
    [sym_key_value] = STATE(176),
    [aux_sym__skipped_lines_token3] = ACTIONS(389),
    [sym_key] = ACTIONS(391),
    [sym_flag] = ACTIONS(395),
    [sym_account] = ACTIONS(397),
  },
  [132] = {
    [anon_sym_STAR] = ACTIONS(281),
    [anon_sym_RPAREN] = ACTIONS(490),
    [anon_sym_DASH] = ACTIONS(353),
    [anon_sym_PLUS] = ACTIONS(353),
    [anon_sym_SLASH] = ACTIONS(281),
  },
  [133] = {
    [sym_price_annotation] = STATE(169),
    [aux_sym__skipped_lines_token2] = ACTIONS(492),
    [aux_sym_metadata_token1] = ACTIONS(494),
    [anon_sym_AT_AT] = ACTIONS(94),
    [anon_sym_AT] = ACTIONS(96),
  },
  [134] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(496),
    [aux_sym_metadata_token1] = ACTIONS(498),
    [anon_sym_AT_AT] = ACTIONS(498),
    [anon_sym_AT] = ACTIONS(496),
  },
  [135] = {
    [sym_metadata] = STATE(203),
    [aux_sym_metadata_repeat1] = STATE(157),
    [aux_sym__skipped_lines_token2] = ACTIONS(500),
    [aux_sym_metadata_token1] = ACTIONS(68),
  },
  [136] = {
    [aux_sym_cost_comp_list_repeat1] = STATE(136),
    [anon_sym_RBRACE] = ACTIONS(502),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(504),
    [anon_sym_COMMA] = ACTIONS(506),
  },
  [137] = {
    [sym_metadata] = STATE(180),
    [aux_sym_metadata_repeat1] = STATE(157),
    [aux_sym__skipped_lines_token2] = ACTIONS(509),
    [aux_sym_metadata_token1] = ACTIONS(68),
  },
  [138] = {
    [aux_sym_cost_comp_list_repeat1] = STATE(136),
    [anon_sym_RBRACE] = ACTIONS(511),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(513),
    [anon_sym_COMMA] = ACTIONS(515),
  },
  [139] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(517),
    [aux_sym_metadata_token1] = ACTIONS(519),
    [anon_sym_AT_AT] = ACTIONS(519),
    [anon_sym_AT] = ACTIONS(517),
  },
  [140] = {
    [sym_metadata] = STATE(202),
    [aux_sym_metadata_repeat1] = STATE(157),
    [aux_sym__skipped_lines_token2] = ACTIONS(521),
    [aux_sym_metadata_token1] = ACTIONS(68),
  },
  [141] = {
    [aux_sym_cost_comp_list_repeat1] = STATE(138),
    [anon_sym_RBRACE] = ACTIONS(523),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(525),
    [anon_sym_COMMA] = ACTIONS(515),
  },
  [142] = {
    [sym_metadata] = STATE(219),
    [aux_sym_metadata_repeat1] = STATE(157),
    [aux_sym__skipped_lines_token2] = ACTIONS(527),
    [aux_sym_metadata_token1] = ACTIONS(68),
  },
  [143] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(443),
    [aux_sym_metadata_token1] = ACTIONS(445),
    [anon_sym_COMMA] = ACTIONS(445),
    [sym_string] = ACTIONS(445),
  },
  [144] = {
    [sym_metadata] = STATE(213),
    [aux_sym_metadata_repeat1] = STATE(157),
    [aux_sym__skipped_lines_token2] = ACTIONS(529),
    [aux_sym_metadata_token1] = ACTIONS(68),
  },
  [145] = {
    [sym_metadata] = STATE(214),
    [aux_sym_metadata_repeat1] = STATE(157),
    [aux_sym__skipped_lines_token2] = ACTIONS(531),
    [aux_sym_metadata_token1] = ACTIONS(68),
  },
  [146] = {
    [sym_metadata] = STATE(189),
    [aux_sym_metadata_repeat1] = STATE(157),
    [aux_sym__skipped_lines_token2] = ACTIONS(533),
    [aux_sym_metadata_token1] = ACTIONS(68),
  },
  [147] = {
    [sym_metadata] = STATE(192),
    [aux_sym_metadata_repeat1] = STATE(157),
    [aux_sym__skipped_lines_token2] = ACTIONS(535),
    [aux_sym_metadata_token1] = ACTIONS(68),
  },
  [148] = {
    [sym_metadata] = STATE(209),
    [aux_sym_metadata_repeat1] = STATE(157),
    [aux_sym__skipped_lines_token2] = ACTIONS(537),
    [aux_sym_metadata_token1] = ACTIONS(68),
  },
  [149] = {
    [sym_metadata] = STATE(211),
    [aux_sym_metadata_repeat1] = STATE(157),
    [aux_sym__skipped_lines_token2] = ACTIONS(539),
    [aux_sym_metadata_token1] = ACTIONS(68),
  },
  [150] = {
    [anon_sym_RBRACE] = ACTIONS(541),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(543),
    [anon_sym_COMMA] = ACTIONS(543),
  },
  [151] = {
    [anon_sym_RBRACE] = ACTIONS(347),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(349),
    [anon_sym_COMMA] = ACTIONS(349),
  },
  [152] = {
    [anon_sym_RBRACE] = ACTIONS(545),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(547),
    [anon_sym_COMMA] = ACTIONS(547),
  },
  [153] = {
    [anon_sym_RBRACE] = ACTIONS(549),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(551),
    [anon_sym_COMMA] = ACTIONS(551),
  },
  [154] = {
    [anon_sym_RBRACE] = ACTIONS(553),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(555),
    [anon_sym_COMMA] = ACTIONS(555),
  },
  [155] = {
    [aux_sym_metadata_token1] = ACTIONS(557),
    [sym_tag] = ACTIONS(557),
    [sym_link] = ACTIONS(557),
  },
  [156] = {
    [aux_sym_metadata_repeat1] = STATE(158),
    [aux_sym__skipped_lines_token2] = ACTIONS(559),
    [aux_sym_metadata_token1] = ACTIONS(561),
  },
  [157] = {
    [aux_sym_metadata_repeat1] = STATE(158),
    [aux_sym__skipped_lines_token2] = ACTIONS(559),
    [aux_sym_metadata_token1] = ACTIONS(68),
  },
  [158] = {
    [aux_sym_metadata_repeat1] = STATE(158),
    [aux_sym__skipped_lines_token2] = ACTIONS(563),
    [aux_sym_metadata_token1] = ACTIONS(565),
  },
  [159] = {
    [sym__tag_or_link] = STATE(155),
    [sym_tag] = ACTIONS(393),
    [sym_link] = ACTIONS(393),
  },
  [160] = {
    [anon_sym_RBRACE] = ACTIONS(502),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(504),
    [anon_sym_COMMA] = ACTIONS(504),
  },
  [161] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(568),
    [aux_sym_metadata_token1] = ACTIONS(570),
  },
  [162] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(438),
    [aux_sym_metadata_token1] = ACTIONS(572),
  },
  [163] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(407),
    [aux_sym_metadata_token1] = ACTIONS(409),
  },
  [164] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(574),
    [aux_sym_metadata_token1] = ACTIONS(576),
  },
  [165] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(578),
    [aux_sym_metadata_token1] = ACTIONS(580),
  },
  [166] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(582),
    [aux_sym_metadata_token1] = ACTIONS(584),
  },
  [167] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(586),
    [sym_string] = ACTIONS(588),
  },
  [168] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(590),
    [aux_sym_metadata_token1] = ACTIONS(592),
  },
  [169] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(594),
    [aux_sym_metadata_token1] = ACTIONS(596),
  },
  [170] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(598),
    [aux_sym_metadata_token1] = ACTIONS(600),
  },
  [171] = {
    [sym_key_value] = STATE(176),
    [sym_key] = ACTIONS(391),
  },
  [172] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(602),
    [aux_sym_metadata_token1] = ACTIONS(604),
  },
  [173] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(606),
    [aux_sym_metadata_token1] = ACTIONS(608),
  },
  [174] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(610),
    [aux_sym_metadata_token1] = ACTIONS(612),
  },
  [175] = {
    [sym_key_value] = STATE(225),
    [sym_key] = ACTIONS(614),
  },
  [176] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(563),
    [aux_sym_metadata_token1] = ACTIONS(616),
  },
  [177] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(618),
    [aux_sym_metadata_token1] = ACTIONS(620),
  },
  [178] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(409),
  },
  [179] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(622),
  },
  [180] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(624),
  },
  [181] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(329),
  },
  [182] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(626),
  },
  [183] = {
    [sym_string] = ACTIONS(628),
  },
  [184] = {
    [sym_account] = ACTIONS(630),
  },
  [185] = {
    [sym_string] = ACTIONS(632),
  },
  [186] = {
    [sym_string] = ACTIONS(634),
  },
  [187] = {
    [sym_string] = ACTIONS(636),
  },
  [188] = {
    [anon_sym_RBRACE] = ACTIONS(638),
  },
  [189] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(640),
  },
  [190] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(642),
  },
  [191] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(638),
  },
  [192] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(644),
  },
  [193] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(570),
  },
  [194] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(646),
  },
  [195] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(648),
  },
  [196] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(650),
  },
  [197] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(652),
  },
  [198] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(654),
  },
  [199] = {
    [sym_string] = ACTIONS(656),
  },
  [200] = {
    [sym_currency] = ACTIONS(658),
  },
  [201] = {
    [sym_currency] = ACTIONS(660),
  },
  [202] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(662),
  },
  [203] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(664),
  },
  [204] = {
    [sym_account] = ACTIONS(666),
  },
  [205] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(668),
  },
  [206] = {
    [sym_account] = ACTIONS(670),
  },
  [207] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(672),
  },
  [208] = {
    [sym_account] = ACTIONS(674),
  },
  [209] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(676),
  },
  [210] = {
    [sym_string] = ACTIONS(678),
  },
  [211] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(680),
  },
  [212] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(682),
  },
  [213] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(684),
  },
  [214] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(686),
  },
  [215] = {
    [sym_account] = ACTIONS(688),
  },
  [216] = {
    [aux_sym__skipped_lines_token1] = ACTIONS(690),
  },
  [217] = {
    [sym_string] = ACTIONS(692),
  },
  [218] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(694),
  },
  [219] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(696),
  },
  [220] = {
    [sym_currency] = ACTIONS(698),
  },
  [221] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(700),
  },
  [222] = {
    [sym_account] = ACTIONS(702),
  },
  [223] = {
    [sym_account] = ACTIONS(704),
  },
  [224] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(706),
  },
  [225] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(708),
  },
  [226] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(710),
  },
  [227] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(712),
  },
  [228] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(714),
  },
  [229] = {
    [sym_string] = ACTIONS(716),
  },
  [230] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(718),
  },
  [231] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(720),
  },
  [232] = {
    [ts_builtin_sym_end] = ACTIONS(722),
  },
  [233] = {
    [sym_key] = ACTIONS(724),
  },
  [234] = {
    [sym_account] = ACTIONS(726),
  },
  [235] = {
    [sym_tag] = ACTIONS(728),
  },
  [236] = {
    [sym_tag] = ACTIONS(730),
  },
  [237] = {
    [sym_string] = ACTIONS(732),
  },
  [238] = {
    [sym_string] = ACTIONS(734),
  },
  [239] = {
    [sym_string] = ACTIONS(736),
  },
  [240] = {
    [aux_sym__skipped_lines_token2] = ACTIONS(738),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_beancount_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(3),
  [7] = {.count = 1, .reusable = true}, SHIFT(216),
  [9] = {.count = 1, .reusable = true}, SHIFT(240),
  [11] = {.count = 1, .reusable = true}, SHIFT(239),
  [13] = {.count = 1, .reusable = true}, SHIFT(238),
  [15] = {.count = 1, .reusable = true}, SHIFT(237),
  [17] = {.count = 1, .reusable = true}, SHIFT(236),
  [19] = {.count = 1, .reusable = true}, SHIFT(235),
  [21] = {.count = 1, .reusable = true}, SHIFT(175),
  [23] = {.count = 1, .reusable = true}, SHIFT(233),
  [25] = {.count = 1, .reusable = true}, SHIFT(72),
  [27] = {.count = 1, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2),
  [29] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(2),
  [32] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(216),
  [35] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(240),
  [38] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(239),
  [41] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(238),
  [44] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(237),
  [47] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(236),
  [50] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(235),
  [53] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(175),
  [56] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(233),
  [59] = {.count = 2, .reusable = true}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(72),
  [62] = {.count = 1, .reusable = true}, REDUCE(sym_beancount_file, 1),
  [64] = {.count = 1, .reusable = true}, SHIFT(2),
  [66] = {.count = 1, .reusable = false}, SHIFT(17),
  [68] = {.count = 1, .reusable = true}, SHIFT(171),
  [70] = {.count = 1, .reusable = true}, SHIFT(92),
  [72] = {.count = 1, .reusable = true}, SHIFT(94),
  [74] = {.count = 1, .reusable = false}, SHIFT(12),
  [76] = {.count = 1, .reusable = true}, SHIFT(12),
  [78] = {.count = 1, .reusable = false}, SHIFT(60),
  [80] = {.count = 1, .reusable = false}, SHIFT(62),
  [82] = {.count = 1, .reusable = false}, SHIFT(4),
  [84] = {.count = 1, .reusable = true}, SHIFT(4),
  [86] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 3, .production_id = 18),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 3, .production_id = 18),
  [90] = {.count = 1, .reusable = false}, SHIFT(9),
  [92] = {.count = 1, .reusable = true}, SHIFT(10),
  [94] = {.count = 1, .reusable = true}, SHIFT(67),
  [96] = {.count = 1, .reusable = false}, SHIFT(67),
  [98] = {.count = 1, .reusable = true}, SHIFT(91),
  [100] = {.count = 1, .reusable = true}, SHIFT(93),
  [102] = {.count = 1, .reusable = true}, SHIFT(115),
  [104] = {.count = 1, .reusable = true}, SHIFT(73),
  [106] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 2, .production_id = 4),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 2, .production_id = 4),
  [110] = {.count = 1, .reusable = false}, REDUCE(sym_key_value, 1),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym_key_value, 1),
  [114] = {.count = 1, .reusable = false}, SHIFT(163),
  [116] = {.count = 1, .reusable = true}, SHIFT(163),
  [118] = {.count = 1, .reusable = false}, SHIFT(108),
  [120] = {.count = 1, .reusable = true}, SHIFT(134),
  [122] = {.count = 1, .reusable = true}, SHIFT(152),
  [124] = {.count = 1, .reusable = true}, SHIFT(86),
  [126] = {.count = 1, .reusable = true}, SHIFT(107),
  [128] = {.count = 1, .reusable = true}, SHIFT(106),
  [130] = {.count = 1, .reusable = true}, SHIFT(151),
  [132] = {.count = 1, .reusable = false}, SHIFT(89),
  [134] = {.count = 1, .reusable = false}, SHIFT(178),
  [136] = {.count = 1, .reusable = true}, SHIFT(178),
  [138] = {.count = 1, .reusable = false}, SHIFT(112),
  [140] = {.count = 1, .reusable = false}, REDUCE(aux_sym_custom_repeat1, 2),
  [142] = {.count = 1, .reusable = true}, REDUCE(aux_sym_custom_repeat1, 2),
  [144] = {.count = 2, .reusable = true}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(92),
  [147] = {.count = 2, .reusable = true}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(94),
  [150] = {.count = 2, .reusable = false}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(12),
  [153] = {.count = 2, .reusable = true}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(12),
  [156] = {.count = 2, .reusable = false}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(60),
  [159] = {.count = 1, .reusable = false}, REDUCE(sym_binary_num_expr, 3),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_binary_num_expr, 3),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_poptag, 3),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_close, 4, .production_id = 1),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_custom, 5, .production_id = 3),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym__skipped_lines, 2),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_custom, 5, .production_id = 9),
  [173] = {.count = 1, .reusable = true}, SHIFT(102),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_open, 6, .production_id = 30),
  [177] = {.count = 1, .reusable = false}, REDUCE(sym__paren_num_expr, 3),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym__paren_num_expr, 3),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_commodity, 5, .production_id = 8),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_close, 5, .production_id = 7),
  [185] = {.count = 1, .reusable = false}, REDUCE(sym_unary_num_expr, 2),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_unary_num_expr, 2),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_balance, 5, .production_id = 6),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_open, 6, .production_id = 31),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_transaction, 7, .production_id = 50),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_plugin, 4),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_query, 5, .production_id = 17),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_option, 4),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_event, 5, .production_id = 11),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_open, 7, .production_id = 45),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_document, 7, .production_id = 44),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_note, 6, .production_id = 29),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_note, 5, .production_id = 12),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym__skipped_lines, 3),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_include, 3),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_transaction, 6, .production_id = 43),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_plugin, 3),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_transaction, 6, .production_id = 42),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_pushtag, 3),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym_document, 5, .production_id = 10),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_transaction, 4, .production_id = 5),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_open, 5, .production_id = 13),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_open, 5, .production_id = 7),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_transaction, 5, .production_id = 22),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_transaction, 5, .production_id = 23),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_pushmeta, 3),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_popmeta, 3),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_balance, 6, .production_id = 24),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_custom, 6, .production_id = 25),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_open, 4, .production_id = 1),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_open, 5, .production_id = 14),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_pad, 5, .production_id = 15),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_document, 6, .production_id = 26),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_document, 6, .production_id = 27),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_price, 5, .production_id = 16),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_query, 6, .production_id = 35),
  [257] = {.count = 1, .reusable = false}, REDUCE(aux_sym_custom_repeat1, 1),
  [259] = {.count = 1, .reusable = true}, REDUCE(aux_sym_custom_repeat1, 1),
  [261] = {.count = 1, .reusable = true}, SHIFT(100),
  [263] = {.count = 1, .reusable = false}, SHIFT(80),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_price, 6, .production_id = 34),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_custom, 4, .production_id = 3),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_event, 6, .production_id = 28),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_pad, 6, .production_id = 33),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_open, 6, .production_id = 32),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_commodity, 4, .production_id = 2),
  [277] = {.count = 1, .reusable = false}, REDUCE(sym_price_annotation, 1),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_price_annotation, 1),
  [281] = {.count = 1, .reusable = true}, SHIFT(95),
  [283] = {.count = 1, .reusable = true}, SHIFT(223),
  [285] = {.count = 1, .reusable = true}, SHIFT(222),
  [287] = {.count = 1, .reusable = true}, SHIFT(220),
  [289] = {.count = 1, .reusable = true}, SHIFT(217),
  [291] = {.count = 1, .reusable = true}, SHIFT(215),
  [293] = {.count = 1, .reusable = true}, SHIFT(210),
  [295] = {.count = 1, .reusable = true}, SHIFT(208),
  [297] = {.count = 1, .reusable = true}, SHIFT(206),
  [299] = {.count = 1, .reusable = true}, SHIFT(204),
  [301] = {.count = 1, .reusable = true}, SHIFT(201),
  [303] = {.count = 1, .reusable = true}, SHIFT(199),
  [305] = {.count = 1, .reusable = true}, SHIFT(79),
  [307] = {.count = 1, .reusable = false}, REDUCE(sym_incomplete_amount, 1),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_incomplete_amount, 1),
  [311] = {.count = 1, .reusable = true}, SHIFT(99),
  [313] = {.count = 1, .reusable = true}, SHIFT(98),
  [315] = {.count = 1, .reusable = true}, SHIFT(111),
  [317] = {.count = 1, .reusable = true}, SHIFT(104),
  [319] = {.count = 1, .reusable = true}, SHIFT(82),
  [321] = {.count = 1, .reusable = true}, SHIFT(83),
  [323] = {.count = 1, .reusable = true}, SHIFT(81),
  [325] = {.count = 1, .reusable = true}, SHIFT(78),
  [327] = {.count = 1, .reusable = false}, REDUCE(sym_amount, 2),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym_amount, 2),
  [331] = {.count = 1, .reusable = true}, SHIFT(121),
  [333] = {.count = 1, .reusable = true}, SHIFT(85),
  [335] = {.count = 1, .reusable = true}, SHIFT(113),
  [337] = {.count = 1, .reusable = true}, SHIFT(154),
  [339] = {.count = 1, .reusable = true}, SHIFT(122),
  [341] = {.count = 1, .reusable = true}, SHIFT(150),
  [343] = {.count = 1, .reusable = true}, SHIFT(119),
  [345] = {.count = 1, .reusable = true}, SHIFT(124),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym_compound_amount, 1),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_compound_amount, 1),
  [351] = {.count = 1, .reusable = true}, SHIFT(87),
  [353] = {.count = 1, .reusable = true}, SHIFT(96),
  [355] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 37),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 37),
  [359] = {.count = 1, .reusable = true}, SHIFT(132),
  [361] = {.count = 1, .reusable = true}, SHIFT(130),
  [363] = {.count = 1, .reusable = true}, SHIFT(77),
  [365] = {.count = 1, .reusable = true}, SHIFT(25),
  [367] = {.count = 1, .reusable = true}, SHIFT(69),
  [369] = {.count = 1, .reusable = true}, SHIFT(71),
  [371] = {.count = 1, .reusable = false}, SHIFT(57),
  [373] = {.count = 1, .reusable = true}, SHIFT(114),
  [375] = {.count = 1, .reusable = true}, SHIFT(74),
  [377] = {.count = 1, .reusable = true}, SHIFT(75),
  [379] = {.count = 1, .reusable = true}, SHIFT(20),
  [381] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 3, .production_id = 20),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 3, .production_id = 20),
  [385] = {.count = 1, .reusable = true}, SHIFT(14),
  [387] = {.count = 1, .reusable = true}, SHIFT(126),
  [389] = {.count = 1, .reusable = true}, SHIFT(162),
  [391] = {.count = 1, .reusable = true}, SHIFT(8),
  [393] = {.count = 1, .reusable = true}, SHIFT(155),
  [395] = {.count = 1, .reusable = false}, SHIFT(234),
  [397] = {.count = 1, .reusable = true}, SHIFT(7),
  [399] = {.count = 1, .reusable = false}, SHIFT(43),
  [401] = {.count = 1, .reusable = true}, SHIFT(97),
  [403] = {.count = 1, .reusable = true}, SHIFT(70),
  [405] = {.count = 1, .reusable = true}, SHIFT(120),
  [407] = {.count = 1, .reusable = false}, REDUCE(sym_key_value_value, 1),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_key_value_value, 1),
  [411] = {.count = 1, .reusable = true}, SHIFT(80),
  [413] = {.count = 1, .reusable = false}, SHIFT(53),
  [415] = {.count = 1, .reusable = true}, SHIFT(146),
  [417] = {.count = 1, .reusable = true}, SHIFT(129),
  [419] = {.count = 1, .reusable = false}, REDUCE(sym_postings, 1),
  [421] = {.count = 1, .reusable = true}, SHIFT(131),
  [423] = {.count = 1, .reusable = false}, REDUCE(sym_incomplete_amount, 2),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym_incomplete_amount, 2),
  [427] = {.count = 1, .reusable = true}, SHIFT(181),
  [429] = {.count = 1, .reusable = true}, SHIFT(103),
  [431] = {.count = 1, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2),
  [433] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [435] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(114),
  [438] = {.count = 1, .reusable = false}, REDUCE(aux_sym_postings_repeat1, 2),
  [440] = {.count = 2, .reusable = true}, REDUCE(aux_sym_postings_repeat1, 2), SHIFT_REPEAT(131),
  [443] = {.count = 1, .reusable = false}, REDUCE(aux_sym_currency_list_repeat1, 2),
  [445] = {.count = 1, .reusable = true}, REDUCE(aux_sym_currency_list_repeat1, 2),
  [447] = {.count = 2, .reusable = true}, REDUCE(aux_sym_currency_list_repeat1, 2), SHIFT_REPEAT(200),
  [450] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 3, .production_id = 19),
  [452] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 3, .production_id = 19),
  [454] = {.count = 1, .reusable = true}, SHIFT(153),
  [456] = {.count = 1, .reusable = true}, SHIFT(68),
  [458] = {.count = 2, .reusable = true}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(159),
  [461] = {.count = 2, .reusable = true}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(121),
  [464] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 47),
  [466] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 47),
  [468] = {.count = 1, .reusable = false}, SHIFT(54),
  [470] = {.count = 1, .reusable = true}, SHIFT(137),
  [472] = {.count = 1, .reusable = true}, SHIFT(170),
  [474] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 40),
  [476] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 40),
  [478] = {.count = 1, .reusable = false}, REDUCE(sym_currency_list, 2),
  [480] = {.count = 1, .reusable = true}, REDUCE(sym_currency_list, 2),
  [482] = {.count = 1, .reusable = true}, SHIFT(200),
  [484] = {.count = 1, .reusable = false}, REDUCE(sym_currency_list, 1),
  [486] = {.count = 1, .reusable = true}, REDUCE(sym_currency_list, 1),
  [488] = {.count = 1, .reusable = true}, SHIFT(22),
  [490] = {.count = 1, .reusable = true}, SHIFT(76),
  [492] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 36),
  [494] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 36),
  [496] = {.count = 1, .reusable = false}, REDUCE(sym_cost_spec, 2),
  [498] = {.count = 1, .reusable = true}, REDUCE(sym_cost_spec, 2),
  [500] = {.count = 1, .reusable = false}, SHIFT(66),
  [502] = {.count = 1, .reusable = false}, REDUCE(aux_sym_cost_comp_list_repeat1, 2),
  [504] = {.count = 1, .reusable = true}, REDUCE(aux_sym_cost_comp_list_repeat1, 2),
  [506] = {.count = 2, .reusable = true}, REDUCE(aux_sym_cost_comp_list_repeat1, 2), SHIFT_REPEAT(13),
  [509] = {.count = 1, .reusable = false}, SHIFT(27),
  [511] = {.count = 1, .reusable = false}, REDUCE(sym_cost_comp_list, 2),
  [513] = {.count = 1, .reusable = true}, REDUCE(sym_cost_comp_list, 2),
  [515] = {.count = 1, .reusable = true}, SHIFT(13),
  [517] = {.count = 1, .reusable = false}, REDUCE(sym_cost_spec, 3),
  [519] = {.count = 1, .reusable = true}, REDUCE(sym_cost_spec, 3),
  [521] = {.count = 1, .reusable = false}, SHIFT(16),
  [523] = {.count = 1, .reusable = false}, REDUCE(sym_cost_comp_list, 1),
  [525] = {.count = 1, .reusable = true}, REDUCE(sym_cost_comp_list, 1),
  [527] = {.count = 1, .reusable = false}, SHIFT(26),
  [529] = {.count = 1, .reusable = false}, SHIFT(32),
  [531] = {.count = 1, .reusable = false}, SHIFT(36),
  [533] = {.count = 1, .reusable = false}, SHIFT(45),
  [535] = {.count = 1, .reusable = false}, SHIFT(55),
  [537] = {.count = 1, .reusable = false}, SHIFT(58),
  [539] = {.count = 1, .reusable = false}, SHIFT(30),
  [541] = {.count = 1, .reusable = false}, REDUCE(sym_compound_amount, 3),
  [543] = {.count = 1, .reusable = true}, REDUCE(sym_compound_amount, 3),
  [545] = {.count = 1, .reusable = false}, REDUCE(sym_cost_comp, 1),
  [547] = {.count = 1, .reusable = true}, REDUCE(sym_cost_comp, 1),
  [549] = {.count = 1, .reusable = false}, REDUCE(sym_compound_amount, 4),
  [551] = {.count = 1, .reusable = true}, REDUCE(sym_compound_amount, 4),
  [553] = {.count = 1, .reusable = false}, REDUCE(sym_compound_amount, 2),
  [555] = {.count = 1, .reusable = true}, REDUCE(sym_compound_amount, 2),
  [557] = {.count = 1, .reusable = true}, REDUCE(aux_sym_transaction_repeat1, 2),
  [559] = {.count = 1, .reusable = false}, REDUCE(sym_metadata, 1),
  [561] = {.count = 1, .reusable = true}, REDUCE(sym_metadata, 1),
  [563] = {.count = 1, .reusable = false}, REDUCE(aux_sym_metadata_repeat1, 2),
  [565] = {.count = 2, .reusable = true}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(171),
  [568] = {.count = 1, .reusable = false}, REDUCE(sym_key_value, 2),
  [570] = {.count = 1, .reusable = true}, REDUCE(sym_key_value, 2),
  [572] = {.count = 1, .reusable = true}, REDUCE(aux_sym_postings_repeat1, 2),
  [574] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 3, .production_id = 21),
  [576] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 3, .production_id = 21),
  [578] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 6, .production_id = 51),
  [580] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 6, .production_id = 51),
  [582] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 49),
  [584] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 49),
  [586] = {.count = 1, .reusable = true}, SHIFT(40),
  [588] = {.count = 1, .reusable = true}, SHIFT(196),
  [590] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 48),
  [592] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 48),
  [594] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 5, .production_id = 46),
  [596] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 5, .production_id = 46),
  [598] = {.count = 1, .reusable = false}, REDUCE(sym_amount_with_tolerance, 4),
  [600] = {.count = 1, .reusable = true}, REDUCE(sym_amount_with_tolerance, 4),
  [602] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 41),
  [604] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 41),
  [606] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 38),
  [608] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 38),
  [610] = {.count = 1, .reusable = false}, REDUCE(sym_price_annotation, 2),
  [612] = {.count = 1, .reusable = true}, REDUCE(sym_price_annotation, 2),
  [614] = {.count = 1, .reusable = true}, SHIFT(11),
  [616] = {.count = 1, .reusable = true}, REDUCE(aux_sym_metadata_repeat1, 2),
  [618] = {.count = 1, .reusable = false}, REDUCE(sym_posting, 4, .production_id = 39),
  [620] = {.count = 1, .reusable = true}, REDUCE(sym_posting, 4, .production_id = 39),
  [622] = {.count = 1, .reusable = true}, SHIFT(19),
  [624] = {.count = 1, .reusable = true}, SHIFT(33),
  [626] = {.count = 1, .reusable = true}, SHIFT(44),
  [628] = {.count = 1, .reusable = true}, SHIFT(149),
  [630] = {.count = 1, .reusable = true}, SHIFT(147),
  [632] = {.count = 1, .reusable = true}, SHIFT(145),
  [634] = {.count = 1, .reusable = true}, SHIFT(144),
  [636] = {.count = 1, .reusable = true}, SHIFT(105),
  [638] = {.count = 1, .reusable = true}, SHIFT(139),
  [640] = {.count = 1, .reusable = true}, SHIFT(21),
  [642] = {.count = 1, .reusable = true}, SHIFT(52),
  [644] = {.count = 1, .reusable = true}, SHIFT(64),
  [646] = {.count = 1, .reusable = true}, SHIFT(47),
  [648] = {.count = 1, .reusable = true}, SHIFT(28),
  [650] = {.count = 1, .reusable = true}, SHIFT(29),
  [652] = {.count = 1, .reusable = true}, SHIFT(41),
  [654] = {.count = 1, .reusable = true}, SHIFT(31),
  [656] = {.count = 1, .reusable = true}, SHIFT(183),
  [658] = {.count = 1, .reusable = true}, SHIFT(143),
  [660] = {.count = 1, .reusable = true}, SHIFT(88),
  [662] = {.count = 1, .reusable = true}, SHIFT(24),
  [664] = {.count = 1, .reusable = true}, SHIFT(23),
  [666] = {.count = 1, .reusable = true}, SHIFT(184),
  [668] = {.count = 1, .reusable = true}, SHIFT(56),
  [670] = {.count = 1, .reusable = true}, SHIFT(109),
  [672] = {.count = 1, .reusable = true}, SHIFT(65),
  [674] = {.count = 1, .reusable = true}, SHIFT(185),
  [676] = {.count = 1, .reusable = true}, SHIFT(61),
  [678] = {.count = 1, .reusable = true}, SHIFT(186),
  [680] = {.count = 1, .reusable = true}, SHIFT(59),
  [682] = {.count = 1, .reusable = true}, SHIFT(34),
  [684] = {.count = 1, .reusable = true}, SHIFT(63),
  [686] = {.count = 1, .reusable = true}, SHIFT(35),
  [688] = {.count = 1, .reusable = true}, SHIFT(187),
  [690] = {.count = 1, .reusable = true}, SHIFT(231),
  [692] = {.count = 1, .reusable = true}, SHIFT(5),
  [694] = {.count = 1, .reusable = true}, SHIFT(46),
  [696] = {.count = 1, .reusable = true}, SHIFT(51),
  [698] = {.count = 1, .reusable = true}, SHIFT(135),
  [700] = {.count = 1, .reusable = true}, SHIFT(48),
  [702] = {.count = 1, .reusable = true}, SHIFT(140),
  [704] = {.count = 1, .reusable = true}, SHIFT(84),
  [706] = {.count = 1, .reusable = true}, SHIFT(50),
  [708] = {.count = 1, .reusable = true}, SHIFT(49),
  [710] = {.count = 1, .reusable = true}, SHIFT(15),
  [712] = {.count = 1, .reusable = true}, SHIFT(42),
  [714] = {.count = 1, .reusable = true}, SHIFT(39),
  [716] = {.count = 1, .reusable = true}, SHIFT(198),
  [718] = {.count = 1, .reusable = true}, SHIFT(38),
  [720] = {.count = 1, .reusable = true}, SHIFT(37),
  [722] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [724] = {.count = 1, .reusable = true}, SHIFT(224),
  [726] = {.count = 1, .reusable = true}, SHIFT(6),
  [728] = {.count = 1, .reusable = true}, SHIFT(226),
  [730] = {.count = 1, .reusable = true}, SHIFT(227),
  [732] = {.count = 1, .reusable = true}, SHIFT(167),
  [734] = {.count = 1, .reusable = true}, SHIFT(229),
  [736] = {.count = 1, .reusable = true}, SHIFT(230),
  [738] = {.count = 1, .reusable = true}, SHIFT(18),
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
