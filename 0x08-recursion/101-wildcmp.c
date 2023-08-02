#include "main.h"
#include <stdio.h>

/**
 * wildcmp -  Compares 2 strings
 * @s1: type char str
 * @s2: type char str wildcmp.
 * Return: 1 if str identical if not 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0' && *s2 == '*' && *(s2 + 1) != '\0')
		return (0);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
