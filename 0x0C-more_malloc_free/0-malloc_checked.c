#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - create array of char.
 * @b: type unsigned int.
 * Return: Pointer of allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *p = NULL;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
