#include "main.h"

/**
 * print_rev - a function that prints a string in reverse
 *
 * @s: string to be reversed.
 * Return: void always.
 */

void print_rev(char *s)
{
	int i = _strlen(s);

	while (s[i])
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
