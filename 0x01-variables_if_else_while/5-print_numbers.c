#include <stdio.h>

/**
 * main - This is the entry point
 *
 * Description: 'This is the main function'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		printf("%d", digit);
	}

	putchar('\n');

	return (0);
}
