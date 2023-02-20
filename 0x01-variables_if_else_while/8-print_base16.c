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

	for (digit = 0; digit <= 9; digit++)
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
