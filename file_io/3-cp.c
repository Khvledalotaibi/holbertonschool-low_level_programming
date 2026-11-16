#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * close_checked - closes a file descriptor or exits on failure
 * @fd: the file descriptor to close
 */
static void close_checked(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_data - copies data between two file descriptors
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 * @filename: source filename for error reporting
 * @destination: destination filename for error reporting
 */
static void copy_data(int fd_from, int fd_to, char *filename,
		      char *destination)
{
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read;
	ssize_t bytes_written;
	size_t total;

	bytes_read = read(fd_from, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		total = 0;
		while (total < (size_t)bytes_read)
		{
			bytes_written = write(fd_to, buffer + total,
					      bytes_read - total);
			if (bytes_written <= 0)
			{
				dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", destination);
				exit(99);
			}
			total += bytes_written;
		}
		bytes_read = read(fd_from, buffer, BUFFER_SIZE);
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			filename);
		exit(98);
	}
}

/**
 * main - copies a file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from;
	int fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	copy_data(fd_from, fd_to, argv[1], argv[2]);
	close_checked(fd_from);
	close_checked(fd_to);
	return (0);
}
