#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter.
 * @array: The array to work with.
 * @size: size of the array to work with.
 * @action:  is a pointer to the function you need to use
 * Return: Just Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	if (array == NULL || action == NULL)

	{
		return;
	}

	while (size-- > 0)

	{
		action(*array);
		array++;
	}
}
