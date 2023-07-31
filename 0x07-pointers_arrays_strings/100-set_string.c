#include "main.h"
#include <stdio.h>

/**
 * set_string - Set the value of a pointer to a char.
 * @s: type char
 * @to: type char
 * Return: Always 0.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
