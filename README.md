# C - Sorting Algorithms & Big O

A project focused on implementing classic sorting algorithms in C as part of the
**Holberton School Low-Level Programming** curriculum.

This project demonstrates a solid understanding of algorithm design, time
complexity analysis using **Big O notation**, pointer manipulation, and working
with arrays and doubly linked lists in **ISO C90**.

---

## 🧠 Learning Objectives

At the end of this project, you should be able to:

- Explain how different sorting algorithms work
- Analyze and compare algorithms using **Big O notation**
- Choose the most appropriate sorting algorithm for a given input
- Implement sorting algorithms efficiently in C
- Work with arrays and doubly linked lists at a low level

---

## 📁 Project Files

| File | Purpose |
|-----|--------|
| `sort.h` | Header file containing all function prototypes and data structures |
| `print_array.c` | Prints an array of integers |
| `print_list.c` | Prints a doubly linked list of integers |
| `0-bubble_sort.c` | Bubble Sort algorithm for arrays |
| `0-O` | Big O notations for Bubble Sort |
| `1-insertion_sort_list.c` | Insertion Sort for doubly linked lists |
| `1-O` | Big O notations for Insertion Sort |
| `2-selection_sort.c` | Selection Sort algorithm for arrays |
| `2-O` | Big O notations for Selection Sort |
| `3-quick_sort.c` | Quick Sort algorithm (Lomuto partition) |
| `3-O` | Big O notations for Quick Sort |

> **Note:** `main.c` files are used only for local testing and are not pushed to the repository.

---

## ⏱️ Big O Notation

Each sorting algorithm includes its time complexity analysis:

- **Best case**
- **Average case**
- **Worst case**

Example (Bubble Sort – `0-O`):
O(n)  
O(n^2)  
O(n^2)

---

## ✨ Features

- Implements multiple classic sorting algorithms from scratch
- Prints the array or list **after each swap**, as required
- Written in **C (ISO C90)**
- Compiled with strict flags
- Fully compliant with **Betty style**
- No global variables
- No use of standard library functions (`printf`, `puts`, etc.)

---

## 🧱 Data Structures


```c
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;  
```
## 🔤 Implemented Sorting Algorithms

| Algorithm      | Data Structure     | Description                                            |
| -------------- | ------------------ | ------------------------------------------------------ |
| Bubble Sort    | Array              | Swaps adjacent elements if they are in the wrong order |
| Insertion Sort | Doubly Linked List | Builds the sorted list one node at a time              |
| Selection Sort | Array              | Selects the smallest element and places it correctly   |
| Quick Sort     | Array              | Divide-and-conquer using Lomuto partition scheme       |
## ⚙️ Requirements

- Language: **C**
    
- Allowed editors: `vi`, `vim`, `emacs`
    
- Compilation:
    
    `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o sort`
    
- No global variables
    
- Maximum **5 functions per file**
    
- All files end with a new line
    
- All header files are include-guarded
 
 
 ## 🚀Usage Example 
```c
#include "sort.h"

int main(void)
{
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	size_t n = sizeof(array) / sizeof(array[0]);

	bubble_sort(array, n);
	return (0);
}

```

## 📝 Contributors

This project was developed and tested by:

- **Reem Abdulhadi Alshehri**
- **Badryah Almalki**
