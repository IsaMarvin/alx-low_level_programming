

# 0x0B. C - malloc, free ✨

This directory houses a collection of C programs that demonstrate the usage of dynamic memory allocation and deallocation using `malloc` and `free` functions. Each program addresses different memory-related tasks. Explore each task to enhance your understanding of memory management in C.



## Task 0 - Create an Array of Chars 📚

**File:** 0-create_array.c  
📝 **Description:** Creates an array of chars, initializes it with a specific char, and returns a pointer to the array. Returns NULL if size is 0 or if allocation fails.  
💼 **Prototype:** `char *create_array(unsigned int size, char c);`

---

## Task 1 - Duplicate a String 📝

**File:** 1-strdup.c  
📝 **Description:** Returns a pointer to a newly allocated space in memory containing a copy of the input string. Returns NULL if `str` is NULL or if allocation fails.  
💼 **Prototype:** `char *_strdup(char *str);`

---

## Task 2 - Concatenate Two Strings ➕

**File:** 2-str_concat.c  
📝 **Description:** Concatenates two strings and returns a pointer to the newly allocated memory. If NULL is passed, treats it as an empty string. Returns NULL if allocation fails.  
💼 **Prototype:** `char *str_concat(char *s1, char *s2);`

---

## Task 3 - Allocate a 2D Array 🌟

**File:** 3-alloc_grid.c  
📝 **Description:** Returns a pointer to a 2-dimensional array of integers, where each element is initialized to 0. Returns NULL if width or height is 0 or negative, or if allocation fails.  
💼 **Prototype:** `int **alloc_grid(int width, int height);`

---

## Task 4 - Free a 2D Array ♻️

**File:** 4-free_grid.c  
📝 **Description:** Frees a 2-dimensional grid created by `alloc_grid` function.  
💼 **Prototype:** `void free_grid(int **grid, int height);`

---

## Task 5 - Concatenate All Arguments 🔗

**File:** 100-argstostr.c  
📝 **Description:** Concatenates all arguments of the program into a single string, where each argument is followed by a newline character. Returns NULL if `ac` is 0 or if allocation fails.  
💼 **Prototype:** `char *argstostr(int ac, char **av);`

---

## Task 6 - Split a String into Words 📝➡️🔤

**File:** 101-strtow.c  
📝 **Description:** Splits a string into words and returns an array of strings (words). Each element of the array contains a single word, null-terminated. Returns NULL if `str` is NULL, empty, or if allocation fails.  
💼 **Prototype:** `char **strtow(char *str);`

---
### Detailed Explanations 📑
For detailed explanations of each step and the commands used, you can refer to the commit descriptions in the directory's commit history.
Each commit message contains a clear description of the actions taken, including the relevant commands used in the terminal.
