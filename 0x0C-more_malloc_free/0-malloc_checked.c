#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: size of memory
 * Return: pointer to alllocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *c;

	c = malloc(b);
	if (c == NULL)
		exit(98);
	return (c);
}
