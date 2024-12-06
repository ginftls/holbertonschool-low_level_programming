#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - Creates a file with the specified content.
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
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

	/* Open the file with O_CREAT, O_WRONLY, O_TRUNC, and 0600 permissions */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
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
