# 0x06. C - More pointers, arrays, and strings :computer::rocket:
This directory contains C programs that demonstrate various string and array manipulation functions. The programs cover tasks such as string concatenation, string comparison, string copying, and more.

## Programs 📜

## Task 0: Concatenate Strings 🧬🧬
- **File:** `` 0-strcat.c``
- **Prototype:** `char *_strcat(char *dest, char *src);`
- **Description:** This function appends the `src` string to the `dest` string, overwriting the terminating null byte (`\0`) at the end of `dest`, and then adds a terminating null byte. It returns a pointer to the resulting string `dest`.

## Task 1: Concatenate with Limited Bytes 🧬🧬
- **File:** `1-strncat.c`
- **Prototype:** `char *_strncat(char *dest, char *src, int n);`
- **Description:** This function is similar to the `_strcat` function but with the added feature that it will use at most `n` bytes from `src`. If `src` does not contain a null byte in the first `n` bytes, the result will not be null-terminated.

## Task 2: Copy a String 📝
- **File:** `2-strncpy.c`
- **Prototype:** `char *_strncpy(char *dest, char *src, int n);`
- **Description:** This function works exactly like the `strncpy` function from the standard library. It copies at most `n` characters from the `src` string into the `dest` string. If `src` is shorter than `n` characters, the remaining characters in `dest` are filled with null bytes (`\0`).

## Task 3: String Comparison 🔃
- **File:** `3-strcmp.c`
- **Prototype:** `int _strcmp(char *s1, char *s2);`
- **Description:** This function compares two strings `s1` and `s2` and returns an integer value indicating their relationship. It returns:
  - 0 if `s1` and `s2` are equal,
  - a negative value if `s1` is less than `s2` in lexicographical order, and
  - a positive value if `s1` is greater than `s2` in lexicographical order.

## Task 4: Reverse Array of Integers ↺
- **File:** `4-rev_array.c`
- **Prototype:** `void reverse_array(int *a, int n);`
- **Description:** This function reverses the content of an array of integers. It takes an array `a` with `n` elements, and it modifies the array `a` in place, reversing its content.

## Task 5: Convert Lowercase Letters to Uppercase 🌟🔠
- **File:** `5-string_toupper.c`
- **Prototype:** `char *string_toupper(char *);`
- **Description:** This function changes all lowercase letters of a string to uppercase. It takes a string as input and returns a pointer to the resulting uppercase string.

## Task 6: Capitalize Words in a String 🎩🗣️
- **File:** `6-cap_string.c`
- **Prototype:** `char *cap_string(char *);`
- **Description:** This function capitalizes all words of a string. Words are separated by spaces, tabs, new lines, commas, semicolons, periods, exclamation marks, question marks, double quotes, opening parentheses, and closing parentheses. It takes a string as input and returns a pointer to the resulting string with capitalized words.

## Task 7: Encode a String to "1337" 🔢🔢🔢
- **File:** `7-leet.c`
- **Prototype:** `char *leet(char *);`
- **Description:** This function encodes a string into "1337" (leet speak). The encoding rules are as follows:
  - Letters 'a' and 'A' are replaced by '4'.
  - Letters 'e' and 'E' are replaced by '3'.
  - Letters 'o' and 'O' are replaced by '0'.
  - Letters 't' and 'T' are replaced by '7'.
  - Letters 'l' and 'L' are replaced by '1'.
  - Other characters are unchanged.
  It takes a string as input and returns a pointer to the resulting leet speak string.

## Task 8: Encode a String using Rot13 🔠➡️🔡
- **File:** `100-rot13.c`
- **Prototype:** `char *rot13(char *);`
- **Description:** This function encodes a string using ROT13 encryption. ROT13 is a simple letter substitution cipher where each letter in the input is shifted by 13 positions in the alphabet. It takes a string as input and returns a pointer to the resulting encrypted string.

## Task 9: Print an Integer 🔢🖨️
- **File:** `101-print_number.c`
- **Prototype:** `void print_number(int n);`
- **Description:** This function prints an integer `n`. It uses only the `_putchar` function to print the number.

## Task 10: Add Two Numbers ➕➕
- **File:** `103-infinite_add.c`
- **Prototype:** `char *infinite_add(char *n1, char *n2, char *r, int size_r);`
- **Description:** This function adds two numbers represented as strings and stores the result in a buffer `r`. The size of the buffer is specified by `size_r`. The function returns a pointer to the result string. If the result cannot be stored in the buffer due to its size, the function returns `0`.

## Task 11: Print Buffer 📜➡️🖨️
- **File:** `103-print_buffer.c`
- **Prototype:** `void print_buffer(char *b, int size);`
- **Description:** This function prints the content of a buffer `b` of size `size`. It prints 10 bytes per line, showing the position of the first byte of the line in hexadecimal. Each line also shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space. If the byte is a printable character, it is printed; otherwise, a period (.) is printed. Each line ends with a new line `\n`. If `size` is 0 or less, the output is a new line only `\n`.

Please note that the `_putchar` function used in some files is a custom function used to print characters.

Enjoy coding! 🚀
