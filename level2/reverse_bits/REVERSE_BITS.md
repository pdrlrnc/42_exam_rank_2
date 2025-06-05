# Assignment: reverse_bits

**Expected files**: `reverse_bits.c`  
**Allowed functions**: *(none)*

---

## 📝 Description

Write a function that takes a **byte**, reverses it **bit by bit**, and returns the result.

---

## 🧠 Function Prototype

```c
unsigned char reverse_bits(unsigned char octet);
```

---

## 💡 Example

```
1 byte
----------
0010 0110    (input)
   ||   
   \/
0110 0100    (output)
```

Each bit in the input byte should be flipped to the opposite position:
- The first bit becomes the last,
- The second becomes the second-to-last,
- And so on.

---

