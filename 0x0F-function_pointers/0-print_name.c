#include <stdio.h>
#include "main.h"

/**
 * print_name - Prints Name
 * @name: The Name to prints
 * @f: Pointer to name
 */
void print_name(char *name, void (*f)(char *name))
{
	printf("%s\n", f(name));
}
