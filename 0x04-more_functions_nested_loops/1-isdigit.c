#include "main.h"

/**
 * _isdigit - check for digit between 0 1nd 9
 * @c: the digit to be checked
 * Return: return 1 if digit, return 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
