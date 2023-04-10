#include "main.h"
/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to the number to change
 * @index: index of the bit to clear
 *
 * return: On success, returns 1. If 'n' is NULL or 'index' is greater
 * than 63 (the maximum bit index for an unsigned long integer),
 * returns -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63 || !n)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
