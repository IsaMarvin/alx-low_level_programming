#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: type char str
 * @src: type char str
 * @n: number of elements to concatenate in
 * Return: pointer to resulting `dest`dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; src[b] != '\0' && n > 0; b++, n--, a++)
	{
		dest[a] = src[b];
	}
	return (dest);
}
