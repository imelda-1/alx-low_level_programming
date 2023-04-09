#include "main.h"
/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int mask;

	for (i = 63; i >= 0; i--)
	{
		mask = 1UL << i;
		_putchar((n & mask) ? '1' : '0');
	}
}
