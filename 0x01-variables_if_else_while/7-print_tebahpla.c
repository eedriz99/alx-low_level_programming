#include <stdio.h>

/**
 * main- entry point
 *
 * Description: 'this is the main function'
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
