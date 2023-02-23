#include "main.h"

/**
 * print_line - draw straight lines
 * @n: determines the lenght of the line
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		a = 1;
		while (a <= n)
		{
			_putchar('_');
			a++;
		}
	}
	_putchar('\n');
}
