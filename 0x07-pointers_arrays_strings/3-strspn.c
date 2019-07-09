#include "holberton.h"

/**
 * _strspn - Searches for accept from s and returns the bytes
 * @s: to search through
 * @accept: The bytes to look for
 *
 * Return: The number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes;
	int loop, loop2;

	bytes = 0;
	loop = 0;
	while (s[loop] != '\0')
	{
		loop2 = 0;
		while (accept[loop2] != '\0')
		{
			if (accept[loop2] == s[loop])
			{
				bytes++;
			}

			loop2++;
		}
		loop++;
	}

	return (bytes - 2);

}
