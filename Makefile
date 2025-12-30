default: node_modules
	npx tree-sitter generate
	npx tree-sitter build --wasm
	npx tree-sitter test
	./node_modules/.bin/tree-sitter parse examples/example.beancount > examples/example.tree
	./node_modules/.bin/tree-sitter parse --quiet examples/long-example.beancount

node_modules: package-lock.json
	npm install --no-progress
	touch -m node_modules

.PHONY: update
update:
	./node_modules/.bin/tree-sitter parse examples/example.beancount > examples/example.tree
	npx tree-sitter init --update

.PHONY: lint
lint:
	npx prettier grammar.js --write

.PHONY: clean
clean:
	rm -rf build
	rm -rf node_modules
	rm -rf target
	rm -rf .venv
	find . -type f -name '*.so' -delete

.PHONY: update-corpus-tests
update-corpus-tests:
	./node_modules/.bin/tree-sitter test --update
