#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: determine the lenght of the line
 */

void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
		a = 0;
		while (a < n)
		{
			b = 0;
			while (b < a)
			{
				_putchar(' ');
				b++;
			}
			_putchar('\\');
			_putchar('\n');
			a++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
