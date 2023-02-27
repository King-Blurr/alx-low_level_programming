#include "main.h"
#include <stdio.h>

/**
 * print_array - Display all contents of an array
 * @a: pointer to an array
 * @n: number of elements in the array
 * Return: 0
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
