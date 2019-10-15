default:
	npm run generate
	npm test
	./node_modules/.bin/tree-sitter parse --quiet examples/example.beancount

lint:
	npm run lint
