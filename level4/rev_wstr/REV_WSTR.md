# Assignment: rev_wstr

**Expected files**: `rev_wstr.c`  
**Allowed functions**: `write`, `malloc`, `free`

---

## 📝 Description

Write a program that takes a string as a parameter, and prints its words in **reverse order**.

A **"word"** is a part of the string bounded by spaces and/or tabs, or the begin/end of the string.

If the number of parameters is different from `1`, the program will display a newline `\n`.

In the tested parameters:

- There won't be **additional spaces** at the beginning or end of the string.
- Words will always be separated by **exactly one space**.

---

## 💡 Examples

```bash
$> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
ironic? it Isn't gatherings. love I But people! hate You$
$> ./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr "Wingardium Leviosa" | cat -e
Leviosa Wingardium$
$> ./rev_wstr | cat -e
$
```
