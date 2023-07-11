#include "main.h"
#define MAXSIZE 1024

/**
 * main - the entry point
 *
 * @argc: arguement count
 * @argv: argument vector
 *
 * Return: returns 0 if success
 */

int main(int argc, char *argv[])
{
	/* Declare variables */
	int fdto, fdfr, status, dest;
	char buf[MAXSIZE];

	/* check if argument is correct */
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* open and read the file */
	fdfr = open(argv[1], O_RDONLY);
	/* check if the file doesn't exist */
	if (fdfr == -1)
		dprintf(1, "Error: Can't read from file %s\n", argv[1]), exit(98);
	/* create and write to a file */
	fdto = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	/* copy the text in fdfr to fdto */
	while ((status = read(fdfr, buf, MAXSIZE)) > 0)
	{
		/* check for write error */
		if (fdto < 0 || (write(fdto, buf, status) != status))
			dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (status < 0)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
	/* close the fdfr and store the value */
	status = close(fdfr);
	/* check if the fdfr can't close */
	if (status == -1)
		dprintf(2, "Error: Can't close fd %d\n", fdfr), exit(100);
	/* close the fdto and store the value */
	dest = close(fdto);
	/* check if the fdto can't close */
	if (dest == -1)
		dprintf(2, "Error: Can't close fd %d\n", fdto), exit(100);
	return (0);
}
