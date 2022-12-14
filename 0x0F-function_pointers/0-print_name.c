#include "function_pointers.h"

/**
 * print_name - Prints Name
 * @name: The Name to prints
 * @f: Pointer to name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
		f(name);
}
