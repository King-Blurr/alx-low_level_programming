#include "main.h"

#define BUFFER_SIZE 1024
/**
 * main - the entry point
 * @argc: arguement count
 * @argv: argument vector
 * Return: returns 0 if success
 */

int main(int argc, char *argv[])
{
    int file_from_descriptor, file_to_descriptor;
    ssize_t bytes_read, bytes_written;
    char buffer[BUFFER_SIZE];
    mode_t file_mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
        exit(97);
    }

    file_from_descriptor = open(argv[1], O_RDONLY);
    if (file_from_descriptor == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    file_to_descriptor = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_mode);
    if (file_to_descriptor == -1)
    {
        close(file_from_descriptor);
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        exit(99);
    }

    while ((bytes_read = read(file_from_descriptor, buffer, BUFFER_SIZE)) > 0)
    {
        bytes_written = write(file_to_descriptor, buffer, bytes_read);
        if (bytes_written != bytes_read)
        {
            close(file_from_descriptor);
            close(file_to_descriptor);
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            exit(99);
        }
    }

    if (bytes_read == -1)
    {
        close(file_from_descriptor);
        close(file_to_descriptor);
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    if (close(file_from_descriptor) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from_descriptor);
        exit(100);
    }

    if (close(file_to_descriptor) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to_descriptor);
        exit(100);
    }

    return 0;
}
