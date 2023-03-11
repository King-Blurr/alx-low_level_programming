#include "main.h"
#include <stdio.h>

/**
 * _puts - display a string
 * @str: the string
 * Return: 0
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str++);
	}

	_putchar('\n');
}
