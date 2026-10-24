# Strings in C++

Solutions to string-handling assignment questions in C++ (Assignments 9 and 11),
written as coursework during my BS Software Engineering at COMSATS University Abbottabad.

## Problem index

Each file is a standalone program for one question.

### Assignment 9

| File | What it solves |
| ---- | -------------- |
| `assign 9 ques 1.cpp` | Subtract two matrices entered by the user |
| `assign 9 ques 1 a.cpp` | Subtract two hardcoded 3×3 matrices (with a matrix display helper) |
| `assign 9 ques 2.cpp` | Multiply two hardcoded 3×3 matrices |
| `assign 9 ques 3.cpp` | Find the row and column of a number inside a hardcoded 3×3 matrix |
| `assign 9 ques 4.cpp` | Search a value in a sorted 4×4 matrix (row-range check + binary search per row) |
| `assign 9 ques 5.cpp` | Print additive sequences that sum to the entered number (recursion) |
| `assign 9 ques 6.cpp` | Split a string by a user-given delimiter character |
| `assign 9 ques 7.cpp` | Compute string length without using `strlen` |
| `assign 9 ques 8.cpp` | Print a character-frequency table for the entered string |
| `assign 9 ques 9.cpp` | Append "ly" to words ending in "ing", otherwise append "ing" |
| `assign 9 ques 10.cpp` | Find the first occurrence (index) of a substring |
| `assign 9 ques 14.cpp` | Caesar-cipher encryption with a random shift (1–10) and random direction |
| `assign 9 ques 16.cpp` | LCM of up to 10 numbers (recursive GCD, folded pairwise) |
| `assign 9 ques 17.cpp` | Check whether a number's binary representation is a palindrome |
| `assign 9 ques 18.cpp` | Map a month number (1–12) to its month name |
| `assign 9 ques 19.cpp` | Map a digit (0–9) to its English word |
| `assign 9 ques 20.cpp` | Evaluate an infix arithmetic expression (`+ − * /`, parentheses) with two stacks |

### Assignment 11

| File | What it solves |
| ---- | -------------- |
| `assign 11 ques 11.cpp` | Find the last occurrence (index) of a substring |
| `assign 11 ques 12.cpp` | Find all occurrence indexes of a substring |
| `assign 11 ques 13.cpp` | Caesar-cipher encryption with a user-entered shift |

## How to compile and run

Each file is standalone — pick one and compile it with a standard C++ compiler
such as `g++`. File names contain spaces, so quote them:

```bash
g++ "assign 9 ques 1.cpp" -o q1
./q1
```
