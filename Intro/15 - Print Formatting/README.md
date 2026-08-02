# Problem 15

## Problem Statement

Program that will take a floating point number as input from the keyboard and use `printf()` to:

- Print the number right justified within 10 columns.
- Print the number right justified within 2 columns.
- Print the number rounded to two decimal places.
- Print the number rounded to the nearest integer.
- Print the number in exponential notation.

| Sample Input | Sample Output |
| :----------: | :------------ |
| `123.098` | (a) Val: 123.098000<br>(b) Val:123.098000<br>(c) Val:123.10<br>(d) Val:123<br>(e) Val:1.230980e+02 |

> Difficulty: ★★

---

## Solution

📄 **C Program:** [`solution.c`](./solution.c)

---

## Explanation

- Read a floating point number.
- Use different `printf()` format specifiers to display the number in various formats.

---

## Time Complexity

**O(1)**

## Space Complexity

**O(1)**