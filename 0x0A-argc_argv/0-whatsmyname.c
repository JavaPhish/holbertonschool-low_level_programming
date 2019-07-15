#include <stdio.h>
#include "holberton.h"
#define UNUSED(x) (void)(x)

/**
 * main - calls things
 * @argc: the number of commands
 * @argv: each command
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	UNUSED(argc);
	printf("%s\n", argv[0]);
	return (0);
}
