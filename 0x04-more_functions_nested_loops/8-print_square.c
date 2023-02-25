#include "main.h"

/**
 * print_square - prints # in square shape
 * @size: square size
 * Return: 0.
 */

void print_square(int size)
{
	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			int n;

			for (n = 0; n < size; n++)
			{
				_putchar('#' * size);
				_putchar('\n');
			}
		}
	}
	else
	{
		_putchar('\n');
	}

	_putchar('\n');
	return (0);
}
