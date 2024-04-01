module.exports = grammar({
  name: "typespec",
  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ => choice(
      $.import_statement,
      $.using_statement,
      $.model_statement,
      $.interface_statement,
    ),

    import_statement: $ => seq(
      "import",
      $.string_literal,
      ";",
    ),

    using_statement: $ => seq(
      "using",
      $.package_path,
      ";",
    ),

    model_statement: $ => seq(
      optional($.decorator),
      "model",
      $.identifier,
      "{",
      repeat($.field),
      "}",
    ),

    field: $ => seq(
      optional($.decorator),
      $.identifier,
      ":",
      $._type,
      ";",
    ),

    interface_statement: $ => seq(
      optional($.decorator),
      "interface",
      $.identifier,
      "{",
      repeat($.op),
      "}",
    ),

    op: $ => seq(
      optional($.decorator),
      $.identifier,
      optional($.arguments),
      ":",
      $._type,
      ";"
    ),

    decorator: $ => seq(
      "@",
      $.identifier,
      optional($.decorator_arguments),
    ),

    decorator_arguments: $ => seq(
      "(",
      optional($.string_list),
      ")",
    ),

    string_list: $ => seq(
      $.string_literal,
      repeat(seq(",", $.string_literal)),
    ),

    arguments: $ => seq(
      "(",
      optional($.argument_list),
      ")",
    ),

    argument_list: $ => seq(
      $.argument,
      repeat(seq(",", $.argument)),
    ),

    argument: $ => seq(
      optional($.decorator),
      $.identifier,
      ":",
      $._type,
    ),

    string_literal: $ => choice(
      seq('"', '"'),
      seq('"', $.string_content, '"'),
    ),

    string_content: $ => repeat1(choice(
      token.immediate(prec(1, /[^\\"\n]+/)),
      $.escape_sequence,
    )),

    escape_sequence: _ => token.immediate(seq(
      '\\',
      /(\"|\\|\/|b|f|n|r|t|u)/,
    )),

    package_path: $ => seq(
      $.identifier,
      repeat(seq(".", $.identifier)),
    ),

    identifier: _ => {
      const alpha = /[^\x00-\x1F\s\p{Zs}0-9:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/;
      const alphanumeric = /[^\x00-\x1F\s\p{Zs}:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/;
      return token(seq(alpha, repeat(alphanumeric)));
    },

    _type: $ => choice(
      $.list_type,
      $.primitive_type,
      $.reference_type,
    ),

    primitive_type: $ => choice(
      "int",
      "float",
      "string",
      "bool",
    ),

    reference_type: $ => $.identifier,

    list_type: $ => seq(
      $._type,
      "[]",
    ),
  },
})
