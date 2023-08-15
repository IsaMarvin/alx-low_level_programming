#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free dogs.
 * @d: type pointer struct data.
 * Return: 0.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
