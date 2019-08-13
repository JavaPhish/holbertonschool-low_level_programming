#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include "holberton.h"

/**
 * create_file - Creates a new file and fills it with the text
 * @filename: The name for the file
 * @text_content: THe text to put in the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, size;

	fd = open(filename, O_CREAT | O_WRONLY, 0600);

	if (filename == NULL)
		return (-1);
	if (fd == -1)
		return (-1);

	size = 0;
	while (text_content[size] != '\0')
		size++;

	if (size == 0)
	{
		write(fd, "", 0);
		close(fd);
		return (1);
	}

	write(fd, text_content, size);
	close(fd);

	return (1);
}
