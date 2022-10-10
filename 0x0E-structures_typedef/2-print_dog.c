#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Print dog
 * @d: Structure d
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: %s\n", "(nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->owner == NULL)
	{
		printf("Owner: %s\n", "(nil)");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
	if (d->age < 0)
	{
		printf("Age: %s\n", "(nil)");
	}
	else
	{
		printf("Age: %.6f", d->age);
	}
}
