#include"main.h"

/**
 * swap_int - swaps the values of two integer variables
 *
 * @a: variable a.
 * @b: variable b.
 *
 * Return: always (void).
 */

void swap_int(int *a, int *b)
{
	int placeholder_variable;

	placeholder_variable = *a;
	*a = *b;
	*b = placeholder_variable;
}
