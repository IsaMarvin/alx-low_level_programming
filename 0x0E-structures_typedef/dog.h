#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Django created you a struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: Data structure for holbertn and Django
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

typedef dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
