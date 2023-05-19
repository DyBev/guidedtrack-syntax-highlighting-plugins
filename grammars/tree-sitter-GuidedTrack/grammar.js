module.exports = grammar({
	name: 'GuidedTrack',
	externals: $ => [
		$._newline,
		$._indent,
		$._dedent,
		$._string_start,
		$._string_content,
		$._string_end,
		$._comment,
		']',
		')',
		'}',
	],
	rules: {
		source_file: $ => repeat($._definition),

		_definition: $ => choice(
			$.variable_definition,
			$._function_definition,
			$._keyword_definition,
			$._command_definition,
			$.plain_text,
		),

		_suite: $ => choice(
			seq( $._indent, $.block ),
		),

		_block_start: $ => seq(
			$._newline,
			$._indent
		),

		_block_end: $ => seq(
			$._dedent
		),

		block: $ => seq(
			$._block_start,
			repeat($._definition),
			$._block_end
		),

		//command definitions

		_command_definition: $ => choice(
//			$.confirm_command_definition,
//			$.component_command_definition,
//			$.click_command_definition,
//			$.blank_command_definition,
//			$.multiple_command_definition,
//			$.quit_command_definition,
//			$.other_command_definition,
//			$.shuffle_command_definition,
//			$.yaxis_command_definition,
//			$.xaxis_command_definition,
//			$.trendline_command_definition,
//			$.clear_command_definition,
//			$.email_command_definition,
//			$.body_command_definition,
//			$.cancel_command_definition,
//			$.login_command_definition,
//			$.navigation_command_definition,
//			$.randomize_command_definition,
//			$.group_command_definition,
//			$.return_command_definition,
//			$.everytime_command_definition,
//			$.share_command_definition,
//			$.events_command_definition,
//			$.startup_command_definition,
//			$.settings_command_definition,
//			$.success_command_definition,
//			$.error_command_definition,
//			$.throwaway_command_definition,
//			$.page_command_definition,
//			$.reset_command_definition,
//			$.html_command_definition,
//			$.list_command_definition,
//			$.type_command_definition,
//			$.before_command_definition,
//			$.after_command_definition,
			$.save_command_definition,
		),
//
//		confirm_command_definition: $ => '*confirm',
//		component_command_definition: $ => seq(
//			'*component',
//			field( 'component_block', $.block )
//		),
//		click_command_definition: $ => seq(
//			'*click',
//			field( 'click_block', $.block )
//		),
//		blank_command_definition: $ => '*blank',
//		multiple_command_definition: $ => '*multiple',
//		quit_command_definition: $ => '*quit',
//		other_command_definition: $ => '*other',
//		shuffle_command_definition: $ => '*shuffle',
//		yaxis_command_definition: $ => '*yaxis',
//		xaxis_command_definition: $ => '*xaxis',
//		trendline_command_definition: $ => '*trendline',
//		clear_command_definition: $ => '*clear',
//		email_command_definition: $ => '*email',
//		body_command_definition: $ => '*body',
//		cancel_command_definition: $ => '*cancel',
//		login_command_definition: $ => '*login',
//		navigation_command_definition: $ => '*navigation',
//		randomize_command_definition: $ => '*randomize',
//		group_command_definition: $ => '*group',
//		return_command_definition: $ => '*return',
//		everytime_command_definition: $ => '*everytime',
//		share_command_definition: $ => '*share',
//		events_command_definition: $ => seq(
//			'*events',
//			field( 'events_block', $.block )
//		),
//		startup_command_definition: $ => seq(
//			'*startup',
//			field( 'startup_block', $.block )
//		),
//		settings_command_definition: $ => '*settings',
//		success_command_definition: $ => seq(
//			'*success',
//			field( 'success_block', $.block)
//		),
//		error_command_definition: $ => seq(
//			'*error',
//			field( 'error_block', $.block )
//		),
//		throwaway_command_definition: $ => '*throwaway',
//		page_command_definition: $ => seq(
//			'*page',
//			field( 'page_block', $.block )
//		),
//		reset_command_definition: $ => '*reset',
//		html_command_definition: $ => seq(
//			'*html',
//			field( 'html_block', $.block )
//		),
//		list_command_definition: $ => seq(
//			'*list',
//			optional( seq(
//				':',
//				choice(
//					'expandable',
//					'ordered'
//				),
//			)),
//		),
//		type_command_definition: $ => seq(
//			'*type:',
//			choice(
//				'text',
//				'paragraph',
//				'number',
//				'checkbox',
//				'slider',
//				'calendar',
//			),
//		),
//		before_command_definition: $ => seq(
//			'*before:',
//			$._expression
//		),
//		after_command_definition: $ => seq(
//			'*after:',
//			$._expression
//		),
		save_command_definition: $ => seq(
			'*save:',
			$._expression
		),
//
		//function definitions

		_function_definition: $ => choice(
			$.if_function_definition,
			$.while_function_definition,
			$.for_function_definition,
			$.question_function_definition
		),

		if_function_definition: $ => seq(
			'*if:',
			field( 'condition', seq(
				$._expression,
				optional(
					seq(
						$._operator,
						$._expression
					)
				)
			)),
			field( 'if_block',$.block )
		),

		while_function_definition: $ => seq(
			'*while:',
			field( 'condition', seq(
				$._expression,
				optional(
					seq(
						$._operator,
						$._expression
					)
				)
			)),
			field('while_block', $.block)
		),

		for_function_definition: $ => seq(
			'*for:',
			field('condition', seq(
				$._expression,
				optional(
					seq(
						$._operator,
						$._expression
					)
				)
			)),
			field('for_block',$.block)
		),

		question_function_definition: $ => seq(
			'*question:',
			field('question', seq(
				repeat($._expression),
			)),
			//field('question_block', $.block)
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
			$.number,
			$.question,
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
		question: $ => /[A-Za-z_?]+/,

		plain_text: $ => /[A-Za-z_]+/,

		number: $ => /\d+/
	}
});
