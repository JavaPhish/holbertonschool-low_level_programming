#include <stdio.h>
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
	UNUSED(argv);

	printf("%d\n", argc);

	return (0);
}
