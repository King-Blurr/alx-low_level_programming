#include "main.h"
#include <stdio.h>

/**
 * factorial - print factorial
 * @n: number
 * Return: an int
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
