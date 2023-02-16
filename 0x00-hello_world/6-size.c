#include <stdio.h>
/**
 * main - A program that prints various computer types
 * description: 'print computer types'
 * Return: always 0
 */
int main(void)
{
	printf("size of char: %li byte(s)\n", sizeof(char));
	printf("size of an int: %li byte(s)\n", sizeof(int));
	printf("size of a long int: %li byte(s)\n", sizeof(long int));
	printf("size of a long long int: %li byte(s)\n", sizeof(long long int));
	printf("size of a float: %li byte(s)\n", sizeof(float));
	return (0);
}
