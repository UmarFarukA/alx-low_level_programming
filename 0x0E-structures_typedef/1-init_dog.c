#include "main.h"
void int_dog(struct dog *d, char *name, float age, char *owner);

/**
 * init_dog - Initializing the dog
 * @d: The dog struct
 * @name: Dog name
 * @age: The dog age
 * @owner: The dog owner
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
