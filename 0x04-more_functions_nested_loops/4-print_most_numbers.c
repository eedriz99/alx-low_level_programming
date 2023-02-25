#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints most numbers from 0 t0 9 except 2 and 4
 *
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i + '0');
		}

		_putchar('\n');

		return (0);
	}
}
