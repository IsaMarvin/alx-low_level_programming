#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring.
 * @haystack: type char str
 * @needle: type char sub str
 * Return: haystack or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *all = haystack;
		char *ptt = needle;

		while (*ptt == *haystack && *ptt != '\0' && *haystack != '\0')
		{
			haystack++;
			ptt++;
		}
		if (*ptt == '\0')
			return (all);
		haystack = all + 1;
	}
	return (NULL);
}
