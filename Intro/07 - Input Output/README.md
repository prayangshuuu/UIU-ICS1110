# Problem 07

## Problem Statement

Program that will receive the values of an integer, a floating point number, and a character from the keyboard and print those values.

| Sample Input | Sample Output |
| :----------: | :------------ |
| `5`<br>`3.141593`<br>`A` | The integer value: 5<br>The floating point value: 3.141593<br>The character value: A |
| `100` `1.618` `z` | The integer value: 100<br>The floating point value: 1.618000<br>The character value: z |

> Difficulty: ★

---

## Solution

📄 **C Program:** [`solution.c`](./solution.c)

---

## Explanation

- Include the `stdio.h` header to use the `scanf()` and `printf()` functions.
- Read an integer, a floating point number, and a character from the keyboard.
- Print the values using the appropriate format specifiers:
    - `%d` for `int`
    - `%f` for `float`
    - `%c` for `char`
- `return 0;` indicates that the program executed successfully.

---

## Time Complexity

**O(1)**

## Space Complexity

**O(1)**