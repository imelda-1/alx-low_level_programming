#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - main block
 * Description: get a random number and check it
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
