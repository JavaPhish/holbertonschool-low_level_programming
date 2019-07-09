#include "holberton.h"

/**
 * _strchr - searches for a char within a string
 * @s: the string to be searched
 * @c: the char to be looked for
 *
 * Return: the first occurance of the char
 */
char *_strchr(char *s, char c)
{
	int loop;

	loop = 0;
	while (s[loop] != '\0')
	{
		if (s[loop] == c)
		{
			return (&s[loop]);
		}

		loop++;
	}

	return ('\0');
}
