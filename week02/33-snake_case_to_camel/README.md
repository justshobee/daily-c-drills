# snake_case_to_camel

**Assignment name :** snake_case_to_camel  
**Expected files :** snake_case_to_camel.c  
**Allowed functions:** write

---

Write a program that converts a snake_case string (first arg) to CamelCase and prints it followed by newline.

```
$> ./snake_case_to_camel 'hello_world' | cat -e
HelloWorld$
```

---

## Tests

```bash
./snake_case_to_camel 'hello_world'
# HelloWorld
```

```bash
./snake_case_to_camel 'foo_bar_baz'
# FooBarBaz
```

```bash
./snake_case_to_camel 'hello'
# Hello
```

```bash
./snake_case_to_camel 'one_two_three_four'
# OneTwoThreeFour
```

```bash
./snake_case_to_camel 'a_b_c'
# ABC
```

```bash
./snake_case_to_camel 'my_variable_name'
# MyVariableName
```

```bash
./snake_case_to_camel 'already_camel_case'
# AlreadyCamelCase
```

```bash
./snake_case_to_camel ''
# empty
```
