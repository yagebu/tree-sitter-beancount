module.exports = $ =>
  token(
    seq(
      /\p{Lu}[0-9\-\p{L}]*/u,
      repeat1(
        /:[0-9\p{Lu}][0-9\-\p{L}]*/u
      ),
    ),
  );
