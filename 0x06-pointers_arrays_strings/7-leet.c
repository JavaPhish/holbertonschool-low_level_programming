#include "holberton.h"

/**
 * leet - converts normal text to 1337
 * @str: the string to be converted
 *
 * Return: the converted string
 */
char *leet(char *str)
{
	int loop, loop1;
	int leetSwitch[] = {'o', 'O', 'l', 'L', 'e', 'E', 'a', 'A', 't', 'T'};
	int toBeLeet[] = {'0', '0', '1', '1', '3', '3', '4', '4', '7', '7'};

	loop = 0;
	while (str[loop] != '\0')
	{
		loop1 = 0;
		while (leetSwitch[loop1] != '\0')
		{
			if (toBeLeet[loop1] == str[loop])
			{
				str[loop] = leetSwitch[loop1];
			}

			loop1++;
		}

		loop++;
	}

	return (str);
}
