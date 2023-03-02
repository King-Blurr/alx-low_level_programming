#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: pointer to char parameters
 * @s2: pointer to char parameters
 * Return: *dest
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	j = s1[i] - s2[i];
	return (j);
}
