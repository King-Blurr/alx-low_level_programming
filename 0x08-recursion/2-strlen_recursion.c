#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - recursively count a string lenght
 * @s: the string
 * Return: ;ength of string
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
