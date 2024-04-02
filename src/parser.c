#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_import = 1,
  anon_sym_SEMI = 2,
  anon_sym_using = 3,
  anon_sym_namespace = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_model = 7,
  sym_plain_identifier = 8,
  sym_backticked_identifier = 9,
  anon_sym_DOT = 10,
  anon_sym_true = 11,
  anon_sym_false = 12,
  sym_decimal_literal = 13,
  sym_hex_integer_literal = 14,
  sym_binary_integer_literal = 15,
  anon_sym_DQUOTE = 16,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 17,
  sym_escape_sequence = 18,
  sym_quoted_string_fragment = 19,
  sym_triple_quoted_string_fragment = 20,
  sym_single_line_comment = 21,
  sym_multi_line_comment = 22,
  sym_source_file = 23,
  sym__statement = 24,
  sym_import_statement = 25,
  sym_using_statement = 26,
  sym_namespace_statement = 27,
  sym_identifier_or_member_expression = 28,
  sym__identifier = 29,
  sym_member_expression = 30,
  sym__string_literal = 31,
  sym_quoted_string_literal = 32,
  sym_tripe_quoted_string_literal = 33,
  sym__comment = 34,
  aux_sym_source_file_repeat1 = 35,
  aux_sym_member_expression_repeat1 = 36,
  aux_sym_quoted_string_literal_repeat1 = 37,
  aux_sym_tripe_quoted_string_literal_repeat1 = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_import] = "import",
  [anon_sym_SEMI] = ";",
  [anon_sym_using] = "using",
  [anon_sym_namespace] = "namespace",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_model] = "model",
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
  [sym__statement] = "_statement",
  [sym_import_statement] = "import_statement",
  [sym_using_statement] = "using_statement",
  [sym_namespace_statement] = "namespace_statement",
  [sym_identifier_or_member_expression] = "identifier_or_member_expression",
  [sym__identifier] = "_identifier",
  [sym_member_expression] = "member_expression",
  [sym__string_literal] = "_string_literal",
  [sym_quoted_string_literal] = "quoted_string_literal",
  [sym_tripe_quoted_string_literal] = "tripe_quoted_string_literal",
  [sym__comment] = "_comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_member_expression_repeat1] = "member_expression_repeat1",
  [aux_sym_quoted_string_literal_repeat1] = "quoted_string_literal_repeat1",
  [aux_sym_tripe_quoted_string_literal_repeat1] = "tripe_quoted_string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_namespace] = anon_sym_namespace,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_model] = anon_sym_model,
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
  [sym__statement] = sym__statement,
  [sym_import_statement] = sym_import_statement,
  [sym_using_statement] = sym_using_statement,
  [sym_namespace_statement] = sym_namespace_statement,
  [sym_identifier_or_member_expression] = sym_identifier_or_member_expression,
  [sym__identifier] = sym__identifier,
  [sym_member_expression] = sym_member_expression,
  [sym__string_literal] = sym__string_literal,
  [sym_quoted_string_literal] = sym_quoted_string_literal,
  [sym_tripe_quoted_string_literal] = sym_tripe_quoted_string_literal,
  [sym__comment] = sym__comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_member_expression_repeat1] = aux_sym_member_expression_repeat1,
  [aux_sym_quoted_string_literal_repeat1] = aux_sym_quoted_string_literal_repeat1,
  [aux_sym_tripe_quoted_string_literal_repeat1] = aux_sym_tripe_quoted_string_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [sym__statement] = {
    .visible = false,
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
  [sym_identifier_or_member_expression] = {
    .visible = true,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(47);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(60);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == '`') ADVANCE(11);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'm') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 't') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(35);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '}') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(69);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(75);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(61);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 10:
      if (lookahead == '`') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 11:
      if (lookahead == '`') ADVANCE(56);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == 'g') ADVANCE(50);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 40:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 41:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(66);
      END_STATE();
    case 42:
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(70);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 46:
      if (eof) ADVANCE(47);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(60);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == '`') ADVANCE(11);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'm') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 't') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(35);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '}') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_model);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_plain_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_backticked_identifier);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == 'b') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'x') ADVANCE(45);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(2);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_quoted_string_fragment);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_quoted_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_triple_quoted_string_fragment);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_triple_quoted_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_multi_line_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 10},
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_model] = ACTIONS(1),
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
    [sym_source_file] = STATE(29),
    [sym__statement] = STATE(3),
    [sym_import_statement] = STATE(3),
    [sym_using_statement] = STATE(3),
    [sym_namespace_statement] = STATE(3),
    [sym__comment] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [sym_single_line_comment] = ACTIONS(11),
    [sym_multi_line_comment] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(15), 1,
      anon_sym_import,
    ACTIONS(18), 1,
      anon_sym_using,
    ACTIONS(21), 1,
      anon_sym_namespace,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(24), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(2), 6,
      sym__statement,
      sym_import_statement,
      sym_using_statement,
      sym_namespace_statement,
      sym__comment,
      aux_sym_source_file_repeat1,
  [26] = 6,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      anon_sym_using,
    ACTIONS(9), 1,
      anon_sym_namespace,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(2), 6,
      sym__statement,
      sym_import_statement,
      sym_using_statement,
      sym_namespace_statement,
      sym__comment,
      aux_sym_source_file_repeat1,
  [51] = 6,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      anon_sym_using,
    ACTIONS(9), 1,
      anon_sym_namespace,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(2), 6,
      sym__statement,
      sym_import_statement,
      sym_using_statement,
      sym_namespace_statement,
      sym__comment,
      aux_sym_source_file_repeat1,
  [76] = 6,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      anon_sym_using,
    ACTIONS(9), 1,
      anon_sym_namespace,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(35), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(4), 6,
      sym__statement,
      sym_import_statement,
      sym_using_statement,
      sym_namespace_statement,
      sym__comment,
      aux_sym_source_file_repeat1,
  [101] = 1,
    ACTIONS(37), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_namespace,
      anon_sym_RBRACE,
      sym_single_line_comment,
      sym_multi_line_comment,
  [111] = 1,
    ACTIONS(39), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_namespace,
      anon_sym_RBRACE,
      sym_single_line_comment,
      sym_multi_line_comment,
  [121] = 1,
    ACTIONS(41), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_namespace,
      anon_sym_RBRACE,
      sym_single_line_comment,
      sym_multi_line_comment,
  [131] = 1,
    ACTIONS(43), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_namespace,
      anon_sym_RBRACE,
      sym_single_line_comment,
      sym_multi_line_comment,
  [141] = 1,
    ACTIONS(45), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_namespace,
      anon_sym_RBRACE,
      sym_single_line_comment,
      sym_multi_line_comment,
  [151] = 3,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(33), 3,
      sym__string_literal,
      sym_quoted_string_literal,
      sym_tripe_quoted_string_literal,
  [163] = 4,
    STATE(18), 1,
      sym__identifier,
    STATE(26), 1,
      sym_member_expression,
    STATE(32), 1,
      sym_identifier_or_member_expression,
    ACTIONS(51), 2,
      sym_plain_identifier,
      sym_backticked_identifier,
  [177] = 4,
    STATE(18), 1,
      sym__identifier,
    STATE(25), 1,
      sym_identifier_or_member_expression,
    STATE(26), 1,
      sym_member_expression,
    ACTIONS(51), 2,
      sym_plain_identifier,
      sym_backticked_identifier,
  [191] = 3,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(16), 1,
      aux_sym_tripe_quoted_string_literal_repeat1,
    ACTIONS(55), 2,
      sym_escape_sequence,
      sym_triple_quoted_string_fragment,
  [202] = 3,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      aux_sym_quoted_string_literal_repeat1,
    ACTIONS(59), 2,
      sym_escape_sequence,
      sym_quoted_string_fragment,
  [213] = 3,
    ACTIONS(61), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(20), 1,
      aux_sym_tripe_quoted_string_literal_repeat1,
    ACTIONS(63), 2,
      sym_escape_sequence,
      sym_triple_quoted_string_fragment,
  [224] = 3,
    ACTIONS(67), 1,
      anon_sym_DOT,
    STATE(21), 1,
      aux_sym_member_expression_repeat1,
    ACTIONS(65), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [235] = 3,
    ACTIONS(67), 1,
      anon_sym_DOT,
    STATE(17), 1,
      aux_sym_member_expression_repeat1,
    ACTIONS(69), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [246] = 3,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      aux_sym_quoted_string_literal_repeat1,
    ACTIONS(73), 2,
      sym_escape_sequence,
      sym_quoted_string_fragment,
  [257] = 3,
    ACTIONS(76), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(20), 1,
      aux_sym_tripe_quoted_string_literal_repeat1,
    ACTIONS(78), 2,
      sym_escape_sequence,
      sym_triple_quoted_string_fragment,
  [268] = 3,
    ACTIONS(83), 1,
      anon_sym_DOT,
    STATE(21), 1,
      aux_sym_member_expression_repeat1,
    ACTIONS(81), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [279] = 3,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      aux_sym_quoted_string_literal_repeat1,
    ACTIONS(88), 2,
      sym_escape_sequence,
      sym_quoted_string_fragment,
  [290] = 2,
    STATE(24), 1,
      sym__identifier,
    ACTIONS(90), 2,
      sym_plain_identifier,
      sym_backticked_identifier,
  [298] = 1,
    ACTIONS(81), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_DOT,
  [304] = 2,
    ACTIONS(92), 1,
      anon_sym_SEMI,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
  [311] = 1,
    ACTIONS(69), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [316] = 1,
    ACTIONS(96), 1,
      anon_sym_SEMI,
  [320] = 1,
    ACTIONS(98), 1,
      anon_sym_SEMI,
  [324] = 1,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
  [328] = 1,
    ACTIONS(102), 1,
      anon_sym_SEMI,
  [332] = 1,
    ACTIONS(104), 1,
      anon_sym_SEMI,
  [336] = 1,
    ACTIONS(106), 1,
      anon_sym_SEMI,
  [340] = 1,
    ACTIONS(108), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 51,
  [SMALL_STATE(5)] = 76,
  [SMALL_STATE(6)] = 101,
  [SMALL_STATE(7)] = 111,
  [SMALL_STATE(8)] = 121,
  [SMALL_STATE(9)] = 131,
  [SMALL_STATE(10)] = 141,
  [SMALL_STATE(11)] = 151,
  [SMALL_STATE(12)] = 163,
  [SMALL_STATE(13)] = 177,
  [SMALL_STATE(14)] = 191,
  [SMALL_STATE(15)] = 202,
  [SMALL_STATE(16)] = 213,
  [SMALL_STATE(17)] = 224,
  [SMALL_STATE(18)] = 235,
  [SMALL_STATE(19)] = 246,
  [SMALL_STATE(20)] = 257,
  [SMALL_STATE(21)] = 268,
  [SMALL_STATE(22)] = 279,
  [SMALL_STATE(23)] = 290,
  [SMALL_STATE(24)] = 298,
  [SMALL_STATE(25)] = 304,
  [SMALL_STATE(26)] = 311,
  [SMALL_STATE(27)] = 316,
  [SMALL_STATE(28)] = 320,
  [SMALL_STATE(29)] = 324,
  [SMALL_STATE(30)] = 328,
  [SMALL_STATE(31)] = 332,
  [SMALL_STATE(32)] = 336,
  [SMALL_STATE(33)] = 340,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 5),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_statement, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_or_member_expression, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_literal_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_literal_repeat1, 2), SHIFT_REPEAT(19),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tripe_quoted_string_literal_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tripe_quoted_string_literal_repeat1, 2), SHIFT_REPEAT(20),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_member_expression_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_member_expression_repeat1, 2), SHIFT_REPEAT(23),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string_literal, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tripe_quoted_string_literal, 2),
  [100] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string_literal, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tripe_quoted_string_literal, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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
