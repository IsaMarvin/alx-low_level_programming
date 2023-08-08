#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings.
 * @s1: type char str.
 * @s2: type char str
 * Return: Null on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *pstr = NULL;
	unsigned int len;
	unsigned int x, y, z, zz;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0'; x++)
		;
	for (y = 0; s2[y] != '\0'; y++)
		;
	len = x + y + 1;
	pstr = malloc(len * sizeof(char));

	if (pstr == NULL)
		return (NULL);

	for (z = 0; z < x; z++)
	{
		pstr[z] = s1[z];
	}
	for (zz = 0; zz < y; z++, zz++)
	{
		pstr[z] = s2[zz];
	}
	pstr[len] = s2[zz];
	return (pstr);
}
