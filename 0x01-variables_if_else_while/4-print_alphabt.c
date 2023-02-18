#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always return 0
 */

int main(void)
{
	char a;

	a = 'a';

	do {
		if (a == 'q' || a == 'e')
		{
			/* skip this iteration */
			a++;
			continue;
		}

		putchar(a);
		a++;
	} while (a <= 'z');

	putchar('\n');
	return (0);
}
