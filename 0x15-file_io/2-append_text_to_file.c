#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include "holberton.h"

/**
 * append_text_to_file - Adds text to the end of a file
 * @filename: The file to add to
 * @text_content: The content to add
 *
 * Return: 1 if success, -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, size;

	fd = open(filename, O_APPEND | O_RDWR);

	if (fd == -1)
		return (-1);

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	size = 0;
	while (text_content[size] != '\0')
		size++;

	if (write(fd, text_content, (size * sizeof(char))) == -1)
		return (-1);
	else
		return (1);
}
