
#include "main.h"
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

/**
 * create_file - creates a file and writes text to it
 * @filename: the name of the file to create
 * @text_content: the text to write, or NULL for an empty file
 *
 * Return: 1 on success, or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t length;
	size_t total;
	ssize_t written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC,
		  S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	length = strlen(text_content);
	total = 0;
	while (total < length)
	{
		written = write(fd, text_content + total, length - total);
		if (written <= 0)
		{
			close(fd);
			return (-1);
		}
		total += written;
	}

	if (close(fd) == -1)
		return (-1);

	return (1);
}
