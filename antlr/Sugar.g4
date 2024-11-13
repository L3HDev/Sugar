grammar Sugar;

program: (class_declaration | function_declaration | statement)*;

statement: (
		(
			declaration
			| expression
			| assignment
			| return_statement
			| break_statement
			| continue_statement
			| list_pushback
			| list_insertion
			| list_removal
		) SEMICOLON
	)
	| (if_expression | loop_expression);

block: LCURL statement* RCURL;

declaration: class_init | function_declaration;

function_declaration:
	var_declaration (LPAREN parameter_list RPAREN block)?;

class_init: var_declaration (LPAREN argument_list RPAREN)?;

var_declaration: (variable_type | list_declaration) VAR;

list_declaration:
	variable_type ((LISTDECL)+ | (LISTDECL INTEGER)+);

class_declaration:
	CLASS user_defined_type LCURL (
		PUBLIC class_member_segment
		| PRIVATE class_member_segment
	)* RCURL;

assignment: (basic_assignment | default_assignment) expression;

basic_assignment: (declaration | VAR) EQUAL;

default_assignment: (declaration | VAR) DEFAULT_ASSIGN;

return_statement: RETURN (expression)?;

break_statement: BREAK;

continue_statement: CONTINUE;

expression: pipeline_expression;

pipeline_expression: elvis_expression (PIPE elvis_expression)*;

elvis_expression:
	boolean_or_expression (ELVIS boolean_or_expression)?;

boolean_or_expression:
	boolean_and_expression (
		or_logic_operator boolean_and_expression
	)*;

boolean_and_expression:
	comparison_expression (
		and_logic_operator comparison_expression
	)*;

comparison_expression:
	additive_expression (comparison_symbol additive_expression)*
	| multi_comparison_expression;

multi_comparison_item: (
		multi_comparison_object_access
		| multi_comparison_optional_object_access
	)? multi_comparison_or_expression;

multi_comparison_or_expression:
	multi_comparison_and_expression (
		or_logic_operator multi_comparison_and_expression
	)*;

multi_comparison_and_expression:
	comparison_symbol boolean_or_expression (
		and_logic_operator multi_comparison_item
	)*
	| LPAREN multi_comparison_item RPAREN;

multi_comparison_object_access: ACCESS object_access_chain;

multi_comparison_optional_object_access:
	OPT_ACCESS optional_object_access_chain;

multi_comparison_expression:
	additive_expression MULTI_CMP_ARROW LBRACK (
		multi_comparison_item
		| LPAREN multi_comparison_item RPAREN
	)+ RBRACK;

additive_expression:
	multiplicative_expression (
		(PLUS | MINUS) multiplicative_expression
	)*;

multiplicative_expression:
	exponentiation_expression (
		(MUL | DIV | MOD) exponentiation_expression
	)*;

exponentiation_expression:
	unary_expression (POW unary_expression)*;

unary_expression: (NOT | MINUS)? post_fix_expression;

post_fix_expression: (
		object_access_chain
		| optional_object_access_chain
	) (INCREMENT | DECREMENT)?;

object_access_chain:
	primary_expression (ACCESS primary_expression)*;

optional_object_access_chain:
	primary_expression (OPT_ACCESS primary_expression)*;

primary_expression:
	function_call
	| LPAREN expression RPAREN
	| formatted_string
	| list_access
	| switch_expression
	| terminal_expression;

terminal_expression:
	VAR
	| LAST_ASSIGNED
	| INTEGER
	| DECIMAL
	| STRING
	| BOOL_FALSE
	| BOOL_TRUE;

switch_expression:
	SWITCH LPAREN expression RPAREN LCURL case_list (
		DEFAULT block
	)? RCURL;

case_list: (CASE expression block (ARROW)?)+;

list_access: VAR list_at_access;

list_pushback: VAR PUSHBACK expression;

list_insertion: VAR PUSHBACK expression list_at_access;

list_removal: VAR NOT list_at_access;

list_at_access: (AT expression)+;

if_expression:
	IF LPAREN (assignment COMMA)* expression RPAREN block (
		ELSE LPAREN expression RPAREN block
	)* (ELSE block)?;

loop_expression: while_loop | for_loop;

while_loop: WHILE LPAREN expression RPAREN block;

for_loop:
	FOR LPAREN assignment SEMICOLON expression SEMICOLON expression RPAREN block;

parameter_list: (
		variable_type VAR (EQUAL terminal_expression)? (
			COMMA variable_type VAR (EQUAL terminal_expression)?
		)*
	)?;

class_member_segment:
	LCURL (
		class_constructor
		| class_operator_override
		| function_declaration
        | var_declaration SEMICOLON
		| assignment SEMICOLON
	)* RCURL;

class_constructor: LPAREN parameter_list RPAREN block;

class_operator_override:
	class_overrideable_operator LPAREN parameter_list RPAREN block;

class_overrideable_operator:
	EQUAL
	| PLUS
	| MINUS
	| INCREMENT
	| DECREMENT
	| MUL
	| DIV
	| MOD
	| DEQUAL
	| NEQUAL
	| LESS
	| LESSEQUAL
	| GREATER
	| GREATEREQUAL
	| AND
	| OR;

variable_type:
	BOOLTYPE
	| INTTYPE
	| DECIMALTYPE
	| STRINGTYPE
	| ANYTYPE
	| user_defined_type;

function_call: VAR LPAREN argument_list RPAREN;

argument_list: (expression (COMMA expression)*)?;

user_defined_type: VAR;

comparison_symbol:
	LESS
	| LESSEQUAL
	| GREATER
	| GREATEREQUAL
	| DEQUAL
	| NEQUAL;

formatted_string: 'f' STRING;

and_logic_operator: OR | WORD_OR;

or_logic_operator: AND | WORD_AND;

//
// Terminals
// 
//

//
// Operands in precedence order
// 
//
INCREMENT: '++';
DECREMENT: '--';

NOT: '!';

POW: '^';

MUL: '*';
DIV: '/';
MOD: '%';

PLUS: '+';
MINUS: '-';

DEQUAL: '==';
NEQUAL: '!=';
LESS: '<';
LESSEQUAL: '<=';
GREATER: '>';
GREATEREQUAL: '>=';

MULTI_CMP_ARROW: '->';

AND: '&&';
WORD_AND: 'and';

OR: '||';
WORD_OR: 'or';

EQUAL: '=';
DEFAULT_ASSIGN: '?=';
ELVIS: '?:';

PUSHBACK: '<<';

AT: '@';

ACCESS: '.';
OPT_ACCESS: '?.';

ARROW: '=>';

PIPE: '|>';

//
// 
//
// 
//

SEMICOLON: ';';
LPAREN: '(';
RPAREN: ')';
LCURL: '{';
RCURL: '}';
LBRACK: '[';
RBRACK: ']';
RETURN: 'return';
BREAK: 'break';
CONTINUE: 'continue';
LISTDECL: '#';
IF: 'if';
ELSE: 'else';
WHILE: 'while';
FOR: 'for';
COMMA: ',';
CLASS: 'class';
PUBLIC: 'public';
PRIVATE: 'private';
INTTYPE: 'int';
DECIMALTYPE: 'dec';
STRINGTYPE: 'string';
BOOLTYPE: 'bool';
BOOL_TRUE: 'true';
BOOL_FALSE: 'false';
ANYTYPE: 'any';
SWITCH: 'switch';
CASE: 'case';
DEFAULT: 'default';
COLON: ':';
LAST_ASSIGNED: '$';

//
// Regex types
// 
//
INTEGER: [0-9]+;
DECIMAL: [0-9]* '.' [0-9]+;
VAR: [a-zA-Z_][a-zA-Z0-9_]*;
STRING: '"' ( ~["])* '"';

//
// Whitespace and comments
// 
//
WS: [ \t\r\n\u000C]+ -> skip;
COMMENT: '/*' .*? '*/' -> skip;
LINE_COMMENT: '//' ~[\r\n]* -> skip;