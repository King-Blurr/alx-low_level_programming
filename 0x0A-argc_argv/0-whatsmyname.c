#include <stdio.h>

/**
 * main - a program that prints its name
 * @argc: argument count
 * @argv: array that holds the arguments
 * Return: return success
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
