#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>


int isdig(char *i);

/**
 * main - calls things
 * @argc: the number of commands
 * @argv: each command
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int temp, finalNum;

	finalNum = 0;
	if (argc > 1)
	{
		for (temp = 1; temp < argc; temp++)
		{
			if (atoi(argv[temp]) > 0)
			{
				finalNum = finalNum + atoi(argv[temp]);

				if (temp == argc - 1)
				{
					printf("%d\n", finalNum);
				}
			}
			else
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
