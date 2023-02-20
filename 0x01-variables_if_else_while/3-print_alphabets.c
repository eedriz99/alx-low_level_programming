#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'this is the main function'
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int lCase;
	int uCase;

	for (lCase = 'a'; lCase <= 'z'; lCase++)
	{
		putchar(lCase);
	}

	for (uCase = 'A'; uCase <= 'Z'; uCase++)
	{
		putchar(uCase);
	}

	putchar('\n');

	return (0);
}
