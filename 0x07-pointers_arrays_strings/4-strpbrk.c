#include "holberton.h"

/**
 * _strpbrk - returns the first occurance of any byte from accpt
 * @s: The string to search through
 * @accept: accepts that trigger a return
 *
 * Return: Null if no = character is found, or the first occurance of accept
 */
char *_strpbrk(char *s, char *accept)
{
	int loop, loop2;

	loop = 0;
	while (s[loop] != '\0')
	{
		loop2 = 0;
		while (accept[loop2] != '\0')
		{
			if (s[loop] == accept[loop2])
			{
				return (&s[loop]);
			}
			loop2++;
		}

	loop++;
	}

	return ('\0');

}
