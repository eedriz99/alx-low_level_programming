#include <stdio.h>

/**
 * main - This is the entry point
 *
 * Description: 'This is the main function'
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}

	putchar('\n');

	return (0);
}
