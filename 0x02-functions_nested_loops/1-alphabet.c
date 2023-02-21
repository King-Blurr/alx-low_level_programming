#include "main.h"

/**
 * print_alphabet - Print alphabet
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	int alp;

	for (alp = 97; alp <= 122; alp++)
	{
		_putchar(alp);

	}
	_putchar('\n');
}
