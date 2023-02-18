#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always return 0
 */

int main(void)
{
	char c;

	c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
