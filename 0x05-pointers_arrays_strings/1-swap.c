#include"main.h"

/**
 * swap_int - swaps the values of two integer variables
 *
 * @a: variable a.
 * @b: variable b.
 *
 * Return: always 0.
 */

void swap_int(int *a, int *b)
{
	int placeholder_variable;

	placeholder_variable = *a;
	*a = *b;
	*b = placeholder_variable;

	return (0);
}
