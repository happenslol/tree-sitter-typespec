#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 114
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 83
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_AT = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_import = 4,
  anon_sym_SEMI = 5,
  anon_sym_using = 6,
  anon_sym_namespace = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_model = 10,
  anon_sym_is = 11,
  anon_sym_extends = 12,
  anon_sym_COMMA = 13,
  anon_sym_PIPE = 14,
  anon_sym_AMP = 15,
  anon_sym_valueof = 16,
  anon_sym_LBRACK = 17,
  anon_sym_RBRACK = 18,
  anon_sym_LT = 19,
  anon_sym_GT = 20,
  anon_sym_EQ = 21,
  sym_plain_identifier = 22,
  sym_backticked_identifier = 23,
  anon_sym_DOT = 24,
  anon_sym_true = 25,
  anon_sym_false = 26,
  sym_decimal_literal = 27,
  sym_hex_integer_literal = 28,
  sym_binary_integer_literal = 29,
  anon_sym_DQUOTE = 30,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 31,
  sym_escape_sequence = 32,
  sym_quoted_string_fragment = 33,
  sym_triple_quoted_string_fragment = 34,
  sym_single_line_comment = 35,
  sym_multi_line_comment = 36,
  sym_source_file = 37,
  sym__item = 38,
  sym__statement = 39,
  sym_decorator_list = 40,
  sym_decorator = 41,
  sym_decorator_arguments = 42,
  sym_import_statement = 43,
  sym_using_statement = 44,
  sym_namespace_statement = 45,
  sym_model_statement = 46,
  sym__model_heritage = 47,
  sym_model_is_heritage = 48,
  sym_model_extends_heritage = 49,
  sym_expression_list = 50,
  sym__expression = 51,
  sym_union_expression = 52,
  sym_intersection_expression = 53,
  sym_value_of_expression = 54,
  sym_array_expression = 55,
  sym__primary_expression = 56,
  sym_reference_expression = 57,
  sym_parenthesized_expression = 58,
  sym_template_arguments = 59,
  sym_template_parameters = 60,
  sym_template_parameter_list = 61,
  sym_template_parameter = 62,
  sym_template_constraint = 63,
  sym_template_default = 64,
  sym__identifier_or_member_expression = 65,
  sym__identifier = 66,
  sym_member_expression = 67,
  sym__literal = 68,
  sym_boolean_literal = 69,
  sym__numeric_literal = 70,
  sym__string_literal = 71,
  sym_quoted_string_literal = 72,
  sym_tripe_quoted_string_literal = 73,
  sym__comment = 74,
  aux_sym_source_file_repeat1 = 75,
  aux_sym_decorator_list_repeat1 = 76,
  aux_sym_namespace_statement_repeat1 = 77,
  aux_sym_expression_list_repeat1 = 78,
  aux_sym_template_parameter_list_repeat1 = 79,
  aux_sym_member_expression_repeat1 = 80,
  aux_sym_quoted_string_literal_repeat1 = 81,
  aux_sym_tripe_quoted_string_literal_repeat1 = 82,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_AT] = "@",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_import] = "import",
  [anon_sym_SEMI] = ";",
  [anon_sym_using] = "using",
  [anon_sym_namespace] = "namespace",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_model] = "model",
  [anon_sym_is] = "is",
  [anon_sym_extends] = "extends",
  [anon_sym_COMMA] = ",",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP] = "&",
  [anon_sym_valueof] = "valueof",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_EQ] = "=",
  [sym_plain_identifier] = "plain_identifier",
  [sym_backticked_identifier] = "backticked_identifier",
  [anon_sym_DOT] = ".",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_decimal_literal] = "decimal_literal",
  [sym_hex_integer_literal] = "hex_integer_literal",
  [sym_binary_integer_literal] = "binary_integer_literal",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [sym_escape_sequence] = "escape_sequence",
  [sym_quoted_string_fragment] = "quoted_string_fragment",
  [sym_triple_quoted_string_fragment] = "triple_quoted_string_fragment",
  [sym_single_line_comment] = "single_line_comment",
  [sym_multi_line_comment] = "multi_line_comment",
  [sym_source_file] = "source_file",
  [sym__item] = "_item",
  [sym__statement] = "_statement",
  [sym_decorator_list] = "decorator_list",
  [sym_decorator] = "decorator",
  [sym_decorator_arguments] = "decorator_arguments",
  [sym_import_statement] = "import_statement",
  [sym_using_statement] = "using_statement",
  [sym_namespace_statement] = "namespace_statement",
  [sym_model_statement] = "model_statement",
  [sym__model_heritage] = "_model_heritage",
  [sym_model_is_heritage] = "model_is_heritage",
  [sym_model_extends_heritage] = "model_extends_heritage",
  [sym_expression_list] = "expression_list",
  [sym__expression] = "_expression",
  [sym_union_expression] = "union_expression",
  [sym_intersection_expression] = "intersection_expression",
  [sym_value_of_expression] = "value_of_expression",
  [sym_array_expression] = "array_expression",
  [sym__primary_expression] = "_primary_expression",
  [sym_reference_expression] = "reference_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_template_arguments] = "template_arguments",
  [sym_template_parameters] = "template_parameters",
  [sym_template_parameter_list] = "template_parameter_list",
  [sym_template_parameter] = "template_parameter",
  [sym_template_constraint] = "template_constraint",
  [sym_template_default] = "template_default",
  [sym__identifier_or_member_expression] = "_identifier_or_member_expression",
  [sym__identifier] = "_identifier",
  [sym_member_expression] = "member_expression",
  [sym__literal] = "_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym__numeric_literal] = "_numeric_literal",
  [sym__string_literal] = "_string_literal",
  [sym_quoted_string_literal] = "quoted_string_literal",
  [sym_tripe_quoted_string_literal] = "tripe_quoted_string_literal",
  [sym__comment] = "_comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_decorator_list_repeat1] = "decorator_list_repeat1",
  [aux_sym_namespace_statement_repeat1] = "namespace_statement_repeat1",
  [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
  [aux_sym_template_parameter_list_repeat1] = "template_parameter_list_repeat1",
  [aux_sym_member_expression_repeat1] = "member_expression_repeat1",
  [aux_sym_quoted_string_literal_repeat1] = "quoted_string_literal_repeat1",
  [aux_sym_tripe_quoted_string_literal_repeat1] = "tripe_quoted_string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_namespace] = anon_sym_namespace,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_model] = anon_sym_model,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_extends] = anon_sym_extends,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_valueof] = anon_sym_valueof,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_plain_identifier] = sym_plain_identifier,
  [sym_backticked_identifier] = sym_backticked_identifier,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_decimal_literal] = sym_decimal_literal,
  [sym_hex_integer_literal] = sym_hex_integer_literal,
  [sym_binary_integer_literal] = sym_binary_integer_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_quoted_string_fragment] = sym_quoted_string_fragment,
  [sym_triple_quoted_string_fragment] = sym_triple_quoted_string_fragment,
  [sym_single_line_comment] = sym_single_line_comment,
  [sym_multi_line_comment] = sym_multi_line_comment,
  [sym_source_file] = sym_source_file,
  [sym__item] = sym__item,
  [sym__statement] = sym__statement,
  [sym_decorator_list] = sym_decorator_list,
  [sym_decorator] = sym_decorator,
  [sym_decorator_arguments] = sym_decorator_arguments,
  [sym_import_statement] = sym_import_statement,
  [sym_using_statement] = sym_using_statement,
  [sym_namespace_statement] = sym_namespace_statement,
  [sym_model_statement] = sym_model_statement,
  [sym__model_heritage] = sym__model_heritage,
  [sym_model_is_heritage] = sym_model_is_heritage,
  [sym_model_extends_heritage] = sym_model_extends_heritage,
  [sym_expression_list] = sym_expression_list,
  [sym__expression] = sym__expression,
  [sym_union_expression] = sym_union_expression,
  [sym_intersection_expression] = sym_intersection_expression,
  [sym_value_of_expression] = sym_value_of_expression,
  [sym_array_expression] = sym_array_expression,
  [sym__primary_expression] = sym__primary_expression,
  [sym_reference_expression] = sym_reference_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_template_arguments] = sym_template_arguments,
  [sym_template_parameters] = sym_template_parameters,
  [sym_template_parameter_list] = sym_template_parameter_list,
  [sym_template_parameter] = sym_template_parameter,
  [sym_template_constraint] = sym_template_constraint,
  [sym_template_default] = sym_template_default,
  [sym__identifier_or_member_expression] = sym__identifier_or_member_expression,
  [sym__identifier] = sym__identifier,
  [sym_member_expression] = sym_member_expression,
  [sym__literal] = sym__literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym__numeric_literal] = sym__numeric_literal,
  [sym__string_literal] = sym__string_literal,
  [sym_quoted_string_literal] = sym_quoted_string_literal,
  [sym_tripe_quoted_string_literal] = sym_tripe_quoted_string_literal,
  [sym__comment] = sym__comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_decorator_list_repeat1] = aux_sym_decorator_list_repeat1,
  [aux_sym_namespace_statement_repeat1] = aux_sym_namespace_statement_repeat1,
  [aux_sym_expression_list_repeat1] = aux_sym_expression_list_repeat1,
  [aux_sym_template_parameter_list_repeat1] = aux_sym_template_parameter_list_repeat1,
  [aux_sym_member_expression_repeat1] = aux_sym_member_expression_repeat1,
  [aux_sym_quoted_string_literal_repeat1] = aux_sym_quoted_string_literal_repeat1,
  [aux_sym_tripe_quoted_string_literal_repeat1] = aux_sym_tripe_quoted_string_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_AT] = {
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
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_namespace] = {
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
  [anon_sym_model] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_valueof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_plain_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_backticked_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_decimal_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_triple_quoted_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_single_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_multi_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__item] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_decorator_list] = {
    .visible = true,
    .named = true,
  },
  [sym_decorator] = {
    .visible = true,
    .named = true,
  },
  [sym_decorator_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_using_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_model_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__model_heritage] = {
    .visible = false,
    .named = true,
  },
  [sym_model_is_heritage] = {
    .visible = true,
    .named = true,
  },
  [sym_model_extends_heritage] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_list] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_union_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_intersection_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_value_of_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_array_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__primary_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_reference_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_template_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_template_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_template_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_template_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_template_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_template_default] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier_or_member_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_member_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__numeric_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_quoted_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_tripe_quoted_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decorator_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_namespace_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_template_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_member_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tripe_quoted_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
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
  [55] = 55,
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
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(60);
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '&') ADVANCE(75);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '.') ADVANCE(98);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(103);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '`') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'm') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead == 'u') ADVANCE(44);
      if (lookahead == 'v') ADVANCE(16);
      if (lookahead == '{') ADVANCE(68);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '}') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(59)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '&') ADVANCE(75);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (lookahead == '0') ADVANCE(103);
      if (lookahead == '`') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == 'v') ADVANCE(84);
      if (lookahead == '|') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(112);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(55);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0) ADVANCE(117);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(118);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(119);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(104);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 11:
      if (lookahead == '`') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 12:
      if (lookahead == '`') ADVANCE(97);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(76);
      END_STATE();
    case 28:
      if (lookahead == 'g') ADVANCE(66);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(40);
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 52:
      if (lookahead == 'x') ADVANCE(48);
      END_STATE();
    case 53:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 54:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(109);
      END_STATE();
    case 55:
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 59:
      if (eof) ADVANCE(60);
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '&') ADVANCE(75);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '.') ADVANCE(98);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(103);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '`') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'm') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead == 'u') ADVANCE(44);
      if (lookahead == 'v') ADVANCE(16);
      if (lookahead == '{') ADVANCE(68);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '}') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(59)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_model);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_valueof);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_valueof);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_plain_identifier);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_plain_identifier);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_plain_identifier);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_plain_identifier);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_plain_identifier);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_plain_identifier);
      if (lookahead == 'f') ADVANCE(77);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_plain_identifier);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_plain_identifier);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_plain_identifier);
      if (lookahead == 'o') ADVANCE(88);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_plain_identifier);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_plain_identifier);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_plain_identifier);
      if (lookahead == 'u') ADVANCE(85);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_plain_identifier);
      if (lookahead == 'u') ADVANCE(87);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_plain_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_backticked_identifier);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == 'b') ADVANCE(54);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'x') ADVANCE(58);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (lookahead == 'e') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(3);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_quoted_string_fragment);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_quoted_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_triple_quoted_string_fragment);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_triple_quoted_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_multi_line_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 11},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_model] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_valueof] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_backticked_identifier] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_decimal_literal] = ACTIONS(1),
    [sym_hex_integer_literal] = ACTIONS(1),
    [sym_binary_integer_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_single_line_comment] = ACTIONS(1),
    [sym_multi_line_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(110),
    [sym__item] = STATE(14),
    [sym__statement] = STATE(14),
    [sym_decorator_list] = STATE(93),
    [sym_decorator] = STATE(59),
    [sym_import_statement] = STATE(14),
    [sym_using_statement] = STATE(14),
    [sym_namespace_statement] = STATE(14),
    [sym_model_statement] = STATE(14),
    [sym__comment] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [aux_sym_decorator_list_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_using] = ACTIONS(9),
    [anon_sym_namespace] = ACTIONS(11),
    [anon_sym_model] = ACTIONS(13),
    [sym_single_line_comment] = ACTIONS(15),
    [sym_multi_line_comment] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_PIPE,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_valueof,
    ACTIONS(25), 1,
      sym_plain_identifier,
    ACTIONS(27), 1,
      sym_backticked_identifier,
    ACTIONS(31), 1,
      sym_decimal_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(17), 1,
      sym__identifier,
    STATE(102), 1,
      sym_expression_list,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      sym_hex_integer_literal,
      sym_binary_integer_literal,
    STATE(25), 2,
      sym__identifier_or_member_expression,
      sym_member_expression,
    STATE(65), 5,
      sym__expression,
      sym_union_expression,
      sym_intersection_expression,
      sym_value_of_expression,
      sym_array_expression,
    STATE(30), 9,
      sym__primary_expression,
      sym_reference_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_boolean_literal,
      sym__numeric_literal,
      sym__string_literal,
      sym_quoted_string_literal,
      sym_tripe_quoted_string_literal,
  [64] = 15,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_PIPE,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_valueof,
    ACTIONS(25), 1,
      sym_plain_identifier,
    ACTIONS(27), 1,
      sym_backticked_identifier,
    ACTIONS(31), 1,
      sym_decimal_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(17), 1,
      sym__identifier,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      sym_hex_integer_literal,
      sym_binary_integer_literal,
    STATE(25), 2,
      sym__identifier_or_member_expression,
      sym_member_expression,
    STATE(51), 5,
      sym__expression,
      sym_union_expression,
      sym_intersection_expression,
      sym_value_of_expression,
      sym_array_expression,
    STATE(30), 9,
      sym__primary_expression,
      sym_reference_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_boolean_literal,
      sym__numeric_literal,
      sym__string_literal,
      sym_quoted_string_literal,
      sym_tripe_quoted_string_literal,
  [125] = 15,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_PIPE,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_valueof,
    ACTIONS(25), 1,
      sym_plain_identifier,
    ACTIONS(27), 1,
      sym_backticked_identifier,
    ACTIONS(31), 1,
      sym_decimal_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(17), 1,
      sym__identifier,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      sym_hex_integer_literal,
      sym_binary_integer_literal,
    STATE(25), 2,
      sym__identifier_or_member_expression,
      sym_member_expression,
    STATE(76), 5,
      sym__expression,
      sym_union_expression,
      sym_intersection_expression,
      sym_value_of_expression,
      sym_array_expression,
    STATE(30), 9,
      sym__primary_expression,
      sym_reference_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_boolean_literal,
      sym__numeric_literal,
      sym__string_literal,
      sym_quoted_string_literal,
      sym_tripe_quoted_string_literal,
  [186] = 15,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_PIPE,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_valueof,
    ACTIONS(25), 1,
      sym_plain_identifier,
    ACTIONS(27), 1,
      sym_backticked_identifier,
    ACTIONS(31), 1,
      sym_decimal_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(17), 1,
      sym__identifier,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      sym_hex_integer_literal,
      sym_binary_integer_literal,
    STATE(25), 2,
      sym__identifier_or_member_expression,
      sym_member_expression,
    STATE(62), 5,
      sym__expression,
      sym_union_expression,
      sym_intersection_expression,
      sym_value_of_expression,
      sym_array_expression,
    STATE(30), 9,
      sym__primary_expression,
      sym_reference_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_boolean_literal,
      sym__numeric_literal,
      sym__string_literal,
      sym_quoted_string_literal,
      sym_tripe_quoted_string_literal,
  [247] = 15,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_PIPE,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_valueof,
    ACTIONS(25), 1,
      sym_plain_identifier,
    ACTIONS(27), 1,
      sym_backticked_identifier,
    ACTIONS(31), 1,
      sym_decimal_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(17), 1,
      sym__identifier,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      sym_hex_integer_literal,
      sym_binary_integer_literal,
    STATE(25), 2,
      sym__identifier_or_member_expression,
      sym_member_expression,
    STATE(49), 5,
      sym__expression,
      sym_union_expression,
      sym_intersection_expression,
      sym_value_of_expression,
      sym_array_expression,
    STATE(30), 9,
      sym__primary_expression,
      sym_reference_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_boolean_literal,
      sym__numeric_literal,
      sym__string_literal,
      sym_quoted_string_literal,
      sym_tripe_quoted_string_literal,
  [308] = 15,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_PIPE,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_valueof,
    ACTIONS(25), 1,
      sym_plain_identifier,
    ACTIONS(27), 1,
      sym_backticked_identifier,
    ACTIONS(31), 1,
      sym_decimal_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(17), 1,
      sym__identifier,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      sym_hex_integer_literal,
      sym_binary_integer_literal,
    STATE(25), 2,
      sym__identifier_or_member_expression,
      sym_member_expression,
    STATE(45), 5,
      sym__expression,
      sym_union_expression,
      sym_intersection_expression,
      sym_value_of_expression,
      sym_array_expression,
    STATE(30), 9,
      sym__primary_expression,
      sym_reference_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_boolean_literal,
      sym__numeric_literal,
      sym__string_literal,
      sym_quoted_string_literal,
      sym_tripe_quoted_string_literal,
  [369] = 15,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_PIPE,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_valueof,
    ACTIONS(25), 1,
      sym_plain_identifier,
    ACTIONS(27), 1,
      sym_backticked_identifier,
    ACTIONS(31), 1,
      sym_decimal_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(17), 1,
      sym__identifier,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      sym_hex_integer_literal,
      sym_binary_integer_literal,
    STATE(25), 2,
      sym__identifier_or_member_expression,
      sym_member_expression,
    STATE(79), 5,
      sym__expression,
      sym_union_expression,
      sym_intersection_expression,
      sym_value_of_expression,
      sym_array_expression,
    STATE(30), 9,
      sym__primary_expression,
      sym_reference_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_boolean_literal,
      sym__numeric_literal,
      sym__string_literal,
      sym_quoted_string_literal,
      sym_tripe_quoted_string_literal,
  [430] = 15,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_PIPE,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_valueof,
    ACTIONS(25), 1,
      sym_plain_identifier,
    ACTIONS(27), 1,
      sym_backticked_identifier,
    ACTIONS(31), 1,
      sym_decimal_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(17), 1,
      sym__identifier,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      sym_hex_integer_literal,
      sym_binary_integer_literal,
    STATE(25), 2,
      sym__identifier_or_member_expression,
      sym_member_expression,
    STATE(52), 5,
      sym__expression,
      sym_union_expression,
      sym_intersection_expression,
      sym_value_of_expression,
      sym_array_expression,
    STATE(30), 9,
      sym__primary_expression,
      sym_reference_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_boolean_literal,
      sym__numeric_literal,
      sym__string_literal,
      sym_quoted_string_literal,
      sym_tripe_quoted_string_literal,
  [491] = 15,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_PIPE,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_valueof,
    ACTIONS(25), 1,
      sym_plain_identifier,
    ACTIONS(27), 1,
      sym_backticked_identifier,
    ACTIONS(31), 1,
      sym_decimal_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(17), 1,
      sym__identifier,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      sym_hex_integer_literal,
      sym_binary_integer_literal,
    STATE(25), 2,
      sym__identifier_or_member_expression,
      sym_member_expression,
    STATE(50), 5,
      sym__expression,
      sym_union_expression,
      sym_intersection_expression,
      sym_value_of_expression,
      sym_array_expression,
    STATE(30), 9,
      sym__primary_expression,
      sym_reference_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_boolean_literal,
      sym__numeric_literal,
      sym__string_literal,
      sym_quoted_string_literal,
      sym_tripe_quoted_string_literal,
  [552] = 15,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_PIPE,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_valueof,
    ACTIONS(25), 1,
      sym_plain_identifier,
    ACTIONS(27), 1,
      sym_backticked_identifier,
    ACTIONS(31), 1,
      sym_decimal_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(17), 1,
      sym__identifier,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      sym_hex_integer_literal,
      sym_binary_integer_literal,
    STATE(25), 2,
      sym__identifier_or_member_expression,
      sym_member_expression,
    STATE(71), 5,
      sym__expression,
      sym_union_expression,
      sym_intersection_expression,
      sym_value_of_expression,
      sym_array_expression,
    STATE(30), 9,
      sym__primary_expression,
      sym_reference_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_boolean_literal,
      sym__numeric_literal,
      sym__string_literal,
      sym_quoted_string_literal,
      sym_tripe_quoted_string_literal,
  [613] = 15,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_PIPE,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_valueof,
    ACTIONS(25), 1,
      sym_plain_identifier,
    ACTIONS(27), 1,
      sym_backticked_identifier,
    ACTIONS(31), 1,
      sym_decimal_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(17), 1,
      sym__identifier,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      sym_hex_integer_literal,
      sym_binary_integer_literal,
    STATE(25), 2,
      sym__identifier_or_member_expression,
      sym_member_expression,
    STATE(84), 5,
      sym__expression,
      sym_union_expression,
      sym_intersection_expression,
      sym_value_of_expression,
      sym_array_expression,
    STATE(30), 9,
      sym__primary_expression,
      sym_reference_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_boolean_literal,
      sym__numeric_literal,
      sym__string_literal,
      sym_quoted_string_literal,
      sym_tripe_quoted_string_literal,
  [674] = 15,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_PIPE,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_valueof,
    ACTIONS(25), 1,
      sym_plain_identifier,
    ACTIONS(27), 1,
      sym_backticked_identifier,
    ACTIONS(31), 1,
      sym_decimal_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(17), 1,
      sym__identifier,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      sym_hex_integer_literal,
      sym_binary_integer_literal,
    STATE(25), 2,
      sym__identifier_or_member_expression,
      sym_member_expression,
    STATE(69), 5,
      sym__expression,
      sym_union_expression,
      sym_intersection_expression,
      sym_value_of_expression,
      sym_array_expression,
    STATE(30), 9,
      sym__primary_expression,
      sym_reference_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_boolean_literal,
      sym__numeric_literal,
      sym__string_literal,
      sym_quoted_string_literal,
      sym_tripe_quoted_string_literal,
  [735] = 10,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_using,
    ACTIONS(11), 1,
      anon_sym_namespace,
    ACTIONS(13), 1,
      anon_sym_model,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(93), 1,
      sym_decorator_list,
    ACTIONS(41), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(59), 2,
      sym_decorator,
      aux_sym_decorator_list_repeat1,
    STATE(15), 8,
      sym__item,
      sym__statement,
      sym_import_statement,
      sym_using_statement,
      sym_namespace_statement,
      sym_model_statement,
      sym__comment,
      aux_sym_source_file_repeat1,
  [775] = 10,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(48), 1,
      anon_sym_import,
    ACTIONS(51), 1,
      anon_sym_using,
    ACTIONS(54), 1,
      anon_sym_namespace,
    ACTIONS(57), 1,
      anon_sym_model,
    STATE(93), 1,
      sym_decorator_list,
    ACTIONS(60), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(59), 2,
      sym_decorator,
      aux_sym_decorator_list_repeat1,
    STATE(15), 8,
      sym__item,
      sym__statement,
      sym_import_statement,
      sym_using_statement,
      sym_namespace_statement,
      sym_model_statement,
      sym__comment,
      aux_sym_source_file_repeat1,
  [815] = 3,
    ACTIONS(65), 1,
      anon_sym_DOT,
    STATE(18), 1,
      aux_sym_member_expression_repeat1,
    ACTIONS(63), 14,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_namespace,
      anon_sym_LBRACE,
      anon_sym_model,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
  [838] = 3,
    ACTIONS(65), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym_member_expression_repeat1,
    ACTIONS(67), 14,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_namespace,
      anon_sym_LBRACE,
      anon_sym_model,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
  [861] = 3,
    ACTIONS(71), 1,
      anon_sym_DOT,
    STATE(18), 1,
      aux_sym_member_expression_repeat1,
    ACTIONS(69), 14,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_namespace,
      anon_sym_LBRACE,
      anon_sym_model,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
  [884] = 9,
    ACTIONS(74), 1,
      anon_sym_AT,
    ACTIONS(77), 1,
      anon_sym_import,
    ACTIONS(80), 1,
      anon_sym_using,
    ACTIONS(83), 1,
      anon_sym_namespace,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    ACTIONS(88), 1,
      anon_sym_model,
    STATE(93), 1,
      sym_decorator_list,
    STATE(59), 2,
      sym_decorator,
      aux_sym_decorator_list_repeat1,
    STATE(19), 6,
      sym__statement,
      sym_import_statement,
      sym_using_statement,
      sym_namespace_statement,
      sym_model_statement,
      aux_sym_namespace_statement_repeat1,
  [918] = 9,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_using,
    ACTIONS(11), 1,
      anon_sym_namespace,
    ACTIONS(13), 1,
      anon_sym_model,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      sym_decorator_list,
    STATE(59), 2,
      sym_decorator,
      aux_sym_decorator_list_repeat1,
    STATE(21), 6,
      sym__statement,
      sym_import_statement,
      sym_using_statement,
      sym_namespace_statement,
      sym_model_statement,
      aux_sym_namespace_statement_repeat1,
  [952] = 9,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_using,
    ACTIONS(11), 1,
      anon_sym_namespace,
    ACTIONS(13), 1,
      anon_sym_model,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      sym_decorator_list,
    STATE(59), 2,
      sym_decorator,
      aux_sym_decorator_list_repeat1,
    STATE(19), 6,
      sym__statement,
      sym_import_statement,
      sym_using_statement,
      sym_namespace_statement,
      sym_model_statement,
      aux_sym_namespace_statement_repeat1,
  [986] = 9,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_using,
    ACTIONS(11), 1,
      anon_sym_namespace,
    ACTIONS(13), 1,
      anon_sym_model,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      sym_decorator_list,
    STATE(59), 2,
      sym_decorator,
      aux_sym_decorator_list_repeat1,
    STATE(19), 6,
      sym__statement,
      sym_import_statement,
      sym_using_statement,
      sym_namespace_statement,
      sym_model_statement,
      aux_sym_namespace_statement_repeat1,
  [1020] = 1,
    ACTIONS(69), 15,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_namespace,
      anon_sym_LBRACE,
      anon_sym_model,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_DOT,
  [1038] = 9,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_using,
    ACTIONS(11), 1,
      anon_sym_namespace,
    ACTIONS(13), 1,
      anon_sym_model,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      sym_decorator_list,
    STATE(59), 2,
      sym_decorator,
      aux_sym_decorator_list_repeat1,
    STATE(22), 6,
      sym__statement,
      sym_import_statement,
      sym_using_statement,
      sym_namespace_statement,
      sym_model_statement,
      aux_sym_namespace_statement_repeat1,
  [1072] = 3,
    ACTIONS(99), 1,
      anon_sym_LT,
    STATE(27), 1,
      sym_template_arguments,
    ACTIONS(97), 9,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_EQ,
  [1090] = 1,
    ACTIONS(101), 9,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_EQ,
  [1102] = 1,
    ACTIONS(103), 9,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_EQ,
  [1114] = 1,
    ACTIONS(105), 9,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_import,
      anon_sym_using,
      anon_sym_namespace,
      anon_sym_RBRACE,
      anon_sym_model,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1126] = 1,
    ACTIONS(107), 9,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_import,
      anon_sym_using,
      anon_sym_namespace,
      anon_sym_RBRACE,
      anon_sym_model,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1138] = 2,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(109), 8,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_EQ,
  [1152] = 1,
    ACTIONS(113), 9,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_EQ,
  [1164] = 1,
    ACTIONS(115), 9,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_import,
      anon_sym_using,
      anon_sym_namespace,
      anon_sym_RBRACE,
      anon_sym_model,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1176] = 1,
    ACTIONS(117), 9,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_EQ,
  [1188] = 1,
    ACTIONS(119), 9,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_import,
      anon_sym_using,
      anon_sym_namespace,
      anon_sym_RBRACE,
      anon_sym_model,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1200] = 1,
    ACTIONS(121), 9,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_import,
      anon_sym_using,
      anon_sym_namespace,
      anon_sym_RBRACE,
      anon_sym_model,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1212] = 1,
    ACTIONS(123), 9,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_EQ,
  [1224] = 1,
    ACTIONS(125), 9,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_import,
      anon_sym_using,
      anon_sym_namespace,
      anon_sym_RBRACE,
      anon_sym_model,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1236] = 1,
    ACTIONS(127), 9,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_EQ,
  [1248] = 1,
    ACTIONS(129), 9,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_import,
      anon_sym_using,
      anon_sym_namespace,
      anon_sym_RBRACE,
      anon_sym_model,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1260] = 1,
    ACTIONS(131), 9,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_import,
      anon_sym_using,
      anon_sym_namespace,
      anon_sym_RBRACE,
      anon_sym_model,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1272] = 1,
    ACTIONS(133), 9,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_import,
      anon_sym_using,
      anon_sym_namespace,
      anon_sym_RBRACE,
      anon_sym_model,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1284] = 1,
    ACTIONS(135), 9,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_import,
      anon_sym_using,
      anon_sym_namespace,
      anon_sym_RBRACE,
      anon_sym_model,
      sym_single_line_comment,
      sym_multi_line_comment,
  [1296] = 1,
    ACTIONS(137), 9,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_EQ,
  [1308] = 1,
    ACTIONS(139), 9,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_EQ,
  [1320] = 1,
    ACTIONS(141), 8,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_EQ,
  [1331] = 7,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      anon_sym_is,
    ACTIONS(147), 1,
      anon_sym_extends,
    ACTIONS(149), 1,
      anon_sym_LT,
    STATE(53), 1,
      sym_template_parameters,
    STATE(98), 1,
      sym_model_is_heritage,
    STATE(113), 2,
      sym__model_heritage,
      sym_model_extends_heritage,
  [1354] = 7,
    ACTIONS(145), 1,
      anon_sym_is,
    ACTIONS(147), 1,
      anon_sym_extends,
    ACTIONS(149), 1,
      anon_sym_LT,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_template_parameters,
    STATE(95), 1,
      sym_model_is_heritage,
    STATE(101), 2,
      sym__model_heritage,
      sym_model_extends_heritage,
  [1377] = 1,
    ACTIONS(153), 8,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_EQ,
  [1388] = 2,
    ACTIONS(157), 1,
      anon_sym_AMP,
    ACTIONS(155), 7,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_EQ,
  [1401] = 1,
    ACTIONS(159), 8,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_EQ,
  [1412] = 1,
    ACTIONS(161), 8,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_EQ,
  [1423] = 2,
    ACTIONS(157), 1,
      anon_sym_AMP,
    ACTIONS(163), 7,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_EQ,
  [1436] = 5,
    ACTIONS(145), 1,
      anon_sym_is,
    ACTIONS(147), 1,
      anon_sym_extends,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    STATE(92), 1,
      sym_model_is_heritage,
    STATE(104), 2,
      sym__model_heritage,
      sym_model_extends_heritage,
  [1453] = 5,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      anon_sym_is,
    ACTIONS(147), 1,
      anon_sym_extends,
    STATE(98), 1,
      sym_model_is_heritage,
    STATE(113), 2,
      sym__model_heritage,
      sym_model_extends_heritage,
  [1470] = 5,
    ACTIONS(167), 1,
      anon_sym_extends,
    ACTIONS(171), 1,
      anon_sym_EQ,
    STATE(75), 1,
      sym_template_constraint,
    STATE(97), 1,
      sym_template_default,
    ACTIONS(169), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1487] = 3,
    ACTIONS(173), 1,
      anon_sym_AT,
    ACTIONS(176), 2,
      anon_sym_namespace,
      anon_sym_model,
    STATE(56), 2,
      sym_decorator,
      aux_sym_decorator_list_repeat1,
  [1499] = 3,
    STATE(17), 1,
      sym__identifier,
    ACTIONS(27), 2,
      sym_plain_identifier,
      sym_backticked_identifier,
    STATE(64), 2,
      sym__identifier_or_member_expression,
      sym_member_expression,
  [1511] = 3,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(108), 3,
      sym__string_literal,
      sym_quoted_string_literal,
      sym_tripe_quoted_string_literal,
  [1523] = 3,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(178), 2,
      anon_sym_namespace,
      anon_sym_model,
    STATE(56), 2,
      sym_decorator,
      aux_sym_decorator_list_repeat1,
  [1535] = 3,
    STATE(17), 1,
      sym__identifier,
    ACTIONS(27), 2,
      sym_plain_identifier,
      sym_backticked_identifier,
    STATE(94), 2,
      sym__identifier_or_member_expression,
      sym_member_expression,
  [1547] = 3,
    STATE(17), 1,
      sym__identifier,
    ACTIONS(27), 2,
      sym_plain_identifier,
      sym_backticked_identifier,
    STATE(105), 2,
      sym__identifier_or_member_expression,
      sym_member_expression,
  [1559] = 3,
    ACTIONS(157), 1,
      anon_sym_AMP,
    ACTIONS(182), 1,
      anon_sym_PIPE,
    ACTIONS(180), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_EQ,
  [1571] = 3,
    STATE(17), 1,
      sym__identifier,
    ACTIONS(27), 2,
      sym_plain_identifier,
      sym_backticked_identifier,
    STATE(99), 2,
      sym__identifier_or_member_expression,
      sym_member_expression,
  [1583] = 3,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    STATE(82), 1,
      sym_decorator_arguments,
    ACTIONS(184), 3,
      anon_sym_AT,
      anon_sym_namespace,
      anon_sym_model,
  [1595] = 5,
    ACTIONS(157), 1,
      anon_sym_AMP,
    ACTIONS(182), 1,
      anon_sym_PIPE,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      anon_sym_GT,
    STATE(89), 1,
      aux_sym_expression_list_repeat1,
  [1611] = 4,
    STATE(55), 1,
      sym__identifier,
    STATE(90), 1,
      sym_template_parameter,
    STATE(111), 1,
      sym_template_parameter_list,
    ACTIONS(192), 2,
      sym_plain_identifier,
      sym_backticked_identifier,
  [1625] = 3,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      aux_sym_quoted_string_literal_repeat1,
    ACTIONS(196), 2,
      sym_escape_sequence,
      sym_quoted_string_fragment,
  [1636] = 3,
    STATE(55), 1,
      sym__identifier,
    STATE(96), 1,
      sym_template_parameter,
    ACTIONS(192), 2,
      sym_plain_identifier,
      sym_backticked_identifier,
  [1647] = 3,
    ACTIONS(157), 1,
      anon_sym_AMP,
    ACTIONS(182), 1,
      anon_sym_PIPE,
    ACTIONS(198), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1658] = 3,
    ACTIONS(200), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(74), 1,
      aux_sym_tripe_quoted_string_literal_repeat1,
    ACTIONS(202), 2,
      sym_escape_sequence,
      sym_triple_quoted_string_fragment,
  [1669] = 3,
    ACTIONS(157), 1,
      anon_sym_AMP,
    ACTIONS(182), 1,
      anon_sym_PIPE,
    ACTIONS(204), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1680] = 3,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      aux_sym_quoted_string_literal_repeat1,
    ACTIONS(208), 2,
      sym_escape_sequence,
      sym_quoted_string_fragment,
  [1691] = 3,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      aux_sym_quoted_string_literal_repeat1,
    ACTIONS(213), 2,
      sym_escape_sequence,
      sym_quoted_string_fragment,
  [1702] = 3,
    ACTIONS(215), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(74), 1,
      aux_sym_tripe_quoted_string_literal_repeat1,
    ACTIONS(217), 2,
      sym_escape_sequence,
      sym_triple_quoted_string_fragment,
  [1713] = 3,
    ACTIONS(171), 1,
      anon_sym_EQ,
    STATE(91), 1,
      sym_template_default,
    ACTIONS(220), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1724] = 3,
    ACTIONS(157), 1,
      anon_sym_AMP,
    ACTIONS(182), 1,
      anon_sym_PIPE,
    ACTIONS(222), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [1735] = 3,
    ACTIONS(224), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(70), 1,
      aux_sym_tripe_quoted_string_literal_repeat1,
    ACTIONS(226), 2,
      sym_escape_sequence,
      sym_triple_quoted_string_fragment,
  [1746] = 3,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    ACTIONS(230), 1,
      anon_sym_GT,
    STATE(81), 1,
      aux_sym_template_parameter_list_repeat1,
  [1756] = 3,
    ACTIONS(157), 1,
      anon_sym_AMP,
    ACTIONS(182), 1,
      anon_sym_PIPE,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
  [1766] = 2,
    STATE(46), 1,
      sym__identifier,
    ACTIONS(234), 2,
      sym_plain_identifier,
      sym_backticked_identifier,
  [1774] = 3,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_GT,
    STATE(81), 1,
      aux_sym_template_parameter_list_repeat1,
  [1784] = 1,
    ACTIONS(241), 3,
      anon_sym_AT,
      anon_sym_namespace,
      anon_sym_model,
  [1790] = 1,
    ACTIONS(243), 3,
      anon_sym_LBRACE,
      anon_sym_is,
      anon_sym_extends,
  [1796] = 3,
    ACTIONS(157), 1,
      anon_sym_AMP,
    ACTIONS(182), 1,
      anon_sym_PIPE,
    ACTIONS(245), 1,
      anon_sym_LBRACE,
  [1806] = 2,
    STATE(47), 1,
      sym__identifier,
    ACTIONS(247), 2,
      sym_plain_identifier,
      sym_backticked_identifier,
  [1814] = 2,
    STATE(23), 1,
      sym__identifier,
    ACTIONS(249), 2,
      sym_plain_identifier,
      sym_backticked_identifier,
  [1822] = 3,
    ACTIONS(204), 1,
      anon_sym_GT,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_expression_list_repeat1,
  [1832] = 1,
    ACTIONS(254), 3,
      anon_sym_AT,
      anon_sym_namespace,
      anon_sym_model,
  [1838] = 3,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(256), 1,
      anon_sym_GT,
    STATE(87), 1,
      aux_sym_expression_list_repeat1,
  [1848] = 3,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    ACTIONS(258), 1,
      anon_sym_GT,
    STATE(78), 1,
      aux_sym_template_parameter_list_repeat1,
  [1858] = 1,
    ACTIONS(260), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1863] = 2,
    ACTIONS(262), 1,
      anon_sym_SEMI,
    ACTIONS(264), 1,
      anon_sym_LBRACE,
  [1870] = 2,
    ACTIONS(266), 1,
      anon_sym_namespace,
    ACTIONS(268), 1,
      anon_sym_model,
  [1877] = 2,
    ACTIONS(95), 1,
      anon_sym_SEMI,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
  [1884] = 2,
    ACTIONS(264), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_SEMI,
  [1891] = 1,
    ACTIONS(239), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1896] = 1,
    ACTIONS(220), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1901] = 2,
    ACTIONS(264), 1,
      anon_sym_LBRACE,
    ACTIONS(274), 1,
      anon_sym_SEMI,
  [1908] = 2,
    ACTIONS(276), 1,
      anon_sym_SEMI,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
  [1915] = 1,
    ACTIONS(280), 1,
      anon_sym_RBRACK,
  [1919] = 1,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
  [1923] = 1,
    ACTIONS(282), 1,
      anon_sym_GT,
  [1927] = 1,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
  [1931] = 1,
    ACTIONS(284), 1,
      anon_sym_LBRACE,
  [1935] = 1,
    ACTIONS(286), 1,
      anon_sym_SEMI,
  [1939] = 1,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
  [1943] = 1,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
  [1947] = 1,
    ACTIONS(290), 1,
      anon_sym_SEMI,
  [1951] = 1,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
  [1955] = 1,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
  [1959] = 1,
    ACTIONS(296), 1,
      anon_sym_GT,
  [1963] = 1,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
  [1967] = 1,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 64,
  [SMALL_STATE(4)] = 125,
  [SMALL_STATE(5)] = 186,
  [SMALL_STATE(6)] = 247,
  [SMALL_STATE(7)] = 308,
  [SMALL_STATE(8)] = 369,
  [SMALL_STATE(9)] = 430,
  [SMALL_STATE(10)] = 491,
  [SMALL_STATE(11)] = 552,
  [SMALL_STATE(12)] = 613,
  [SMALL_STATE(13)] = 674,
  [SMALL_STATE(14)] = 735,
  [SMALL_STATE(15)] = 775,
  [SMALL_STATE(16)] = 815,
  [SMALL_STATE(17)] = 838,
  [SMALL_STATE(18)] = 861,
  [SMALL_STATE(19)] = 884,
  [SMALL_STATE(20)] = 918,
  [SMALL_STATE(21)] = 952,
  [SMALL_STATE(22)] = 986,
  [SMALL_STATE(23)] = 1020,
  [SMALL_STATE(24)] = 1038,
  [SMALL_STATE(25)] = 1072,
  [SMALL_STATE(26)] = 1090,
  [SMALL_STATE(27)] = 1102,
  [SMALL_STATE(28)] = 1114,
  [SMALL_STATE(29)] = 1126,
  [SMALL_STATE(30)] = 1138,
  [SMALL_STATE(31)] = 1152,
  [SMALL_STATE(32)] = 1164,
  [SMALL_STATE(33)] = 1176,
  [SMALL_STATE(34)] = 1188,
  [SMALL_STATE(35)] = 1200,
  [SMALL_STATE(36)] = 1212,
  [SMALL_STATE(37)] = 1224,
  [SMALL_STATE(38)] = 1236,
  [SMALL_STATE(39)] = 1248,
  [SMALL_STATE(40)] = 1260,
  [SMALL_STATE(41)] = 1272,
  [SMALL_STATE(42)] = 1284,
  [SMALL_STATE(43)] = 1296,
  [SMALL_STATE(44)] = 1308,
  [SMALL_STATE(45)] = 1320,
  [SMALL_STATE(46)] = 1331,
  [SMALL_STATE(47)] = 1354,
  [SMALL_STATE(48)] = 1377,
  [SMALL_STATE(49)] = 1388,
  [SMALL_STATE(50)] = 1401,
  [SMALL_STATE(51)] = 1412,
  [SMALL_STATE(52)] = 1423,
  [SMALL_STATE(53)] = 1436,
  [SMALL_STATE(54)] = 1453,
  [SMALL_STATE(55)] = 1470,
  [SMALL_STATE(56)] = 1487,
  [SMALL_STATE(57)] = 1499,
  [SMALL_STATE(58)] = 1511,
  [SMALL_STATE(59)] = 1523,
  [SMALL_STATE(60)] = 1535,
  [SMALL_STATE(61)] = 1547,
  [SMALL_STATE(62)] = 1559,
  [SMALL_STATE(63)] = 1571,
  [SMALL_STATE(64)] = 1583,
  [SMALL_STATE(65)] = 1595,
  [SMALL_STATE(66)] = 1611,
  [SMALL_STATE(67)] = 1625,
  [SMALL_STATE(68)] = 1636,
  [SMALL_STATE(69)] = 1647,
  [SMALL_STATE(70)] = 1658,
  [SMALL_STATE(71)] = 1669,
  [SMALL_STATE(72)] = 1680,
  [SMALL_STATE(73)] = 1691,
  [SMALL_STATE(74)] = 1702,
  [SMALL_STATE(75)] = 1713,
  [SMALL_STATE(76)] = 1724,
  [SMALL_STATE(77)] = 1735,
  [SMALL_STATE(78)] = 1746,
  [SMALL_STATE(79)] = 1756,
  [SMALL_STATE(80)] = 1766,
  [SMALL_STATE(81)] = 1774,
  [SMALL_STATE(82)] = 1784,
  [SMALL_STATE(83)] = 1790,
  [SMALL_STATE(84)] = 1796,
  [SMALL_STATE(85)] = 1806,
  [SMALL_STATE(86)] = 1814,
  [SMALL_STATE(87)] = 1822,
  [SMALL_STATE(88)] = 1832,
  [SMALL_STATE(89)] = 1838,
  [SMALL_STATE(90)] = 1848,
  [SMALL_STATE(91)] = 1858,
  [SMALL_STATE(92)] = 1863,
  [SMALL_STATE(93)] = 1870,
  [SMALL_STATE(94)] = 1877,
  [SMALL_STATE(95)] = 1884,
  [SMALL_STATE(96)] = 1891,
  [SMALL_STATE(97)] = 1896,
  [SMALL_STATE(98)] = 1901,
  [SMALL_STATE(99)] = 1908,
  [SMALL_STATE(100)] = 1915,
  [SMALL_STATE(101)] = 1919,
  [SMALL_STATE(102)] = 1923,
  [SMALL_STATE(103)] = 1927,
  [SMALL_STATE(104)] = 1931,
  [SMALL_STATE(105)] = 1935,
  [SMALL_STATE(106)] = 1939,
  [SMALL_STATE(107)] = 1943,
  [SMALL_STATE(108)] = 1947,
  [SMALL_STATE(109)] = 1951,
  [SMALL_STATE(110)] = 1955,
  [SMALL_STATE(111)] = 1959,
  [SMALL_STATE(112)] = 1963,
  [SMALL_STATE(113)] = 1967,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(85),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_or_member_expression, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_member_expression_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_member_expression_repeat1, 2), SHIFT_REPEAT(86),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_statement_repeat1, 2), SHIFT_REPEAT(57),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_statement_repeat1, 2), SHIFT_REPEAT(58),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_statement_repeat1, 2), SHIFT_REPEAT(61),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_statement_repeat1, 2), SHIFT_REPEAT(63),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespace_statement_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_statement_repeat1, 2), SHIFT_REPEAT(85),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_expression, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tripe_quoted_string_literal, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_expression, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_statement, 7),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 5),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_statement, 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_arguments, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 6),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_statement, 6),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string_literal, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tripe_quoted_string_literal, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_statement, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_statement, 5),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string_literal, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intersection_expression, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_expression, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intersection_expression, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_of_expression, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_expression, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_parameter, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decorator_list_repeat1, 2), SHIFT_REPEAT(57),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decorator_list_repeat1, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator_list, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_constraint, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_default, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_literal_repeat1, 2),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_literal_repeat1, 2), SHIFT_REPEAT(72),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tripe_quoted_string_literal_repeat1, 2),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tripe_quoted_string_literal_repeat1, 2), SHIFT_REPEAT(74),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_parameter, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_is_heritage, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_parameter_list, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_parameter_list_repeat1, 2), SHIFT_REPEAT(68),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_parameter_list_repeat1, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_parameters, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_extends_heritage, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(11),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator_arguments, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_parameter_list, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_parameter, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_heritage, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [294] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_typespec(void) {
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
