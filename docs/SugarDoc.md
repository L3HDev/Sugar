# Sugar Documentation

## Grammar Definitions

```antlr
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

class_inheritance_list:
    LPAREN user_defined_type (COMMA user_defined_type)* RPAREN;

class_declaration:
  CLASS user_defined_type (class_inheritance_list)? LCURL (
    PUBLIC class_member_segment
    | PROTECTED class_member_segment
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
//

//
// Operands in precedence order
// 
//
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
PROTECTED: 'protected';
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
// 
//
WS: [ \t\r\n\u000C]+ -> skip;
COMMENT: '/*' .*? '*/' -> skip;
LINE_COMMENT: '//' ~[\r\n]* -> skip;
```

TODO: integrate following
`destructuring_assignment` = **`LBRACKET`** (**`VAR`** **`COMMA`**)\* **`VAR`** **`RBRACKET`** **`EQUAL`** `expression`
`lambda` = **`LPAREN`** `parameter_list` **`RPAREN`** **`ARROW`** `block`

## Code Examples

### Classes

```sugar
value = right_hand.getValue() + 1;

class MyClass {
  public {
    () {
      value = 1;
    }
    (int val) {
      value = val;
    }

    =(MyClass right_hand) {
      value = right_hand.getValue() + 1;
    }

    +(MyClass right_hand) {
      value = right_hand.getValue() + value;
    }

    int setValue(int val) {
        value = val;
        return value;
    }

    int getValue() {
        return value;
    }
  }

  private {
    int value = 0;
  }

  protected {
    int protected_value = 10;
  }
}

MyClass myObject();
print(myObject.getValue()); // should return 1
myObject.setValue(100);
print(myObject.getValue()); // should return 100

MyClass my_object2(10);
print(my_object2.getValue()); // should return 10

MyClass my_object3 = myObject + my_object2;
print(my_object3.getValue()); // should return 110

```

### Lists

```sugar
int# numbers;
numbers << 5;           // Push back 5
numbers << 10 @ 0;      // Insert 10 at index 0
numbers !@(1);          // Remove the element at index 1

string#2 two_words;     // list with a max count of 2
two_words << "Hello";
two_words << "World";
two_words << "!";       // Error

if (numbers > 3) {
    print("The list has more than 3 items");
}

double# values;
values << 3.14;
print(values@0);        // Access the first element (prints 3.14)

void processList(int# list) {
    list << 20;
    list!@0;            // Remove the first element
    print("List empty?:", list > 0);
}

processList(numbers);
```

### Scoped Initialization in if Statements

```sugar
if (int temp = getValue() ~ [== 10 || > 5]) {
    print("Temp is either 10 or greater than 5");
} else (temp < 3) {
    print("Temp is less than 3");
} else {
    print("Fallback block");
}
```

### Modulo Operation

```sugar
int result = 10 % 3;  // result is 1
if (result == 1) {
    print("Modulo works correctly");
}
```

### Class and Function Declarations

```sugar
class Person {
    string name;
    int age;

    void setName(string newName) {
        name = newName;
    }

    string getName() {
        return name;
    }
}

Person p;
p.setName("Alice");
print(p.getName());
```

### Loops

```sugar
int i = 0;
while (i < 10) {
    print(i);
    i = i + 1;
}

for (int j = 0; j < 5; j = j + 1) {
    print(j);
}
```

### Implicit Variable Declaration

```sugar
x = 42;  // x is implicitly declared as an integer
```

### Pipeline Operator

```sugar
result = data |> filter |> map |> reduce;
```

### Ternary-like if Expression

```sugar
result = if (x > 0) { "positive" } else { "negative" };
```

### String Interpolation

```sugar
name = "Sugar";
print("Welcome to ${name} language!");
```

### Lambda Function

```sugar
auto square = (x) => {return x * x; };
print(square(5));  // Output: 25
```

### Optional Chaining and Elvis Operator

```sugar
value = obj?.property?.subProperty ?: "default";
```

### Default Assignment (?=)

```sugar
int x;
x ?= 100;  // Assigns 100 only if x is uninitialized
```

### Destructuring Assignment

```sugar
int a, b;
[a, b] = get_coordinates();  // Unpacks values from function
```

### Switch Expression

```sugar
result = switch (x) {
    case 1 -> "One";
    case 2 -> "Two";
    default -> "Other";
};
```

## Misc

### Using Boost 1.82 with GCC on Windows

If you're using GCC instead of Visual Studio on Windows 11 and want to exclude MPI and Python components, here is the streamlined guide to installing Boost.

#### Prerequisites

Ensure you have:

- GCC installed (part of MinGW or MSYS2).
- CMake installed and added to your system PATH.

#### Step 1: Bootstrap Boost

1. Open a terminal (Command Prompt, MSYS2, or Git Bash).
2. Navigate to the Boost directory:

```bash
cd "C:/Program Files/Boost/boost_1_82_0"
```

Run the bootstrap script for GCC:

```bash
bootstrap.bat gcc
```

This will generate the b2.exe tool configured for GCC.

#### Step 2: Build and Install Boost Libraries

Run the following command to build Boost, excluding MPI and Python:

```bash
b2 install -j 8 --prefix="C:/Program Files/Boost/boost_1_82_0" toolset=gcc --without-mpi --without-python cxxstd=17 address-model=64 link=shared threading=multi runtime-link=shared
```

##### Explanation of Options

`-j 8`: Use 8 threads for faster compilation (adjust based on your CPU).
`--prefix`: Specifies the installation directory.
`toolset=gcc`: Use GCC as the compiler.
`--without-mpi --without-python`: Exclude MPI and Python libraries.
`cxxstd=17`: Use the C++17 standard (change if needed).
`address-model=64`: Build for 64-bit (use 32 for 32-bit builds).
`link=shared`: Build shared (dynamic) libraries.
`threading=multi`: Enable multi-threaded libraries.
`runtime-link=shared`: Link against the shared version of the C++ runtime library.

#### Step 3: Verify the Installation

Check that the libraries were installed correctly in:

```plaintext
C:\Program Files\Boost\boost_1_82_0\lib
```

You should see .dll, .lib, and .a files for the Boost libraries.

#### Step 4: Update System PATH (Optional)

If you plan to use shared Boost libraries (.dll files), add the Boost lib directory to your system PATH:

```bash
set PATH=%PATH%;C:\Program Files\Boost\boost_1_82_0\lib
```

This completes the installation of Boost 1.82 with GCC on Windows 11. You can now link these libraries in your C++ projects.
