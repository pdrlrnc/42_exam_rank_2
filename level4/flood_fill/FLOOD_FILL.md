# Assignment: flood_fill

**Expected files**: `*.c`, `*.h`  
**Allowed functions**: *(none)*

---

## 📝 Description

Write a function that takes:
- A `char **` as a 2D array of characters,
- A `t_point` as the dimensions of this array,
- And a `t_point` as the starting point.

Starting from the given `begin` `t_point`, the function fills an entire zone by replacing characters inside with the character `'F'`.

A **zone** is a group of the same character delimited **horizontally** and **vertically** by other characters or the array boundary.  
The flood fill **does not fill diagonally**.

---

### Function Prototype

```c
void flood_fill(char **tab, t_point size, t_point begin);
```

---

### Struct Definition

```c
typedef struct s_point
{
    int x;
    int y;
} t_point;
```

---

## 💡 Example

```c
// test_main.c
#include "test_functions.h"
#include "flood_fill.h"

int main(void)
{
    char **area;
    t_point size = {8, 5};
    t_point begin = {2, 2};
    char *zone[] = {
        "1 1 1 1 1 1 1 1",
        "1 0 0 0 1 0 0 1",
        "1 0 1 0 0 0 0 1",
        "1 0 1 0 0 0 0 1",
        "1 1 1 1 1 1 1 1",
    };

    area = make_area(zone);
    print_tab(area);
    flood_fill(area, size, begin);
    putc('\n');
    print_tab(area);
    return (0);
}
```

### 💻 Output

```bash
$> gcc flood_fill.c test_main.c test_functions.c -o flood_fill; ./flood_fill
1 1 1 1 1 1 1 1
1 0 0 0 1 0 0 1
1 0 1 0 0 0 0 1
1 0 1 0 0 0 0 1
1 1 1 1 1 1 1 1

1 1 1 1 1 1 1 1
1 F F F 1 0 0 1
1 F 1 F F F F 1
1 F 1 F F F F 1
1 1 1 1 1 1 1 1
```
