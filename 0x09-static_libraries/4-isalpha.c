#include "main.h"

/**
 * _isalpha-Identifies alphabets
 *
 * Return: Always return 1 if alphabets otherwise 0
 *
 * @c: character to be checked
 */

int _isalpha(int c)
{
	if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
