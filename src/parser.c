#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 113
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
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

enum ts_field_identifiers {
  field_name = 1,
  field_type = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 2},
  [2] =
    {field_name, 0},
  [3] =
    {field_name, 0},
    {field_type, 2},
  [5] =
    {field_name, 1},
    {field_type, 3},
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
  [37] = 35,
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
  [59] = 41,
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
  [107] = 65,
  [108] = 77,
  [109] = 72,
  [110] = 85,
  [111] = 111,
  [112] = 103,
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '}') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(82);
      END_STATE();
    case 4:
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'b') ADVANCE(76);
      if (lookahead == 'f') ADVANCE(72);
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 's') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48)
      END_STATE();
    case 49:
      if (eof) ADVANCE(50);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
          (11 <= lookahead && lookahead <= '\r') ||
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
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 49},
  [13] = {.lex_state = 49},
  [14] = {.lex_state = 49},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 49},
  [19] = {.lex_state = 49},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 49},
  [25] = {.lex_state = 49},
  [26] = {.lex_state = 49},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 49},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 49},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 49},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 49},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 49},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 49},
  [78] = {.lex_state = 49},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
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
    [sym_source_file] = STATE(83),
    [sym__statement] = STATE(2),
    [sym_import_statement] = STATE(2),
    [sym_using_statement] = STATE(2),
    [sym_model_statement] = STATE(2),
    [sym_interface_statement] = STATE(2),
    [sym_decorator] = STATE(78),
    [aux_sym_source_file_repeat1] = STATE(2),
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
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(78), 1,
      sym_decorator,
    STATE(3), 6,
      sym__statement,
      sym_import_statement,
      sym_using_statement,
      sym_model_statement,
      sym_interface_statement,
      aux_sym_source_file_repeat1,
  [30] = 8,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_import,
    ACTIONS(22), 1,
      anon_sym_using,
    ACTIONS(25), 1,
      anon_sym_model,
    ACTIONS(28), 1,
      anon_sym_interface,
    ACTIONS(31), 1,
      anon_sym_AT,
    STATE(78), 1,
      sym_decorator,
    STATE(3), 6,
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
    STATE(80), 4,
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
    STATE(46), 4,
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
    STATE(79), 4,
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
    STATE(63), 4,
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
    STATE(69), 4,
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
    STATE(71), 4,
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
    STATE(66), 4,
      sym__type,
      sym_primitive_type,
      sym_reference_type,
      sym_list_type,
  [172] = 3,
    ACTIONS(34), 1,
      sym_identifier,
    ACTIONS(36), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_bool,
    STATE(70), 4,
      sym__type,
      sym_primitive_type,
      sym_reference_type,
      sym_list_type,
  [188] = 1,
    ACTIONS(38), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_model,
      anon_sym_interface,
      anon_sym_AT,
  [197] = 1,
    ACTIONS(40), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_model,
      anon_sym_interface,
      anon_sym_AT,
  [206] = 1,
    ACTIONS(42), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_model,
      anon_sym_interface,
      anon_sym_AT,
  [215] = 5,
    ACTIONS(44), 1,
      anon_sym_RBRACE,
    ACTIONS(46), 1,
      anon_sym_AT,
    ACTIONS(48), 1,
      sym_identifier,
    STATE(105), 1,
      sym_decorator,
    STATE(22), 2,
      sym_field,
      aux_sym_model_statement_repeat1,
  [232] = 5,
    ACTIONS(46), 1,
      anon_sym_AT,
    ACTIONS(48), 1,
      sym_identifier,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    STATE(105), 1,
      sym_decorator,
    STATE(22), 2,
      sym_field,
      aux_sym_model_statement_repeat1,
  [249] = 5,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    ACTIONS(54), 1,
      anon_sym_AT,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(104), 1,
      sym_decorator,
    STATE(17), 2,
      sym_op,
      aux_sym_interface_statement_repeat1,
  [266] = 1,
    ACTIONS(60), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_model,
      anon_sym_interface,
      anon_sym_AT,
  [275] = 1,
    ACTIONS(62), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_model,
      anon_sym_interface,
      anon_sym_AT,
  [284] = 6,
    ACTIONS(46), 1,
      anon_sym_AT,
    ACTIONS(64), 1,
      anon_sym_RPAREN,
    ACTIONS(66), 1,
      sym_identifier,
    STATE(56), 1,
      sym_argument,
    STATE(86), 1,
      sym_decorator,
    STATE(87), 1,
      sym_argument_list,
  [303] = 5,
    ACTIONS(46), 1,
      anon_sym_AT,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    ACTIONS(70), 1,
      sym_identifier,
    STATE(104), 1,
      sym_decorator,
    STATE(17), 2,
      sym_op,
      aux_sym_interface_statement_repeat1,
  [320] = 5,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(74), 1,
      anon_sym_AT,
    ACTIONS(77), 1,
      sym_identifier,
    STATE(105), 1,
      sym_decorator,
    STATE(22), 2,
      sym_field,
      aux_sym_model_statement_repeat1,
  [337] = 5,
    ACTIONS(46), 1,
      anon_sym_AT,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      sym_decorator,
    STATE(17), 2,
      sym_op,
      aux_sym_interface_statement_repeat1,
  [354] = 1,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_model,
      anon_sym_interface,
      anon_sym_AT,
  [363] = 1,
    ACTIONS(84), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_model,
      anon_sym_interface,
      anon_sym_AT,
  [372] = 1,
    ACTIONS(86), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_model,
      anon_sym_interface,
      anon_sym_AT,
  [381] = 5,
    ACTIONS(46), 1,
      anon_sym_AT,
    ACTIONS(48), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    STATE(105), 1,
      sym_decorator,
    STATE(16), 2,
      sym_field,
      aux_sym_model_statement_repeat1,
  [398] = 5,
    ACTIONS(46), 1,
      anon_sym_AT,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      sym_decorator,
    STATE(21), 2,
      sym_op,
      aux_sym_interface_statement_repeat1,
  [415] = 1,
    ACTIONS(92), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_model,
      anon_sym_interface,
      anon_sym_AT,
  [424] = 5,
    ACTIONS(46), 1,
      anon_sym_AT,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      sym_decorator,
    STATE(23), 2,
      sym_op,
      aux_sym_interface_statement_repeat1,
  [441] = 1,
    ACTIONS(96), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_model,
      anon_sym_interface,
      anon_sym_AT,
  [450] = 5,
    ACTIONS(46), 1,
      anon_sym_AT,
    ACTIONS(48), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    STATE(105), 1,
      sym_decorator,
    STATE(15), 2,
      sym_field,
      aux_sym_model_statement_repeat1,
  [467] = 4,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
      aux_sym_string_content_repeat1,
    STATE(101), 1,
      sym_string_content,
    ACTIONS(102), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [481] = 1,
    ACTIONS(104), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK_RBRACK,
  [488] = 4,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    STATE(51), 1,
      sym_string_literal,
    STATE(103), 1,
      sym_string_list,
  [501] = 4,
    ACTIONS(46), 1,
      anon_sym_AT,
    ACTIONS(66), 1,
      sym_identifier,
    STATE(74), 1,
      sym_argument,
    STATE(86), 1,
      sym_decorator,
  [514] = 4,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      sym_string_literal,
    STATE(112), 1,
      sym_string_list,
  [527] = 1,
    ACTIONS(112), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK_RBRACK,
  [534] = 1,
    ACTIONS(114), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK_RBRACK,
  [541] = 3,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(118), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [552] = 3,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    STATE(65), 1,
      sym_decorator_arguments,
    ACTIONS(121), 2,
      anon_sym_model,
      anon_sym_interface,
  [563] = 3,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(127), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [574] = 3,
    ACTIONS(129), 1,
      anon_sym_COLON,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym_arguments,
  [584] = 3,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_string_list_repeat1,
  [594] = 1,
    ACTIONS(137), 3,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_identifier,
  [600] = 2,
    ACTIONS(141), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(139), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [608] = 3,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_COLON,
    STATE(100), 1,
      sym_arguments,
  [618] = 1,
    ACTIONS(145), 3,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_identifier,
  [624] = 3,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_string_list_repeat1,
  [634] = 1,
    ACTIONS(152), 3,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_identifier,
  [640] = 3,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      aux_sym_string_list_repeat1,
  [650] = 3,
    ACTIONS(156), 1,
      anon_sym_SEMI,
    ACTIONS(158), 1,
      anon_sym_DOT,
    STATE(54), 1,
      aux_sym_package_path_repeat1,
  [660] = 1,
    ACTIONS(160), 3,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_identifier,
  [666] = 3,
    ACTIONS(158), 1,
      anon_sym_DOT,
    ACTIONS(162), 1,
      anon_sym_SEMI,
    STATE(62), 1,
      aux_sym_package_path_repeat1,
  [676] = 3,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym_argument_list_repeat1,
  [686] = 3,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      aux_sym_argument_list_repeat1,
  [696] = 1,
    ACTIONS(173), 3,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_identifier,
  [702] = 1,
    ACTIONS(175), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [708] = 3,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    STATE(107), 1,
      sym_decorator_arguments,
  [718] = 3,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_argument_list_repeat1,
  [728] = 1,
    ACTIONS(181), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [734] = 3,
    ACTIONS(183), 1,
      anon_sym_SEMI,
    ACTIONS(185), 1,
      anon_sym_DOT,
    STATE(62), 1,
      aux_sym_package_path_repeat1,
  [744] = 2,
    ACTIONS(141), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(188), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [752] = 1,
    ACTIONS(190), 3,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_identifier,
  [758] = 1,
    ACTIONS(192), 2,
      anon_sym_model,
      anon_sym_interface,
  [763] = 2,
    ACTIONS(141), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(194), 1,
      anon_sym_SEMI,
  [770] = 1,
    ACTIONS(183), 2,
      anon_sym_SEMI,
      anon_sym_DOT,
  [775] = 2,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    STATE(76), 1,
      sym_string_literal,
  [782] = 2,
    ACTIONS(141), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(196), 1,
      anon_sym_SEMI,
  [789] = 2,
    ACTIONS(141), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(198), 1,
      anon_sym_SEMI,
  [796] = 2,
    ACTIONS(141), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(200), 1,
      anon_sym_SEMI,
  [803] = 1,
    ACTIONS(202), 2,
      anon_sym_model,
      anon_sym_interface,
  [808] = 2,
    ACTIONS(204), 1,
      sym_identifier,
    STATE(94), 1,
      sym_package_path,
  [815] = 1,
    ACTIONS(164), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [820] = 2,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    STATE(82), 1,
      sym_string_literal,
  [827] = 1,
    ACTIONS(147), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [832] = 1,
    ACTIONS(206), 2,
      anon_sym_model,
      anon_sym_interface,
  [837] = 2,
    ACTIONS(208), 1,
      anon_sym_model,
    ACTIONS(210), 1,
      anon_sym_interface,
  [844] = 2,
    ACTIONS(141), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(212), 1,
      anon_sym_SEMI,
  [851] = 2,
    ACTIONS(141), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(214), 1,
      anon_sym_SEMI,
  [858] = 1,
    ACTIONS(216), 1,
      sym_identifier,
  [862] = 1,
    ACTIONS(218), 1,
      anon_sym_SEMI,
  [866] = 1,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
  [870] = 1,
    ACTIONS(222), 1,
      anon_sym_COLON,
  [874] = 1,
    ACTIONS(224), 1,
      sym_identifier,
  [878] = 1,
    ACTIONS(226), 1,
      sym_identifier,
  [882] = 1,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
  [886] = 1,
    ACTIONS(230), 1,
      sym_identifier,
  [890] = 1,
    ACTIONS(232), 1,
      anon_sym_COLON,
  [894] = 1,
    ACTIONS(234), 1,
      anon_sym_COLON,
  [898] = 1,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
  [902] = 1,
    ACTIONS(238), 1,
      anon_sym_COLON,
  [906] = 1,
    ACTIONS(240), 1,
      anon_sym_COLON,
  [910] = 1,
    ACTIONS(242), 1,
      anon_sym_SEMI,
  [914] = 1,
    ACTIONS(244), 1,
      sym_identifier,
  [918] = 1,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
  [922] = 1,
    ACTIONS(248), 1,
      anon_sym_LBRACE,
  [926] = 1,
    ACTIONS(250), 1,
      sym_identifier,
  [930] = 1,
    ACTIONS(252), 1,
      sym_identifier,
  [934] = 1,
    ACTIONS(254), 1,
      anon_sym_COLON,
  [938] = 1,
    ACTIONS(256), 1,
      anon_sym_DQUOTE,
  [942] = 1,
    ACTIONS(258), 1,
      anon_sym_COLON,
  [946] = 1,
    ACTIONS(260), 1,
      anon_sym_RPAREN,
  [950] = 1,
    ACTIONS(262), 1,
      sym_identifier,
  [954] = 1,
    ACTIONS(264), 1,
      sym_identifier,
  [958] = 1,
    ACTIONS(266), 1,
      anon_sym_COLON,
  [962] = 1,
    ACTIONS(192), 1,
      sym_identifier,
  [966] = 1,
    ACTIONS(206), 1,
      sym_identifier,
  [970] = 1,
    ACTIONS(202), 1,
      sym_identifier,
  [974] = 1,
    ACTIONS(268), 1,
      sym_identifier,
  [978] = 1,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
  [982] = 1,
    ACTIONS(272), 1,
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
  [SMALL_STATE(12)] = 188,
  [SMALL_STATE(13)] = 197,
  [SMALL_STATE(14)] = 206,
  [SMALL_STATE(15)] = 215,
  [SMALL_STATE(16)] = 232,
  [SMALL_STATE(17)] = 249,
  [SMALL_STATE(18)] = 266,
  [SMALL_STATE(19)] = 275,
  [SMALL_STATE(20)] = 284,
  [SMALL_STATE(21)] = 303,
  [SMALL_STATE(22)] = 320,
  [SMALL_STATE(23)] = 337,
  [SMALL_STATE(24)] = 354,
  [SMALL_STATE(25)] = 363,
  [SMALL_STATE(26)] = 372,
  [SMALL_STATE(27)] = 381,
  [SMALL_STATE(28)] = 398,
  [SMALL_STATE(29)] = 415,
  [SMALL_STATE(30)] = 424,
  [SMALL_STATE(31)] = 441,
  [SMALL_STATE(32)] = 450,
  [SMALL_STATE(33)] = 467,
  [SMALL_STATE(34)] = 481,
  [SMALL_STATE(35)] = 488,
  [SMALL_STATE(36)] = 501,
  [SMALL_STATE(37)] = 514,
  [SMALL_STATE(38)] = 527,
  [SMALL_STATE(39)] = 534,
  [SMALL_STATE(40)] = 541,
  [SMALL_STATE(41)] = 552,
  [SMALL_STATE(42)] = 563,
  [SMALL_STATE(43)] = 574,
  [SMALL_STATE(44)] = 584,
  [SMALL_STATE(45)] = 594,
  [SMALL_STATE(46)] = 600,
  [SMALL_STATE(47)] = 608,
  [SMALL_STATE(48)] = 618,
  [SMALL_STATE(49)] = 624,
  [SMALL_STATE(50)] = 634,
  [SMALL_STATE(51)] = 640,
  [SMALL_STATE(52)] = 650,
  [SMALL_STATE(53)] = 660,
  [SMALL_STATE(54)] = 666,
  [SMALL_STATE(55)] = 676,
  [SMALL_STATE(56)] = 686,
  [SMALL_STATE(57)] = 696,
  [SMALL_STATE(58)] = 702,
  [SMALL_STATE(59)] = 708,
  [SMALL_STATE(60)] = 718,
  [SMALL_STATE(61)] = 728,
  [SMALL_STATE(62)] = 734,
  [SMALL_STATE(63)] = 744,
  [SMALL_STATE(64)] = 752,
  [SMALL_STATE(65)] = 758,
  [SMALL_STATE(66)] = 763,
  [SMALL_STATE(67)] = 770,
  [SMALL_STATE(68)] = 775,
  [SMALL_STATE(69)] = 782,
  [SMALL_STATE(70)] = 789,
  [SMALL_STATE(71)] = 796,
  [SMALL_STATE(72)] = 803,
  [SMALL_STATE(73)] = 808,
  [SMALL_STATE(74)] = 815,
  [SMALL_STATE(75)] = 820,
  [SMALL_STATE(76)] = 827,
  [SMALL_STATE(77)] = 832,
  [SMALL_STATE(78)] = 837,
  [SMALL_STATE(79)] = 844,
  [SMALL_STATE(80)] = 851,
  [SMALL_STATE(81)] = 858,
  [SMALL_STATE(82)] = 862,
  [SMALL_STATE(83)] = 866,
  [SMALL_STATE(84)] = 870,
  [SMALL_STATE(85)] = 874,
  [SMALL_STATE(86)] = 878,
  [SMALL_STATE(87)] = 882,
  [SMALL_STATE(88)] = 886,
  [SMALL_STATE(89)] = 890,
  [SMALL_STATE(90)] = 894,
  [SMALL_STATE(91)] = 898,
  [SMALL_STATE(92)] = 902,
  [SMALL_STATE(93)] = 906,
  [SMALL_STATE(94)] = 910,
  [SMALL_STATE(95)] = 914,
  [SMALL_STATE(96)] = 918,
  [SMALL_STATE(97)] = 922,
  [SMALL_STATE(98)] = 926,
  [SMALL_STATE(99)] = 930,
  [SMALL_STATE(100)] = 934,
  [SMALL_STATE(101)] = 938,
  [SMALL_STATE(102)] = 942,
  [SMALL_STATE(103)] = 946,
  [SMALL_STATE(104)] = 950,
  [SMALL_STATE(105)] = 954,
  [SMALL_STATE(106)] = 958,
  [SMALL_STATE(107)] = 962,
  [SMALL_STATE(108)] = 966,
  [SMALL_STATE(109)] = 970,
  [SMALL_STATE(110)] = 974,
  [SMALL_STATE(111)] = 978,
  [SMALL_STATE(112)] = 982,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(95),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(88),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(85),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_statement, 5, .production_id = 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_statement, 5, .production_id = 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_statement_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_statement_repeat1, 2), SHIFT_REPEAT(110),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_statement_repeat1, 2), SHIFT_REPEAT(47),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_statement, 5, .production_id = 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_statement, 6, .production_id = 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_statement_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_statement_repeat1, 2), SHIFT_REPEAT(110),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_statement_repeat1, 2), SHIFT_REPEAT(106),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_statement, 5, .production_id = 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_statement, 6, .production_id = 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_statement, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_statement, 4, .production_id = 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_statement, 4, .production_id = 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_type, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(40),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator, 2, .production_id = 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_content, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_list, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 6, .production_id = 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 4, .production_id = 5),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, .production_id = 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_list_repeat1, 2),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_list_repeat1, 2), SHIFT_REPEAT(68),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 5, .production_id = 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_list, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_path, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 5, .production_id = 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_path, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(36),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 4, .production_id = 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_package_path_repeat1, 2),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_path_repeat1, 2), SHIFT_REPEAT(81),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 4),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, .production_id = 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator, 3, .production_id = 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator_arguments, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator_arguments, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [220] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
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
