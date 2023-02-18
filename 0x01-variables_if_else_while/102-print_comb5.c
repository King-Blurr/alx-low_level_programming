#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0
 */

int main(void)
{
	int a, b, c, d, op1, op2;

	a = b = c = d = 48;
	while (d < 58)
	{
		c = 48;
		while (c < 58)
		{
			b = 48;
			while (b < 58)
			{
				a = 48;
				while (a < 58)
				{
					op1 = (d * 10) + c;
					op2 = (b * 10) + a;
					if (op1 < op2)
					{
						putchar(d);
						putchar(c);
						putchar(' ');
						putchar(b);
						putchar(a);
					if (d == 57 && c == 56 && b == 57 && a == 57)
							break;
						putchar(',');
						putchar(' ');
					}
					a++;
				}
				b++;
			}
			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
