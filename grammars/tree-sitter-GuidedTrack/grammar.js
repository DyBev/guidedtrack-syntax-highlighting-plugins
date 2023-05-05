module.exports = grammar({
	name: 'GuidedTrack',
	externals: $ => [
		$._indent,
		$._dedent,
	],
	rules: {
		source_file: $ => repeat($._definition),

		_definition: $ => choice(
			$.variable_definition,
			$._function_definition,
			$._keyword_definition,
		),

		_block: $ => seq(
			$._indent,
			repeat($._definition),
			$._dedent
		),

		//function definitions

		_function_definition: $ => choice(
			$.if_function_definition,
			$.while_function_definition
		),

		if_function_definition: $ => seq(
			'*if:',
			repeat(
				choice(
					$._expression,
					$._operator
				)
			),
		),

		while_function_definition: $ => seq(
			'*while:',
			repeat(
				choice(
					$._expression,
					$._operator
				)
			)
		),

		//variable definition

		variable_definition: $ => seq(
			'>>',
			repeat($._expression),
			'=',
			$._type
		),

		// keyword definition

		_keyword_definition: $ => choice(

		),

		// type definition

		_type: $ => choice(
			$.string_type,
			$.array_type,
			$.dictionary_type
		),

		string_type: $ => seq(
			'"',
			repeat($._expression),
			'"'
		),

		array_type: $ => seq(
			'[',
			repeat(seq(
				$._type,
				optional($.comma_divider)
			)),
			']',
		),

		comma_divider: $ => ",",

		dictionary_type: $ => seq(
			'{',
			repeat(seq(
				$.dictionary_pair,
				optional($.comma_divider)
			)),
			'}',
		),

		dictionary_pair: $ => seq(
			$._type,
			'->',
			$._type
		),

		//expressions

		_expression: $ => choice(
			$.identifier,
			$.number
		),

		// operators

		_operator: $ => choice(
			$.in_operator,
			$.equal_operator,
			$.moreThan_operator,
			$.lessThan_operator
		),

		lessThan_operator: $ => '<',
		moreThan_operator: $ => '>',
		equal_operator: $ => '=',
		in_operator: $ => 'in',

		identifier: $ => /[A-Za-z_]+/,

		number: $ => /\d+/
	}
});
