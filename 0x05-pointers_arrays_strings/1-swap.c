#include "main.h"
#include <stdio.h>
/**
 * swap_int - Swap the value of two integers.
 * @a: Type int pointer
 * @b: Type int pointer
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = c;
	*a = *b;
	*b = c;
}
