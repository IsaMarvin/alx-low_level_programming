#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: type int minimum size
 * @max: type int maximum size
 * Return: NULL if malloc fails or min > max
 */
int *array_range(int min, int max)
{
	int *p;
	int x;

	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (x = 0; min <= max; x++, min++)
		*(p + x) = min;

	return (p);
}
