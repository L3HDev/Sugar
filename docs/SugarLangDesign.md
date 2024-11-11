# Sugar Language

## 1. Token List

| Token Name | Token Definition |
|-|-|
| SEMICOLON | ; |
| STRING | ".*" |
| VAR | \[a-zA-Z_][a-zA-Z0-9_]* |
| DOUBLE | [[0-9]*][.]\(0-9)+ |
| INTEGER | ^\d+$ |
| DEQUAL | == |
| NEQUAL | != |
| LESS | < |
| LESSEQUAL | <= |
| GREATER | > |
| GREATEREQUAL | >= |
| EQUAL | = |
| PLUS | + |
| MINUS | - |
| MUL | * |
| DIV | / |
| MOD | % |
| POW | ^ |
| AND | && |
| OR | \|\| |
| NOT | ! |
| LISTDECL | # |
| AT | @ |
| PUSHBACK | << |
| REMOVE | ! |
| LBRACE | [ |
| RBRACE | ] |
| LCURL | { |
| RCURL | } |
| LPAREN | ( |
| RPAREN | ) |
| INTTYPE | int |
| DOUBLETYPE | double |
| STRINGTYPE | string |
| ANYTYPE | any |
| WHILE | while |
| FOR | for |
| IF | if |
| ELSE | else |
| RETURN | return |
| BREAK | break |
| CONTINUE | continue |
| CLASS | class |
| TILDE | ~ |
| COMMA | , |
| ACCESS | . |
| ELVIS | ?: |
| OPT_ACCESS | ?. |
| PIPE | \|> |
| DEFAULT_ASSIGN | ?= |
| ARROW | => |

## 2. Grammar Definitions

TODO: integrate following
`destructuring_assignment` = **`LBRACKET`** (**`VAR`** **`COMMA`**)\* **`VAR`** **`RBRACKET`** **`EQUAL`** `expression`
`default_assignment` = **`VAR`** **`DEFAULT_ASSIGN`** `expression`
`object_access_chain` = **`VAR`** (**`ACCESS`** **`VAR`**)+
`optional_object_access_chain` = **`VAR`** (**`OPT_ACCESS`** **`VAR`**)+
`switch_expression` = **`SWITCH`** **`LPAREN`** `expression` **`RPAREN`** **`LBRACE`** (**`CASE`** `expression` **`COLON`** `expression`)+ (**`DEFAULT`** **`ARROW`** `expression`)? **`RBRACE`**
`lambda` = **`LPAREN`** `parameter_list` **`RPAREN`** **`ARROW`** `block`

### Primary Rules

|||
|-|-|
| `program` | (`class_declaration` \| `function_declaration` \| `statement`)* |
| `statement` | (`expression` \| `declaration` \| `assignment` \| `if_expression` \| `loop_expression` \| `return_statement` \| `break_statement` \| `continue_statement` \| `list_pushback` \| `list_insertion` \| `list_removal`) **`SEMICOLON`** |
| `block` | **`LCURL`** `statement`* **`RCURL`** |
| `declaration` | (`variable_type` \| `list_declaration`) **`VAR`** |
| `assignment` | (`declaration` \| **`VAR`**) **`EQUAL`** `expression` |
| `return_statement` | **`RETURN`** (`expression`)? |
| `break_statement` | **`BREAK`** |
| `continue_statement` | **`CONTINUE`** |

### Expression Rules (TODO: Revisit precedence climb here, some non-terminals are not suited for this)

|||
|-|-|
| `expression` | `pipeline_expression` \| `list_access` |
| `pipeline_expression` |  `elvis_expression` (**`PIPE`**  `elvis_expression`)* |
| `elvis_expression` | `default_expression` (**`ELVIS`** `default_expression`)? |
| `default_expression` | `boolean_or_expression` (**`DEFAULT`** `boolean_or_expression`)? |
| `boolean_or_expression` | `boolean_and_expression` (**`OR`** `boolean_and_expression`)* |
| `boolean_and_expression` | `comparison_expression` (**`AND`** `comparison_expression`)* |
| `comparison_expression` | `additive_expression` ((**`DEQUAL`** \| **`NEQUAL`** \| **`LESS`** \| **`LESSEQUAL`** \| **`GREATER`** \| **`GREATEREQUAL`**) `additive_expression`)* |
| `additive_expression` | `multiplicative_expression` ((**`PLUS`** \| **`MINUS`**) `multiplicative_expression`)* |
| `multiplicative_expression` | `exponentiation_expression` ((**`MUL`** \| **`DIV`** \| **`MOD`**)  `exponentiation_expression`)* |
| `exponentiation_expression` | `unary_expression` (**`POW`** `unary_expression`)* |
| `unary_expression` | (**`NOT`** \| **`MINUS`**)? `primary_expression` |
| `primary_expression` | **`VAR`** \| **`INTEGER`** \| **`DOUBLE`** \| **`STRING`** \| `function_call` \| `list_access` \| `lambda` |

### List Operations

|||
|-|-|
| `list_declaration` | `variable_type` **`LISTDECL`**  (**`INTEGER`**)? |
| `list_access` | **`VAR`** **`LPAREN`** `expression` **`RPAREN`** |
| `list_pushback` | **`VAR`** **`PUSHBACK`** `expression` |
| `list_insertion` | **`VAR`** **`PUSHBACK`** `expression` **`AT`** **`LPAREN`** `expression` **`RPAREN` |
| `list_removal` | **`VAR`** **`REMOVE`** **`LPAREN`** `expression` **`RPAREN`** |
| `list_comparison` | **`VAR`** (**`LESS`** \| **`LESSEQUAL`** \| **`GREATER`** \| **`GREATEREQUAL`** \| **`DEQUAL`** \| **`NEQUAL`**) `expression` |

### Control Structures

|||
|-|-|
| `if_expression` | **`IF`** **`LPAREN`** `scoped_initialization`? `expression` **`RPAREN`** `block` (**`ELSE`** **`LPAREN`** `expression` **`RPAREN`** `block` \| **`ELSE`** `block`)* |
| `scoped_initialization` | `variable_declaration` **`EQUAL`** `expression` **`TILDE`** **`LPAREN` (`expression` (**`OR` `expression`)*) **`RPAREN`** |
| `loop_expression` | `while_loop` \| `for_loop` |
| `while_loop` | **`WHILE`** **`LPAREN`** `expression` **`RPAREN`** `block` |
| `for_loop` | **`FOR`** **`LPAREN`** `assignment` **`SEMICOLON`** `expression` **`SEMICOLON`** `expression` **`RPAREN`** `block` |

### Function and Class Declarations

|||
|-|-|
| `function_declaration` | `variable_type` **`VAR`** **`LPAREN`** `parameter_list` **`RPAREN`** `block` |
| `parameter_list` | (`variable_type` **`VAR` (**`COMMA` `variable_type` **`VAR`**)*)? |
| `class_declaration` | **`CLASS`** **`VAR`** `block` |

### Variable Type

|||
|-|-|
| `variable_type` | **`INTTYPE`** \| **`DOUBLETYPE`** \| **`STRINGTYPE`** \| **`ANYTYPE`** \| `user_defined_type` |
| `function_call` | **`VAR`** **`LPAREN`** `argument_list` **`RPAREN`** |
| `argument_list` | (`expression` (**`COMMA`** `expression`)*)? |
| `user_defined_type` | **`VAR`** |

## 3. Precedence Order

1. Primary (`primary_expression`)
1. Unary (`unary_expression`)
1. Exponentiation (**`POW`**)
1. Multiplicative (**`MUL`**, **`DIV`**, **`MOD`**)
1. Additive (**`PLUS`**, **`MINUS`**)
1. Comparison (`<`, `<=`, `>`, `>=`, `==`, `!=`)
1. Boolean AND (`&&`)
1. Boolean OR (`||`)
1. Elvis (`?:`)
1. Pipeline (`|>`)
1. List Access (`@`)
1. List Push Back (`<<`)
1. List Insertion (`<<@`)
1. List Removal (`!@`)
1. Assignment (`=`)
1. Scoped Initialization in `if` (`~`)
1. Return, Break, Continue
1. Block and Statement
1. Class Declarations

## 4. Code Examples

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
