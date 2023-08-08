#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns *p to new alloc spc in mem, contains cp of str as par.
 * @str: type char memory value.
 * Return: Null if fails or if srt is NULL.
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int x, y;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x] != '\0'; x++)
		;

	p = malloc(x * sizeof(*p) + 1);
	if (p == NULL)
		return (NULL);

	for (y = 0; y < x; y++)
		p[y] = str[y];
	p[y] = '\0';

	return (p);
}
