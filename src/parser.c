#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 108
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_import = 1,
  anon_sym_SEMI = 2,
  anon_sym_using = 3,
  anon_sym_model = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_COLON = 7,
  anon_sym_interface = 8,
  anon_sym_AT = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_COMMA = 12,
  anon_sym_DQUOTE = 13,
  aux_sym_string_content_token1 = 14,
  sym_escape_sequence = 15,
  anon_sym_DOT = 16,
  sym_identifier = 17,
  anon_sym_int = 18,
  anon_sym_float = 19,
  anon_sym_string = 20,
  anon_sym_bool = 21,
  anon_sym_LBRACK_RBRACK = 22,
  sym_source_file = 23,
  sym__statement = 24,
  sym_import_statement = 25,
  sym_using_statement = 26,
  sym_model_statement = 27,
  sym_field = 28,
  sym_interface_statement = 29,
  sym_op = 30,
  sym_decorator = 31,
  sym_decorator_arguments = 32,
  sym_string_list = 33,
  sym_arguments = 34,
  sym_argument_list = 35,
  sym_argument = 36,
  sym_string_literal = 37,
  sym_string_content = 38,
  sym_package_path = 39,
  sym__type = 40,
  sym_primitive_type = 41,
  sym_reference_type = 42,
  sym_list_type = 43,
  aux_sym_source_file_repeat1 = 44,
  aux_sym_model_statement_repeat1 = 45,
  aux_sym_interface_statement_repeat1 = 46,
  aux_sym_string_list_repeat1 = 47,
  aux_sym_argument_list_repeat1 = 48,
  aux_sym_string_content_repeat1 = 49,
  aux_sym_package_path_repeat1 = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_import] = "import",
  [anon_sym_SEMI] = ";",
  [anon_sym_using] = "using",
  [anon_sym_model] = "model",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_interface] = "interface",
  [anon_sym_AT] = "@",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_content_token1] = "string_content_token1",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_DOT] = ".",
  [sym_identifier] = "identifier",
  [anon_sym_int] = "int",
  [anon_sym_float] = "float",
  [anon_sym_string] = "string",
  [anon_sym_bool] = "bool",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_import_statement] = "import_statement",
  [sym_using_statement] = "using_statement",
  [sym_model_statement] = "model_statement",
  [sym_field] = "field",
  [sym_interface_statement] = "interface_statement",
  [sym_op] = "op",
  [sym_decorator] = "decorator",
  [sym_decorator_arguments] = "decorator_arguments",
  [sym_string_list] = "string_list",
  [sym_arguments] = "arguments",
  [sym_argument_list] = "argument_list",
  [sym_argument] = "argument",
  [sym_string_literal] = "string_literal",
  [sym_string_content] = "string_content",
  [sym_package_path] = "package_path",
  [sym__type] = "_type",
  [sym_primitive_type] = "primitive_type",
  [sym_reference_type] = "reference_type",
  [sym_list_type] = "list_type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_model_statement_repeat1] = "model_statement_repeat1",
  [aux_sym_interface_statement_repeat1] = "interface_statement_repeat1",
  [aux_sym_string_list_repeat1] = "string_list_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_string_content_repeat1] = "string_content_repeat1",
  [aux_sym_package_path_repeat1] = "package_path_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_model] = anon_sym_model,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_content_token1] = aux_sym_string_content_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_identifier] = sym_identifier,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_import_statement] = sym_import_statement,
  [sym_using_statement] = sym_using_statement,
  [sym_model_statement] = sym_model_statement,
  [sym_field] = sym_field,
  [sym_interface_statement] = sym_interface_statement,
  [sym_op] = sym_op,
  [sym_decorator] = sym_decorator,
  [sym_decorator_arguments] = sym_decorator_arguments,
  [sym_string_list] = sym_string_list,
  [sym_arguments] = sym_arguments,
  [sym_argument_list] = sym_argument_list,
  [sym_argument] = sym_argument,
  [sym_string_literal] = sym_string_literal,
  [sym_string_content] = sym_string_content,
  [sym_package_path] = sym_package_path,
  [sym__type] = sym__type,
  [sym_primitive_type] = sym_primitive_type,
  [sym_reference_type] = sym_reference_type,
  [sym_list_type] = sym_list_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_model_statement_repeat1] = aux_sym_model_statement_repeat1,
  [aux_sym_interface_statement_repeat1] = aux_sym_interface_statement_repeat1,
  [aux_sym_string_list_repeat1] = aux_sym_string_list_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_string_content_repeat1] = aux_sym_string_content_repeat1,
  [aux_sym_package_path_repeat1] = aux_sym_package_path_repeat1,
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
  [anon_sym_model] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_RBRACK] = {
    .visible = true,
    .named = false,
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
  [sym_model_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_op] = {
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
  [sym_string_list] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_package_path] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_reference_type] = {
    .visible = true,
    .named = true,
  },
  [sym_list_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_model_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interface_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_package_path_repeat1] = {
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
  [39] = 31,
  [40] = 40,
  [41] = 41,
  [42] = 36,
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
  [102] = 71,
  [103] = 68,
  [104] = 70,
  [105] = 90,
  [106] = 106,
  [107] = 89,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 160
    ? (c < '['
      ? (c < 0
        ? c == 0
        : (c <= '#' || (c >= '%' && c <= '?')))
      : (c <= '^' || (c < '{'
        ? c == '`'
        : c <= '~')))
    : (c <= 160 || (c < 8287
      ? (c < 8192
        ? c == 5760
        : (c <= 8203 || c == 8239))
      : (c <= 8288 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 160
    ? (c < '['
      ? (c < 0
        ? c == 0
        : (c <= '#' || (c >= '%' && c <= '@')))
      : (c <= '^' || (c < '{'
        ? c == '`'
        : c <= '~')))
    : (c <= 160 || (c < 8287
      ? (c < 8192
        ? c == 5760
        : (c <= 8203 || c == 8239))
      : (c <= 8288 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 160
    ? (c < ':'
      ? (c < 0
        ? c == 0
        : (c <= '#' || (c >= '%' && c <= '/')))
      : (c <= '@' || (c < '`'
        ? (c >= '[' && c <= '^')
        : (c <= '`' || (c >= '{' && c <= '~')))))
    : (c <= 160 || (c < 8287
      ? (c < 8192
        ? c == 5760
        : (c <= 8203 || c == 8239))
      : (c <= 8288 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(50);
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == ',') ADVANCE(62);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(5);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == 'b') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(82);
      END_STATE();
    case 4:
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'b') ADVANCE(76);
      if (lookahead == 'f') ADVANCE(72);
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 's') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 5:
      if (lookahead == ']') ADVANCE(91);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(6);
      END_STATE();
    case 14:
      if (lookahead == 'g') ADVANCE(53);
      END_STATE();
    case 15:
      if (lookahead == 'g') ADVANCE(87);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 40:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == '{') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 42:
      if (lookahead == '}') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 48:
      if (eof) ADVANCE(50);
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == ',') ADVANCE(62);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(5);
      if (lookahead == 'b') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      END_STATE();
    case 49:
      if (eof) ADVANCE(50);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      END_STATE();
    case 50:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_model);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(81);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(82);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'g') ADVANCE(88);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(82);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(73);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(82);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(90);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(82);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(75);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(82);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(69);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(82);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(80);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(82);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(68);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(82);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(77);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(82);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(71);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(82);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(70);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(82);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 't') ADVANCE(78);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(82);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 't') ADVANCE(83);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 't') ADVANCE(86);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(40);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '\\') ADVANCE(40);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(82);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '\\') ADVANCE(40);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(82);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '\\') ADVANCE(40);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(82);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '\\') ADVANCE(40);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(82);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 49},
  [2] = {.lex_state = 49},
  [3] = {.lex_state = 49},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 49},
  [15] = {.lex_state = 49},
  [16] = {.lex_state = 49},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 49},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 49},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 49},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 49},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 49},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 49},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 49},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 49},
  [71] = {.lex_state = 49},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 49},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_model] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(77),
    [sym__statement] = STATE(3),
    [sym_import_statement] = STATE(3),
    [sym_using_statement] = STATE(3),
    [sym_model_statement] = STATE(3),
    [sym_interface_statement] = STATE(3),
    [sym_decorator] = STATE(74),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(7),
    [anon_sym_model] = ACTIONS(9),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_import,
    ACTIONS(20), 1,
      anon_sym_using,
    ACTIONS(23), 1,
      anon_sym_model,
    ACTIONS(26), 1,
      anon_sym_interface,
    ACTIONS(29), 1,
      anon_sym_AT,
    STATE(74), 1,
      sym_decorator,
    STATE(2), 6,
      sym__statement,
      sym_import_statement,
      sym_using_statement,
      sym_model_statement,
      sym_interface_statement,
      aux_sym_source_file_repeat1,
  [30] = 8,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      anon_sym_using,
    ACTIONS(9), 1,
      anon_sym_model,
    ACTIONS(11), 1,
      anon_sym_interface,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    STATE(74), 1,
      sym_decorator,
    STATE(2), 6,
      sym__statement,
      sym_import_statement,
      sym_using_statement,
      sym_model_statement,
      sym_interface_statement,
      aux_sym_source_file_repeat1,
  [60] = 3,
    ACTIONS(34), 1,
      sym_identifier,
    ACTIONS(36), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_bool,
    STATE(45), 4,
      sym__type,
      sym_primitive_type,
      sym_reference_type,
      sym_list_type,
  [76] = 3,
    ACTIONS(34), 1,
      sym_identifier,
    ACTIONS(36), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_bool,
    STATE(65), 4,
      sym__type,
      sym_primitive_type,
      sym_reference_type,
      sym_list_type,
  [92] = 3,
    ACTIONS(34), 1,
      sym_identifier,
    ACTIONS(36), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_bool,
    STATE(50), 4,
      sym__type,
      sym_primitive_type,
      sym_reference_type,
      sym_list_type,
  [108] = 3,
    ACTIONS(34), 1,
      sym_identifier,
    ACTIONS(36), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_bool,
    STATE(61), 4,
      sym__type,
      sym_primitive_type,
      sym_reference_type,
      sym_list_type,
  [124] = 3,
    ACTIONS(34), 1,
      sym_identifier,
    ACTIONS(36), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_bool,
    STATE(73), 4,
      sym__type,
      sym_primitive_type,
      sym_reference_type,
      sym_list_type,
  [140] = 3,
    ACTIONS(34), 1,
      sym_identifier,
    ACTIONS(36), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_bool,
    STATE(69), 4,
      sym__type,
      sym_primitive_type,
      sym_reference_type,
      sym_list_type,
  [156] = 3,
    ACTIONS(34), 1,
      sym_identifier,
    ACTIONS(36), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_bool,
    STATE(67), 4,
      sym__type,
      sym_primitive_type,
      sym_reference_type,
      sym_list_type,
  [172] = 5,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    ACTIONS(40), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(97), 1,
      sym_decorator,
    STATE(11), 2,
      sym_field,
      aux_sym_model_statement_repeat1,
  [189] = 5,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    ACTIONS(48), 1,
      anon_sym_AT,
    ACTIONS(50), 1,
      sym_identifier,
    STATE(96), 1,
      sym_decorator,
    STATE(25), 2,
      sym_op,
      aux_sym_interface_statement_repeat1,
  [206] = 5,
    ACTIONS(48), 1,
      anon_sym_AT,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    ACTIONS(54), 1,
      sym_identifier,
    STATE(97), 1,
      sym_decorator,
    STATE(24), 2,
      sym_field,
      aux_sym_model_statement_repeat1,
  [223] = 1,
    ACTIONS(56), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_model,
      anon_sym_interface,
      anon_sym_AT,
  [232] = 1,
    ACTIONS(58), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_model,
      anon_sym_interface,
      anon_sym_AT,
  [241] = 1,
    ACTIONS(60), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_model,
      anon_sym_interface,
      anon_sym_AT,
  [250] = 6,
    ACTIONS(48), 1,
      anon_sym_AT,
    ACTIONS(62), 1,
      anon_sym_RPAREN,
    ACTIONS(64), 1,
      sym_identifier,
    STATE(56), 1,
      sym_argument,
    STATE(83), 1,
      sym_argument_list,
    STATE(92), 1,
      sym_decorator,
  [269] = 1,
    ACTIONS(66), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_model,
      anon_sym_interface,
      anon_sym_AT,
  [278] = 5,
    ACTIONS(48), 1,
      anon_sym_AT,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    ACTIONS(54), 1,
      sym_identifier,
    STATE(97), 1,
      sym_decorator,
    STATE(11), 2,
      sym_field,
      aux_sym_model_statement_repeat1,
  [295] = 1,
    ACTIONS(68), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_model,
      anon_sym_interface,
      anon_sym_AT,
  [304] = 5,
    ACTIONS(48), 1,
      anon_sym_AT,
    ACTIONS(50), 1,
      sym_identifier,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      sym_decorator,
    STATE(25), 2,
      sym_op,
      aux_sym_interface_statement_repeat1,
  [321] = 5,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    ACTIONS(48), 1,
      anon_sym_AT,
    ACTIONS(50), 1,
      sym_identifier,
    STATE(96), 1,
      sym_decorator,
    STATE(21), 2,
      sym_op,
      aux_sym_interface_statement_repeat1,
  [338] = 1,
    ACTIONS(72), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_model,
      anon_sym_interface,
      anon_sym_AT,
  [347] = 5,
    ACTIONS(48), 1,
      anon_sym_AT,
    ACTIONS(54), 1,
      sym_identifier,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      sym_decorator,
    STATE(11), 2,
      sym_field,
      aux_sym_model_statement_repeat1,
  [364] = 5,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    ACTIONS(78), 1,
      anon_sym_AT,
    ACTIONS(81), 1,
      sym_identifier,
    STATE(96), 1,
      sym_decorator,
    STATE(25), 2,
      sym_op,
      aux_sym_interface_statement_repeat1,
  [381] = 1,
    ACTIONS(84), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_model,
      anon_sym_interface,
      anon_sym_AT,
  [390] = 5,
    ACTIONS(48), 1,
      anon_sym_AT,
    ACTIONS(54), 1,
      sym_identifier,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      sym_decorator,
    STATE(19), 2,
      sym_field,
      aux_sym_model_statement_repeat1,
  [407] = 5,
    ACTIONS(48), 1,
      anon_sym_AT,
    ACTIONS(50), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      sym_decorator,
    STATE(12), 2,
      sym_op,
      aux_sym_interface_statement_repeat1,
  [424] = 1,
    ACTIONS(90), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_model,
      anon_sym_interface,
      anon_sym_AT,
  [433] = 4,
    ACTIONS(92), 1,
      anon_sym_DQUOTE,
    STATE(32), 1,
      aux_sym_string_content_repeat1,
    STATE(94), 1,
      sym_string_content,
    ACTIONS(94), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [447] = 4,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
      sym_string_literal,
    STATE(89), 1,
      sym_string_list,
  [460] = 3,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(102), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [471] = 1,
    ACTIONS(104), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK_RBRACK,
  [478] = 1,
    ACTIONS(106), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK_RBRACK,
  [485] = 3,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(110), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [496] = 3,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    STATE(71), 1,
      sym_decorator_arguments,
    ACTIONS(113), 2,
      anon_sym_model,
      anon_sym_interface,
  [507] = 1,
    ACTIONS(117), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK_RBRACK,
  [514] = 4,
    ACTIONS(48), 1,
      anon_sym_AT,
    ACTIONS(64), 1,
      sym_identifier,
    STATE(62), 1,
      sym_argument,
    STATE(92), 1,
      sym_decorator,
  [527] = 4,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      sym_string_literal,
    STATE(107), 1,
      sym_string_list,
  [540] = 1,
    ACTIONS(121), 3,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_identifier,
  [546] = 3,
    ACTIONS(123), 1,
      anon_sym_SEMI,
    ACTIONS(125), 1,
      anon_sym_DOT,
    STATE(59), 1,
      aux_sym_package_path_repeat1,
  [556] = 3,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    STATE(102), 1,
      sym_decorator_arguments,
  [566] = 1,
    ACTIONS(129), 3,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_identifier,
  [572] = 1,
    ACTIONS(131), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [578] = 2,
    ACTIONS(135), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(133), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [586] = 3,
    ACTIONS(137), 1,
      anon_sym_SEMI,
    ACTIONS(139), 1,
      anon_sym_DOT,
    STATE(46), 1,
      aux_sym_package_path_repeat1,
  [596] = 1,
    ACTIONS(142), 3,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_identifier,
  [602] = 3,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    ACTIONS(146), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_argument_list_repeat1,
  [612] = 3,
    ACTIONS(149), 1,
      anon_sym_COLON,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    STATE(95), 1,
      sym_arguments,
  [622] = 2,
    ACTIONS(135), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(153), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [630] = 3,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_argument_list_repeat1,
  [640] = 1,
    ACTIONS(159), 3,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_identifier,
  [646] = 3,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    ACTIONS(163), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_string_list_repeat1,
  [656] = 1,
    ACTIONS(165), 3,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_identifier,
  [662] = 3,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym_string_list_repeat1,
  [672] = 3,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      aux_sym_argument_list_repeat1,
  [682] = 3,
    ACTIONS(163), 1,
      anon_sym_COMMA,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_string_list_repeat1,
  [692] = 3,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_COLON,
    STATE(84), 1,
      sym_arguments,
  [702] = 3,
    ACTIONS(125), 1,
      anon_sym_DOT,
    ACTIONS(178), 1,
      anon_sym_SEMI,
    STATE(46), 1,
      aux_sym_package_path_repeat1,
  [712] = 1,
    ACTIONS(180), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [718] = 2,
    ACTIONS(135), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(182), 1,
      anon_sym_SEMI,
  [725] = 1,
    ACTIONS(144), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [730] = 1,
    ACTIONS(137), 2,
      anon_sym_SEMI,
      anon_sym_DOT,
  [735] = 2,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      sym_string_literal,
  [742] = 2,
    ACTIONS(135), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(184), 1,
      anon_sym_SEMI,
  [749] = 2,
    ACTIONS(186), 1,
      sym_identifier,
    STATE(106), 1,
      sym_package_path,
  [756] = 2,
    ACTIONS(135), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(188), 1,
      anon_sym_SEMI,
  [763] = 1,
    ACTIONS(190), 2,
      anon_sym_model,
      anon_sym_interface,
  [768] = 2,
    ACTIONS(135), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(192), 1,
      anon_sym_SEMI,
  [775] = 1,
    ACTIONS(194), 2,
      anon_sym_model,
      anon_sym_interface,
  [780] = 1,
    ACTIONS(196), 2,
      anon_sym_model,
      anon_sym_interface,
  [785] = 2,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      sym_string_literal,
  [792] = 2,
    ACTIONS(135), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(198), 1,
      anon_sym_SEMI,
  [799] = 2,
    ACTIONS(200), 1,
      anon_sym_model,
    ACTIONS(202), 1,
      anon_sym_interface,
  [806] = 1,
    ACTIONS(167), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [811] = 1,
    ACTIONS(204), 1,
      anon_sym_COLON,
  [815] = 1,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
  [819] = 1,
    ACTIONS(208), 1,
      anon_sym_LBRACE,
  [823] = 1,
    ACTIONS(210), 1,
      sym_identifier,
  [827] = 1,
    ACTIONS(212), 1,
      sym_identifier,
  [831] = 1,
    ACTIONS(214), 1,
      anon_sym_COLON,
  [835] = 1,
    ACTIONS(216), 1,
      anon_sym_LBRACE,
  [839] = 1,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
  [843] = 1,
    ACTIONS(220), 1,
      anon_sym_COLON,
  [847] = 1,
    ACTIONS(222), 1,
      sym_identifier,
  [851] = 1,
    ACTIONS(224), 1,
      anon_sym_COLON,
  [855] = 1,
    ACTIONS(226), 1,
      anon_sym_COLON,
  [859] = 1,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
  [863] = 1,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
  [867] = 1,
    ACTIONS(232), 1,
      sym_identifier,
  [871] = 1,
    ACTIONS(234), 1,
      anon_sym_COLON,
  [875] = 1,
    ACTIONS(236), 1,
      sym_identifier,
  [879] = 1,
    ACTIONS(238), 1,
      sym_identifier,
  [883] = 1,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
  [887] = 1,
    ACTIONS(176), 1,
      anon_sym_COLON,
  [891] = 1,
    ACTIONS(242), 1,
      sym_identifier,
  [895] = 1,
    ACTIONS(244), 1,
      sym_identifier,
  [899] = 1,
    ACTIONS(246), 1,
      sym_identifier,
  [903] = 1,
    ACTIONS(248), 1,
      anon_sym_COLON,
  [907] = 1,
    ACTIONS(250), 1,
      anon_sym_SEMI,
  [911] = 1,
    ACTIONS(252), 1,
      anon_sym_LBRACE,
  [915] = 1,
    ACTIONS(196), 1,
      sym_identifier,
  [919] = 1,
    ACTIONS(190), 1,
      sym_identifier,
  [923] = 1,
    ACTIONS(194), 1,
      sym_identifier,
  [927] = 1,
    ACTIONS(254), 1,
      sym_identifier,
  [931] = 1,
    ACTIONS(256), 1,
      anon_sym_SEMI,
  [935] = 1,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 76,
  [SMALL_STATE(6)] = 92,
  [SMALL_STATE(7)] = 108,
  [SMALL_STATE(8)] = 124,
  [SMALL_STATE(9)] = 140,
  [SMALL_STATE(10)] = 156,
  [SMALL_STATE(11)] = 172,
  [SMALL_STATE(12)] = 189,
  [SMALL_STATE(13)] = 206,
  [SMALL_STATE(14)] = 223,
  [SMALL_STATE(15)] = 232,
  [SMALL_STATE(16)] = 241,
  [SMALL_STATE(17)] = 250,
  [SMALL_STATE(18)] = 269,
  [SMALL_STATE(19)] = 278,
  [SMALL_STATE(20)] = 295,
  [SMALL_STATE(21)] = 304,
  [SMALL_STATE(22)] = 321,
  [SMALL_STATE(23)] = 338,
  [SMALL_STATE(24)] = 347,
  [SMALL_STATE(25)] = 364,
  [SMALL_STATE(26)] = 381,
  [SMALL_STATE(27)] = 390,
  [SMALL_STATE(28)] = 407,
  [SMALL_STATE(29)] = 424,
  [SMALL_STATE(30)] = 433,
  [SMALL_STATE(31)] = 447,
  [SMALL_STATE(32)] = 460,
  [SMALL_STATE(33)] = 471,
  [SMALL_STATE(34)] = 478,
  [SMALL_STATE(35)] = 485,
  [SMALL_STATE(36)] = 496,
  [SMALL_STATE(37)] = 507,
  [SMALL_STATE(38)] = 514,
  [SMALL_STATE(39)] = 527,
  [SMALL_STATE(40)] = 540,
  [SMALL_STATE(41)] = 546,
  [SMALL_STATE(42)] = 556,
  [SMALL_STATE(43)] = 566,
  [SMALL_STATE(44)] = 572,
  [SMALL_STATE(45)] = 578,
  [SMALL_STATE(46)] = 586,
  [SMALL_STATE(47)] = 596,
  [SMALL_STATE(48)] = 602,
  [SMALL_STATE(49)] = 612,
  [SMALL_STATE(50)] = 622,
  [SMALL_STATE(51)] = 630,
  [SMALL_STATE(52)] = 640,
  [SMALL_STATE(53)] = 646,
  [SMALL_STATE(54)] = 656,
  [SMALL_STATE(55)] = 662,
  [SMALL_STATE(56)] = 672,
  [SMALL_STATE(57)] = 682,
  [SMALL_STATE(58)] = 692,
  [SMALL_STATE(59)] = 702,
  [SMALL_STATE(60)] = 712,
  [SMALL_STATE(61)] = 718,
  [SMALL_STATE(62)] = 725,
  [SMALL_STATE(63)] = 730,
  [SMALL_STATE(64)] = 735,
  [SMALL_STATE(65)] = 742,
  [SMALL_STATE(66)] = 749,
  [SMALL_STATE(67)] = 756,
  [SMALL_STATE(68)] = 763,
  [SMALL_STATE(69)] = 768,
  [SMALL_STATE(70)] = 775,
  [SMALL_STATE(71)] = 780,
  [SMALL_STATE(72)] = 785,
  [SMALL_STATE(73)] = 792,
  [SMALL_STATE(74)] = 799,
  [SMALL_STATE(75)] = 806,
  [SMALL_STATE(76)] = 811,
  [SMALL_STATE(77)] = 815,
  [SMALL_STATE(78)] = 819,
  [SMALL_STATE(79)] = 823,
  [SMALL_STATE(80)] = 827,
  [SMALL_STATE(81)] = 831,
  [SMALL_STATE(82)] = 835,
  [SMALL_STATE(83)] = 839,
  [SMALL_STATE(84)] = 843,
  [SMALL_STATE(85)] = 847,
  [SMALL_STATE(86)] = 851,
  [SMALL_STATE(87)] = 855,
  [SMALL_STATE(88)] = 859,
  [SMALL_STATE(89)] = 863,
  [SMALL_STATE(90)] = 867,
  [SMALL_STATE(91)] = 871,
  [SMALL_STATE(92)] = 875,
  [SMALL_STATE(93)] = 879,
  [SMALL_STATE(94)] = 883,
  [SMALL_STATE(95)] = 887,
  [SMALL_STATE(96)] = 891,
  [SMALL_STATE(97)] = 895,
  [SMALL_STATE(98)] = 899,
  [SMALL_STATE(99)] = 903,
  [SMALL_STATE(100)] = 907,
  [SMALL_STATE(101)] = 911,
  [SMALL_STATE(102)] = 915,
  [SMALL_STATE(103)] = 919,
  [SMALL_STATE(104)] = 923,
  [SMALL_STATE(105)] = 927,
  [SMALL_STATE(106)] = 931,
  [SMALL_STATE(107)] = 935,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(93),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(85),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_statement_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_statement_repeat1, 2), SHIFT_REPEAT(105),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_statement_repeat1, 2), SHIFT_REPEAT(99),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_statement, 4),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_statement, 5),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_statement, 6),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_statement, 6),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_statement, 5),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_statement_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_statement_repeat1, 2), SHIFT_REPEAT(105),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_statement_repeat1, 2), SHIFT_REPEAT(49),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_statement, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_statement, 4),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_content, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(35),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_type, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_path, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 6),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_package_path_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_path_repeat1, 2), SHIFT_REPEAT(98),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 5),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(38),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 4),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_list, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_list_repeat1, 2),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_list_repeat1, 2), SHIFT_REPEAT(64),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_list, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_path, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator_arguments, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator_arguments, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [206] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
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
