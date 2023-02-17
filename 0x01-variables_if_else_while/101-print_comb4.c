#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Description: write a program that prints all possible
 * different combination of two digits
 * numbers must be separated ,, followed by space
 * the two digits must be different
 * 01 and 10 are considered the same combination of two digits 1 and 0
 * print only the smallest combination of two digits
 * numbers should be printed in ascending order , with two digits
 * you can only use putchar function
 * (every other function (printf, puts, etc..) is forbidden)
 * you can only use putchar five times in your code
 * you are not allowed to use any variable of type char
 * all your code should be in the main function
 * Return: 0
 */
int main(void)
{
	int c;
	int d;
	int e = 0;

	while (e < 10)
	{
		d = 0;
		while (d < 10)
		{
			c = 0;
			while (c < 10)
			{
				if (c != d && e < d && d < c)
				{
					putchar('0' + e);
					putchar('0' + d);
					putchar('0' + c);

					if (c + d + e != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			d++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
