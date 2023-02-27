#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swap the values of two integers
 * @a: The first integer
 * @b: The second integer
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
