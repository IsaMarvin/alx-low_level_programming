#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the lenght of a prefix substring.
 * @s: type char returns the number of bytes
 * @accept: bytes from accept
 * Return: return x
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int str;
	int x, y, z;

	x = 0;
	while (s[x] != '\0')
	{
		z = 0;
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				z = 1;
			}
		}
		y = 0;
		if (z == 0)
			break;
		str++;
		x++;
	}
	return (x);
}
