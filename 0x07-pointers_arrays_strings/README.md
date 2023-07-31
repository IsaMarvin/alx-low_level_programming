# 0x07-pointers_arrays_strings

This directory contains C programs that focus on pointers, arrays, and strings. 👨‍💻🔢📜

## Task 0: `0-memset.c` 💻

**Description:** The `0-memset.c` program defines a function `_memset` that fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b`. It returns a pointer to the memory area `s`. 🧼

- Prototype: `char *_memset(char *s, char b, unsigned int n);`
- Standard Library Function: `memset`

## Task 1: `1-memcpy.c` 💻

**Description:** The `1-memcpy.c` program defines a function `_memcpy` that copies `n` bytes from the memory area `src` to the memory area `dest`. It returns a pointer to `dest`. 📝

- Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);`
- Standard Library Function: `memcpy`

## Task 2: `2-strchr.c` 💻

**Description:** The `2-strchr.c` program defines a function `_strchr` that searches for the first occurrence of the character `c` in the string `s`. It returns a pointer to the first occurrence of `c` in `s` or `NULL` if the character is not found. 🔍

- Prototype: `char *_strchr(char *s, char c);`
- Standard Library Function: `strchr`

## Task 3: `3-strspn.c` 💻

**Description:** The `3-strspn.c` program defines a function `_strspn` that gets the length of a prefix substring. It returns the number of bytes in the initial segment of `s` that consist only of bytes from `accept`. 📏

- Prototype: `unsigned int _strspn(char *s, char *accept);`
- Standard Library Function: `strspn`

## Task 4: `4-strpbrk.c` 💻

**Description:** The `4-strpbrk.c` program defines a function `_strpbrk` that searches a string for any of a set of bytes. It locates the first occurrence in the string `s` of any of the bytes in the string `accept`. It returns a pointer to the byte in `s` that matches one of the bytes in `accept` or `NULL` if no such byte is found. 🔎

- Prototype: `char *_strpbrk(char *s, char *accept);`
- Standard Library Function: `strpbrk`

## Task 5: `5-strstr.c` 💻

**Description:** The `5-strstr.c` program defines a function `_strstr` that finds the first occurrence of the substring `needle` in the string `haystack`. The terminating null bytes (`\0`) are not compared. It returns a pointer to the beginning of the located substring or `NULL` if the substring is not found. 🔍📜

- Prototype: `char *_strstr(char *haystack, char *needle);`
- Standard Library Function: `strstr`

## Task 6: `7-print_chessboard.c` 💻

**Description:** The `7-print_chessboard.c` program defines a function `print_chessboard` that prints a chessboard represented as a 2D array of characters. ♟️♖📦

- Prototype: `void print_chessboard(char (*a)[8]);`

## Task 7: `8-print_diagsums.c` 💻

**Description:** The `8-print_diagsums.c` program defines a function `print_diagsums` that prints the sum of the two diagonals of a square matrix of integers. 🔢➕🔢

- Prototype: `void print_diagsums(int *a, int size);`

## Task 8: `100-set_string.c` 💻

**Description:** The `100-set_string.c` program defines a function `set_string` that sets the value of a pointer to a char. 🆕🎩🔤

- Prototype: `void set_string(char **s, char *to);`

### Happy Coding 🚀
