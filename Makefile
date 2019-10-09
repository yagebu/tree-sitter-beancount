default: account-token.js
	npm run generate
	npm test
	./node_modules/.bin/tree-sitter parse --quiet examples/example.beancount

account-token.js: account-token-es6.js
	./node_modules/.bin/regexpu -p -u < account-token-es6.js > account-token.js

lint:
	npm run lint
