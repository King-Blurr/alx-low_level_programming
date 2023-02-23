#include "main.h"

/**
 * print_square: print squares using #
 *
 *@size: the size of the square
 */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		i = 1;
		while (size >= i)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
