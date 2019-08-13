#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX
 * @filename: The file to read
 * @letters: The amount of letters to print
 *
 * Return: The Numbers it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	buf = malloc(letters);

	if (fd < 0)
		return (0);

	read(fd, buf, letters);

	return (write(1, buf, letters));
}

