# itoa_write

**Assignment name :** itoa_write  
**Expected files :** itoa_write.c  
**Allowed functions:** write

---

Write a program that converts the integer (first arg) to its string representation and prints it followed by newline.

```
$> ./itoa_write 42 | cat -e
42$
```

---

## Tests

```bash
./itoa_write 42
# 42
```

```bash
./itoa_write 0
# 0
```

```bash
./itoa_write -1
# -1
```

```bash
./itoa_write -2147483648
# -2147483648
```

```bash
./itoa_write 2147483647
# 2147483647
```

```bash
./itoa_write 1000000
# 1000000
```

```bash
./itoa_write -999
# -999
```
