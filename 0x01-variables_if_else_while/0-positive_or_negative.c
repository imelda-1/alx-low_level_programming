#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Determines if a number is negative, positive or zero
 * Return: always 0(success)
 */
int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	if
	{
		printf("%i is zero\n", n);
	}
	return (0);
}
