#include "main.h"

/**
 * more_numbers - Print 1 to 14 in 10 places
 *
 * Return: 0 always
 */

void more_numbers(void)
{
	int i;

	for (j = 0; j <= 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
	return (0);
}
