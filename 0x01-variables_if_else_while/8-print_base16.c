#include <stdio.h>

/**
 * main - This is the entry point
 *
 * Description: 'This is the main funbction'
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int digit;
	int letter;

	for (digit = 48; digit <= 57; digit++)
	{
		putchar(digit);
	}

	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');
	return (0);
}
