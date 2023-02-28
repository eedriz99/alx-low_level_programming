#include <stdio.h>

/**
 * reset_to_98 - resets the value at any given address to 98.
 * @n: the variable whose address is to be accessed and value changed.
 * Return:  Always 0.
 */

void reset_to_98(int *n)
{
	*n = 98;
	return (0);
}
