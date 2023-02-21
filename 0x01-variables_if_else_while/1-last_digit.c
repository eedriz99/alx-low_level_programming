#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main- entry point
 *
 * Description: 'this is the main function of the code'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastDgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	lastDgt = n % 10;
	if (lastDgt > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDgt);
	} else if (lastDgt == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDgt);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDgt);
	}
	return (0);
}
