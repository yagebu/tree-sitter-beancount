default:
	npx tree-sitter generate
	npx tree-sitter build --wasm
	npx tree-sitter test
	./node_modules/.bin/tree-sitter parse examples/example.beancount > examples/example.tree
	./node_modules/.bin/tree-sitter parse --quiet examples/long-example.beancount

.PHONY: update
update:
	./node_modules/.bin/tree-sitter parse examples/example.beancount > examples/example.tree

.PHONY: lint
lint:
	npx prettier grammar.js --write

.PHONY: update-corpus-tests
update-corpus-tests:
	./node_modules/.bin/tree-sitter test --update
