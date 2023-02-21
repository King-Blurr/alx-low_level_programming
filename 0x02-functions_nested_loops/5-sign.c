#include "main.h"

/**
 * print_sign - display the sign of a number
 *
 * Return: return 1 if positive, 0 if 0 and -1  if negative
 *
 * @n: interger to be checked
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
