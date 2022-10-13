#ifndef _FUNCTIONS_VARIADIC_H_
#define _FUNCTIONS_VARIADIC_H_
#include <stdarg.h>

/**
 * struct printer - Type for defining printer
 * @symbol: Representing the dat symbol
 * @print: POinter tothe function
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
#endif
