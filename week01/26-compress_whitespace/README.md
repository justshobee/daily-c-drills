# compress_whitespace

**Assignment name :** compress_whitespace  
**Expected files :** compress_whitespace.c  
**Allowed functions:** write

---

Write a program that replaces any sequence of whitespace (space or tab) with a single space and prints the result followed by newline.

```
$> ./compress_whitespace 'a b	c' | cat -e
a b c$
```

---

## Tests

```bash
./compress_whitespace 'hello   world'
# hello world
```

```bash
./compress_whitespace 'one	two		three'
# one two three
```

```bash
./compress_whitespace '   leading spaces'
# leading spaces
```

```bash
./compress_whitespace 'trailing spaces   '
# trailing spaces 
```

```bash
./compress_whitespace 'mix 	 of	 tabs and   spaces'
# mix of tabs and spaces
```

```bash
./compress_whitespace 'already single spaces'
# already single spaces
```

```bash
./compress_whitespace 'no spaces'
# no spaces
```
