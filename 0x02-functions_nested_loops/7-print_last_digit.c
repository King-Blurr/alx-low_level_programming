#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 *
 * Return: Always return 0 if successful
 * @i: number
 */

int print_last_digit(int i)
{
	int k, j;

	k = i % 10;
	if (k < 0)
	{
		k = -k;
	}
	j = '0' + k;
	_putchar(j);
	return (k);
}
