#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number whose square root is to be found
 * Return: return the natural square or -1 if no natural  square
 * @i: the integers to be checked as possible sqrt
 */
int _sqrt(int n, int i);

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - check the square to confirm squareroot
 * @n: the squared number
 * @i: possible squareroots
 * Return: squareroot
 */

int _sqrt(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	if ((i * i) > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
