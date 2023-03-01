#include "main.h"

/**
 * put2 - funtion that prints the letters of a sring at 2 steps
 * @str: string to be operated on.
 * Return: void always.
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i += 2;
	}

	_printchar('\n');
}
