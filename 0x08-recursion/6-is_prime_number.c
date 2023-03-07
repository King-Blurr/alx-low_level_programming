#include "main.h"
#include <stdio.h>

/**
 * division - checks if the numbr is divisible by another number
 * @n: integer
 * @m: integer
 * Return: 0 or 1
 */

int division(int n, int m);

int division(int n, int m)
{
	if (m % n == 0)
	{
		return (0);
	}
	else if (m / 2 > n)
	{
		return (division(n + 2, m));
	}
	else
	{
		return (1);
	}
}
/**
 * is_prime_number - checks for prime number
 * @n: a number
 * Return: return 1 if prime otherwise 0
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (division(3, n));
	}
}
