#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - length of a string
 * @s: input char
 * Return: length of a string
 */

int _strlen(char *s);
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}

/**
* str_concat - Concat 2 strings.
* @s1: string
* @s2: string
* Return: char
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int a, b;
	char *conc, *dest;

	if (!s1)
		s1 = "";
	else
		a = _strlen(s1);

	if (!s2)
		s2 = "";
	else
		b = _strlen(s2);

	conc = malloc(a + b + 1);
	if (!conc)
		return (0);

	dest = conc;
	while (*s1)
		*dest++ = *s1++;

	while ((*dest++ = *s2++))
		;

	return (conc);
}
