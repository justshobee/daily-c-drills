# longest_common_prefix

**Assignment name :** longest_common_prefix  
**Expected files :** longest_common_prefix.c  
**Allowed functions:** write

---

Write a program that takes N followed by N strings and prints the longest common prefix among them, then newline. If none, print empty line.

```
$> ./longest_common_prefix 3 flower flow flight | cat -e
fl$
```

---

## Tests

### Basic cases

```bash
./longest_common_prefix 3 flower flow flight
# fl
```

```bash
./longest_common_prefix 3 dog racecar car
# empty
```

```bash
./longest_common_prefix 4 test testing tester tested
# test
```

### Single word

```bash
./longest_common_prefix 1 hello
# hello
```

### Full match

```bash
./longest_common_prefix 3 abc abc abc
# abc
```

### One char only

```bash
./longest_common_prefix 3 apple art air
# a
```

### Empty prefix

```bash
./longest_common_prefix 2 abc xyz
# empty
```

### Different sizes

```bash
./longest_common_prefix 5 inter internet internal interval into
# int
```

### Prefix becomes smaller progressively

```bash
./longest_common_prefix 4 programming program progress project
# pro
```

### Case sensitivity

```bash
./longest_common_prefix 3 Hello Help helium
# empty if case-sensitive
```

### Long identical prefix

```bash
./longest_common_prefix 3 abcdefgh abcdefxyz abcdef123
# abcdef
```

### Edge case

```bash
./longest_common_prefix 0
# empty
```

### Small tricky tests

```bash
./longest_common_prefix 3 aa aaa aaaa
# aa
```

```bash
./longest_common_prefix 3 x xyz xy
# x
```

```bash
./longest_common_prefix 3 prefix pre prevent
# pre
```

```bash
./longest_common_prefix 3 same same123 sameabc
# same
```
