#include "main.h"

/**
 * _strpbrk - string break
 * @s: char pointer
 * @accept: char pointer
 * Return: return address
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
