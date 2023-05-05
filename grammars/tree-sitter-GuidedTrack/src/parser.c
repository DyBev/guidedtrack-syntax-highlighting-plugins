#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_STARif_COLON = 1,
  anon_sym_STARwhile_COLON = 2,
  anon_sym_GT_GT = 3,
  anon_sym_EQ = 4,
  anon_sym_DQUOTE = 5,
  anon_sym_LBRACK = 6,
  anon_sym_RBRACK = 7,
  sym_comma_divider = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_DASH_GT = 11,
  sym_lessThan_operator = 12,
  sym_moreThan_operator = 13,
  sym_in_operator = 14,
  sym_identifier = 15,
  sym_number = 16,
  sym__indent = 17,
  sym__dedent = 18,
  sym_source_file = 19,
  sym__definition = 20,
  sym__function_definition = 21,
  sym_if_function_definition = 22,
  sym_while_function_definition = 23,
  sym_variable_definition = 24,
  sym__keyword_definition = 25,
  sym__type = 26,
  sym_string_type = 27,
  sym_array_type = 28,
  sym_dictionary_type = 29,
  sym_dictionary_pair = 30,
  sym__expression = 31,
  sym__operator = 32,
  sym_equal_operator = 33,
  aux_sym_source_file_repeat1 = 34,
  aux_sym_if_function_definition_repeat1 = 35,
  aux_sym_variable_definition_repeat1 = 36,
  aux_sym_array_type_repeat1 = 37,
  aux_sym_dictionary_type_repeat1 = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_STARif_COLON] = "*if:",
  [anon_sym_STARwhile_COLON] = "*while:",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_EQ] = "=",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_comma_divider] = "comma_divider",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DASH_GT] = "->",
  [sym_lessThan_operator] = "lessThan_operator",
  [sym_moreThan_operator] = "moreThan_operator",
  [sym_in_operator] = "in_operator",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym__function_definition] = "_function_definition",
  [sym_if_function_definition] = "if_function_definition",
  [sym_while_function_definition] = "while_function_definition",
  [sym_variable_definition] = "variable_definition",
  [sym__keyword_definition] = "_keyword_definition",
  [sym__type] = "_type",
  [sym_string_type] = "string_type",
  [sym_array_type] = "array_type",
  [sym_dictionary_type] = "dictionary_type",
  [sym_dictionary_pair] = "dictionary_pair",
  [sym__expression] = "_expression",
  [sym__operator] = "_operator",
  [sym_equal_operator] = "equal_operator",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_if_function_definition_repeat1] = "if_function_definition_repeat1",
  [aux_sym_variable_definition_repeat1] = "variable_definition_repeat1",
  [aux_sym_array_type_repeat1] = "array_type_repeat1",
  [aux_sym_dictionary_type_repeat1] = "dictionary_type_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_STARif_COLON] = anon_sym_STARif_COLON,
  [anon_sym_STARwhile_COLON] = anon_sym_STARwhile_COLON,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_comma_divider] = sym_comma_divider,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_lessThan_operator] = sym_lessThan_operator,
  [sym_moreThan_operator] = sym_moreThan_operator,
  [sym_in_operator] = sym_in_operator,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym__function_definition] = sym__function_definition,
  [sym_if_function_definition] = sym_if_function_definition,
  [sym_while_function_definition] = sym_while_function_definition,
  [sym_variable_definition] = sym_variable_definition,
  [sym__keyword_definition] = sym__keyword_definition,
  [sym__type] = sym__type,
  [sym_string_type] = sym_string_type,
  [sym_array_type] = sym_array_type,
  [sym_dictionary_type] = sym_dictionary_type,
  [sym_dictionary_pair] = sym_dictionary_pair,
  [sym__expression] = sym__expression,
  [sym__operator] = sym__operator,
  [sym_equal_operator] = sym_equal_operator,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_if_function_definition_repeat1] = aux_sym_if_function_definition_repeat1,
  [aux_sym_variable_definition_repeat1] = aux_sym_variable_definition_repeat1,
  [aux_sym_array_type_repeat1] = aux_sym_array_type_repeat1,
  [aux_sym_dictionary_type_repeat1] = aux_sym_dictionary_type_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_STARif_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STARwhile_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
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
  [sym_comma_divider] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_lessThan_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_moreThan_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_in_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym__function_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_if_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_while_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__keyword_definition] = {
    .visible = false,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_string_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_dictionary_type] = {
    .visible = true,
    .named = true,
  },
  [sym_dictionary_pair] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__operator] = {
    .visible = false,
    .named = true,
  },
  [sym_equal_operator] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_function_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dictionary_type_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(24);
      if (lookahead == '[') ADVANCE(17);
      if (lookahead == ']') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '}') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(2);
      END_STATE();
    case 7:
      if (lookahead == 'h') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'w') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_STARif_COLON);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_STARwhile_COLON);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_comma_divider);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_lessThan_operator);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_moreThan_operator);
      if (lookahead == '>') ADVANCE(14);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_in_operator);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
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
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
};

enum {
  ts_external_token__indent = 0,
  ts_external_token__dedent = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_STARif_COLON] = ACTIONS(1),
    [anon_sym_STARwhile_COLON] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_comma_divider] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_lessThan_operator] = ACTIONS(1),
    [sym_moreThan_operator] = ACTIONS(1),
    [sym_in_operator] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(38),
    [sym__definition] = STATE(9),
    [sym__function_definition] = STATE(9),
    [sym_if_function_definition] = STATE(9),
    [sym_while_function_definition] = STATE(9),
    [sym_variable_definition] = STATE(9),
    [sym__keyword_definition] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_STARif_COLON] = ACTIONS(5),
    [anon_sym_STARwhile_COLON] = ACTIONS(7),
    [anon_sym_GT_GT] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(13), 1,
      anon_sym_EQ,
    ACTIONS(15), 2,
      sym_lessThan_operator,
      sym_number,
    ACTIONS(17), 3,
      sym_moreThan_operator,
      sym_in_operator,
      sym_identifier,
    ACTIONS(11), 4,
      ts_builtin_sym_end,
      anon_sym_STARif_COLON,
      anon_sym_STARwhile_COLON,
      anon_sym_GT_GT,
    STATE(4), 4,
      sym__expression,
      sym__operator,
      sym_equal_operator,
      aux_sym_if_function_definition_repeat1,
  [25] = 5,
    ACTIONS(13), 1,
      anon_sym_EQ,
    ACTIONS(21), 2,
      sym_lessThan_operator,
      sym_number,
    ACTIONS(23), 3,
      sym_moreThan_operator,
      sym_in_operator,
      sym_identifier,
    ACTIONS(19), 4,
      ts_builtin_sym_end,
      anon_sym_STARif_COLON,
      anon_sym_STARwhile_COLON,
      anon_sym_GT_GT,
    STATE(5), 4,
      sym__expression,
      sym__operator,
      sym_equal_operator,
      aux_sym_if_function_definition_repeat1,
  [50] = 5,
    ACTIONS(13), 1,
      anon_sym_EQ,
    ACTIONS(27), 2,
      sym_lessThan_operator,
      sym_number,
    ACTIONS(29), 3,
      sym_moreThan_operator,
      sym_in_operator,
      sym_identifier,
    ACTIONS(25), 4,
      ts_builtin_sym_end,
      anon_sym_STARif_COLON,
      anon_sym_STARwhile_COLON,
      anon_sym_GT_GT,
    STATE(6), 4,
      sym__expression,
      sym__operator,
      sym_equal_operator,
      aux_sym_if_function_definition_repeat1,
  [75] = 5,
    ACTIONS(13), 1,
      anon_sym_EQ,
    ACTIONS(27), 2,
      sym_lessThan_operator,
      sym_number,
    ACTIONS(29), 3,
      sym_moreThan_operator,
      sym_in_operator,
      sym_identifier,
    ACTIONS(31), 4,
      ts_builtin_sym_end,
      anon_sym_STARif_COLON,
      anon_sym_STARwhile_COLON,
      anon_sym_GT_GT,
    STATE(6), 4,
      sym__expression,
      sym__operator,
      sym_equal_operator,
      aux_sym_if_function_definition_repeat1,
  [100] = 5,
    ACTIONS(35), 1,
      anon_sym_EQ,
    ACTIONS(38), 2,
      sym_lessThan_operator,
      sym_number,
    ACTIONS(41), 3,
      sym_moreThan_operator,
      sym_in_operator,
      sym_identifier,
    ACTIONS(33), 4,
      ts_builtin_sym_end,
      anon_sym_STARif_COLON,
      anon_sym_STARwhile_COLON,
      anon_sym_GT_GT,
    STATE(6), 4,
      sym__expression,
      sym__operator,
      sym_equal_operator,
      aux_sym_if_function_definition_repeat1,
  [125] = 1,
    ACTIONS(44), 11,
      ts_builtin_sym_end,
      anon_sym_STARif_COLON,
      anon_sym_STARwhile_COLON,
      anon_sym_GT_GT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_comma_divider,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
  [139] = 1,
    ACTIONS(46), 11,
      ts_builtin_sym_end,
      anon_sym_STARif_COLON,
      anon_sym_STARwhile_COLON,
      anon_sym_GT_GT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_comma_divider,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
  [153] = 5,
    ACTIONS(5), 1,
      anon_sym_STARif_COLON,
    ACTIONS(7), 1,
      anon_sym_STARwhile_COLON,
    ACTIONS(9), 1,
      anon_sym_GT_GT,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    STATE(12), 7,
      sym__definition,
      sym__function_definition,
      sym_if_function_definition,
      sym_while_function_definition,
      sym_variable_definition,
      sym__keyword_definition,
      aux_sym_source_file_repeat1,
  [175] = 1,
    ACTIONS(50), 11,
      ts_builtin_sym_end,
      anon_sym_STARif_COLON,
      anon_sym_STARwhile_COLON,
      anon_sym_GT_GT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_comma_divider,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
  [189] = 1,
    ACTIONS(52), 11,
      ts_builtin_sym_end,
      anon_sym_STARif_COLON,
      anon_sym_STARwhile_COLON,
      anon_sym_GT_GT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_comma_divider,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
  [203] = 5,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      anon_sym_STARif_COLON,
    ACTIONS(59), 1,
      anon_sym_STARwhile_COLON,
    ACTIONS(62), 1,
      anon_sym_GT_GT,
    STATE(12), 7,
      sym__definition,
      sym__function_definition,
      sym_if_function_definition,
      sym_while_function_definition,
      sym_variable_definition,
      sym__keyword_definition,
      aux_sym_source_file_repeat1,
  [225] = 1,
    ACTIONS(65), 11,
      ts_builtin_sym_end,
      anon_sym_STARif_COLON,
      anon_sym_STARwhile_COLON,
      anon_sym_GT_GT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_comma_divider,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
  [239] = 1,
    ACTIONS(67), 11,
      ts_builtin_sym_end,
      anon_sym_STARif_COLON,
      anon_sym_STARwhile_COLON,
      anon_sym_GT_GT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_comma_divider,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
  [253] = 7,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      aux_sym_dictionary_type_repeat1,
    STATE(29), 1,
      sym_dictionary_pair,
    STATE(37), 4,
      sym__type,
      sym_string_type,
      sym_array_type,
      sym_dictionary_type,
  [278] = 2,
    ACTIONS(82), 3,
      sym_moreThan_operator,
      sym_in_operator,
      sym_identifier,
    ACTIONS(80), 7,
      ts_builtin_sym_end,
      anon_sym_STARif_COLON,
      anon_sym_STARwhile_COLON,
      anon_sym_GT_GT,
      anon_sym_EQ,
      sym_lessThan_operator,
      sym_number,
  [293] = 7,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_LBRACE,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      aux_sym_dictionary_type_repeat1,
    STATE(29), 1,
      sym_dictionary_pair,
    STATE(37), 4,
      sym__type,
      sym_string_type,
      sym_array_type,
      sym_dictionary_type,
  [318] = 7,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_LBRACE,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      aux_sym_dictionary_type_repeat1,
    STATE(29), 1,
      sym_dictionary_pair,
    STATE(37), 4,
      sym__type,
      sym_string_type,
      sym_array_type,
      sym_dictionary_type,
  [343] = 6,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LBRACK,
    ACTIONS(100), 1,
      anon_sym_RBRACK,
    ACTIONS(102), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      aux_sym_array_type_repeat1,
    STATE(26), 4,
      sym__type,
      sym_string_type,
      sym_array_type,
      sym_dictionary_type,
  [365] = 6,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      aux_sym_array_type_repeat1,
    STATE(26), 4,
      sym__type,
      sym_string_type,
      sym_array_type,
      sym_dictionary_type,
  [387] = 6,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      aux_sym_array_type_repeat1,
    STATE(26), 4,
      sym__type,
      sym_string_type,
      sym_array_type,
      sym_dictionary_type,
  [409] = 4,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_LBRACE,
    STATE(33), 4,
      sym__type,
      sym_string_type,
      sym_array_type,
      sym_dictionary_type,
  [425] = 4,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_LBRACE,
    STATE(32), 4,
      sym__type,
      sym_string_type,
      sym_array_type,
      sym_dictionary_type,
  [441] = 4,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_LBRACE,
    STATE(34), 4,
      sym__type,
      sym_string_type,
      sym_array_type,
      sym_dictionary_type,
  [457] = 3,
    ACTIONS(109), 2,
      anon_sym_EQ,
      anon_sym_DQUOTE,
    ACTIONS(111), 2,
      sym_identifier,
      sym_number,
    STATE(25), 2,
      sym__expression,
      aux_sym_variable_definition_repeat1,
  [470] = 2,
    ACTIONS(116), 1,
      sym_comma_divider,
    ACTIONS(114), 4,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [480] = 3,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 2,
      sym_identifier,
      sym_number,
    STATE(25), 2,
      sym__expression,
      aux_sym_variable_definition_repeat1,
  [492] = 3,
    ACTIONS(122), 1,
      anon_sym_EQ,
    ACTIONS(124), 2,
      sym_identifier,
      sym_number,
    STATE(31), 2,
      sym__expression,
      aux_sym_variable_definition_repeat1,
  [504] = 2,
    ACTIONS(128), 1,
      sym_comma_divider,
    ACTIONS(126), 4,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [514] = 3,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 2,
      sym_identifier,
      sym_number,
    STATE(27), 2,
      sym__expression,
      aux_sym_variable_definition_repeat1,
  [526] = 3,
    ACTIONS(134), 1,
      anon_sym_EQ,
    ACTIONS(120), 2,
      sym_identifier,
      sym_number,
    STATE(25), 2,
      sym__expression,
      aux_sym_variable_definition_repeat1,
  [538] = 1,
    ACTIONS(136), 5,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_comma_divider,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [546] = 1,
    ACTIONS(138), 4,
      ts_builtin_sym_end,
      anon_sym_STARif_COLON,
      anon_sym_STARwhile_COLON,
      anon_sym_GT_GT,
  [553] = 1,
    ACTIONS(140), 4,
      ts_builtin_sym_end,
      anon_sym_STARif_COLON,
      anon_sym_STARwhile_COLON,
      anon_sym_GT_GT,
  [560] = 1,
    ACTIONS(100), 4,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [567] = 1,
    ACTIONS(78), 4,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [574] = 1,
    ACTIONS(142), 1,
      anon_sym_DASH_GT,
  [578] = 1,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 75,
  [SMALL_STATE(6)] = 100,
  [SMALL_STATE(7)] = 125,
  [SMALL_STATE(8)] = 139,
  [SMALL_STATE(9)] = 153,
  [SMALL_STATE(10)] = 175,
  [SMALL_STATE(11)] = 189,
  [SMALL_STATE(12)] = 203,
  [SMALL_STATE(13)] = 225,
  [SMALL_STATE(14)] = 239,
  [SMALL_STATE(15)] = 253,
  [SMALL_STATE(16)] = 278,
  [SMALL_STATE(17)] = 293,
  [SMALL_STATE(18)] = 318,
  [SMALL_STATE(19)] = 343,
  [SMALL_STATE(20)] = 365,
  [SMALL_STATE(21)] = 387,
  [SMALL_STATE(22)] = 409,
  [SMALL_STATE(23)] = 425,
  [SMALL_STATE(24)] = 441,
  [SMALL_STATE(25)] = 457,
  [SMALL_STATE(26)] = 470,
  [SMALL_STATE(27)] = 480,
  [SMALL_STATE(28)] = 492,
  [SMALL_STATE(29)] = 504,
  [SMALL_STATE(30)] = 514,
  [SMALL_STATE(31)] = 526,
  [SMALL_STATE(32)] = 538,
  [SMALL_STATE(33)] = 546,
  [SMALL_STATE(34)] = 553,
  [SMALL_STATE(35)] = 560,
  [SMALL_STATE(36)] = 567,
  [SMALL_STATE(37)] = 574,
  [SMALL_STATE(38)] = 578,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_function_definition, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_function_definition, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_function_definition, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_function_definition, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_function_definition_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_function_definition_repeat1, 2), SHIFT_REPEAT(16),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_function_definition_repeat1, 2), SHIFT_REPEAT(6),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_function_definition_repeat1, 2), SHIFT_REPEAT(6),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_type, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_type, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_type, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_type, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_type_repeat1, 2), SHIFT_REPEAT(30),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_type_repeat1, 2), SHIFT_REPEAT(21),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_type_repeat1, 2), SHIFT_REPEAT(17),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_type_repeat1, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal_operator, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equal_operator, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2), SHIFT_REPEAT(30),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2), SHIFT_REPEAT(21),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2), SHIFT_REPEAT(17),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2), SHIFT_REPEAT(25),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_type_repeat1, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_pair, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [144] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_GuidedTrack_external_scanner_create(void);
void tree_sitter_GuidedTrack_external_scanner_destroy(void *);
bool tree_sitter_GuidedTrack_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_GuidedTrack_external_scanner_serialize(void *, char *);
void tree_sitter_GuidedTrack_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_GuidedTrack(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_GuidedTrack_external_scanner_create,
      tree_sitter_GuidedTrack_external_scanner_destroy,
      tree_sitter_GuidedTrack_external_scanner_scan,
      tree_sitter_GuidedTrack_external_scanner_serialize,
      tree_sitter_GuidedTrack_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
