#include "main.h"

/**
 * print_triangle - print a triangle
 *
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (k = 0; k <= (size - i - 1); k++)
			{
				_putchar(' ');
			}
			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
