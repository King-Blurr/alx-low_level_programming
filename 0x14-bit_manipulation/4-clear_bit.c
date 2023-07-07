#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given position.
 * @n: an unsigned int to set
 *
 * @index: position at which to set bit
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	num = ~(1 << index);
	*n = *n & num;
	return (1);
}
