#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: a comma passed as an argument
 * @n: number of string passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);

	i = 1;
	while (i <= n)
	{
		str = va_arg(args, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n)
			if (separator)
				printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
