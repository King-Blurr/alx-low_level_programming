#include "main.h"

/**
 * print_times_table - display n x table
 * @n: maximum number to be multiplied
 */

void print_times_table(int n)
{
	int a;
	int b;
	int c;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b;
				if (c > 99)
				{
					_putchar((c / 100) + '0');
					_putchar(((c % 100) / 10) + '0');
					_putchar(((c % 100) % 10) + '0');
				}
				if (c > 9)
				{
					_putchar(' ');
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
				}
				else
				{
					if (b != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(c + '0');
				}
				if (b == n)
				{
					break;
				}
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
