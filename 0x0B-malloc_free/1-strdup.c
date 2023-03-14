#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - makes a copy of a string in a new space in memory
 * @str: the string to be copied
 * Return: return NULL if NULL otherwise Pointer to the string
 */

char *_strdup(char *str)
{
	int i = 0, j;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*(str + i))
	{
		i++;
	}
	i++;
	ptr = (char *)malloc(sizeof(char) * i++);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		ptr[j] = str[j];
	}
	return (ptr);
	free(ptr);
}
