#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by new line
 * @separator: char value
 * @n: last argument passed
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	i = 1;
	while (i <= n)
	{
		printf("%d", va_arg(args, const unsigned int));
		if (separator && i < n)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
