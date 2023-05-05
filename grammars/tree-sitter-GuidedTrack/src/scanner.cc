#include <tree_sitter/parser.h>
#include <vector>
#include <cwctype>
#include <cstring>
#include <cassert>

namespace {

	using std::vector;
	using std::iswspace;
	using std::memcpy;

	enum TokenType{
		INDENT,
		DEDENT,
	};

	struct scanner {

		void advance(TSLexer *lexer) {
			lexer->advance(lexer, false);
		}

		void skip(TSLexer *lexer) {
			lexer->advance(lexer, true);
		}

		bool scan (TSLexer *lexer, const bool *valid_symbols) {

			bool has_newline = false;
			uint32_t indent_length = 0;

			for (;;) {
				if (lexer->lookahead == '\n') {
					has_newline = true;
					indent_length = 0;
					skip(lexer);
				} else if (lexer->lookahead == '\t') {
					indent_length += 8;
					skip(lexer);
				} else if (lexer->lookahead == 0) {
					if (valid_symbols[DEDENT] && indent_length_stack.size() > 1) {
						indent_length_stack.pop_back();
						lexer->result_symbol = DEDENT;
						return true;
					}

					break;

				} else {
					break;
				}
			}

			if (has_newline) {

				if (indent_length > indent_length_stack.back() && valid_symbols[INDENT]) {
					indent_length_stack.push_back(indent_length);
					lexer->result_symbol = INDENT;
					return true;
				}

				if (indent_length < indent_length_stack.back() && valid_symbols[DEDENT]) {
					indent_length_stack.pop_back();
					lexer->result_symbol = DEDENT;
					return true;
				}

			}

		}

		vector<uint16_t> indent_length_stack;
	};
}

extern "C" {

	void *tree_sitter_guidedtrack_external_scanner_create() {
		return new Scanner();
	}

	bool tree_sitter_guidedtrack_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
		Scanner *scanner = static_cast<Scanner *>(payload);
		return scanner->scan(lexer, valid_symbols);
	}

	unsigned tree_sitter_guidedtrack_external_scanner_serialize(void *payload, char *buffer) {
		Scanner *scanner = static_cast<Scanner *>(payload);
		return scanner->serialize(buffer);
	}

	void tree_sitter_guidedtrack_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
		Scanner *scanner = static_cast<Scanner *>(payload);
		scanner->deserialize(buffer, length);
	}

	void tree_sitter_guidedtrack_external_scanner_destroy(void *payload) {
		Scanner *scanner = static_cast<Scanner *>(payload);
		delete scanner;
	}

}
