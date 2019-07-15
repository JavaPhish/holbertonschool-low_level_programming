#include <stdio.h>
#include <stdlib.h>
/**
 * main - calls things
 * @argc: the number of commands
 * @argv: each command
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{

	if (argc > 2)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("%s\n", "Error");
	}
	return (0);
}
