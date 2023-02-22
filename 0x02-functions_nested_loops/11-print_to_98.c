#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print numbers to 98 both left and right
 *
 * @n: starting value
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%i, ", n);
		if (n > 98)
		{
			n--;
		}
		else
		{
			n++;
		}
	}
	printf("98\n");
}
