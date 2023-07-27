#include "main.h"

/**
 * string_toupper - Function that reverse the content of an array of int
 * @a: Type int
 * Return: string a
 */
char *string_toupper(char *a)
{
	int x;

	for (x = 0; a[x] != '\0'; x++)
	{
		if (a[x] > 96 && a[x] < 123)
		{
			a[x] -= 32;
		}
	}
	return (a);
}
