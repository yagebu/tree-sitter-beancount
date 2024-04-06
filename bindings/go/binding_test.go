package tree_sitter_beancount_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-beancount"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_beancount.Language())
	if language == nil {
		t.Errorf("Error loading Beancount grammar")
	}
}
