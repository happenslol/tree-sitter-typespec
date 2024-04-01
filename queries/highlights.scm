"import" @keyword
"model" @keyword
"interface" @keyword
"using" @keyword
(string_literal) @string
(interface_statement name: (identifier) @type)
(model_statement name: (identifier) @type)
(decorator) @attribute
(argument name: (identifier) @parameter)
(op name: (identifier) @function)
(reference_type) @type
(primitive_type) @type.builtin
(field name: (identifier) @variable.member)
