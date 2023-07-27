#include "main.h"

/**
 * leet - Encode a string into 1337
 * @s: string
 * Return: string
 */

char *leet(char *s)
{
int x, y, z;
char letter[] = "aAeEoOtTlL";
char new[] = "4433007711";

x = 0;
while (s[x] != '\0')
{
	y = 0;
	z = 0;
	while (letter[y] != '\0')
	{
		if (s[x] == letter[y])
		{
			z = y;
			s[x] = new[z];
		}
		y++;
	}
	x++;
}
return (s);
}
