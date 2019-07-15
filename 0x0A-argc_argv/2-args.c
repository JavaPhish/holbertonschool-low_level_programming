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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
