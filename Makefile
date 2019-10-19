default:
	npm run generate
	npm test
	./node_modules/.bin/tree-sitter parse examples/example.beancount > tmp
	diff examples/tree/example.beancount tmp
	rm tmp
	./node_modules/.bin/tree-sitter parse --quiet examples/long-example.beancount

lint:
	npm run lint
