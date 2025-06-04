# Assignment: str_capitalizer

**Expected files**: `str_capitalizer.c`  
**Allowed functions**: `write`

---

## 📝 Description

Write a program that takes one or several strings and, for each argument:

- Capitalizes the **first character** of each word (if it's a letter),
- Puts the **rest in lowercase**,
- Displays the result on the standard output, followed by a `\n`.

A **"word"** is defined as a part of a string delimited either by **spaces/tabs**, or by the **start/end** of the string.  
If a word only has one letter, it must still be capitalized.

---

## ⚠️ If there are no arguments, the program must display a newline `\n`.

---

## 💡 Examples

```bash
$> ./str_capitalizer | cat -e
$
$> ./str_capitalizer "a FiRSt LiTTle TEsT" | cat -e
A First Little Test$
$> ./str_capitalizer "__SecONd teST A LITtle BiT   Moar comPLEX" "    But... This iS not T" \
                     "     Okay, This Is The Last 1239809147801 But Not     The     Least  T" | cat -e
__second Test A Little Bit   Moar Complex$
    But... This Is Not T$
    Okay, This Is The Last 1239809147801 But Not     The     Least  T$
```
