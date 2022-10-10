#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d);

/**
 * print_dog - Print dog
 * @d: Structure d
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("%s","");
	}
	else if (d->name == NULL)
	{
		printf("Name: %s\n", "(nil)");
	}
	else if (d->age == NULL)
	{
		printf("Age: %.1f\n", "(nil)");
	}
	else if (d->owner == NULL)
	{
		printf("Owner: %s\n", "(nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.1f", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
