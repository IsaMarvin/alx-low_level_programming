#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: type char str
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}

/**
 * _check_pal - Check string if is palindrome.
 * @s: type char str
 * @l: type int srtlen var
 * Return: 1 if palindrome 0 if not.
 */

int _check_pal(char *s, int l)
{
	if (l <= 1)
		return (1);
	else if (*s == *(s + l - 1))
	{
		return (_check_pal(s + 1, l - 2));
	}
	else
		return (0);
}

/**
 * is_palindrome - Recurssive funct that checks a palindrome
 * @s: type char str
 * Return: 1 if palindrome 0 if not.
 */

int is_palindrome(char *s)
{
	int l;

	l = _strlen_recursion(s);
	if (l <= 1)
		return (1);
	return (_check_pal(s, l));
}
