(identifier_or_member_expression) @type

[
  "import"
  "using"
  "namespace"
  "model"
  "is"
  "extends"
  "valueof"
  "scalar"
  "interface"
  "op"
  "enum"
  "alias"
  "dec"
  "fn"
  "extern"
] @keyword

[
  "("
  ")"
  "{"
  "}"
  "<"
  ">"
  "["
  "]"
] @punctuation.bracket

[
  ","
  ";"
  "."
  ":"
] @punctuation.delimiter

[
  "|"
  "&"
  "="
  "..."
] @operator

"?" @punctuation.special

[
  (single_line_comment)
  (multi_line_comment)
] @comment

[
  (quoted_string_literal)
  (triple_quoted_string_literal)
] @string

(boolean_literal) @boolean

[
  (decimal_literal)
  (hex_integer_literal)
  (binary_integer_literal)
] @number

(escape_sequence) @string.escape

(builtin_type) @type.builtin

"@" @attribute

(decorator name: (identifier_or_member_expression) @attribute)
(augment_decorator_statement name: (identifier_or_member_expression) @attribute)

(using_statement module: (identifier_or_member_expression) @module)

(namespace_statement name: (identifier_or_member_expression) @module)

(model_statement name: (identifier) @type)

(model_property name: (identifier) @property)

(scalar_statement name: (identifier) @type)

(interface_statement name: (identifier) @type)

(enum_statement name: (identifier) @type)

(enum_member name: (identifier) @constant)

(operation_statement name: (identifier) @function)

(template_parameter name: (identifier) @type)

(alias_statement name: (identifier) @type)

(decorator_declaration_statement name: (identifier) @attribute)

(function_parameter name: (identifier) @variable.parameter)

(operation_signature_declaration (model_property name: (identifier) @variable.parameter))
