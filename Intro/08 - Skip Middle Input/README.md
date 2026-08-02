# Problem 08

## Problem Statement

Program that will take three integer numbers from keyboard but assign only the first and last inputs to variables and skip any assignment of the middle one.

| Sample Input | Sample Output |
| :----------: | :------------ |
| `20 50 100` | First Value = 20, Last Value = 100 |
| `33 75 22` | First Value = 33, Last Value = 22 |

> Difficulty: ★★

---

## Solution

📄 **C Program:** [`solution.c`](./solution.c)

---

## Explanation

- Read three integers from the keyboard.
- Store only the first and last values.
- Skip the middle value using `%*d` in `scanf()`.
- Print the first and last values.

---

## Time Complexity

**O(1)**

## Space Complexity

**O(1)**