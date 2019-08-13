#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include "holberton.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX
 * @filename: The file to read
 * @letters: The amount of letters to print
 *
 * Return: The Numbers it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, count;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	buf = malloc(letters);

	if (!buf)
		return (0);

	if (fd == -1)
		return (0);

	read(fd, buf, letters);

	for (count = 0; buf[count] != '\0'; count++)
		_putchar(buf[count]);

	return (count);
}

