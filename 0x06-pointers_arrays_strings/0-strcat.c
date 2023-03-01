#include "main.h"
#include <stdio.h>

/**
 * char *_strcat - Concatenate two strings
 * @dest: The first string
 * @src: The string to be appended
 * Return: Return a pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
