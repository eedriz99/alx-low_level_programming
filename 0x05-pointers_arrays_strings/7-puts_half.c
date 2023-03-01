#include "main"

/**
 * puts_half - fuction that prints half of the string.
 *
 * @str: string to be halved.
 *
 * Return: void always;
 */

void puts_half(char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}

	int s;

	if (i % 2 == 0)
	{
		s = i / 2;

		while (str[s])
		{
			_putchar(str[s]);
			s++;
		}
	}
	else
	{
		s = (i - 1) / 2;

		while (str[s])
		{
			_putchar(str[s]);
			s++;
		}
	}

	_putchar('\n');
}
