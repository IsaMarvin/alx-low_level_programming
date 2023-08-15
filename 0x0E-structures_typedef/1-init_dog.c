#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initialize a variable of type struct dog.
 * @d: type struct for dog.
 * @name: type char
 * @age: type float
 * @owner: type char
 * Return: 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
