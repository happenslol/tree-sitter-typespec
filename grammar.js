module.exports = grammar({
  name: "typespec",

  extras: $ => [
    $.single_line_comment,
    $.multi_line_comment,
    /[\s]/ // TODO: All possible whitespace characters
  ],

  rules: {
    source_file: $ => repeat($._item),

    _item: $ => choice(
      $._comment,
      $._statement,
    ),

    _statement: $ => choice(
      $.namespace_statement,
      $.import_statement,
      $.using_statement,
      $.model_statement,
      $.union_statement,
      $.scalar_statement,
      $.interface_statement,
      $.enum_statement,
      $.alias_statement,
      $.augment_decorator_statement,
      $.operation_statement,
      $.decorator_declaration_statement,
      $.function_declaration_statement,
      $.const_statement,
      ";",
    ),

    const_statement: $ => seq(
      "const",
      field("name", $.identifier),
      "=",
      field("value", $._value),
      ";",
    ),

    _value: $ => choice(
      $.object_value,
      $.array_value,
      $._literal,
      $.identifier_or_member_expression,
    ),

    object_value: $ => seq(
      "#",
      "{",
      optional($._object_member_list),
      "}",
    ),

    _object_member_list: $ => seq(
      $.object_member,
      repeat(seq(",", $.object_member)),
      optional(","),
    ),

    object_member: $ => seq(
      field("key", choice($.identifier, $._string_literal)),
      ":",
      field("value", $._value),
    ),

    array_value: $ => seq(
      "#",
      "[",
      optional($._array_value_list),
      "]",
    ),

    _array_value_list: $ => seq(
      $._value,
      repeat(seq(",", $._value)),
      optional(","),
    ),

    value_list: $ => seq(
      $._value,
      repeat(seq(",", $._value)),
      optional(","),
    ),

    decorator: $ => prec.right(seq(
      "@",
      field("name", $.identifier_or_member_expression),
      optional($.decorator_arguments)
    )),

    decorator_arguments: $ => seq(
      "(", optional($.value_list), ")",
    ),

    directive: $ => prec.right(seq(
      "#",
      field("name", $.identifier_or_member_expression),
      repeat1($._string_literal)
    )),

    annotation_list: $ => repeat1($.annotation),

    annotation: $ => choice($.decorator, $.directive),

    import_statement: $ => seq(
      "import",
      $._string_literal,
      ";",
    ),

    using_statement: $ => seq(
      "using",
      field("module", $.identifier_or_member_expression),
      ";",
    ),

    namespace_statement: $ => seq(
      optional($.annotation_list),
      "namespace",
      field("name", $.identifier_or_member_expression),
      choice(
        ";",
        $.namespace_body,
      ),
    ),

    namespace_body: $ => seq("{", repeat($._statement), "}"),

    model_statement: $ => seq(
      optional($.annotation_list),
      "model",
      field("name", $.identifier),
      optional($.template_parameters),
      choice(
        seq($.model_is_heritage, ";"),
        seq(
          optional($._model_heritage),
          $.model_expression
        ),
      ),
    ),

    _model_heritage: $ => choice(
      $.model_is_heritage,
      $.model_extends_heritage,
    ),

    model_is_heritage: $ => seq("is", $._expression),
    model_extends_heritage: $ => seq("extends", $._expression),

    expression_list: $ => seq(
      $._expression,
      repeat(seq(",", $._expression)),
      optional(","),
    ),

    _expression: $ => choice(
      $.union_expression,
      $.intersection_expression,
      $.value_of_expression,
      $.array_expression,
      $._primary_expression,
    ),

    union_expression: $ => prec.left(1, seq(optional($._expression), "|", $._expression)),
    intersection_expression: $ => prec.left(2, seq(optional($._expression), "&", $._expression)),
    value_of_expression: $ => prec(3, seq("valueof", $._expression)),
    array_expression: $ => prec(4, seq($._primary_expression, "[", "]")),

    _primary_expression: $ => choice(
      $._literal,
      $.reference_expression,
      $.parenthesized_expression,
      $.model_expression,
      $.tuple_expression,
    ),

    tuple_expression: $ => seq("[", optional($.expression_list), "]"),

    model_expression: $ => seq("{", optional($.model_body), "}"),

    model_body: $ => $._model_property_list,

    _model_property_list: $ => seq(
      $.model_property,
      optional(choice(",", ";")),
      optional($._model_property_list)
    ),

    model_property: $ => choice(
      $.model_spread_property,
      seq(
        optional($.annotation_list),
        field("name", choice($.identifier, $._string_literal)),
        optional("?"),
        ":",
        field("type", $._expression),
        optional(seq("=", field("value", $._expression))),
      ),
    ),

    model_spread_property: $ => seq("...", $.reference_expression),

    union_statement: $ => seq(
      optional($.annotation_list),
      "union",
      field("name", $.identifier),
      optional($.template_parameters),
      $.union_body,
    ),

    union_body: $ => seq("{", repeat($.union_variant), "}"),

    union_variant: $ => seq(
      optional($.annotation_list),
      optional(seq(
        choice(
          field("name", $.identifier),
          $._string_literal,
        ),
        ":",
      )),
      $._expression,
      optional(choice(",", ";")),
    ),

    scalar_statement: $ => seq(
      optional($.annotation_list),
      "scalar",
      field("name", $.identifier),
      optional($.template_parameters),
      optional($.scalar_extends),
      ";",
    ),

    scalar_extends: $ => seq("extends", $._expression),

    interface_statement: $ => seq(
      optional($.annotation_list),
      "interface",
      field("name", $.identifier),
      optional($.template_parameters),
      optional($.interface_heritage),
      $.interface_body,
    ),

    interface_heritage: $ => seq("extends", $.reference_expression_list),

    interface_body: $ => seq("{", repeat($.interface_member), "}"),

    interface_member: $ => seq(
      optional($.annotation_list),
      optional("op"),
      $.identifier,
      $._operation_signature,
      ";",
    ),

    enum_statement: $ => seq(
      optional($.annotation_list),
      "enum",
      field("name", $.identifier),
      $.enum_body,
    ),

    enum_body: $ => seq(
      "{",
      optional($._enum_member_list),
      "}"
    ),

    _enum_member_list: $ => seq(
      choice($.enum_spread_member, $.enum_member),
      optional(choice(",", ";")),
      optional($._enum_member_list)
    ),

    enum_spread_member: $ => seq("...", $.reference_expression),

    enum_member: $ => seq(
      optional($.annotation_list),
      field("name", choice($.identifier, $._string_literal)),
      optional($.enum_member_value),
    ),

    enum_member_value: $ => seq(
      ":",
      choice($._numeric_literal, $._string_literal)
    ),

    alias_statement: $ => seq(
      "alias",
      field("name", $.identifier),
      optional($.template_parameters),
      "=",
      $._expression,
      ";",
    ),

    augment_decorator_statement: $ => seq(
      "@@",
      field("name", $.identifier_or_member_expression),
      optional($.decorator_arguments),
    ),

    operation_statement: $ => seq(
      optional($.annotation_list),
      "op",
      field("name", $.identifier),
      optional($.template_parameters),
      $._operation_signature,
      ";",
    ),

    _operation_signature: $ => choice(
      $.operation_signature_declaration,
      $.operation_signature_reference,
    ),

    operation_signature_declaration: $ => seq(
      $.operation_arguments,
      ":",
      $._expression,
    ),

    operation_arguments: $ => seq(
      "(",
      optional($._model_property_list),
      ")",
    ),

    operation_signature_reference: $ => seq("is", $.reference_expression,),

    decorator_declaration_statement: $ => seq(
      optional($.decorator_modifiers),
      "dec",
      field("name", $.identifier),
      $.function_parameter_list,
    ),

    decorator_modifiers: $ => "extern",

    function_parameter_list: $ => seq(
      "(",
      optional(repeat1($.function_parameter)),
      ")",
    ),

    function_parameter: $ => seq(
      optional("..."),
      field("name", $.identifier),
      optional("?"),
      optional($.type_annotation),
      optional(","),
    ),

    type_annotation: $ => seq(":", $._expression),

    function_declaration_statement: $ => seq(
      optional($.function_modifiers),
      "fn",
      field("name", $.identifier),
      $.function_parameter_list,
      optional($.type_annotation),
    ),

    function_modifiers: $ => "extern",

    reference_expression_list: $ => seq(
      $.reference_expression,
      repeat(seq(",", $.reference_expression)),
      optional(","),
    ),

    reference_expression: $ => seq(
      $.identifier_or_member_expression,
      optional($.template_arguments),
    ),

    parenthesized_expression: $ => seq("(", $._expression, ")"),

    template_arguments: $ => seq("<", $.expression_list, ">"),

    template_parameters: $ => seq("<", $.template_parameter_list, ">"),

    template_parameter_list: $ => seq(
      $.template_parameter,
      repeat(seq(",", $.template_parameter)),
    ),

    template_parameter: $ => seq(
      field("name", $.identifier),
      field("constraint", optional($.template_constraint)),
      field("default", optional($.template_default)),
    ),

    template_constraint: $ => seq("extends", $._expression),

    template_default: $ => seq("=", $._expression),

    identifier_or_member_expression: $ => prec(0, choice(
      $.identifier,
      $.member_expression,
    )),

    identifier: $ => choice(
      $.builtin_type,
      $.plain_identifier,
      $.backticked_identifier,
    ),

    builtin_type: $ => choice(
      "numeric",
      "integer",
      "float",
      "int64",
      "int32",
      "int16",
      "int",
      "safeint"	,
      "uint8",
      "uint32",
      "uint16",
      "uint8",
      "float32",
      "float64",
      "decimal",
      "decimal128",
      "plainDate",
      "plainTime",
      "utcDateTime",
      "offsetDateTime",
      "duration",
      "bytes",
      "string",
      "boolean",
      "null",
      "Array",
      "Record",
      "unknown",
      "void",
      "never",
    ),

    plain_identifier: $ => /[a-zA-Z_][a-zA-Z0-9_$]*/,

    backticked_identifier: $ => seq(
      "`",
      repeat(choice(
        $.backticked_identifier_fragment,
        $.escape_sequence,
      )),
      "`",
    ),

    backticked_identifier_fragment: $ => token.immediate(/[^`\\]+/),

    member_expression: $ => seq(
      field("base", $.identifier),
      repeat1(seq(".", field("member", $.identifier))),
    ),

    _literal: $ => prec(1, choice(
      $._string_literal,
      $.boolean_literal,
      $._numeric_literal,
    )),

    boolean_literal: $ => choice("true", "false"),

    _numeric_literal: $ => choice(
      $.decimal_literal,
      $.hex_integer_literal,
      $.binary_integer_literal,
    ),

    decimal_literal: $ => token(
      seq(
        choice(
          seq(optional(choice("-", "+")), "0"),
          seq(optional(choice("-", "+")), /[1-9]/, /\d*/)
        ),
        optional(seq(".", /\d+/)),
        optional(seq("e", optional(/[+-]/), /\d+/))
      )
    ),

    hex_integer_literal: $ => token(seq("0x", /[0-9a-fA-F]+/)),
    binary_integer_literal: $ => token(seq("0b", /[01]+/)),

    _string_literal: $ => choice(
      $.quoted_string_literal,
      $.triple_quoted_string_literal,
    ),

    quoted_string_literal: $ => seq(
      '"',
      repeat(choice(
        $.quoted_string_fragment,
        $.escape_sequence,
      )),
      '"',
    ),

    triple_quoted_string_literal: $ => seq(
      '"""',
      repeat(choice(
        $.triple_quoted_string_fragment,
        $.escape_sequence,
      )),
      '"""',
    ),

    escape_sequence: $ => token.immediate(seq(
      '\\',
      /(\"|\\|r|n|t|`)/,
    )),

    quoted_string_fragment: _ => token.immediate(/[^"\\\r\n]+/),
    triple_quoted_string_fragment: _ => token.immediate(/[^"\\]+/),

    _comment: $ => choice(
      $.single_line_comment,
      $.multi_line_comment,
    ),

    single_line_comment: $ => token(seq("//", /[^\r\n]*/)),
    multi_line_comment: $ => token(seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")),
  },
})
