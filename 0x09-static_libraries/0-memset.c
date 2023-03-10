#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @n: number of byte
 * @s: pointer to n
 * @b: constant byte to be filled
 * Return: always return pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);

}
