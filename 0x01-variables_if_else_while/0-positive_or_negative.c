#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 *main- this is the main function body
 *
 *Description: 'programs check if an integer is positive, negative or zero'
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	else
	{
	printf("%d is zero\n", n);
	}
	return (0);
}
