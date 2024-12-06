#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The content to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	size_t length = 0;

	if (filename == NULL)
		return (-1);

	/* Calculate the length of text_content */
	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;
	}

	/* Open the file with O_WRONLY and O_APPEND */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* Write text_content to the file if it's not NULL */
	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, length);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	/* Close the file */
	if (close(fd) == -1)
		return (-1);

	return (1);
}
