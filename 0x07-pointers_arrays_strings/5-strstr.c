#include "holberton.h"

/**
 * _strstr - returns the first occurance in a string of word needle
 * @haystack: The string to search through
 * @needle: the word to search from
 *
 * Return: The first occurance
 */
char *_strstr(char *haystack, char *needle)
{
	int loop, loop2;

	loop = 0;
	while (haystack[loop] != '\0')
	{
		loop2 = 0;
		while (haystack[loop + loop2] == needle[loop2])
		{
			if (needle[loop2 + 1] == '\0')
			{
				return (&haystack[loop]);
			}
			loop2++;
		}

		loop++;

	}

	return ('\0');
}
