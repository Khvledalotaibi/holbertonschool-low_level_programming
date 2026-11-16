
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: the name of the file to read
 * @letters: the maximum number of bytes to read
 *
 * Return: the number of bytes read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_read;
	ssize_t bytes_written;
	ssize_t total_written;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read <= 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	total_written = 0;
	while (total_written < bytes_read)
	{
		bytes_written = write(STDOUT_FILENO, buffer + total_written,
				      bytes_read - total_written);
		if (bytes_written <= 0)
		{
			free(buffer);
			close(fd);
			return (0);
		}
		total_written += bytes_written;
	}

	free(buffer);
	close(fd);
	return (total_written);
}
