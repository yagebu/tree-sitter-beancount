#include "tree_sitter/parser.h"

enum TokenType {
  EOF,
};

void * tree_sitter_beancount_external_scanner_create() {
  return NULL;
}

void tree_sitter_beancount_external_scanner_destroy() {
  // noop
}

unsigned tree_sitter_beancount_external_scanner_serialize() {
  return 0;
}


void tree_sitter_beancount_external_scanner_deserialize() {
  // noop
}

bool tree_sitter_beancount_external_scanner_scan(
  __attribute__((unused)) void *payload,
  TSLexer *lexer
) {
  if (lexer->eof(lexer)) {
    lexer->result_symbol = EOF;
    return true;
  }

  return false;
}
