# Assignment: ft_list_foreach

**Expected files**: `ft_list_foreach.c`, `ft_list.h`  
**Allowed functions**: *(none)*

---

## 📝 Description

Write a function that takes a list and a function pointer, and applies this function to each element of the list.

### Function prototype:

```c
void ft_list_foreach(t_list *begin_list, void (*f)(void *));
```

The function pointed to by `f` will be used as follows:

```c
(*f)(list_ptr->data);
```

---

## 📄 ft_list.h

You must use the following structure and submit it as a file called `ft_list.h`:

```c
typedef struct s_list
{
    struct s_list *next;
    void *data;
} t_list;
```
