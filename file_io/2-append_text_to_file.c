
#include "main.h"
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: the name of the file
 * @text_content: the text to append, or NULL to append nothing
 *
 * Return: 1 on success, or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t length;
	size_t total;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		length = strlen(text_content);
		total = 0;
		while (total < length)
		{
			bytes_written = write(fd, text_content + total,
					     length - total);
			if (bytes_written <= 0)
			{
				close(fd);
				return (-1);
			}
			total += bytes_written;
		}
	}

	if (close(fd) == -1)
		return (-1);

	return (1);
}
