# C++ DSA Practice Repository

This repository contains beginner-friendly C++ implementations of common data structures and algorithms problems.

The repository has now been reorganized into clear topic-based folders with consistent, descriptive file names and `.cpp` extensions.

---

## Repository Structure

```text
Cpp-practice/
├── arrays/
│   ├── sorting/
│   │   ├── bubble_sort.cpp
│   │   ├── merge_sort.cpp
│   │   └── quick_sort.cpp
│   └── problems/
│       ├── buy_or_sell_stock.cpp
│       ├── contains_duplicate.cpp
│       ├── find_missing_number_in_array.cpp
│       ├── longest_increasing_subarray.cpp
│       ├── product_of_array_except_self.cpp
│       └── sum_of_array_except_self.cpp
├── strings/
│   ├── find_the_maximum_nesting_depth.cpp
│   ├── greatest_odd_in_string.cpp
│   ├── largest_odd_number_in_string.cpp
│   ├── largest_palindromic_substring.cpp
│   ├── remove_outermost_parenthesis.cpp
│   ├── reverse_every_word_in_string.cpp
│   └── string_rotation.cpp
├── linked_list/
│   └── singly_linked_list.cpp
├── recursion_dp/
│   ├── power_by_recursion.cpp
│   └── stair_climbing.cpp
└── README.md
```

---

## Topic Overview

### 1) Array Sorting
Implemented core comparison-based sorting algorithms:
- **Bubble Sort**
- **Merge Sort**
- **Quick Sort**

Location: `arrays/sorting/`

### 2) Array Problems
Practice solutions for common array interview questions:
- Contains duplicate check
- Best day to buy/sell stock (maximum profit)
- Missing number in a sequence
- Longest increasing subarray
- Product of array except self
- Sum of array except self

Location: `arrays/problems/`

### 3) String Problems
String manipulation and parsing tasks:
- String rotation check
- Reverse every word in a string
- Remove outermost parentheses
- Maximum nesting depth of parentheses
- Greatest odd digit in string
- Largest odd number from a numeric string
- Largest palindromic substring (current implementation)

Location: `strings/`

### 4) Linked List
Custom singly linked list implementation with insertion, deletion, search, and print helpers.

Location: `linked_list/`

### 5) Recursion / DP Basics
- Power calculation using iterative/recursive-style idea
- Stair climbing simulation

Location: `recursion_dp/`

---

## Naming Convention Applied

To make the repo clean and scalable, files now follow:
- **lowercase**
- **snake_case**
- explicit **`.cpp` extension**

Example:
- `Bubble sort` → `arrays/sorting/bubble_sort.cpp`
- `String Rotation` → `strings/string_rotation.cpp`

---

## How to Compile and Run

From repository root, compile any file with `g++`:

```bash
g++ -std=c++17 arrays/sorting/quick_sort.cpp -o quick_sort
./quick_sort
```

Another example:

```bash
g++ -std=c++17 strings/string_rotation.cpp -o string_rotation
./string_rotation
```

---

## Notes

- These programs are focused on learning and practice.
- Some files may be intentionally simple or brute-force to illustrate concepts first.
- Future improvements can include:
  - Standardized input/output format
  - Time and space complexity comments per file
  - Unit tests for each problem

---

## Contribution / Personal Progress

This is a personal DSA learning repository, but suggestions for cleaner implementations and optimizations are always welcome.
