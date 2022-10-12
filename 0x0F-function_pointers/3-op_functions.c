#include "3-calc.h"

int op_add(inta, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Add two numbers
 * @a: First number
 * @b: Second number
 * Return: Sum of two numbers
 */
int op_add(int a, int b)
{
	retunr (a + b);
}

/**
 * op_sub - Subtract two integers
 * @a: First integer
 * @b: Second Integer
 * Return: Diff of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul _ Multiply two integers
 * @a: First integer
 * @b: Second Integer
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide two integers
 * @a: First number
 * @b: Second NUmber
 * Return: Result of a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Find the modulus of two integers
 * @a: First number
 * @b: Second Number
 * Return: Remain of a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
