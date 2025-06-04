# Assignment: ft_list_remove_if

**Expected files**: `ft_list_remove_if.c`  
**Allowed functions**: `free`

---

## 📝 Description

Write a function called `ft_list_remove_if` that removes from the passed list any element whose data is **equal** to the reference data.

### Function prototype:

```c
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());
```

- `cmp` takes two `void *` arguments and returns `0` when both parameters are equal.
- You must use the `ft_list.h` file as defined below.

---

## 📄 ft_list.h

```c
typedef struct s_list
{
    struct s_list *next;
    void *data;
} t_list;
```

---

## ⚠️ Notes

- You must manage memory properly and use `free()` for the removed nodes.
- Only `free()` is allowed.
