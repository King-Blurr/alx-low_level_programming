#include "main.h"
#include <stdio.h>

/**
 * print_rev - print istring in reverse
 *
 * @s: string to be reversed
 * Return: 0
 */

void print_rev(char *s)
{
	int c;
	int b;

	for (c = 0; s[c] != '\0'; c++)
	{
		continue;
	}

	b = c - 1;

	for (c = b; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
