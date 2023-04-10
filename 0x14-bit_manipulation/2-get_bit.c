#include "main.h"

/**
 * get_bit - returns the value of a bit at a given position.
 * @n: number to check bits in
 * @index: position at which to check bit
 *
 * Return: value of the bit, or -1 if failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, pos;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	pos = n & divisor;
	if (pos == divisor)
		return (1);
	return (0);
}
