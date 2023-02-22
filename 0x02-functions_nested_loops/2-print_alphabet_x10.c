#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lower case
 */

void print_alphabet_x10(void)
{
	int alp;
	int br;

	for (br = 0; br < 10; br++)
	{
		for (alp = 97; alp <= 122; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
	}
}
