# levenshtein_distance

**Assignment name :** levenshtein_distance  
**Expected files :** levenshtein_distance.c  
**Allowed functions:** write

---

Write a program that takes two strings and prints the Levenshtein edit distance between them followed by newline. (Use straightforward DP).

```
$> ./levenshtein_distance kitten sitting | cat -e
3$
```

---

## Tests

```bash
./levenshtein_distance kitten sitting
# 3
```

```bash
./levenshtein_distance hello hello
# 0
```

```bash
./levenshtein_distance abc ''
# 3
```

```bash
./levenshtein_distance '' abc
# 3
```

```bash
./levenshtein_distance '' ''
# 0
```

```bash
./levenshtein_distance saturday sunday
# 3
```

```bash
./levenshtein_distance a b
# 1
```

```bash
./levenshtein_distance abc abcd
# 1
```

```bash
./levenshtein_distance abcdef abc
# 3
```

```bash
./levenshtein_distance intention execution
# 5
```
