# Sugar Documentation

## Grammar Definitions

~$code(antlr){antlr/Sugar.g4}

TODO: integrate following
`destructuring_assignment` = **`LBRACKET`** (**`VAR`** **`COMMA`**)\* **`VAR`** **`RBRACKET`** **`EQUAL`** `expression`
`lambda` = **`LPAREN`** `parameter_list` **`RPAREN`** **`ARROW`** `block`

## Code Examples

### Classes

~$code(sugar){programs/test_programs/classes.sgr}

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

## Windows Guides

Because developing under windows can be a pain in the ass at times, this section includes a few brief guides on installing and setting up everything that might cause trouble i.e. everything that is not just a simple setup.exe.

~$md{docs/contents/windows_shit/InstallBoost.md}

~$md{docs/contents/windows_shit/InstallLLVM.md}
