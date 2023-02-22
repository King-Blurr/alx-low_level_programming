#include "main.h"

/**
 * times_table - display 9 x table
 *
 */

void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;

			if (c > 9)
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			else
			{
				if (b != 0)
				{
					_putchar(' ');
				}
				_putchar(c + '0');
			}
			if (b == 9)
			{
				break;
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
