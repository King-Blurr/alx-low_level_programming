#include "main.h"

/**
 * _islower - Determine if an alphabet is lowercase or upper case
 *
 * Return: return 1 if lowercase, returns 0 otherwise
 *
 * @c: is an integer type
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
