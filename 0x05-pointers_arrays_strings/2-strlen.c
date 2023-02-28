#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: the string whose length is to be returned.
 *
 * Return: always string length.
 */

int _strlen(char *s)
{
	int __strlen;

	__strlen = 0;
	while (s[__strlen])
	{
		__strlen++;
	}

	return (__strlen);
}
