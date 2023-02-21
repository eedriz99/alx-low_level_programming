#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This is the main function'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int myChar;

	for (myChar = 48; myChar <= 57; myChar++)
	{
		putchar(myChar);
	}

	putchar('\n');

	return (0);
}
