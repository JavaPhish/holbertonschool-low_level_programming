#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: The difference in the strings
 */
int _strcmp(char *s1, char *s2)
{
	int loop = 0;

	while (loop > -1)
	{
		if (s1[loop] == '\0' && s2[loop] == '\0')
		{
			return (0);
		}

		if (s1[loop] != s2[loop])
		{
			if (s1[loop] > s2[loop])
			{
				return (s1[loop] - s2[loop]);
			}
			else
			{
				return (-(s2[loop] - s1[loop]));
			}
		}
		loop++;
	}
}
