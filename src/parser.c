#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 303
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 100
#define ALIAS_COUNT 1
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 34
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 114

enum {
  aux_sym__skipped_lines_token1 = 1,
  aux_sym__skipped_lines_token2 = 2,
  aux_sym__skipped_lines_token3 = 3,
  anon_sym_COLON = 4,
  aux_sym__skipped_lines_token4 = 5,
  aux_sym_metadata_token1 = 6,
  anon_sym_include = 7,
  anon_sym_option = 8,
  anon_sym_plugin = 9,
  anon_sym_pushtag = 10,
  anon_sym_poptag = 11,
  anon_sym_pushmeta = 12,
  anon_sym_popmeta = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  anon_sym_LBRACE_LBRACE = 16,
  anon_sym_RBRACE_RBRACE = 17,
  anon_sym_COMMA = 18,
  anon_sym_STAR = 19,
  anon_sym_POUND = 20,
  anon_sym_AT = 21,
  anon_sym_AT_AT = 22,
  anon_sym_balance = 23,
  anon_sym_close = 24,
  anon_sym_commodity = 25,
  anon_sym_custom = 26,
  anon_sym_document = 27,
  anon_sym_event = 28,
  anon_sym_note = 29,
  anon_sym_open = 30,
  anon_sym_pad = 31,
  anon_sym_price = 32,
  anon_sym_query = 33,
  anon_sym_TILDE = 34,
  anon_sym_LPAREN = 35,
  anon_sym_RPAREN = 36,
  anon_sym_DASH = 37,
  anon_sym_PLUS = 38,
  anon_sym_SLASH = 39,
  sym_bool = 40,
  sym_date = 41,
  sym_key = 42,
  sym_tag = 43,
  sym_link = 44,
  sym_string = 45,
  sym_currency = 46,
  sym_number = 47,
  sym_account = 48,
  sym_beancount_file = 49,
  sym__skipped_lines = 50,
  sym_key_value = 51,
  sym_metadata = 52,
  sym__undated_directives = 53,
  sym_include = 54,
  sym_option = 55,
  sym_plugin = 56,
  sym_pushtag = 57,
  sym_poptag = 58,
  sym_pushmeta = 59,
  sym_popmeta = 60,
  sym__dated_directives = 61,
  sym_cost = 62,
  sym_total_cost = 63,
  sym__cost_comp_list = 64,
  sym__cost_comp = 65,
  sym_compound_amount = 66,
  sym_incomplete_amount = 67,
  sym_price_annotation = 68,
  sym_total_price_annotation = 69,
  sym_posting = 70,
  sym_postings = 71,
  sym_tags_and_links = 72,
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
  sym_paren_num_expr = 89,
  sym_unary_num_expr = 90,
  sym_binary_num_expr = 91,
  sym_flag = 92,
  aux_sym_beancount_file_repeat1 = 93,
  aux_sym_metadata_repeat1 = 94,
  aux_sym__cost_comp_list_repeat1 = 95,
  aux_sym_postings_repeat1 = 96,
  aux_sym_tags_and_links_repeat1 = 97,
  aux_sym_custom_repeat1 = 98,
  aux_sym_currency_list_repeat1 = 99,
  alias_sym_merge = 100,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__skipped_lines_token1] = "_skipped_lines_token1",
  [aux_sym__skipped_lines_token2] = "_skipped_lines_token2",
  [aux_sym__skipped_lines_token3] = "_skipped_lines_token3",
  [anon_sym_COLON] = ":",
  [aux_sym__skipped_lines_token4] = "_skipped_lines_token4",
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
  [anon_sym_AT] = "@",
  [anon_sym_AT_AT] = "@@",
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
  [sym_account] = "account",
  [sym_beancount_file] = "beancount_file",
  [sym__skipped_lines] = "_skipped_lines",
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
  [sym_cost] = "cost",
  [sym_total_cost] = "total_cost",
  [sym__cost_comp_list] = "_cost_comp_list",
  [sym__cost_comp] = "_cost_comp",
  [sym_compound_amount] = "compound_amount",
  [sym_incomplete_amount] = "incomplete_amount",
  [sym_price_annotation] = "price_annotation",
  [sym_total_price_annotation] = "total_price_annotation",
  [sym_posting] = "posting",
  [sym_postings] = "postings",
  [sym_tags_and_links] = "tags_and_links",
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
  [sym_paren_num_expr] = "paren_num_expr",
  [sym_unary_num_expr] = "unary_num_expr",
  [sym_binary_num_expr] = "binary_num_expr",
  [sym_flag] = "flag",
  [aux_sym_beancount_file_repeat1] = "beancount_file_repeat1",
  [aux_sym_metadata_repeat1] = "metadata_repeat1",
  [aux_sym__cost_comp_list_repeat1] = "_cost_comp_list_repeat1",
  [aux_sym_postings_repeat1] = "postings_repeat1",
  [aux_sym_tags_and_links_repeat1] = "tags_and_links_repeat1",
  [aux_sym_custom_repeat1] = "custom_repeat1",
  [aux_sym_currency_list_repeat1] = "currency_list_repeat1",
  [alias_sym_merge] = "merge",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__skipped_lines_token1] = aux_sym__skipped_lines_token1,
  [aux_sym__skipped_lines_token2] = aux_sym__skipped_lines_token2,
  [aux_sym__skipped_lines_token3] = aux_sym__skipped_lines_token3,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym__skipped_lines_token4] = aux_sym__skipped_lines_token4,
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
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
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
  [sym_account] = sym_account,
  [sym_beancount_file] = sym_beancount_file,
  [sym__skipped_lines] = sym__skipped_lines,
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
  [sym_cost] = sym_cost,
  [sym_total_cost] = sym_total_cost,
  [sym__cost_comp_list] = sym__cost_comp_list,
  [sym__cost_comp] = sym__cost_comp,
  [sym_compound_amount] = sym_compound_amount,
  [sym_incomplete_amount] = sym_incomplete_amount,
  [sym_price_annotation] = sym_price_annotation,
  [sym_total_price_annotation] = sym_total_price_annotation,
  [sym_posting] = sym_posting,
  [sym_postings] = sym_postings,
  [sym_tags_and_links] = sym_tags_and_links,
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
  [sym_paren_num_expr] = sym_paren_num_expr,
  [sym_unary_num_expr] = sym_unary_num_expr,
  [sym_binary_num_expr] = sym_binary_num_expr,
  [sym_flag] = sym_flag,
  [aux_sym_beancount_file_repeat1] = aux_sym_beancount_file_repeat1,
  [aux_sym_metadata_repeat1] = aux_sym_metadata_repeat1,
  [aux_sym__cost_comp_list_repeat1] = aux_sym__cost_comp_list_repeat1,
  [aux_sym_postings_repeat1] = aux_sym_postings_repeat1,
  [aux_sym_tags_and_links_repeat1] = aux_sym_tags_and_links_repeat1,
  [aux_sym_custom_repeat1] = aux_sym_custom_repeat1,
  [aux_sym_currency_list_repeat1] = aux_sym_currency_list_repeat1,
  [alias_sym_merge] = alias_sym_merge,
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
  [aux_sym__skipped_lines_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__skipped_lines_token4] = {
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
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
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
  [sym_cost] = {
    .visible = true,
    .named = true,
  },
  [sym_total_cost] = {
    .visible = true,
    .named = true,
  },
  [sym__cost_comp_list] = {
    .visible = false,
    .named = true,
  },
  [sym__cost_comp] = {
    .visible = false,
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
  [sym_total_price_annotation] = {
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
  [sym_paren_num_expr] = {
    .visible = true,
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
  [sym_flag] = {
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
  [aux_sym__cost_comp_list_repeat1] = {
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
  [alias_sym_merge] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_account = 1,
  field_amount = 2,
  field_booking = 3,
  field_compound_amount = 4,
  field_config = 5,
  field_cost_comp_list = 6,
  field_cost_spec = 7,
  field_currencies = 8,
  field_currency = 9,
  field_date = 10,
  field_description = 11,
  field_filename = 12,
  field_flag = 13,
  field_from_account = 14,
  field_key = 15,
  field_key_value = 16,
  field_merge = 17,
  field_metadata = 18,
  field_name = 19,
  field_narration = 20,
  field_note = 21,
  field_number = 22,
  field_number_per = 23,
  field_number_total = 24,
  field_payee = 25,
  field_postings = 26,
  field_price_annotation = 27,
  field_query = 28,
  field_string = 29,
  field_tag = 30,
  field_tags_and_links = 31,
  field_tolerance = 32,
  field_type = 33,
  field_value = 34,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_account] = "account",
  [field_amount] = "amount",
  [field_booking] = "booking",
  [field_compound_amount] = "compound_amount",
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
  [field_merge] = "merge",
  [field_metadata] = "metadata",
  [field_name] = "name",
  [field_narration] = "narration",
  [field_note] = "note",
  [field_number] = "number",
  [field_number_per] = "number_per",
  [field_number_total] = "number_total",
  [field_payee] = "payee",
  [field_postings] = "postings",
  [field_price_annotation] = "price_annotation",
  [field_query] = "query",
  [field_string] = "string",
  [field_tag] = "tag",
  [field_tags_and_links] = "tags_and_links",
  [field_tolerance] = "tolerance",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 1},
  [12] = {.index = 17, .length = 3},
  [13] = {.index = 20, .length = 3},
  [14] = {.index = 23, .length = 3},
  [15] = {.index = 26, .length = 3},
  [16] = {.index = 29, .length = 3},
  [17] = {.index = 32, .length = 3},
  [18] = {.index = 35, .length = 3},
  [19] = {.index = 38, .length = 3},
  [20] = {.index = 41, .length = 3},
  [21] = {.index = 44, .length = 3},
  [22] = {.index = 47, .length = 3},
  [23] = {.index = 50, .length = 3},
  [24] = {.index = 53, .length = 3},
  [25] = {.index = 56, .length = 1},
  [26] = {.index = 57, .length = 2},
  [27] = {.index = 59, .length = 2},
  [28] = {.index = 61, .length = 2},
  [29] = {.index = 63, .length = 2},
  [30] = {.index = 65, .length = 1},
  [31] = {.index = 66, .length = 2},
  [32] = {.index = 68, .length = 4},
  [33] = {.index = 72, .length = 4},
  [34] = {.index = 76, .length = 4},
  [35] = {.index = 80, .length = 4},
  [36] = {.index = 84, .length = 3},
  [37] = {.index = 87, .length = 4},
  [38] = {.index = 91, .length = 4},
  [39] = {.index = 95, .length = 4},
  [40] = {.index = 99, .length = 4},
  [41] = {.index = 103, .length = 4},
  [42] = {.index = 107, .length = 4},
  [43] = {.index = 111, .length = 4},
  [44] = {.index = 115, .length = 4},
  [45] = {.index = 119, .length = 4},
  [46] = {.index = 123, .length = 4},
  [47] = {.index = 127, .length = 2},
  [48] = {.index = 129, .length = 1},
  [49] = {.index = 130, .length = 1},
  [50] = {.index = 131, .length = 1},
  [51] = {.index = 132, .length = 4},
  [52] = {.index = 136, .length = 1},
  [53] = {.index = 137, .length = 1},
  [54] = {.index = 138, .length = 3},
  [55] = {.index = 141, .length = 3},
  [56] = {.index = 144, .length = 3},
  [57] = {.index = 147, .length = 3},
  [58] = {.index = 150, .length = 3},
  [59] = {.index = 153, .length = 3},
  [60] = {.index = 156, .length = 3},
  [61] = {.index = 159, .length = 3},
  [62] = {.index = 162, .length = 3},
  [63] = {.index = 165, .length = 3},
  [64] = {.index = 168, .length = 5},
  [65] = {.index = 173, .length = 5},
  [66] = {.index = 178, .length = 5},
  [67] = {.index = 183, .length = 5},
  [68] = {.index = 188, .length = 3},
  [69] = {.index = 191, .length = 5},
  [70] = {.index = 196, .length = 5},
  [71] = {.index = 201, .length = 1},
  [72] = {.index = 202, .length = 5},
  [73] = {.index = 207, .length = 8},
  [74] = {.index = 215, .length = 2},
  [75] = {.index = 217, .length = 3},
  [76] = {.index = 220, .length = 4},
  [77] = {.index = 224, .length = 3},
  [78] = {.index = 227, .length = 4},
  [79] = {.index = 231, .length = 4},
  [80] = {.index = 235, .length = 4},
  [81] = {.index = 239, .length = 3},
  [82] = {.index = 242, .length = 3},
  [83] = {.index = 245, .length = 4},
  [84] = {.index = 249, .length = 4},
  [85] = {.index = 253, .length = 4},
  [86] = {.index = 257, .length = 4},
  [87] = {.index = 261, .length = 4},
  [88] = {.index = 265, .length = 4},
  [89] = {.index = 269, .length = 6},
  [90] = {.index = 275, .length = 6},
  [91] = {.index = 281, .length = 6},
  [92] = {.index = 287, .length = 2},
  [93] = {.index = 289, .length = 4},
  [94] = {.index = 293, .length = 2},
  [95] = {.index = 295, .length = 4},
  [96] = {.index = 299, .length = 4},
  [97] = {.index = 303, .length = 5},
  [98] = {.index = 308, .length = 4},
  [99] = {.index = 312, .length = 4},
  [100] = {.index = 316, .length = 5},
  [101] = {.index = 321, .length = 4},
  [102] = {.index = 325, .length = 5},
  [103] = {.index = 330, .length = 5},
  [104] = {.index = 335, .length = 5},
  [105] = {.index = 340, .length = 4},
  [106] = {.index = 344, .length = 7},
  [107] = {.index = 351, .length = 3},
  [108] = {.index = 354, .length = 5},
  [109] = {.index = 359, .length = 5},
  [110] = {.index = 364, .length = 5},
  [111] = {.index = 369, .length = 6},
  [112] = {.index = 375, .length = 5},
  [113] = {.index = 380, .length = 6},
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
    {field_currency, 1},
    {field_number, 0},
  [10] =
    {field_account, 2},
    {field_date, 0},
  [12] =
    {field_currency, 2},
    {field_date, 0},
  [14] =
    {field_date, 0},
    {field_name, 2},
  [16] =
    {field_account, 1},
  [17] =
    {field_date, 0},
    {field_flag, 1},
    {field_postings, 2},
  [20] =
    {field_account, 2},
    {field_amount, 3},
    {field_date, 0},
  [23] =
    {field_account, 2},
    {field_date, 0},
    {field_metadata, 3},
  [26] =
    {field_currency, 2},
    {field_date, 0},
    {field_metadata, 3},
  [29] =
    {field_date, 0},
    {field_metadata, 3},
    {field_name, 2},
  [32] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
  [35] =
    {field_date, 0},
    {field_description, 3},
    {field_type, 2},
  [38] =
    {field_account, 2},
    {field_date, 0},
    {field_note, 3},
  [41] =
    {field_account, 2},
    {field_booking, 3},
    {field_date, 0},
  [44] =
    {field_account, 2},
    {field_currencies, 3},
    {field_date, 0},
  [47] =
    {field_account, 2},
    {field_date, 0},
    {field_from_account, 3},
  [50] =
    {field_amount, 3},
    {field_currency, 2},
    {field_date, 0},
  [53] =
    {field_date, 0},
    {field_name, 2},
    {field_query, 3},
  [56] =
    {field_currency, 0},
  [57] =
    {field_account, 1},
    {field_metadata, 2},
  [59] =
    {field_account, 1},
    {field_cost_spec, 2},
  [61] =
    {field_account, 1},
    {field_amount, 2},
  [63] =
    {field_account, 1},
    {field_price_annotation, 2},
  [65] =
    {field_number, 0},
  [66] =
    {field_account, 2},
    {field_flag, 1},
  [68] =
    {field_date, 0},
    {field_flag, 1},
    {field_narration, 2},
    {field_postings, 3},
  [72] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 2},
    {field_postings, 3},
  [76] =
    {field_date, 0},
    {field_flag, 1},
    {field_postings, 3},
    {field_tags_and_links, 2},
  [80] =
    {field_account, 2},
    {field_amount, 3},
    {field_date, 0},
    {field_metadata, 4},
  [84] =
    {field_date, 0},
    {field_metadata, 4},
    {field_name, 2},
  [87] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
    {field_metadata, 4},
  [91] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
    {field_tags_and_links, 4},
  [95] =
    {field_date, 0},
    {field_description, 3},
    {field_metadata, 4},
    {field_type, 2},
  [99] =
    {field_account, 2},
    {field_date, 0},
    {field_metadata, 4},
    {field_note, 3},
  [103] =
    {field_account, 2},
    {field_booking, 3},
    {field_date, 0},
    {field_metadata, 4},
  [107] =
    {field_account, 2},
    {field_booking, 4},
    {field_currencies, 3},
    {field_date, 0},
  [111] =
    {field_account, 2},
    {field_currencies, 3},
    {field_date, 0},
    {field_metadata, 4},
  [115] =
    {field_account, 2},
    {field_date, 0},
    {field_from_account, 3},
    {field_metadata, 4},
  [119] =
    {field_amount, 3},
    {field_currency, 2},
    {field_date, 0},
    {field_metadata, 4},
  [123] =
    {field_date, 0},
    {field_metadata, 4},
    {field_name, 2},
    {field_query, 3},
  [127] =
    {field_account, 1},
    {field_metadata, 3},
  [129] =
    {field_merge, 0},
  [130] =
    {field_date, 0},
  [131] =
    {field_string, 0},
  [132] =
    {field_compound_amount, 0, .inherited = true},
    {field_date, 0, .inherited = true},
    {field_merge, 0, .inherited = true},
    {field_string, 0, .inherited = true},
  [136] =
    {field_compound_amount, 0},
  [137] =
    {field_number_per, 0},
  [138] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_metadata, 3},
  [141] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_price_annotation, 3},
  [144] =
    {field_account, 1},
    {field_amount, 2},
    {field_metadata, 3},
  [147] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
  [150] =
    {field_account, 1},
    {field_amount, 2},
    {field_price_annotation, 3},
  [153] =
    {field_account, 1},
    {field_metadata, 3},
    {field_price_annotation, 2},
  [156] =
    {field_account, 2},
    {field_flag, 1},
    {field_metadata, 3},
  [159] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
  [162] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
  [165] =
    {field_account, 2},
    {field_flag, 1},
    {field_price_annotation, 3},
  [168] =
    {field_date, 0},
    {field_flag, 1},
    {field_narration, 3},
    {field_payee, 2},
    {field_postings, 4},
  [173] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 3},
    {field_narration, 2},
    {field_postings, 4},
  [178] =
    {field_date, 0},
    {field_flag, 1},
    {field_narration, 2},
    {field_postings, 4},
    {field_tags_and_links, 3},
  [183] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 3},
    {field_postings, 4},
    {field_tags_and_links, 2},
  [188] =
    {field_currency, 3},
    {field_number, 0},
    {field_tolerance, 2},
  [191] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
    {field_metadata, 5},
    {field_tags_and_links, 4},
  [196] =
    {field_account, 2},
    {field_booking, 4},
    {field_currencies, 3},
    {field_date, 0},
    {field_metadata, 5},
  [201] =
    {field_currency, 1},
  [202] =
    {field_compound_amount, 1, .inherited = true},
    {field_cost_comp_list, 1},
    {field_date, 1, .inherited = true},
    {field_merge, 1, .inherited = true},
    {field_string, 1, .inherited = true},
  [207] =
    {field_compound_amount, 0, .inherited = true},
    {field_compound_amount, 1, .inherited = true},
    {field_date, 0, .inherited = true},
    {field_date, 1, .inherited = true},
    {field_merge, 0, .inherited = true},
    {field_merge, 1, .inherited = true},
    {field_string, 0, .inherited = true},
    {field_string, 1, .inherited = true},
  [215] =
    {field_currency, 1},
    {field_number_per, 0},
  [217] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_metadata, 4},
  [220] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_metadata, 4},
    {field_price_annotation, 3},
  [224] =
    {field_account, 1},
    {field_amount, 2},
    {field_metadata, 4},
  [227] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_metadata, 4},
  [231] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_price_annotation, 4},
  [235] =
    {field_account, 1},
    {field_amount, 2},
    {field_metadata, 4},
    {field_price_annotation, 3},
  [239] =
    {field_account, 1},
    {field_metadata, 4},
    {field_price_annotation, 2},
  [242] =
    {field_account, 2},
    {field_flag, 1},
    {field_metadata, 4},
  [245] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
    {field_metadata, 4},
  [249] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
    {field_price_annotation, 4},
  [253] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
    {field_metadata, 4},
  [257] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
  [261] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
    {field_price_annotation, 4},
  [265] =
    {field_account, 2},
    {field_flag, 1},
    {field_metadata, 4},
    {field_price_annotation, 3},
  [269] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 4},
    {field_narration, 3},
    {field_payee, 2},
    {field_postings, 5},
  [275] =
    {field_date, 0},
    {field_flag, 1},
    {field_narration, 3},
    {field_payee, 2},
    {field_postings, 5},
    {field_tags_and_links, 4},
  [281] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 4},
    {field_narration, 2},
    {field_postings, 5},
    {field_tags_and_links, 3},
  [287] =
    {field_currency, 2},
    {field_number_total, 1},
  [289] =
    {field_compound_amount, 1, .inherited = true},
    {field_date, 1, .inherited = true},
    {field_merge, 1, .inherited = true},
    {field_string, 1, .inherited = true},
  [293] =
    {field_currency, 2},
    {field_number_per, 0},
  [295] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_metadata, 5},
    {field_price_annotation, 3},
  [299] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_metadata, 5},
  [303] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_metadata, 5},
    {field_price_annotation, 4},
  [308] =
    {field_account, 1},
    {field_amount, 2},
    {field_metadata, 5},
    {field_price_annotation, 3},
  [312] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
    {field_metadata, 5},
  [316] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
    {field_metadata, 5},
    {field_price_annotation, 4},
  [321] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
    {field_metadata, 5},
  [325] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
    {field_metadata, 5},
  [330] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
    {field_price_annotation, 5},
  [335] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
    {field_metadata, 5},
    {field_price_annotation, 4},
  [340] =
    {field_account, 2},
    {field_flag, 1},
    {field_metadata, 5},
    {field_price_annotation, 3},
  [344] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 5},
    {field_narration, 3},
    {field_payee, 2},
    {field_postings, 6},
    {field_tags_and_links, 4},
  [351] =
    {field_currency, 3},
    {field_number_per, 0},
    {field_number_total, 2},
  [354] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_metadata, 6},
    {field_price_annotation, 4},
  [359] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
    {field_metadata, 6},
    {field_price_annotation, 4},
  [364] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
    {field_metadata, 6},
  [369] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
    {field_metadata, 6},
    {field_price_annotation, 5},
  [375] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
    {field_metadata, 6},
    {field_price_annotation, 4},
  [380] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
    {field_metadata, 7},
    {field_price_annotation, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [48] = {
    [0] = alias_sym_merge,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 6,
  [28] = 28,
  [29] = 7,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 9,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 10,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 97,
  [103] = 95,
  [104] = 96,
  [105] = 98,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 120,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 181,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
};

static inline bool aux_sym__skipped_lines_token1_character_set_1(int32_t c) {
  return (c < '?'
    ? (c < '%'
      ? (c < '#'
        ? c == '!'
        : c <= '#')
      : (c <= '&' || c == '*'))
    : (c <= '?' || (c < 'P'
      ? (c < 'M'
        ? c == 'C'
        : c <= 'M')
      : (c <= 'P' || (c >= 'R' && c <= 'U')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(157);
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '(') ADVANCE(198);
      if (lookahead == ')') ADVANCE(199);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '+') ADVANCE(201);
      if (lookahead == ',') ADVANCE(181);
      if (lookahead == '-') ADVANCE(200);
      if (lookahead == '/') ADVANCE(202);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == ';') ADVANCE(167);
      if (lookahead == '@') ADVANCE(184);
      if (lookahead == '^') ADVANCE(153);
      if (lookahead == 'b') ADVANCE(44);
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(99);
      if (lookahead == 'p') ADVANCE(45);
      if (lookahead == 'q') ADVANCE(113);
      if (lookahead == '{') ADVANCE(176);
      if (lookahead == '}') ADVANCE(178);
      if (lookahead == '~') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '?') ADVANCE(158);
      if (lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (lookahead != 0 &&
          lookahead > '>' &&
          (lookahead < '[' || 127 < lookahead)) ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '(') ADVANCE(198);
      if (lookahead == ')') ADVANCE(199);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '+') ADVANCE(201);
      if (lookahead == ',') ADVANCE(181);
      if (lookahead == '-') ADVANCE(200);
      if (lookahead == '/') ADVANCE(202);
      if (lookahead == ';') ADVANCE(167);
      if (lookahead == '@') ADVANCE(184);
      if (lookahead == '{') ADVANCE(176);
      if (lookahead == '}') ADVANCE(178);
      if (lookahead == '~') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(142);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '(') ADVANCE(198);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '+') ADVANCE(201);
      if (lookahead == '-') ADVANCE(200);
      if (lookahead == '/') ADVANCE(202);
      if (lookahead == 'F') ADVANCE(31);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(33);
      if (lookahead != 0 &&
          lookahead > 127) ADVANCE(41);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '(') ADVANCE(198);
      if (lookahead == '+') ADVANCE(201);
      if (lookahead == '-') ADVANCE(200);
      if (lookahead == ';') ADVANCE(167);
      if (lookahead == '@') ADVANCE(184);
      if (lookahead == 'F') ADVANCE(34);
      if (lookahead == 'T') ADVANCE(37);
      if (lookahead == '^') ADVANCE(153);
      if (lookahead == '{') ADVANCE(176);
      if (lookahead == '}') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (lookahead != 0 &&
          lookahead > '?' &&
          (lookahead < '[' || 127 < lookahead)) ADVANCE(41);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '(') ADVANCE(198);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '+') ADVANCE(201);
      if (lookahead == '-') ADVANCE(200);
      if (lookahead == '}') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(142);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '(') ADVANCE(198);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '+') ADVANCE(201);
      if (lookahead == '-') ADVANCE(200);
      if (lookahead == '}') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(142);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(210);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(160);
      if (lookahead == ';') ADVANCE(167);
      if (lookahead == '^') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '?') ADVANCE(158);
      if (lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(159);
      if (lookahead != 0 &&
          lookahead > '@' &&
          (lookahead < '[' || 127 < lookahead)) ADVANCE(41);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 9:
      if (lookahead == ',') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(214);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(212);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(216);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(213);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(215);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(217);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(222);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(219);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(224);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(221);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(226);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(223);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(228);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(231);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(227);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(237);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(230);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == 'A') ADVANCE(232);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(234);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == 'R') ADVANCE(233);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(234);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(234);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == 'A') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == 'E') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == 'L') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == 'R') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == 'S') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == 'U') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead > ',' &&
          (lookahead < '.' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(239);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == ';') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '?') ADVANCE(158);
      if (lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(159);
      if (lookahead != 0 &&
          lookahead > '@' &&
          (lookahead < '[' || 127 < lookahead)) ADVANCE(41);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'l') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(100);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(194);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 69:
      if (lookahead == 'g') ADVANCE(173);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(172);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(74);
      END_STATE();
    case 72:
      if (lookahead == 'h') ADVANCE(84);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 80:
      if (lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 99:
      if (lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(83);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 112:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 113:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 114:
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 116:
      if (lookahead == 'v') ADVANCE(64);
      END_STATE();
    case 117:
      if (lookahead == 'y') ADVANCE(196);
      END_STATE();
    case 118:
      if (lookahead == 'y') ADVANCE(188);
      END_STATE();
    case 119:
      if (lookahead == '}') ADVANCE(180);
      END_STATE();
    case 120:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(146);
      END_STATE();
    case 121:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(147);
      END_STATE();
    case 122:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(261);
      END_STATE();
    case 123:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(240);
      END_STATE();
    case 124:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(243);
      END_STATE();
    case 125:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      END_STATE();
    case 126:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(245);
      END_STATE();
    case 127:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(242);
      END_STATE();
    case 128:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(247);
      END_STATE();
    case 129:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      END_STATE();
    case 130:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 131:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(246);
      END_STATE();
    case 132:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(251);
      END_STATE();
    case 133:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(248);
      END_STATE();
    case 134:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(253);
      END_STATE();
    case 135:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(250);
      END_STATE();
    case 136:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 137:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 138:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 139:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 140:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(259);
      END_STATE();
    case 141:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(256);
      END_STATE();
    case 142:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 143:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(258);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(211);
      END_STATE();
    case 152:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 153:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 154:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 155:
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || 127 < lookahead)) ADVANCE(268);
      END_STATE();
    case 156:
      if (eof) ADVANCE(157);
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == ';') ADVANCE(167);
      if (lookahead == 'b') ADVANCE(44);
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(99);
      if (lookahead == 'p') ADVANCE(45);
      if (lookahead == 'q') ADVANCE(113);
      if (lookahead == '}') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(156)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (aux_sym__skipped_lines_token1_character_set_1(lookahead)) ADVANCE(158);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token1);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token1);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token1);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token3);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(168);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_metadata_token1);
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_plugin);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_pushtag);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_poptag);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_pushmeta);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_popmeta);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(179);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(180);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(185);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_balance);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_close);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_document);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_pad);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_price);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(231);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(227);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_key);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_tag);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_link);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_currency);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(212);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(216);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(213);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(215);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(217);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(219);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(221);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(223);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(228);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == 'E') ADVANCE(204);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(231);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(231);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(227);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == 'L') ADVANCE(236);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(237);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == 'U') ADVANCE(235);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(237);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(237);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == 'E') ADVANCE(203);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(230);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == 'S') ADVANCE(229);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(230);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(230);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead > ',' &&
          (lookahead < '.' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(239);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(41);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(261);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(240);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(243);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(242);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(246);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(248);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(250);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(256);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(258);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_currency);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(211);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(9);
      if (lookahead == '.') ADVANCE(267);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(9);
      if (lookahead == '.') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(9);
      if (lookahead == '.') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(9);
      if (lookahead == '.') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(9);
      if (lookahead == '.') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(268);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 156},
  [2] = {.lex_state = 156},
  [3] = {.lex_state = 156},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 156},
  [21] = {.lex_state = 156},
  [22] = {.lex_state = 156},
  [23] = {.lex_state = 156},
  [24] = {.lex_state = 156},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 156},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 156},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 156},
  [31] = {.lex_state = 156},
  [32] = {.lex_state = 156},
  [33] = {.lex_state = 156},
  [34] = {.lex_state = 156},
  [35] = {.lex_state = 156},
  [36] = {.lex_state = 156},
  [37] = {.lex_state = 156},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 156},
  [40] = {.lex_state = 156},
  [41] = {.lex_state = 156},
  [42] = {.lex_state = 156},
  [43] = {.lex_state = 156},
  [44] = {.lex_state = 156},
  [45] = {.lex_state = 156},
  [46] = {.lex_state = 156},
  [47] = {.lex_state = 156},
  [48] = {.lex_state = 156},
  [49] = {.lex_state = 156},
  [50] = {.lex_state = 156},
  [51] = {.lex_state = 156},
  [52] = {.lex_state = 156},
  [53] = {.lex_state = 156},
  [54] = {.lex_state = 156},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 156},
  [59] = {.lex_state = 156},
  [60] = {.lex_state = 156},
  [61] = {.lex_state = 156},
  [62] = {.lex_state = 156},
  [63] = {.lex_state = 156},
  [64] = {.lex_state = 156},
  [65] = {.lex_state = 156},
  [66] = {.lex_state = 156},
  [67] = {.lex_state = 156},
  [68] = {.lex_state = 156},
  [69] = {.lex_state = 156},
  [70] = {.lex_state = 156},
  [71] = {.lex_state = 156},
  [72] = {.lex_state = 156},
  [73] = {.lex_state = 156},
  [74] = {.lex_state = 156},
  [75] = {.lex_state = 156},
  [76] = {.lex_state = 156},
  [77] = {.lex_state = 156},
  [78] = {.lex_state = 156},
  [79] = {.lex_state = 156},
  [80] = {.lex_state = 156},
  [81] = {.lex_state = 156},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 43},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 3},
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
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
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
  [174] = {.lex_state = 43},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 3},
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
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
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
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 1},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 161},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 1},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 3},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 1},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 1},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 3},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 156},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 1},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 3},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__skipped_lines_token1] = ACTIONS(1),
    [aux_sym__skipped_lines_token3] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym__skipped_lines_token4] = ACTIONS(1),
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
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
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
    [sym_account] = ACTIONS(1),
  },
  [1] = {
    [sym_beancount_file] = STATE(256),
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
    [aux_sym__skipped_lines_token1] = ACTIONS(5),
    [aux_sym__skipped_lines_token3] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(5),
    [aux_sym__skipped_lines_token4] = ACTIONS(9),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_option] = ACTIONS(13),
    [anon_sym_plugin] = ACTIONS(15),
    [anon_sym_pushtag] = ACTIONS(17),
    [anon_sym_poptag] = ACTIONS(19),
    [anon_sym_pushmeta] = ACTIONS(21),
    [anon_sym_popmeta] = ACTIONS(23),
    [sym_date] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(35), 1,
      aux_sym__skipped_lines_token4,
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
    ACTIONS(29), 2,
      aux_sym__skipped_lines_token1,
      anon_sym_COLON,
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
      aux_sym__skipped_lines_token4,
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
      aux_sym__skipped_lines_token3,
    ACTIONS(5), 2,
      aux_sym__skipped_lines_token1,
      anon_sym_COLON,
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
      aux_sym__skipped_lines_token3,
    ACTIONS(68), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(70), 1,
      aux_sym_metadata_token1,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(77), 1,
      anon_sym_AT,
    ACTIONS(79), 1,
      anon_sym_AT_AT,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      sym_currency,
    ACTIONS(87), 1,
      sym_number,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(232), 1,
      sym_metadata,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(56), 2,
      sym_incomplete_amount,
      sym_amount,
    STATE(90), 2,
      sym_cost,
      sym_total_cost,
    STATE(124), 2,
      sym_price_annotation,
      sym_total_price_annotation,
    STATE(82), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [185] = 17,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(77), 1,
      anon_sym_AT,
    ACTIONS(79), 1,
      anon_sym_AT_AT,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      sym_currency,
    ACTIONS(87), 1,
      sym_number,
    ACTIONS(89), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(91), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(93), 1,
      aux_sym_metadata_token1,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(217), 1,
      sym_metadata,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(25), 2,
      sym_incomplete_amount,
      sym_amount,
    STATE(94), 2,
      sym_cost,
      sym_total_cost,
    STATE(117), 2,
      sym_price_annotation,
      sym_total_price_annotation,
    STATE(82), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [244] = 3,
    ACTIONS(100), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(98), 4,
      aux_sym_metadata_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(96), 12,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_POUND,
      anon_sym_AT_AT,
      anon_sym_TILDE,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_currency,
  [269] = 2,
    ACTIONS(98), 4,
      aux_sym_metadata_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(96), 14,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_AT_AT,
      anon_sym_TILDE,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_currency,
  [292] = 11,
    ACTIONS(102), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(104), 1,
      aux_sym_metadata_token1,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      sym_bool,
    ACTIONS(114), 1,
      sym_number,
    STATE(181), 1,
      aux_sym_metadata_repeat1,
    STATE(275), 1,
      sym_metadata,
    ACTIONS(108), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(15), 2,
      sym_amount,
      aux_sym_custom_repeat1,
    ACTIONS(112), 3,
      sym_date,
      sym_string,
      sym_account,
    STATE(57), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [333] = 2,
    ACTIONS(118), 4,
      aux_sym_metadata_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(116), 14,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_AT_AT,
      anon_sym_TILDE,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_currency,
  [356] = 2,
    ACTIONS(122), 4,
      aux_sym_metadata_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(120), 14,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_AT_AT,
      anon_sym_TILDE,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_currency,
  [379] = 11,
    ACTIONS(104), 1,
      aux_sym_metadata_token1,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      sym_number,
    ACTIONS(124), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(126), 1,
      sym_bool,
    STATE(181), 1,
      aux_sym_metadata_repeat1,
    STATE(301), 1,
      sym_metadata,
    ACTIONS(108), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(8), 2,
      sym_amount,
      aux_sym_custom_repeat1,
    ACTIONS(128), 3,
      sym_date,
      sym_string,
      sym_account,
    STATE(57), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [420] = 13,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    ACTIONS(132), 1,
      anon_sym_STAR,
    ACTIONS(134), 1,
      anon_sym_POUND,
    ACTIONS(136), 1,
      sym_date,
    ACTIONS(138), 1,
      sym_string,
    ACTIONS(140), 1,
      sym_currency,
    ACTIONS(142), 1,
      sym_number,
    STATE(143), 1,
      sym__cost_comp,
    STATE(191), 1,
      sym_compound_amount,
    STATE(296), 1,
      sym__cost_comp_list,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(92), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [464] = 13,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_STAR,
    ACTIONS(134), 1,
      anon_sym_POUND,
    ACTIONS(136), 1,
      sym_date,
    ACTIONS(138), 1,
      sym_string,
    ACTIONS(140), 1,
      sym_currency,
    ACTIONS(142), 1,
      sym_number,
    ACTIONS(144), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(143), 1,
      sym__cost_comp,
    STATE(191), 1,
      sym_compound_amount,
    STATE(290), 1,
      sym__cost_comp_list,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(92), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [508] = 9,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(148), 1,
      aux_sym_metadata_token1,
    ACTIONS(154), 1,
      sym_number,
    STATE(223), 1,
      sym_amount,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(150), 2,
      sym_bool,
      sym_currency,
    ACTIONS(152), 4,
      sym_date,
      sym_tag,
      sym_string,
      sym_account,
    STATE(106), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [544] = 9,
    ACTIONS(156), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(158), 1,
      aux_sym_metadata_token1,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(166), 1,
      sym_bool,
    ACTIONS(172), 1,
      sym_number,
    ACTIONS(163), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(15), 2,
      sym_amount,
      aux_sym_custom_repeat1,
    ACTIONS(169), 3,
      sym_date,
      sym_string,
      sym_account,
    STATE(57), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [579] = 11,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_STAR,
    ACTIONS(134), 1,
      anon_sym_POUND,
    ACTIONS(136), 1,
      sym_date,
    ACTIONS(138), 1,
      sym_string,
    ACTIONS(140), 1,
      sym_currency,
    ACTIONS(142), 1,
      sym_number,
    STATE(191), 1,
      sym_compound_amount,
    STATE(193), 1,
      sym__cost_comp,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(92), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [617] = 2,
    ACTIONS(177), 5,
      aux_sym_metadata_token1,
      anon_sym_LBRACE,
      anon_sym_AT,
      sym_bool,
      sym_number,
    ACTIONS(175), 10,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_AT_AT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_date,
      sym_string,
      sym_account,
  [637] = 8,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      sym_currency,
    ACTIONS(87), 1,
      sym_number,
    ACTIONS(181), 1,
      aux_sym_metadata_token1,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(179), 2,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
    STATE(189), 2,
      sym_incomplete_amount,
      sym_amount,
    STATE(82), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [668] = 8,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      sym_currency,
    ACTIONS(87), 1,
      sym_number,
    ACTIONS(185), 1,
      aux_sym_metadata_token1,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(183), 2,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
    STATE(188), 2,
      sym_incomplete_amount,
      sym_amount,
    STATE(82), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [699] = 1,
    ACTIONS(187), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [715] = 1,
    ACTIONS(189), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [731] = 1,
    ACTIONS(191), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [747] = 1,
    ACTIONS(193), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [763] = 1,
    ACTIONS(195), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [779] = 11,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(77), 1,
      anon_sym_AT,
    ACTIONS(79), 1,
      anon_sym_AT_AT,
    ACTIONS(197), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(199), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(201), 1,
      aux_sym_metadata_token1,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(225), 1,
      sym_metadata,
    STATE(87), 2,
      sym_cost,
      sym_total_cost,
    STATE(135), 2,
      sym_price_annotation,
      sym_total_price_annotation,
  [815] = 1,
    ACTIONS(204), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [831] = 3,
    ACTIONS(206), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(98), 4,
      aux_sym_metadata_token1,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(96), 7,
      aux_sym__skipped_lines_token3,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_date,
      sym_string,
      sym_account,
  [851] = 1,
    ACTIONS(208), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [867] = 2,
    ACTIONS(98), 4,
      aux_sym_metadata_token1,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(96), 9,
      aux_sym__skipped_lines_token3,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_date,
      sym_string,
      sym_account,
  [885] = 1,
    ACTIONS(210), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [901] = 1,
    ACTIONS(212), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [917] = 1,
    ACTIONS(214), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [933] = 1,
    ACTIONS(216), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [949] = 1,
    ACTIONS(218), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [965] = 1,
    ACTIONS(220), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [981] = 1,
    ACTIONS(222), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [997] = 1,
    ACTIONS(224), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1013] = 2,
    ACTIONS(118), 4,
      aux_sym_metadata_token1,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(116), 9,
      aux_sym__skipped_lines_token3,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_date,
      sym_string,
      sym_account,
  [1031] = 1,
    ACTIONS(226), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1047] = 1,
    ACTIONS(228), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1063] = 1,
    ACTIONS(230), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1079] = 1,
    ACTIONS(232), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1095] = 1,
    ACTIONS(234), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1111] = 1,
    ACTIONS(236), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1127] = 1,
    ACTIONS(238), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1143] = 1,
    ACTIONS(240), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1159] = 1,
    ACTIONS(242), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1175] = 1,
    ACTIONS(244), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1191] = 1,
    ACTIONS(246), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1207] = 1,
    ACTIONS(248), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1223] = 1,
    ACTIONS(250), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1239] = 1,
    ACTIONS(252), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1255] = 1,
    ACTIONS(254), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1271] = 1,
    ACTIONS(256), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1287] = 2,
    ACTIONS(122), 4,
      aux_sym_metadata_token1,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(120), 9,
      aux_sym__skipped_lines_token3,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_date,
      sym_string,
      sym_account,
  [1305] = 11,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(77), 1,
      anon_sym_AT,
    ACTIONS(79), 1,
      anon_sym_AT_AT,
    ACTIONS(258), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(260), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(262), 1,
      aux_sym_metadata_token1,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(211), 1,
      sym_metadata,
    STATE(93), 2,
      sym_cost,
      sym_total_cost,
    STATE(125), 2,
      sym_price_annotation,
      sym_total_price_annotation,
  [1341] = 5,
    ACTIONS(271), 1,
      sym_currency,
    ACTIONS(206), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(269), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(267), 3,
      aux_sym_metadata_token1,
      sym_bool,
      sym_number,
    ACTIONS(265), 5,
      aux_sym__skipped_lines_token3,
      anon_sym_LPAREN,
      sym_date,
      sym_string,
      sym_account,
  [1365] = 1,
    ACTIONS(273), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1381] = 1,
    ACTIONS(275), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1397] = 1,
    ACTIONS(277), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1413] = 1,
    ACTIONS(279), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1429] = 1,
    ACTIONS(281), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1445] = 1,
    ACTIONS(283), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1461] = 1,
    ACTIONS(285), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1477] = 1,
    ACTIONS(287), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1493] = 1,
    ACTIONS(289), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1509] = 1,
    ACTIONS(291), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1525] = 1,
    ACTIONS(293), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1541] = 1,
    ACTIONS(295), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1557] = 1,
    ACTIONS(297), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1573] = 1,
    ACTIONS(299), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1589] = 1,
    ACTIONS(301), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1605] = 13,
    ACTIONS(303), 1,
      aux_sym__skipped_lines_token1,
    ACTIONS(305), 1,
      anon_sym_balance,
    ACTIONS(307), 1,
      anon_sym_close,
    ACTIONS(309), 1,
      anon_sym_commodity,
    ACTIONS(311), 1,
      anon_sym_custom,
    ACTIONS(313), 1,
      anon_sym_document,
    ACTIONS(315), 1,
      anon_sym_event,
    ACTIONS(317), 1,
      anon_sym_note,
    ACTIONS(319), 1,
      anon_sym_open,
    ACTIONS(321), 1,
      anon_sym_pad,
    ACTIONS(323), 1,
      anon_sym_price,
    ACTIONS(325), 1,
      anon_sym_query,
    STATE(84), 1,
      sym_flag,
  [1645] = 1,
    ACTIONS(327), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1661] = 1,
    ACTIONS(329), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1677] = 1,
    ACTIONS(331), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1693] = 1,
    ACTIONS(333), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1709] = 1,
    ACTIONS(335), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1725] = 1,
    ACTIONS(337), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1741] = 1,
    ACTIONS(339), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1757] = 1,
    ACTIONS(341), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1773] = 5,
    ACTIONS(349), 1,
      sym_currency,
    ACTIONS(100), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(347), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(345), 3,
      aux_sym_metadata_token1,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(343), 4,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1796] = 9,
    ACTIONS(351), 1,
      aux_sym_metadata_token1,
    ACTIONS(355), 1,
      sym_string,
    STATE(113), 1,
      sym_tags_and_links,
    STATE(138), 1,
      aux_sym_tags_and_links_repeat1,
    STATE(176), 1,
      sym_metadata,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(289), 1,
      sym_postings,
    ACTIONS(353), 2,
      sym_tag,
      sym_link,
    STATE(144), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [1826] = 9,
    ACTIONS(351), 1,
      aux_sym_metadata_token1,
    ACTIONS(357), 1,
      sym_string,
    STATE(109), 1,
      sym_tags_and_links,
    STATE(138), 1,
      aux_sym_tags_and_links_repeat1,
    STATE(154), 1,
      sym_metadata,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(254), 1,
      sym_postings,
    ACTIONS(353), 2,
      sym_tag,
      sym_link,
    STATE(144), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [1856] = 5,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(359), 1,
      sym_number,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(149), 2,
      sym_amount,
      sym_amount_with_tolerance,
    STATE(110), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [1877] = 8,
    ACTIONS(351), 1,
      aux_sym_metadata_token1,
    STATE(111), 1,
      sym_tags_and_links,
    STATE(138), 1,
      aux_sym_tags_and_links_repeat1,
    STATE(165), 1,
      sym_metadata,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(270), 1,
      sym_postings,
    ACTIONS(353), 2,
      sym_tag,
      sym_link,
    STATE(144), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [1904] = 8,
    ACTIONS(77), 1,
      anon_sym_AT,
    ACTIONS(79), 1,
      anon_sym_AT_AT,
    ACTIONS(361), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(363), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(365), 1,
      aux_sym_metadata_token1,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(213), 1,
      sym_metadata,
    STATE(122), 2,
      sym_price_annotation,
      sym_total_price_annotation,
  [1930] = 5,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(368), 1,
      sym_number,
    STATE(167), 1,
      sym_amount,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(121), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [1950] = 5,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      sym_currency,
    ACTIONS(372), 1,
      sym_number,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(133), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [1970] = 8,
    ACTIONS(77), 1,
      anon_sym_AT,
    ACTIONS(79), 1,
      anon_sym_AT_AT,
    ACTIONS(374), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(376), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(378), 1,
      aux_sym_metadata_token1,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(208), 1,
      sym_metadata,
    STATE(131), 2,
      sym_price_annotation,
      sym_total_price_annotation,
  [1996] = 5,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      sym_currency,
    ACTIONS(383), 1,
      sym_number,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(118), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2016] = 6,
    ACTIONS(385), 1,
      anon_sym_RBRACE,
    ACTIONS(389), 1,
      anon_sym_POUND,
    ACTIONS(391), 1,
      sym_currency,
    ACTIONS(100), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(347), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(387), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [2038] = 8,
    ACTIONS(77), 1,
      anon_sym_AT,
    ACTIONS(79), 1,
      anon_sym_AT_AT,
    ACTIONS(393), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(395), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(397), 1,
      aux_sym_metadata_token1,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(233), 1,
      sym_metadata,
    STATE(129), 2,
      sym_price_annotation,
      sym_total_price_annotation,
  [2064] = 8,
    ACTIONS(77), 1,
      anon_sym_AT,
    ACTIONS(79), 1,
      anon_sym_AT_AT,
    ACTIONS(400), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(402), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(404), 1,
      aux_sym_metadata_token1,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(226), 1,
      sym_metadata,
    STATE(132), 2,
      sym_price_annotation,
      sym_total_price_annotation,
  [2090] = 4,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(407), 1,
      sym_number,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(7), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2107] = 4,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      sym_number,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(120), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2124] = 4,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(411), 1,
      sym_number,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(6), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2141] = 4,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      sym_number,
    ACTIONS(108), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(55), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2158] = 7,
    ACTIONS(415), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(417), 1,
      aux_sym_metadata_token1,
    STATE(138), 1,
      aux_sym_tags_and_links_repeat1,
    STATE(151), 1,
      sym_tags_and_links,
    STATE(181), 1,
      aux_sym_metadata_repeat1,
    STATE(238), 1,
      sym_metadata,
    ACTIONS(353), 2,
      sym_tag,
      sym_link,
  [2181] = 7,
    ACTIONS(419), 1,
      aux_sym__skipped_lines_token1,
    ACTIONS(421), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(423), 1,
      sym_key,
    ACTIONS(427), 1,
      sym_account,
    STATE(200), 1,
      sym_key_value,
    STATE(293), 1,
      sym_flag,
    ACTIONS(425), 2,
      sym_tag,
      sym_link,
  [2204] = 4,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      sym_number,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(116), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2221] = 4,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      sym_number,
    ACTIONS(108), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(27), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2238] = 4,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      sym_number,
    ACTIONS(108), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(29), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2255] = 4,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(435), 1,
      sym_number,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(128), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2272] = 4,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(437), 1,
      sym_number,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(10), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2289] = 5,
    ACTIONS(349), 1,
      sym_currency,
    ACTIONS(439), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(441), 1,
      aux_sym_metadata_token1,
    ACTIONS(100), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(347), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2307] = 2,
    ACTIONS(445), 3,
      aux_sym_metadata_token1,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(443), 4,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2319] = 7,
    ACTIONS(104), 1,
      aux_sym_metadata_token1,
    ACTIONS(447), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(449), 1,
      sym_string,
    ACTIONS(451), 1,
      sym_currency,
    STATE(114), 1,
      sym_currency_list,
    STATE(181), 1,
      aux_sym_metadata_repeat1,
    STATE(300), 1,
      sym_metadata,
  [2341] = 5,
    ACTIONS(453), 1,
      aux_sym_metadata_token1,
    STATE(168), 1,
      sym_metadata,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(281), 1,
      sym_postings,
    STATE(144), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2358] = 4,
    ACTIONS(349), 1,
      sym_currency,
    ACTIONS(455), 1,
      anon_sym_TILDE,
    ACTIONS(100), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(347), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2373] = 5,
    ACTIONS(453), 1,
      aux_sym_metadata_token1,
    STATE(173), 1,
      sym_metadata,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(259), 1,
      sym_postings,
    STATE(144), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2390] = 6,
    ACTIONS(419), 1,
      aux_sym__skipped_lines_token1,
    ACTIONS(421), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(423), 1,
      sym_key,
    ACTIONS(427), 1,
      sym_account,
    STATE(200), 1,
      sym_key_value,
    STATE(293), 1,
      sym_flag,
  [2409] = 5,
    ACTIONS(453), 1,
      aux_sym_metadata_token1,
    STATE(170), 1,
      sym_metadata,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(243), 1,
      sym_postings,
    STATE(144), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2426] = 5,
    ACTIONS(104), 1,
      aux_sym_metadata_token1,
    ACTIONS(457), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(459), 1,
      sym_string,
    STATE(181), 1,
      aux_sym_metadata_repeat1,
    STATE(264), 1,
      sym_metadata,
  [2442] = 4,
    ACTIONS(463), 1,
      aux_sym_metadata_token1,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      aux_sym_currency_list_repeat1,
    ACTIONS(461), 2,
      aux_sym__skipped_lines_token3,
      sym_string,
  [2456] = 3,
    ACTIONS(468), 1,
      sym_currency,
    ACTIONS(100), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(347), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2468] = 5,
    ACTIONS(470), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(472), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(474), 1,
      aux_sym_metadata_token1,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(224), 1,
      sym_metadata,
  [2484] = 3,
    ACTIONS(477), 1,
      sym_currency,
    ACTIONS(100), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(347), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2496] = 2,
    ACTIONS(481), 2,
      aux_sym_metadata_token1,
      anon_sym_AT,
    ACTIONS(479), 3,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
      anon_sym_AT_AT,
  [2506] = 3,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
    ACTIONS(100), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(347), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2518] = 3,
    ACTIONS(349), 1,
      sym_currency,
    ACTIONS(100), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(347), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2530] = 5,
    ACTIONS(485), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(487), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(489), 1,
      aux_sym_metadata_token1,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(204), 1,
      sym_metadata,
  [2546] = 2,
    ACTIONS(494), 2,
      aux_sym_metadata_token1,
      anon_sym_AT,
    ACTIONS(492), 3,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
      anon_sym_AT_AT,
  [2556] = 5,
    ACTIONS(496), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(498), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(500), 1,
      aux_sym_metadata_token1,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(215), 1,
      sym_metadata,
  [2572] = 5,
    ACTIONS(503), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(505), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(507), 1,
      aux_sym_metadata_token1,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(231), 1,
      sym_metadata,
  [2588] = 4,
    ACTIONS(510), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(512), 1,
      aux_sym_metadata_token1,
    STATE(126), 1,
      aux_sym_tags_and_links_repeat1,
    ACTIONS(515), 2,
      sym_tag,
      sym_link,
  [2602] = 1,
    ACTIONS(518), 5,
      aux_sym_metadata_token1,
      sym_tag,
      sym_link,
      sym_string,
      sym_account,
  [2610] = 3,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
    ACTIONS(100), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(347), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2622] = 5,
    ACTIONS(522), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(524), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(526), 1,
      aux_sym_metadata_token1,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(219), 1,
      sym_metadata,
  [2638] = 4,
    ACTIONS(531), 1,
      aux_sym_metadata_token1,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    STATE(136), 1,
      aux_sym_currency_list_repeat1,
    ACTIONS(529), 2,
      aux_sym__skipped_lines_token3,
      sym_string,
  [2652] = 5,
    ACTIONS(535), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(537), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(539), 1,
      aux_sym_metadata_token1,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(235), 1,
      sym_metadata,
  [2668] = 5,
    ACTIONS(542), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(544), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(546), 1,
      aux_sym_metadata_token1,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(214), 1,
      sym_metadata,
  [2684] = 3,
    ACTIONS(549), 1,
      sym_currency,
    ACTIONS(100), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(347), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2696] = 2,
    ACTIONS(553), 2,
      aux_sym_metadata_token1,
      anon_sym_AT,
    ACTIONS(551), 3,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
      anon_sym_AT_AT,
  [2706] = 5,
    ACTIONS(555), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(557), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(559), 1,
      aux_sym_metadata_token1,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(210), 1,
      sym_metadata,
  [2722] = 4,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    ACTIONS(564), 1,
      aux_sym_metadata_token1,
    STATE(115), 1,
      aux_sym_currency_list_repeat1,
    ACTIONS(562), 2,
      aux_sym__skipped_lines_token3,
      sym_string,
  [2736] = 2,
    ACTIONS(568), 2,
      aux_sym_metadata_token1,
      anon_sym_AT,
    ACTIONS(566), 3,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
      anon_sym_AT_AT,
  [2746] = 4,
    ACTIONS(570), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(572), 1,
      aux_sym_metadata_token1,
    STATE(126), 1,
      aux_sym_tags_and_links_repeat1,
    ACTIONS(575), 2,
      sym_tag,
      sym_link,
  [2760] = 4,
    ACTIONS(577), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(579), 1,
      aux_sym_metadata_token1,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(209), 1,
      sym_metadata,
  [2773] = 4,
    ACTIONS(104), 1,
      aux_sym_metadata_token1,
    ACTIONS(582), 1,
      aux_sym__skipped_lines_token3,
    STATE(181), 1,
      aux_sym_metadata_repeat1,
    STATE(302), 1,
      sym_metadata,
  [2786] = 4,
    ACTIONS(584), 1,
      anon_sym_RBRACE,
    ACTIONS(586), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(588), 1,
      anon_sym_COMMA,
    STATE(141), 1,
      aux_sym__cost_comp_list_repeat1,
  [2799] = 4,
    ACTIONS(104), 1,
      aux_sym_metadata_token1,
    ACTIONS(591), 1,
      aux_sym__skipped_lines_token3,
    STATE(181), 1,
      aux_sym_metadata_repeat1,
    STATE(267), 1,
      sym_metadata,
  [2812] = 4,
    ACTIONS(593), 1,
      anon_sym_RBRACE,
    ACTIONS(595), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      aux_sym__cost_comp_list_repeat1,
  [2825] = 3,
    ACTIONS(599), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(601), 1,
      aux_sym_metadata_token1,
    STATE(163), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2836] = 4,
    ACTIONS(104), 1,
      aux_sym_metadata_token1,
    ACTIONS(603), 1,
      aux_sym__skipped_lines_token3,
    STATE(181), 1,
      aux_sym_metadata_repeat1,
    STATE(283), 1,
      sym_metadata,
  [2849] = 4,
    ACTIONS(104), 1,
      aux_sym_metadata_token1,
    ACTIONS(605), 1,
      aux_sym__skipped_lines_token3,
    STATE(181), 1,
      aux_sym_metadata_repeat1,
    STATE(266), 1,
      sym_metadata,
  [2862] = 4,
    ACTIONS(607), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(609), 1,
      aux_sym_metadata_token1,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(236), 1,
      sym_metadata,
  [2875] = 4,
    ACTIONS(104), 1,
      aux_sym_metadata_token1,
    ACTIONS(612), 1,
      aux_sym__skipped_lines_token3,
    STATE(181), 1,
      aux_sym_metadata_repeat1,
    STATE(268), 1,
      sym_metadata,
  [2888] = 4,
    ACTIONS(104), 1,
      aux_sym_metadata_token1,
    ACTIONS(614), 1,
      aux_sym__skipped_lines_token3,
    STATE(181), 1,
      aux_sym_metadata_repeat1,
    STATE(271), 1,
      sym_metadata,
  [2901] = 4,
    ACTIONS(616), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(618), 1,
      aux_sym_metadata_token1,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(198), 1,
      sym_metadata,
  [2914] = 4,
    ACTIONS(104), 1,
      aux_sym_metadata_token1,
    ACTIONS(621), 1,
      aux_sym__skipped_lines_token3,
    STATE(181), 1,
      aux_sym_metadata_repeat1,
    STATE(272), 1,
      sym_metadata,
  [2927] = 4,
    ACTIONS(623), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(625), 1,
      aux_sym_metadata_token1,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(216), 1,
      sym_metadata,
  [2940] = 4,
    ACTIONS(628), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(630), 1,
      aux_sym_metadata_token1,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(201), 1,
      sym_metadata,
  [2953] = 3,
    ACTIONS(633), 1,
      aux_sym_metadata_token1,
    STATE(285), 1,
      sym_postings,
    STATE(144), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2964] = 3,
    ACTIONS(423), 1,
      sym_key,
    STATE(200), 1,
      sym_key_value,
    ACTIONS(425), 2,
      sym_tag,
      sym_link,
  [2975] = 4,
    ACTIONS(635), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(637), 1,
      aux_sym_metadata_token1,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(218), 1,
      sym_metadata,
  [2988] = 4,
    ACTIONS(104), 1,
      aux_sym_metadata_token1,
    ACTIONS(640), 1,
      aux_sym__skipped_lines_token3,
    STATE(181), 1,
      aux_sym_metadata_repeat1,
    STATE(295), 1,
      sym_metadata,
  [3001] = 4,
    ACTIONS(642), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(644), 1,
      aux_sym_metadata_token1,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(207), 1,
      sym_metadata,
  [3014] = 4,
    ACTIONS(647), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(649), 1,
      aux_sym_metadata_token1,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(220), 1,
      sym_metadata,
  [3027] = 4,
    ACTIONS(652), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(654), 1,
      aux_sym_metadata_token1,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(206), 1,
      sym_metadata,
  [3040] = 4,
    ACTIONS(657), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(659), 1,
      aux_sym_metadata_token1,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(221), 1,
      sym_metadata,
  [3053] = 4,
    ACTIONS(662), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(664), 1,
      aux_sym_metadata_token1,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(205), 1,
      sym_metadata,
  [3066] = 3,
    ACTIONS(667), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(669), 1,
      aux_sym_metadata_token1,
    STATE(163), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3077] = 4,
    ACTIONS(104), 1,
      aux_sym_metadata_token1,
    ACTIONS(672), 1,
      aux_sym__skipped_lines_token3,
    STATE(181), 1,
      aux_sym_metadata_repeat1,
    STATE(258), 1,
      sym_metadata,
  [3090] = 3,
    ACTIONS(633), 1,
      aux_sym_metadata_token1,
    STATE(237), 1,
      sym_postings,
    STATE(144), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3101] = 4,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    ACTIONS(674), 1,
      anon_sym_RBRACE,
    ACTIONS(676), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(141), 1,
      aux_sym__cost_comp_list_repeat1,
  [3114] = 4,
    ACTIONS(104), 1,
      aux_sym_metadata_token1,
    ACTIONS(678), 1,
      aux_sym__skipped_lines_token3,
    STATE(181), 1,
      aux_sym_metadata_repeat1,
    STATE(257), 1,
      sym_metadata,
  [3127] = 3,
    ACTIONS(633), 1,
      aux_sym_metadata_token1,
    STATE(246), 1,
      sym_postings,
    STATE(144), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3138] = 2,
    ACTIONS(463), 1,
      aux_sym_metadata_token1,
    ACTIONS(461), 3,
      aux_sym__skipped_lines_token3,
      anon_sym_COMMA,
      sym_string,
  [3147] = 3,
    ACTIONS(633), 1,
      aux_sym_metadata_token1,
    STATE(252), 1,
      sym_postings,
    STATE(144), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3158] = 4,
    ACTIONS(680), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(682), 1,
      aux_sym_metadata_token1,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(203), 1,
      sym_metadata,
  [3171] = 4,
    ACTIONS(685), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(687), 1,
      aux_sym_metadata_token1,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(234), 1,
      sym_metadata,
  [3184] = 3,
    ACTIONS(633), 1,
      aux_sym_metadata_token1,
    STATE(261), 1,
      sym_postings,
    STATE(144), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3195] = 4,
    ACTIONS(419), 1,
      aux_sym__skipped_lines_token1,
    ACTIONS(421), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(427), 1,
      sym_account,
    STATE(293), 1,
      sym_flag,
  [3208] = 4,
    ACTIONS(104), 1,
      aux_sym_metadata_token1,
    ACTIONS(690), 1,
      aux_sym__skipped_lines_token3,
    STATE(181), 1,
      aux_sym_metadata_repeat1,
    STATE(253), 1,
      sym_metadata,
  [3221] = 3,
    ACTIONS(633), 1,
      aux_sym_metadata_token1,
    STATE(240), 1,
      sym_postings,
    STATE(144), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3232] = 4,
    ACTIONS(692), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(694), 1,
      aux_sym_metadata_token1,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(202), 1,
      sym_metadata,
  [3245] = 4,
    ACTIONS(697), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(699), 1,
      aux_sym_metadata_token1,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(197), 1,
      sym_metadata,
  [3258] = 2,
    ACTIONS(702), 1,
      aux_sym_metadata_token1,
    ACTIONS(510), 3,
      aux_sym__skipped_lines_token3,
      sym_tag,
      sym_link,
  [3267] = 4,
    ACTIONS(704), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(706), 1,
      aux_sym_metadata_token1,
    STATE(187), 1,
      aux_sym_metadata_repeat1,
    STATE(227), 1,
      sym_metadata,
  [3280] = 3,
    ACTIONS(104), 1,
      aux_sym_metadata_token1,
    ACTIONS(709), 1,
      aux_sym__skipped_lines_token3,
    STATE(185), 1,
      aux_sym_metadata_repeat1,
  [3290] = 2,
    ACTIONS(711), 1,
      anon_sym_RBRACE,
    ACTIONS(713), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3298] = 2,
    ACTIONS(715), 1,
      anon_sym_RBRACE,
    ACTIONS(717), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3306] = 2,
    ACTIONS(719), 1,
      anon_sym_RBRACE,
    ACTIONS(721), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3314] = 3,
    ACTIONS(723), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(725), 1,
      aux_sym_metadata_token1,
    STATE(185), 1,
      aux_sym_metadata_repeat1,
  [3324] = 2,
    ACTIONS(728), 1,
      anon_sym_RBRACE,
    ACTIONS(730), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3332] = 3,
    ACTIONS(709), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(732), 1,
      aux_sym_metadata_token1,
    STATE(185), 1,
      aux_sym_metadata_repeat1,
  [3342] = 2,
    ACTIONS(737), 1,
      aux_sym_metadata_token1,
    ACTIONS(735), 2,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
  [3350] = 2,
    ACTIONS(741), 1,
      aux_sym_metadata_token1,
    ACTIONS(739), 2,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
  [3358] = 2,
    ACTIONS(743), 1,
      anon_sym_RBRACE,
    ACTIONS(745), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3366] = 2,
    ACTIONS(747), 1,
      anon_sym_RBRACE,
    ACTIONS(749), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3374] = 2,
    ACTIONS(751), 1,
      anon_sym_RBRACE,
    ACTIONS(753), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3382] = 2,
    ACTIONS(755), 1,
      anon_sym_RBRACE,
    ACTIONS(757), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3390] = 2,
    ACTIONS(759), 1,
      anon_sym_RBRACE,
    ACTIONS(761), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3398] = 2,
    ACTIONS(763), 1,
      anon_sym_RBRACE,
    ACTIONS(765), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3406] = 2,
    ACTIONS(767), 1,
      anon_sym_RBRACE,
    ACTIONS(769), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3414] = 2,
    ACTIONS(771), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(773), 1,
      aux_sym_metadata_token1,
  [3421] = 2,
    ACTIONS(775), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(777), 1,
      aux_sym_metadata_token1,
  [3428] = 2,
    ACTIONS(667), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(779), 1,
      aux_sym_metadata_token1,
  [3435] = 2,
    ACTIONS(723), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(781), 1,
      aux_sym_metadata_token1,
  [3442] = 2,
    ACTIONS(783), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(785), 1,
      aux_sym_metadata_token1,
  [3449] = 2,
    ACTIONS(787), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(789), 1,
      aux_sym_metadata_token1,
  [3456] = 2,
    ACTIONS(791), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(793), 1,
      aux_sym_metadata_token1,
  [3463] = 2,
    ACTIONS(795), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(797), 1,
      aux_sym_metadata_token1,
  [3470] = 2,
    ACTIONS(799), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(801), 1,
      aux_sym_metadata_token1,
  [3477] = 2,
    ACTIONS(803), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(805), 1,
      aux_sym_metadata_token1,
  [3484] = 2,
    ACTIONS(807), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(809), 1,
      aux_sym_metadata_token1,
  [3491] = 2,
    ACTIONS(811), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(813), 1,
      aux_sym_metadata_token1,
  [3498] = 2,
    ACTIONS(815), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(817), 1,
      aux_sym_metadata_token1,
  [3505] = 2,
    ACTIONS(819), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(821), 1,
      aux_sym_metadata_token1,
  [3512] = 2,
    ACTIONS(823), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(825), 1,
      aux_sym_metadata_token1,
  [3519] = 1,
    ACTIONS(425), 2,
      sym_tag,
      sym_link,
  [3524] = 2,
    ACTIONS(827), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(829), 1,
      aux_sym_metadata_token1,
  [3531] = 2,
    ACTIONS(831), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(833), 1,
      aux_sym_metadata_token1,
  [3538] = 2,
    ACTIONS(835), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(837), 1,
      aux_sym_metadata_token1,
  [3545] = 2,
    ACTIONS(839), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(841), 1,
      aux_sym_metadata_token1,
  [3552] = 2,
    ACTIONS(843), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(845), 1,
      aux_sym_metadata_token1,
  [3559] = 2,
    ACTIONS(847), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(849), 1,
      aux_sym_metadata_token1,
  [3566] = 2,
    ACTIONS(851), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(853), 1,
      aux_sym_metadata_token1,
  [3573] = 2,
    ACTIONS(855), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(857), 1,
      aux_sym_metadata_token1,
  [3580] = 2,
    ACTIONS(859), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(861), 1,
      aux_sym_metadata_token1,
  [3587] = 2,
    ACTIONS(423), 1,
      sym_key,
    STATE(255), 1,
      sym_key_value,
  [3594] = 2,
    ACTIONS(439), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(441), 1,
      aux_sym_metadata_token1,
  [3601] = 2,
    ACTIONS(863), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(865), 1,
      aux_sym_metadata_token1,
  [3608] = 2,
    ACTIONS(867), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(869), 1,
      aux_sym_metadata_token1,
  [3615] = 2,
    ACTIONS(871), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(873), 1,
      aux_sym_metadata_token1,
  [3622] = 2,
    ACTIONS(875), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(877), 1,
      aux_sym_metadata_token1,
  [3629] = 2,
    ACTIONS(423), 1,
      sym_key,
    STATE(200), 1,
      sym_key_value,
  [3636] = 2,
    ACTIONS(879), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(881), 1,
      aux_sym_metadata_token1,
  [3643] = 2,
    ACTIONS(883), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(885), 1,
      sym_string,
  [3650] = 2,
    ACTIONS(887), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(889), 1,
      aux_sym_metadata_token1,
  [3657] = 2,
    ACTIONS(891), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(893), 1,
      aux_sym_metadata_token1,
  [3664] = 2,
    ACTIONS(895), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(897), 1,
      aux_sym_metadata_token1,
  [3671] = 2,
    ACTIONS(899), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(901), 1,
      aux_sym_metadata_token1,
  [3678] = 2,
    ACTIONS(903), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(905), 1,
      aux_sym_metadata_token1,
  [3685] = 2,
    ACTIONS(907), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(909), 1,
      aux_sym_metadata_token1,
  [3692] = 1,
    ACTIONS(911), 1,
      aux_sym__skipped_lines_token3,
  [3696] = 1,
    ACTIONS(913), 1,
      aux_sym__skipped_lines_token3,
  [3700] = 1,
    ACTIONS(915), 1,
      aux_sym__skipped_lines_token3,
  [3704] = 1,
    ACTIONS(917), 1,
      aux_sym__skipped_lines_token3,
  [3708] = 1,
    ACTIONS(919), 1,
      sym_string,
  [3712] = 1,
    ACTIONS(921), 1,
      aux_sym__skipped_lines_token3,
  [3716] = 1,
    ACTIONS(923), 1,
      aux_sym__skipped_lines_token3,
  [3720] = 1,
    ACTIONS(925), 1,
      sym_string,
  [3724] = 1,
    ACTIONS(927), 1,
      aux_sym__skipped_lines_token2,
  [3728] = 1,
    ACTIONS(929), 1,
      aux_sym__skipped_lines_token3,
  [3732] = 1,
    ACTIONS(931), 1,
      sym_account,
  [3736] = 1,
    ACTIONS(933), 1,
      sym_string,
  [3740] = 1,
    ACTIONS(935), 1,
      aux_sym__skipped_lines_token3,
  [3744] = 1,
    ACTIONS(937), 1,
      aux_sym__skipped_lines_token3,
  [3748] = 1,
    ACTIONS(939), 1,
      sym_string,
  [3752] = 1,
    ACTIONS(941), 1,
      aux_sym__skipped_lines_token3,
  [3756] = 1,
    ACTIONS(943), 1,
      aux_sym__skipped_lines_token3,
  [3760] = 1,
    ACTIONS(945), 1,
      aux_sym__skipped_lines_token3,
  [3764] = 1,
    ACTIONS(947), 1,
      aux_sym__skipped_lines_token3,
  [3768] = 1,
    ACTIONS(949), 1,
      ts_builtin_sym_end,
  [3772] = 1,
    ACTIONS(951), 1,
      aux_sym__skipped_lines_token3,
  [3776] = 1,
    ACTIONS(953), 1,
      aux_sym__skipped_lines_token3,
  [3780] = 1,
    ACTIONS(955), 1,
      aux_sym__skipped_lines_token3,
  [3784] = 1,
    ACTIONS(957), 1,
      sym_key,
  [3788] = 1,
    ACTIONS(959), 1,
      aux_sym__skipped_lines_token3,
  [3792] = 1,
    ACTIONS(961), 1,
      aux_sym__skipped_lines_token3,
  [3796] = 1,
    ACTIONS(963), 1,
      sym_tag,
  [3800] = 1,
    ACTIONS(965), 1,
      aux_sym__skipped_lines_token3,
  [3804] = 1,
    ACTIONS(967), 1,
      sym_currency,
  [3808] = 1,
    ACTIONS(969), 1,
      aux_sym__skipped_lines_token3,
  [3812] = 1,
    ACTIONS(971), 1,
      aux_sym__skipped_lines_token3,
  [3816] = 1,
    ACTIONS(973), 1,
      aux_sym__skipped_lines_token3,
  [3820] = 1,
    ACTIONS(975), 1,
      sym_string,
  [3824] = 1,
    ACTIONS(977), 1,
      aux_sym__skipped_lines_token3,
  [3828] = 1,
    ACTIONS(979), 1,
      aux_sym__skipped_lines_token3,
  [3832] = 1,
    ACTIONS(981), 1,
      aux_sym__skipped_lines_token3,
  [3836] = 1,
    ACTIONS(983), 1,
      sym_account,
  [3840] = 1,
    ACTIONS(985), 1,
      aux_sym__skipped_lines_token3,
  [3844] = 1,
    ACTIONS(987), 1,
      aux_sym__skipped_lines_token3,
  [3848] = 1,
    ACTIONS(989), 1,
      sym_string,
  [3852] = 1,
    ACTIONS(991), 1,
      sym_string,
  [3856] = 1,
    ACTIONS(993), 1,
      aux_sym__skipped_lines_token3,
  [3860] = 1,
    ACTIONS(995), 1,
      sym_currency,
  [3864] = 1,
    ACTIONS(997), 1,
      sym_account,
  [3868] = 1,
    ACTIONS(999), 1,
      aux_sym__skipped_lines_token3,
  [3872] = 1,
    ACTIONS(1001), 1,
      sym_account,
  [3876] = 1,
    ACTIONS(1003), 1,
      aux_sym__skipped_lines_token3,
  [3880] = 1,
    ACTIONS(1005), 1,
      sym_tag,
  [3884] = 1,
    ACTIONS(1007), 1,
      aux_sym__skipped_lines_token3,
  [3888] = 1,
    ACTIONS(1009), 1,
      sym_account,
  [3892] = 1,
    ACTIONS(1011), 1,
      sym_account,
  [3896] = 1,
    ACTIONS(1013), 1,
      sym_string,
  [3900] = 1,
    ACTIONS(1015), 1,
      aux_sym__skipped_lines_token3,
  [3904] = 1,
    ACTIONS(1017), 1,
      anon_sym_RBRACE_RBRACE,
  [3908] = 1,
    ACTIONS(1019), 1,
      sym_account,
  [3912] = 1,
    ACTIONS(1021), 1,
      sym_currency,
  [3916] = 1,
    ACTIONS(1023), 1,
      sym_account,
  [3920] = 1,
    ACTIONS(1025), 1,
      sym_string,
  [3924] = 1,
    ACTIONS(1027), 1,
      aux_sym__skipped_lines_token3,
  [3928] = 1,
    ACTIONS(1029), 1,
      anon_sym_RBRACE,
  [3932] = 1,
    ACTIONS(1031), 1,
      sym_string,
  [3936] = 1,
    ACTIONS(1033), 1,
      sym_string,
  [3940] = 1,
    ACTIONS(1035), 1,
      aux_sym__skipped_lines_token3,
  [3944] = 1,
    ACTIONS(1037), 1,
      aux_sym__skipped_lines_token3,
  [3948] = 1,
    ACTIONS(1039), 1,
      aux_sym__skipped_lines_token3,
  [3952] = 1,
    ACTIONS(1041), 1,
      aux_sym__skipped_lines_token3,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 63,
  [SMALL_STATE(4)] = 126,
  [SMALL_STATE(5)] = 185,
  [SMALL_STATE(6)] = 244,
  [SMALL_STATE(7)] = 269,
  [SMALL_STATE(8)] = 292,
  [SMALL_STATE(9)] = 333,
  [SMALL_STATE(10)] = 356,
  [SMALL_STATE(11)] = 379,
  [SMALL_STATE(12)] = 420,
  [SMALL_STATE(13)] = 464,
  [SMALL_STATE(14)] = 508,
  [SMALL_STATE(15)] = 544,
  [SMALL_STATE(16)] = 579,
  [SMALL_STATE(17)] = 617,
  [SMALL_STATE(18)] = 637,
  [SMALL_STATE(19)] = 668,
  [SMALL_STATE(20)] = 699,
  [SMALL_STATE(21)] = 715,
  [SMALL_STATE(22)] = 731,
  [SMALL_STATE(23)] = 747,
  [SMALL_STATE(24)] = 763,
  [SMALL_STATE(25)] = 779,
  [SMALL_STATE(26)] = 815,
  [SMALL_STATE(27)] = 831,
  [SMALL_STATE(28)] = 851,
  [SMALL_STATE(29)] = 867,
  [SMALL_STATE(30)] = 885,
  [SMALL_STATE(31)] = 901,
  [SMALL_STATE(32)] = 917,
  [SMALL_STATE(33)] = 933,
  [SMALL_STATE(34)] = 949,
  [SMALL_STATE(35)] = 965,
  [SMALL_STATE(36)] = 981,
  [SMALL_STATE(37)] = 997,
  [SMALL_STATE(38)] = 1013,
  [SMALL_STATE(39)] = 1031,
  [SMALL_STATE(40)] = 1047,
  [SMALL_STATE(41)] = 1063,
  [SMALL_STATE(42)] = 1079,
  [SMALL_STATE(43)] = 1095,
  [SMALL_STATE(44)] = 1111,
  [SMALL_STATE(45)] = 1127,
  [SMALL_STATE(46)] = 1143,
  [SMALL_STATE(47)] = 1159,
  [SMALL_STATE(48)] = 1175,
  [SMALL_STATE(49)] = 1191,
  [SMALL_STATE(50)] = 1207,
  [SMALL_STATE(51)] = 1223,
  [SMALL_STATE(52)] = 1239,
  [SMALL_STATE(53)] = 1255,
  [SMALL_STATE(54)] = 1271,
  [SMALL_STATE(55)] = 1287,
  [SMALL_STATE(56)] = 1305,
  [SMALL_STATE(57)] = 1341,
  [SMALL_STATE(58)] = 1365,
  [SMALL_STATE(59)] = 1381,
  [SMALL_STATE(60)] = 1397,
  [SMALL_STATE(61)] = 1413,
  [SMALL_STATE(62)] = 1429,
  [SMALL_STATE(63)] = 1445,
  [SMALL_STATE(64)] = 1461,
  [SMALL_STATE(65)] = 1477,
  [SMALL_STATE(66)] = 1493,
  [SMALL_STATE(67)] = 1509,
  [SMALL_STATE(68)] = 1525,
  [SMALL_STATE(69)] = 1541,
  [SMALL_STATE(70)] = 1557,
  [SMALL_STATE(71)] = 1573,
  [SMALL_STATE(72)] = 1589,
  [SMALL_STATE(73)] = 1605,
  [SMALL_STATE(74)] = 1645,
  [SMALL_STATE(75)] = 1661,
  [SMALL_STATE(76)] = 1677,
  [SMALL_STATE(77)] = 1693,
  [SMALL_STATE(78)] = 1709,
  [SMALL_STATE(79)] = 1725,
  [SMALL_STATE(80)] = 1741,
  [SMALL_STATE(81)] = 1757,
  [SMALL_STATE(82)] = 1773,
  [SMALL_STATE(83)] = 1796,
  [SMALL_STATE(84)] = 1826,
  [SMALL_STATE(85)] = 1856,
  [SMALL_STATE(86)] = 1877,
  [SMALL_STATE(87)] = 1904,
  [SMALL_STATE(88)] = 1930,
  [SMALL_STATE(89)] = 1950,
  [SMALL_STATE(90)] = 1970,
  [SMALL_STATE(91)] = 1996,
  [SMALL_STATE(92)] = 2016,
  [SMALL_STATE(93)] = 2038,
  [SMALL_STATE(94)] = 2064,
  [SMALL_STATE(95)] = 2090,
  [SMALL_STATE(96)] = 2107,
  [SMALL_STATE(97)] = 2124,
  [SMALL_STATE(98)] = 2141,
  [SMALL_STATE(99)] = 2158,
  [SMALL_STATE(100)] = 2181,
  [SMALL_STATE(101)] = 2204,
  [SMALL_STATE(102)] = 2221,
  [SMALL_STATE(103)] = 2238,
  [SMALL_STATE(104)] = 2255,
  [SMALL_STATE(105)] = 2272,
  [SMALL_STATE(106)] = 2289,
  [SMALL_STATE(107)] = 2307,
  [SMALL_STATE(108)] = 2319,
  [SMALL_STATE(109)] = 2341,
  [SMALL_STATE(110)] = 2358,
  [SMALL_STATE(111)] = 2373,
  [SMALL_STATE(112)] = 2390,
  [SMALL_STATE(113)] = 2409,
  [SMALL_STATE(114)] = 2426,
  [SMALL_STATE(115)] = 2442,
  [SMALL_STATE(116)] = 2456,
  [SMALL_STATE(117)] = 2468,
  [SMALL_STATE(118)] = 2484,
  [SMALL_STATE(119)] = 2496,
  [SMALL_STATE(120)] = 2506,
  [SMALL_STATE(121)] = 2518,
  [SMALL_STATE(122)] = 2530,
  [SMALL_STATE(123)] = 2546,
  [SMALL_STATE(124)] = 2556,
  [SMALL_STATE(125)] = 2572,
  [SMALL_STATE(126)] = 2588,
  [SMALL_STATE(127)] = 2602,
  [SMALL_STATE(128)] = 2610,
  [SMALL_STATE(129)] = 2622,
  [SMALL_STATE(130)] = 2638,
  [SMALL_STATE(131)] = 2652,
  [SMALL_STATE(132)] = 2668,
  [SMALL_STATE(133)] = 2684,
  [SMALL_STATE(134)] = 2696,
  [SMALL_STATE(135)] = 2706,
  [SMALL_STATE(136)] = 2722,
  [SMALL_STATE(137)] = 2736,
  [SMALL_STATE(138)] = 2746,
  [SMALL_STATE(139)] = 2760,
  [SMALL_STATE(140)] = 2773,
  [SMALL_STATE(141)] = 2786,
  [SMALL_STATE(142)] = 2799,
  [SMALL_STATE(143)] = 2812,
  [SMALL_STATE(144)] = 2825,
  [SMALL_STATE(145)] = 2836,
  [SMALL_STATE(146)] = 2849,
  [SMALL_STATE(147)] = 2862,
  [SMALL_STATE(148)] = 2875,
  [SMALL_STATE(149)] = 2888,
  [SMALL_STATE(150)] = 2901,
  [SMALL_STATE(151)] = 2914,
  [SMALL_STATE(152)] = 2927,
  [SMALL_STATE(153)] = 2940,
  [SMALL_STATE(154)] = 2953,
  [SMALL_STATE(155)] = 2964,
  [SMALL_STATE(156)] = 2975,
  [SMALL_STATE(157)] = 2988,
  [SMALL_STATE(158)] = 3001,
  [SMALL_STATE(159)] = 3014,
  [SMALL_STATE(160)] = 3027,
  [SMALL_STATE(161)] = 3040,
  [SMALL_STATE(162)] = 3053,
  [SMALL_STATE(163)] = 3066,
  [SMALL_STATE(164)] = 3077,
  [SMALL_STATE(165)] = 3090,
  [SMALL_STATE(166)] = 3101,
  [SMALL_STATE(167)] = 3114,
  [SMALL_STATE(168)] = 3127,
  [SMALL_STATE(169)] = 3138,
  [SMALL_STATE(170)] = 3147,
  [SMALL_STATE(171)] = 3158,
  [SMALL_STATE(172)] = 3171,
  [SMALL_STATE(173)] = 3184,
  [SMALL_STATE(174)] = 3195,
  [SMALL_STATE(175)] = 3208,
  [SMALL_STATE(176)] = 3221,
  [SMALL_STATE(177)] = 3232,
  [SMALL_STATE(178)] = 3245,
  [SMALL_STATE(179)] = 3258,
  [SMALL_STATE(180)] = 3267,
  [SMALL_STATE(181)] = 3280,
  [SMALL_STATE(182)] = 3290,
  [SMALL_STATE(183)] = 3298,
  [SMALL_STATE(184)] = 3306,
  [SMALL_STATE(185)] = 3314,
  [SMALL_STATE(186)] = 3324,
  [SMALL_STATE(187)] = 3332,
  [SMALL_STATE(188)] = 3342,
  [SMALL_STATE(189)] = 3350,
  [SMALL_STATE(190)] = 3358,
  [SMALL_STATE(191)] = 3366,
  [SMALL_STATE(192)] = 3374,
  [SMALL_STATE(193)] = 3382,
  [SMALL_STATE(194)] = 3390,
  [SMALL_STATE(195)] = 3398,
  [SMALL_STATE(196)] = 3406,
  [SMALL_STATE(197)] = 3414,
  [SMALL_STATE(198)] = 3421,
  [SMALL_STATE(199)] = 3428,
  [SMALL_STATE(200)] = 3435,
  [SMALL_STATE(201)] = 3442,
  [SMALL_STATE(202)] = 3449,
  [SMALL_STATE(203)] = 3456,
  [SMALL_STATE(204)] = 3463,
  [SMALL_STATE(205)] = 3470,
  [SMALL_STATE(206)] = 3477,
  [SMALL_STATE(207)] = 3484,
  [SMALL_STATE(208)] = 3491,
  [SMALL_STATE(209)] = 3498,
  [SMALL_STATE(210)] = 3505,
  [SMALL_STATE(211)] = 3512,
  [SMALL_STATE(212)] = 3519,
  [SMALL_STATE(213)] = 3524,
  [SMALL_STATE(214)] = 3531,
  [SMALL_STATE(215)] = 3538,
  [SMALL_STATE(216)] = 3545,
  [SMALL_STATE(217)] = 3552,
  [SMALL_STATE(218)] = 3559,
  [SMALL_STATE(219)] = 3566,
  [SMALL_STATE(220)] = 3573,
  [SMALL_STATE(221)] = 3580,
  [SMALL_STATE(222)] = 3587,
  [SMALL_STATE(223)] = 3594,
  [SMALL_STATE(224)] = 3601,
  [SMALL_STATE(225)] = 3608,
  [SMALL_STATE(226)] = 3615,
  [SMALL_STATE(227)] = 3622,
  [SMALL_STATE(228)] = 3629,
  [SMALL_STATE(229)] = 3636,
  [SMALL_STATE(230)] = 3643,
  [SMALL_STATE(231)] = 3650,
  [SMALL_STATE(232)] = 3657,
  [SMALL_STATE(233)] = 3664,
  [SMALL_STATE(234)] = 3671,
  [SMALL_STATE(235)] = 3678,
  [SMALL_STATE(236)] = 3685,
  [SMALL_STATE(237)] = 3692,
  [SMALL_STATE(238)] = 3696,
  [SMALL_STATE(239)] = 3700,
  [SMALL_STATE(240)] = 3704,
  [SMALL_STATE(241)] = 3708,
  [SMALL_STATE(242)] = 3712,
  [SMALL_STATE(243)] = 3716,
  [SMALL_STATE(244)] = 3720,
  [SMALL_STATE(245)] = 3724,
  [SMALL_STATE(246)] = 3728,
  [SMALL_STATE(247)] = 3732,
  [SMALL_STATE(248)] = 3736,
  [SMALL_STATE(249)] = 3740,
  [SMALL_STATE(250)] = 3744,
  [SMALL_STATE(251)] = 3748,
  [SMALL_STATE(252)] = 3752,
  [SMALL_STATE(253)] = 3756,
  [SMALL_STATE(254)] = 3760,
  [SMALL_STATE(255)] = 3764,
  [SMALL_STATE(256)] = 3768,
  [SMALL_STATE(257)] = 3772,
  [SMALL_STATE(258)] = 3776,
  [SMALL_STATE(259)] = 3780,
  [SMALL_STATE(260)] = 3784,
  [SMALL_STATE(261)] = 3788,
  [SMALL_STATE(262)] = 3792,
  [SMALL_STATE(263)] = 3796,
  [SMALL_STATE(264)] = 3800,
  [SMALL_STATE(265)] = 3804,
  [SMALL_STATE(266)] = 3808,
  [SMALL_STATE(267)] = 3812,
  [SMALL_STATE(268)] = 3816,
  [SMALL_STATE(269)] = 3820,
  [SMALL_STATE(270)] = 3824,
  [SMALL_STATE(271)] = 3828,
  [SMALL_STATE(272)] = 3832,
  [SMALL_STATE(273)] = 3836,
  [SMALL_STATE(274)] = 3840,
  [SMALL_STATE(275)] = 3844,
  [SMALL_STATE(276)] = 3848,
  [SMALL_STATE(277)] = 3852,
  [SMALL_STATE(278)] = 3856,
  [SMALL_STATE(279)] = 3860,
  [SMALL_STATE(280)] = 3864,
  [SMALL_STATE(281)] = 3868,
  [SMALL_STATE(282)] = 3872,
  [SMALL_STATE(283)] = 3876,
  [SMALL_STATE(284)] = 3880,
  [SMALL_STATE(285)] = 3884,
  [SMALL_STATE(286)] = 3888,
  [SMALL_STATE(287)] = 3892,
  [SMALL_STATE(288)] = 3896,
  [SMALL_STATE(289)] = 3900,
  [SMALL_STATE(290)] = 3904,
  [SMALL_STATE(291)] = 3908,
  [SMALL_STATE(292)] = 3912,
  [SMALL_STATE(293)] = 3916,
  [SMALL_STATE(294)] = 3920,
  [SMALL_STATE(295)] = 3924,
  [SMALL_STATE(296)] = 3928,
  [SMALL_STATE(297)] = 3932,
  [SMALL_STATE(298)] = 3936,
  [SMALL_STATE(299)] = 3940,
  [SMALL_STATE(300)] = 3944,
  [SMALL_STATE(301)] = 3948,
  [SMALL_STATE(302)] = 3952,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_beancount_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_beancount_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(245),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(299),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(298),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(297),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(294),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(284),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(263),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(222),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(260),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beancount_file_repeat1, 2), SHIFT_REPEAT(73),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_beancount_file, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 2, .production_id = 11),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 2, .production_id = 11), SHIFT(228),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 31),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 31), SHIFT(228),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_num_expr, 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_num_expr, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_num_expr, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_num_expr, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_num_expr, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_num_expr, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_custom_repeat1, 2),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(96),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(98),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(15),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(15),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(57),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2, .production_id = 7),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2, .production_id = 7),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price_annotation, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_price_annotation, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_total_price_annotation, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_total_price_annotation, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 6, .production_id = 35),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 7, .production_id = 70),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, .production_id = 66),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, .production_id = 65),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, .production_id = 64),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 62),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 62), SHIFT(228),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 5, .production_id = 13),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 4, .production_id = 8),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 6, .production_id = 46),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 6, .production_id = 45),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 6, .production_id = 44),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 43),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 42),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 41),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 6, .production_id = 40),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 6, .production_id = 39),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__skipped_lines, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 6, .production_id = 38),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin, 3, .production_id = 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 6, .production_id = 37),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushtag, 3, .production_id = 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poptag, 3, .production_id = 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 6, .production_id = 36),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 34),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 33),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushmeta, 3, .production_id = 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_popmeta, 3, .production_id = 4),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4, .production_id = 12),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 32),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 5, .production_id = 16),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 7, .production_id = 69),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 28),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 28), SHIFT(228),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 1),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_custom_repeat1, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, .production_id = 67),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 8, .production_id = 106),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 4, .production_id = 10),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 5, .production_id = 15),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__skipped_lines, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 4, .production_id = 9),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 5, .production_id = 24),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 5, .production_id = 23),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 5, .production_id = 22),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, .production_id = 21),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, .production_id = 14),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, .production_id = 20),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 4, .production_id = 5),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin, 4, .production_id = 6),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 5, .production_id = 19),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 7, .production_id = 89),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 5, .production_id = 18),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 7, .production_id = 90),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 5, .production_id = 17),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 7, .production_id = 91),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 4, .production_id = 8),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 5, .production_id = 10),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 5, .production_id = 14),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_incomplete_amount, 1, .production_id = 30),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_incomplete_amount, 1, .production_id = 30),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 86),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 86), SHIFT(228),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 27),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 27), SHIFT(228),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 1, .production_id = 53),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 1, .production_id = 53),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 57),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 57), SHIFT(228),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 61),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 61), SHIFT(228),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 2),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_incomplete_amount, 1, .production_id = 25),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_incomplete_amount, 1, .production_id = 25),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_currency_list_repeat1, 2),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_currency_list_repeat1, 2),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_currency_list_repeat1, 2), SHIFT_REPEAT(265),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 63),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [474] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 63), SHIFT(228),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost, 3, .production_id = 72),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost, 3, .production_id = 72),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 103),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [489] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 103), SHIFT(228),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_total_cost, 3, .production_id = 72),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_total_cost, 3, .production_id = 72),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 29),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 29), SHIFT(228),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 58),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [507] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 58), SHIFT(228),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tags_and_links_repeat1, 2),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tags_and_links_repeat1, 2), SHIFT_REPEAT(212),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_and_links_repeat1, 2), SHIFT_REPEAT(126),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 1),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 79),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 79), SHIFT(228),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_currency_list, 1),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_currency_list, 1),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 55),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [539] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 55), SHIFT(228),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 84),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [546] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 84), SHIFT(228),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_total_cost, 2),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_total_cost, 2),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 87),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [559] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 87), SHIFT(228),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_currency_list, 2),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_currency_list, 2),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost, 2),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost, 2),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags_and_links, 1),
  [572] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_tags_and_links, 1), SHIFT(212),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 63),
  [579] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 63), SHIFT(228),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__cost_comp_list_repeat1, 2, .production_id = 73),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cost_comp_list_repeat1, 2, .production_id = 73),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cost_comp_list_repeat1, 2, .production_id = 73), SHIFT_REPEAT(16),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cost_comp_list, 1, .production_id = 51),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cost_comp_list, 1, .production_id = 51),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postings, 1),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 27),
  [609] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 27), SHIFT(228),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 62),
  [618] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 62), SHIFT(228),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 61),
  [625] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 61), SHIFT(228),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 11),
  [630] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 11), SHIFT(228),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 58),
  [637] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 58), SHIFT(228),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 79),
  [644] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 79), SHIFT(228),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 57),
  [649] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 57), SHIFT(228),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 84),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 84), SHIFT(228),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 55),
  [659] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 55), SHIFT(228),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 86),
  [664] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 86), SHIFT(228),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postings_repeat1, 2),
  [669] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postings_repeat1, 2), SHIFT_REPEAT(174),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cost_comp_list, 2, .production_id = 73),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cost_comp_list, 2, .production_id = 73),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 87),
  [682] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 87), SHIFT(228),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 28),
  [687] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 28), SHIFT(228),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 103),
  [694] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 103), SHIFT(228),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 29),
  [699] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 29), SHIFT(228),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tags_and_links_repeat1, 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 31),
  [706] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 31), SHIFT(228),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 1),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 4, .production_id = 107),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 4, .production_id = 107),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 2, .production_id = 71),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 2, .production_id = 71),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 3, .production_id = 94),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 3, .production_id = 94),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2),
  [725] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(228),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 2, .production_id = 74),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 2, .production_id = 74),
  [732] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_metadata, 1), SHIFT(228),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_total_price_annotation, 2),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_total_price_annotation, 2),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price_annotation, 2),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_price_annotation, 2),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cost_comp, 1, .production_id = 50),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cost_comp, 1, .production_id = 50),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cost_comp, 1, .production_id = 52),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cost_comp, 1, .production_id = 52),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 3, .production_id = 92),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 3, .production_id = 92),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__cost_comp_list_repeat1, 2, .production_id = 93),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cost_comp_list_repeat1, 2, .production_id = 93),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cost_comp, 1, .production_id = 48),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cost_comp, 1, .production_id = 48),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 1, .production_id = 25),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 1, .production_id = 25),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cost_comp, 1, .production_id = 49),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cost_comp, 1, .production_id = 49),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 81),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 81),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 101),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 101),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_postings_repeat1, 2),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_metadata_repeat1, 2),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 47),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 47),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, .production_id = 113),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, .production_id = 113),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 112),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 112),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 111),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 111),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 110),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 110),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 109),
  [805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 109),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 108),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 108),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 54),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 54),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 105),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 105),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 104),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 104),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 56),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 56),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 102),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 102),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 100),
  [833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 100),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 59),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 59),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 99),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 99),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 60),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 60),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 98),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 98),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 97),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 97),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 96),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 96),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 95),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 95),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 88),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 88),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 85),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 85),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 83),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 83),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 82),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 82),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_with_tolerance, 4, .production_id = 68),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount_with_tolerance, 4, .production_id = 68),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 80),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 80),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 26),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 26),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 78),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 78),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 77),
  [901] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 77),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 76),
  [905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 76),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 75),
  [909] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 75),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [949] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_beancount(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
