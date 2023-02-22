#include "main.h"

/**
 * jack_bauer - Print the minutes of the day
 *
 */

void jack_bauer(void)
{
	int hr;
	int min;

	hr = 0;
	min = 0;

	for (hr = 0; hr <= 23; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
