#include <stdio.h>

/**
 * main - The entry point
 * @argc: - argument count
 * @argv: - argument vector
 * Return: return success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
