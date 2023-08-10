#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - Function that copies a string.
 * @dest: string
 * @src: string
 * @n: number of chars to copy over
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)

{
	int a = 0;
	int b = 0;

	while (a != n)
	{
		dest[a] = src[b];

		if (src[a] == '\0')
		{
			dest[b] = '\0';
			break;
		}
		a++;
		b++;
	}
	while (b != n)
		dest[b++] = '\0';

	return (dest);
}
