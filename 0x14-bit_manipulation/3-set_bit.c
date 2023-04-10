#include "main.h"

/**
 * set_bit - gets bit on position `index`
 * @n: an unsigned int number
 * @index: position of the bit
 * Return: 1 on success or -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
