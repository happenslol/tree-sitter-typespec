#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 83
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 70
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
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
  anon_sym_PIPE = 13,
  anon_sym_AMP = 14,
  anon_sym_valueof = 15,
  anon_sym_LBRACK = 16,
  anon_sym_RBRACK = 17,
  sym_plain_identifier = 18,
  sym_backticked_identifier = 19,
  anon_sym_DOT = 20,
  anon_sym_true = 21,
  anon_sym_false = 22,
  sym_decimal_literal = 23,
  sym_hex_integer_literal = 24,
  sym_binary_integer_literal = 25,
  anon_sym_DQUOTE = 26,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 27,
  sym_escape_sequence = 28,
  sym_quoted_string_fragment = 29,
  sym_triple_quoted_string_fragment = 30,
  sym_single_line_comment = 31,
  sym_multi_line_comment = 32,
  sym_source_file = 33,
  sym__item = 34,
  sym__statement = 35,
  sym_decorator_list = 36,
  sym_decorator = 37,
  sym_decorator_arguments = 38,
  sym_import_statement = 39,
  sym_using_statement = 40,
  sym_namespace_statement = 41,
  sym_model_statement = 42,
  sym__model_heritage = 43,
  sym_model_is_heritage = 44,
  sym_model_extends_heritage = 45,
  sym__expression = 46,
  sym_union_expression = 47,
  sym_intersection_expression = 48,
  sym_value_of_expression = 49,
  sym_array_expression = 50,
  sym__primary_expression = 51,
  sym_reference_expression = 52,
  sym_parenthesized_expression = 53,
  sym__identifier_or_member_expression = 54,
  sym__identifier = 55,
  sym_member_expression = 56,
  sym__literal = 57,
  sym_boolean_literal = 58,
  sym__numeric_literal = 59,
  sym__string_literal = 60,
  sym_quoted_string_literal = 61,
  sym_tripe_quoted_string_literal = 62,
  sym__comment = 63,
  aux_sym_source_file_repeat1 = 64,
  aux_sym_decorator_list_repeat1 = 65,
  aux_sym_namespace_statement_repeat1 = 66,
  aux_sym_member_expression_repeat1 = 67,
  aux_sym_quoted_string_literal_repeat1 = 68,
  aux_sym_tripe_quoted_string_literal_repeat1 = 69,
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
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP] = "&",
  [anon_sym_valueof] = "valueof",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
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
  [sym__expression] = "_expression",
  [sym_union_expression] = "union_expression",
  [sym_intersection_expression] = "intersection_expression",
  [sym_value_of_expression] = "value_of_expression",
  [sym_array_expression] = "array_expression",
  [sym__primary_expression] = "_primary_expression",
  [sym_reference_expression] = "reference_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
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
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_valueof] = anon_sym_valueof,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [sym__expression] = sym__expression,
  [sym_union_expression] = sym_union_expression,
  [sym_intersection_expression] = sym_intersection_expression,
  [sym_value_of_expression] = sym_value_of_expression,
  [sym_array_expression] = sym_array_expression,
  [sym__primary_expression] = sym__primary_expression,
  [sym_reference_expression] = sym_reference_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(60);
      if (lookahead == '"') ADVANCE(107);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(99);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead == ']') ADVANCE(78);
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
      if (lookahead == '|') ADVANCE(73);
      if (lookahead == '}') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(59)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(107);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (lookahead == '0') ADVANCE(99);
      if (lookahead == '`') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == 'v') ADVANCE(80);
      if (lookahead == '|') ADVANCE(73);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(108);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(106);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(55);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(112);
      if (lookahead != 0) ADVANCE(113);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(114);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(100);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 11:
      if (lookahead == '`') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 12:
      if (lookahead == '`') ADVANCE(93);
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
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(97);
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
      if (lookahead == 'f') ADVANCE(75);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 54:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(105);
      END_STATE();
    case 55:
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 59:
      if (eof) ADVANCE(60);
      if (lookahead == '"') ADVANCE(107);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(99);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == ']') ADVANCE(78);
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
      if (lookahead == '|') ADVANCE(73);
      if (lookahead == '}') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(59)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
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
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_valueof);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_valueof);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_plain_identifier);
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_plain_identifier);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_plain_identifier);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_plain_identifier);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_plain_identifier);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_plain_identifier);
      if (lookahead == 'f') ADVANCE(76);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_plain_identifier);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_plain_identifier);
      if (lookahead == 'l') ADVANCE(91);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_plain_identifier);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_plain_identifier);
      if (lookahead == 'r') ADVANCE(90);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_plain_identifier);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_plain_identifier);
      if (lookahead == 'u') ADVANCE(81);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_plain_identifier);
      if (lookahead == 'u') ADVANCE(83);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_plain_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_backticked_identifier);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == 'b') ADVANCE(54);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'x') ADVANCE(58);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (lookahead == 'e') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(3);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_quoted_string_fragment);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_quoted_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_triple_quoted_string_fragment);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_triple_quoted_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(114);
      END_STATE();
    case 115:
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
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
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
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
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
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_valueof] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
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
    [sym_source_file] = STATE(82),
    [sym__item] = STATE(10),
    [sym__statement] = STATE(10),
    [sym_decorator_list] = STATE(72),
    [sym_decorator] = STATE(47),
    [sym_import_statement] = STATE(10),
    [sym_using_statement] = STATE(10),
    [sym_namespace_statement] = STATE(10),
    [sym_model_statement] = STATE(10),
    [sym__comment] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [aux_sym_decorator_list_repeat1] = STATE(47),
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
  [0] = 15,
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
    STATE(18), 1,
      sym__identifier,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      sym_hex_integer_literal,
      sym_binary_integer_literal,
    STATE(32), 2,
      sym__identifier_or_member_expression,
      sym_member_expression,
    STATE(61), 5,
      sym__expression,
      sym_union_expression,
      sym_intersection_expression,
      sym_value_of_expression,
      sym_array_expression,
    STATE(34), 9,
      sym__primary_expression,
      sym_reference_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_boolean_literal,
      sym__numeric_literal,
      sym__string_literal,
      sym_quoted_string_literal,
      sym_tripe_quoted_string_literal,
  [61] = 15,
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
    STATE(18), 1,
      sym__identifier,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      sym_hex_integer_literal,
      sym_binary_integer_literal,
    STATE(32), 2,
      sym__identifier_or_member_expression,
      sym_member_expression,
    STATE(52), 5,
      sym__expression,
      sym_union_expression,
      sym_intersection_expression,
      sym_value_of_expression,
      sym_array_expression,
    STATE(34), 9,
      sym__primary_expression,
      sym_reference_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_boolean_literal,
      sym__numeric_literal,
      sym__string_literal,
      sym_quoted_string_literal,
      sym_tripe_quoted_string_literal,
  [122] = 15,
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
    STATE(18), 1,
      sym__identifier,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      sym_hex_integer_literal,
      sym_binary_integer_literal,
    STATE(32), 2,
      sym__identifier_or_member_expression,
      sym_member_expression,
    STATE(41), 5,
      sym__expression,
      sym_union_expression,
      sym_intersection_expression,
      sym_value_of_expression,
      sym_array_expression,
    STATE(34), 9,
      sym__primary_expression,
      sym_reference_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_boolean_literal,
      sym__numeric_literal,
      sym__string_literal,
      sym_quoted_string_literal,
      sym_tripe_quoted_string_literal,
  [183] = 15,
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
    STATE(18), 1,
      sym__identifier,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      sym_hex_integer_literal,
      sym_binary_integer_literal,
    STATE(32), 2,
      sym__identifier_or_member_expression,
      sym_member_expression,
    STATE(42), 5,
      sym__expression,
      sym_union_expression,
      sym_intersection_expression,
      sym_value_of_expression,
      sym_array_expression,
    STATE(34), 9,
      sym__primary_expression,
      sym_reference_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_boolean_literal,
      sym__numeric_literal,
      sym__string_literal,
      sym_quoted_string_literal,
      sym_tripe_quoted_string_literal,
  [244] = 15,
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
    STATE(18), 1,
      sym__identifier,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      sym_hex_integer_literal,
      sym_binary_integer_literal,
    STATE(32), 2,
      sym__identifier_or_member_expression,
      sym_member_expression,
    STATE(44), 5,
      sym__expression,
      sym_union_expression,
      sym_intersection_expression,
      sym_value_of_expression,
      sym_array_expression,
    STATE(34), 9,
      sym__primary_expression,
      sym_reference_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_boolean_literal,
      sym__numeric_literal,
      sym__string_literal,
      sym_quoted_string_literal,
      sym_tripe_quoted_string_literal,
  [305] = 15,
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
    STATE(18), 1,
      sym__identifier,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      sym_hex_integer_literal,
      sym_binary_integer_literal,
    STATE(32), 2,
      sym__identifier_or_member_expression,
      sym_member_expression,
    STATE(40), 5,
      sym__expression,
      sym_union_expression,
      sym_intersection_expression,
      sym_value_of_expression,
      sym_array_expression,
    STATE(34), 9,
      sym__primary_expression,
      sym_reference_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_boolean_literal,
      sym__numeric_literal,
      sym__string_literal,
      sym_quoted_string_literal,
      sym_tripe_quoted_string_literal,
  [366] = 15,
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
    STATE(18), 1,
      sym__identifier,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      sym_hex_integer_literal,
      sym_binary_integer_literal,
    STATE(32), 2,
      sym__identifier_or_member_expression,
      sym_member_expression,
    STATE(67), 5,
      sym__expression,
      sym_union_expression,
      sym_intersection_expression,
      sym_value_of_expression,
      sym_array_expression,
    STATE(34), 9,
      sym__primary_expression,
      sym_reference_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_boolean_literal,
      sym__numeric_literal,
      sym__string_literal,
      sym_quoted_string_literal,
      sym_tripe_quoted_string_literal,
  [427] = 15,
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
    STATE(18), 1,
      sym__identifier,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      sym_hex_integer_literal,
      sym_binary_integer_literal,
    STATE(32), 2,
      sym__identifier_or_member_expression,
      sym_member_expression,
    STATE(59), 5,
      sym__expression,
      sym_union_expression,
      sym_intersection_expression,
      sym_value_of_expression,
      sym_array_expression,
    STATE(34), 9,
      sym__primary_expression,
      sym_reference_expression,
      sym_parenthesized_expression,
      sym__literal,
      sym_boolean_literal,
      sym__numeric_literal,
      sym__string_literal,
      sym_quoted_string_literal,
      sym_tripe_quoted_string_literal,
  [488] = 10,
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
    STATE(72), 1,
      sym_decorator_list,
    ACTIONS(41), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(47), 2,
      sym_decorator,
      aux_sym_decorator_list_repeat1,
    STATE(11), 8,
      sym__item,
      sym__statement,
      sym_import_statement,
      sym_using_statement,
      sym_namespace_statement,
      sym_model_statement,
      sym__comment,
      aux_sym_source_file_repeat1,
  [528] = 10,
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
    STATE(72), 1,
      sym_decorator_list,
    ACTIONS(60), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(47), 2,
      sym_decorator,
      aux_sym_decorator_list_repeat1,
    STATE(11), 8,
      sym__item,
      sym__statement,
      sym_import_statement,
      sym_using_statement,
      sym_namespace_statement,
      sym_model_statement,
      sym__comment,
      aux_sym_source_file_repeat1,
  [568] = 9,
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
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      sym_decorator_list,
    STATE(47), 2,
      sym_decorator,
      aux_sym_decorator_list_repeat1,
    STATE(14), 6,
      sym__statement,
      sym_import_statement,
      sym_using_statement,
      sym_namespace_statement,
      sym_model_statement,
      aux_sym_namespace_statement_repeat1,
  [602] = 9,
    ACTIONS(65), 1,
      anon_sym_AT,
    ACTIONS(68), 1,
      anon_sym_import,
    ACTIONS(71), 1,
      anon_sym_using,
    ACTIONS(74), 1,
      anon_sym_namespace,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    ACTIONS(79), 1,
      anon_sym_model,
    STATE(72), 1,
      sym_decorator_list,
    STATE(47), 2,
      sym_decorator,
      aux_sym_decorator_list_repeat1,
    STATE(13), 6,
      sym__statement,
      sym_import_statement,
      sym_using_statement,
      sym_namespace_statement,
      sym_model_statement,
      aux_sym_namespace_statement_repeat1,
  [636] = 9,
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
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      sym_decorator_list,
    STATE(47), 2,
      sym_decorator,
      aux_sym_decorator_list_repeat1,
    STATE(13), 6,
      sym__statement,
      sym_import_statement,
      sym_using_statement,
      sym_namespace_statement,
      sym_model_statement,
      aux_sym_namespace_statement_repeat1,
  [670] = 9,
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
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      sym_decorator_list,
    STATE(47), 2,
      sym_decorator,
      aux_sym_decorator_list_repeat1,
    STATE(13), 6,
      sym__statement,
      sym_import_statement,
      sym_using_statement,
      sym_namespace_statement,
      sym_model_statement,
      aux_sym_namespace_statement_repeat1,
  [704] = 9,
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
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      sym_decorator_list,
    STATE(47), 2,
      sym_decorator,
      aux_sym_decorator_list_repeat1,
    STATE(15), 6,
      sym__statement,
      sym_import_statement,
      sym_using_statement,
      sym_namespace_statement,
      sym_model_statement,
      aux_sym_namespace_statement_repeat1,
  [738] = 3,
    ACTIONS(88), 1,
      anon_sym_DOT,
    STATE(17), 1,
      aux_sym_member_expression_repeat1,
    ACTIONS(86), 10,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_namespace,
      anon_sym_LBRACE,
      anon_sym_model,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LBRACK,
  [757] = 3,
    ACTIONS(93), 1,
      anon_sym_DOT,
    STATE(19), 1,
      aux_sym_member_expression_repeat1,
    ACTIONS(91), 10,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_namespace,
      anon_sym_LBRACE,
      anon_sym_model,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LBRACK,
  [776] = 3,
    ACTIONS(93), 1,
      anon_sym_DOT,
    STATE(17), 1,
      aux_sym_member_expression_repeat1,
    ACTIONS(95), 10,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_namespace,
      anon_sym_LBRACE,
      anon_sym_model,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LBRACK,
  [795] = 1,
    ACTIONS(86), 11,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_namespace,
      anon_sym_LBRACE,
      anon_sym_model,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [809] = 1,
    ACTIONS(97), 9,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_import,
      anon_sym_using,
      anon_sym_namespace,
      anon_sym_RBRACE,
      anon_sym_model,
      sym_single_line_comment,
      sym_multi_line_comment,
  [821] = 1,
    ACTIONS(99), 9,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_import,
      anon_sym_using,
      anon_sym_namespace,
      anon_sym_RBRACE,
      anon_sym_model,
      sym_single_line_comment,
      sym_multi_line_comment,
  [833] = 1,
    ACTIONS(101), 9,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_import,
      anon_sym_using,
      anon_sym_namespace,
      anon_sym_RBRACE,
      anon_sym_model,
      sym_single_line_comment,
      sym_multi_line_comment,
  [845] = 1,
    ACTIONS(103), 9,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_import,
      anon_sym_using,
      anon_sym_namespace,
      anon_sym_RBRACE,
      anon_sym_model,
      sym_single_line_comment,
      sym_multi_line_comment,
  [857] = 1,
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
  [869] = 1,
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
  [881] = 1,
    ACTIONS(109), 9,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_import,
      anon_sym_using,
      anon_sym_namespace,
      anon_sym_RBRACE,
      anon_sym_model,
      sym_single_line_comment,
      sym_multi_line_comment,
  [893] = 1,
    ACTIONS(111), 9,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_import,
      anon_sym_using,
      anon_sym_namespace,
      anon_sym_RBRACE,
      anon_sym_model,
      sym_single_line_comment,
      sym_multi_line_comment,
  [905] = 1,
    ACTIONS(113), 9,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_import,
      anon_sym_using,
      anon_sym_namespace,
      anon_sym_RBRACE,
      anon_sym_model,
      sym_single_line_comment,
      sym_multi_line_comment,
  [917] = 1,
    ACTIONS(115), 6,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LBRACK,
  [926] = 1,
    ACTIONS(117), 6,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LBRACK,
  [935] = 1,
    ACTIONS(119), 6,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LBRACK,
  [944] = 1,
    ACTIONS(121), 6,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LBRACK,
  [953] = 2,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(123), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_AMP,
  [964] = 1,
    ACTIONS(127), 6,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LBRACK,
  [973] = 1,
    ACTIONS(129), 6,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LBRACK,
  [982] = 1,
    ACTIONS(131), 6,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LBRACK,
  [991] = 5,
    ACTIONS(133), 1,
      anon_sym_LBRACE,
    ACTIONS(135), 1,
      anon_sym_is,
    ACTIONS(137), 1,
      anon_sym_extends,
    STATE(70), 1,
      sym_model_is_heritage,
    STATE(79), 2,
      sym__model_heritage,
      sym_model_extends_heritage,
  [1008] = 5,
    ACTIONS(135), 1,
      anon_sym_is,
    ACTIONS(137), 1,
      anon_sym_extends,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym_model_is_heritage,
    STATE(73), 2,
      sym__model_heritage,
      sym_model_extends_heritage,
  [1025] = 1,
    ACTIONS(141), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_AMP,
  [1033] = 1,
    ACTIONS(143), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_AMP,
  [1041] = 2,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(145), 4,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_PIPE,
  [1051] = 3,
    STATE(18), 1,
      sym__identifier,
    ACTIONS(27), 2,
      sym_plain_identifier,
      sym_backticked_identifier,
    STATE(68), 2,
      sym__identifier_or_member_expression,
      sym_member_expression,
  [1063] = 2,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 4,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_PIPE,
  [1073] = 3,
    STATE(18), 1,
      sym__identifier,
    ACTIONS(27), 2,
      sym_plain_identifier,
      sym_backticked_identifier,
    STATE(46), 2,
      sym__identifier_or_member_expression,
      sym_member_expression,
  [1085] = 3,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_decorator_arguments,
    ACTIONS(151), 3,
      anon_sym_AT,
      anon_sym_namespace,
      anon_sym_model,
  [1097] = 3,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(155), 2,
      anon_sym_namespace,
      anon_sym_model,
    STATE(51), 2,
      sym_decorator,
      aux_sym_decorator_list_repeat1,
  [1109] = 1,
    ACTIONS(157), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_AMP,
  [1117] = 3,
    STATE(18), 1,
      sym__identifier,
    ACTIONS(27), 2,
      sym_plain_identifier,
      sym_backticked_identifier,
    STATE(71), 2,
      sym__identifier_or_member_expression,
      sym_member_expression,
  [1129] = 3,
    STATE(18), 1,
      sym__identifier,
    ACTIONS(27), 2,
      sym_plain_identifier,
      sym_backticked_identifier,
    STATE(80), 2,
      sym__identifier_or_member_expression,
      sym_member_expression,
  [1141] = 3,
    ACTIONS(159), 1,
      anon_sym_AT,
    ACTIONS(162), 2,
      anon_sym_namespace,
      anon_sym_model,
    STATE(51), 2,
      sym_decorator,
      aux_sym_decorator_list_repeat1,
  [1153] = 1,
    ACTIONS(164), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_AMP,
  [1161] = 3,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(81), 3,
      sym__string_literal,
      sym_quoted_string_literal,
      sym_tripe_quoted_string_literal,
  [1173] = 3,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      aux_sym_quoted_string_literal_repeat1,
    ACTIONS(168), 2,
      sym_escape_sequence,
      sym_quoted_string_fragment,
  [1184] = 3,
    ACTIONS(171), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(56), 1,
      aux_sym_tripe_quoted_string_literal_repeat1,
    ACTIONS(173), 2,
      sym_escape_sequence,
      sym_triple_quoted_string_fragment,
  [1195] = 3,
    ACTIONS(175), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(56), 1,
      aux_sym_tripe_quoted_string_literal_repeat1,
    ACTIONS(177), 2,
      sym_escape_sequence,
      sym_triple_quoted_string_fragment,
  [1206] = 3,
    ACTIONS(180), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(55), 1,
      aux_sym_tripe_quoted_string_literal_repeat1,
    ACTIONS(182), 2,
      sym_escape_sequence,
      sym_triple_quoted_string_fragment,
  [1217] = 3,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    STATE(60), 1,
      aux_sym_quoted_string_literal_repeat1,
    ACTIONS(186), 2,
      sym_escape_sequence,
      sym_quoted_string_fragment,
  [1228] = 3,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(190), 1,
      anon_sym_PIPE,
    ACTIONS(188), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [1239] = 3,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      aux_sym_quoted_string_literal_repeat1,
    ACTIONS(194), 2,
      sym_escape_sequence,
      sym_quoted_string_fragment,
  [1250] = 3,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(190), 1,
      anon_sym_PIPE,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
  [1260] = 2,
    STATE(20), 1,
      sym__identifier,
    ACTIONS(198), 2,
      sym_plain_identifier,
      sym_backticked_identifier,
  [1268] = 2,
    STATE(38), 1,
      sym__identifier,
    ACTIONS(200), 2,
      sym_plain_identifier,
      sym_backticked_identifier,
  [1276] = 1,
    ACTIONS(202), 3,
      anon_sym_AT,
      anon_sym_namespace,
      anon_sym_model,
  [1282] = 2,
    STATE(39), 1,
      sym__identifier,
    ACTIONS(204), 2,
      sym_plain_identifier,
      sym_backticked_identifier,
  [1290] = 1,
    ACTIONS(206), 3,
      anon_sym_AT,
      anon_sym_namespace,
      anon_sym_model,
  [1296] = 3,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(190), 1,
      anon_sym_PIPE,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
  [1306] = 2,
    ACTIONS(84), 1,
      anon_sym_SEMI,
    ACTIONS(210), 1,
      anon_sym_LBRACE,
  [1313] = 2,
    ACTIONS(212), 1,
      anon_sym_SEMI,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
  [1320] = 2,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(216), 1,
      anon_sym_SEMI,
  [1327] = 2,
    ACTIONS(218), 1,
      anon_sym_SEMI,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
  [1334] = 2,
    ACTIONS(222), 1,
      anon_sym_namespace,
    ACTIONS(224), 1,
      anon_sym_model,
  [1341] = 1,
    ACTIONS(133), 1,
      anon_sym_LBRACE,
  [1345] = 1,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
  [1349] = 1,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
  [1353] = 1,
    ACTIONS(226), 1,
      anon_sym_RBRACK,
  [1357] = 1,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
  [1361] = 1,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
  [1365] = 1,
    ACTIONS(232), 1,
      anon_sym_LBRACE,
  [1369] = 1,
    ACTIONS(234), 1,
      anon_sym_SEMI,
  [1373] = 1,
    ACTIONS(236), 1,
      anon_sym_SEMI,
  [1377] = 1,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 61,
  [SMALL_STATE(4)] = 122,
  [SMALL_STATE(5)] = 183,
  [SMALL_STATE(6)] = 244,
  [SMALL_STATE(7)] = 305,
  [SMALL_STATE(8)] = 366,
  [SMALL_STATE(9)] = 427,
  [SMALL_STATE(10)] = 488,
  [SMALL_STATE(11)] = 528,
  [SMALL_STATE(12)] = 568,
  [SMALL_STATE(13)] = 602,
  [SMALL_STATE(14)] = 636,
  [SMALL_STATE(15)] = 670,
  [SMALL_STATE(16)] = 704,
  [SMALL_STATE(17)] = 738,
  [SMALL_STATE(18)] = 757,
  [SMALL_STATE(19)] = 776,
  [SMALL_STATE(20)] = 795,
  [SMALL_STATE(21)] = 809,
  [SMALL_STATE(22)] = 821,
  [SMALL_STATE(23)] = 833,
  [SMALL_STATE(24)] = 845,
  [SMALL_STATE(25)] = 857,
  [SMALL_STATE(26)] = 869,
  [SMALL_STATE(27)] = 881,
  [SMALL_STATE(28)] = 893,
  [SMALL_STATE(29)] = 905,
  [SMALL_STATE(30)] = 917,
  [SMALL_STATE(31)] = 926,
  [SMALL_STATE(32)] = 935,
  [SMALL_STATE(33)] = 944,
  [SMALL_STATE(34)] = 953,
  [SMALL_STATE(35)] = 964,
  [SMALL_STATE(36)] = 973,
  [SMALL_STATE(37)] = 982,
  [SMALL_STATE(38)] = 991,
  [SMALL_STATE(39)] = 1008,
  [SMALL_STATE(40)] = 1025,
  [SMALL_STATE(41)] = 1033,
  [SMALL_STATE(42)] = 1041,
  [SMALL_STATE(43)] = 1051,
  [SMALL_STATE(44)] = 1063,
  [SMALL_STATE(45)] = 1073,
  [SMALL_STATE(46)] = 1085,
  [SMALL_STATE(47)] = 1097,
  [SMALL_STATE(48)] = 1109,
  [SMALL_STATE(49)] = 1117,
  [SMALL_STATE(50)] = 1129,
  [SMALL_STATE(51)] = 1141,
  [SMALL_STATE(52)] = 1153,
  [SMALL_STATE(53)] = 1161,
  [SMALL_STATE(54)] = 1173,
  [SMALL_STATE(55)] = 1184,
  [SMALL_STATE(56)] = 1195,
  [SMALL_STATE(57)] = 1206,
  [SMALL_STATE(58)] = 1217,
  [SMALL_STATE(59)] = 1228,
  [SMALL_STATE(60)] = 1239,
  [SMALL_STATE(61)] = 1250,
  [SMALL_STATE(62)] = 1260,
  [SMALL_STATE(63)] = 1268,
  [SMALL_STATE(64)] = 1276,
  [SMALL_STATE(65)] = 1282,
  [SMALL_STATE(66)] = 1290,
  [SMALL_STATE(67)] = 1296,
  [SMALL_STATE(68)] = 1306,
  [SMALL_STATE(69)] = 1313,
  [SMALL_STATE(70)] = 1320,
  [SMALL_STATE(71)] = 1327,
  [SMALL_STATE(72)] = 1334,
  [SMALL_STATE(73)] = 1341,
  [SMALL_STATE(74)] = 1345,
  [SMALL_STATE(75)] = 1349,
  [SMALL_STATE(76)] = 1353,
  [SMALL_STATE(77)] = 1357,
  [SMALL_STATE(78)] = 1361,
  [SMALL_STATE(79)] = 1365,
  [SMALL_STATE(80)] = 1369,
  [SMALL_STATE(81)] = 1373,
  [SMALL_STATE(82)] = 1377,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_statement_repeat1, 2), SHIFT_REPEAT(45),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_statement_repeat1, 2), SHIFT_REPEAT(53),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_statement_repeat1, 2), SHIFT_REPEAT(50),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_statement_repeat1, 2), SHIFT_REPEAT(49),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespace_statement_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_statement_repeat1, 2), SHIFT_REPEAT(65),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_member_expression_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_member_expression_repeat1, 2), SHIFT_REPEAT(62),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_or_member_expression, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 5),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_statement, 6),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_statement, 5),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_statement, 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 6),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_statement, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string_literal, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_expression, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tripe_quoted_string_literal, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string_literal, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tripe_quoted_string_literal, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intersection_expression, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intersection_expression, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_expression, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_expression, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator_list, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 3),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decorator_list_repeat1, 2), SHIFT_REPEAT(45),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decorator_list_repeat1, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_of_expression, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_literal_repeat1, 2),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_literal_repeat1, 2), SHIFT_REPEAT(54),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tripe_quoted_string_literal_repeat1, 2),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tripe_quoted_string_literal_repeat1, 2), SHIFT_REPEAT(56),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_is_heritage, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_extends_heritage, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator_arguments, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_heritage, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [238] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
