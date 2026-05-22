# find_all_indexes

**Assignment name :** find_all_indexes  
**Expected files :** find_all_indexes.c  
**Allowed functions:** write

---

Write a program that finds all starting indexes (0-based) of the second arg in the first arg and prints them separated by spaces, then newline. If none, print newline.

```
$> ./find_all_indexes 'ababa' 'aba' | cat -e
0 2$
```

---

## Tests

```bash
./find_all_indexes 'ababa' 'aba'
# 0 2
```

```bash
./find_all_indexes 'hello world' 'o'
# 4 7
```

```bash
./find_all_indexes 'aaaa' 'aa'
# 0 1 2
```

```bash
./find_all_indexes 'hello' 'xyz'
# empty
```

```bash
./find_all_indexes 'abcabc' 'abc'
# 0 3
```

```bash
./find_all_indexes 'aaa' 'a'
# 0 1 2
```

```bash
./find_all_indexes 'hello' 'hello'
# 0
```

```bash
./find_all_indexes 'abcdef' 'f'
# 5
```

```bash
./find_all_indexes '' 'a'
# empty
```
