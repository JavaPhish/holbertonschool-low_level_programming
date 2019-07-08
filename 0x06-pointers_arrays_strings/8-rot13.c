#include "holberton.h"

/**
 * rot13 - Converts normal text to rot13 encryption
 * @str: the string to be converted
 *
 * Return: The encrypted message
 */
char *rot13(char *str)
{
	int loop, loop2;

	loop = 0;
	while (str[loop] != '\0')
	{
		if ((str[loop] < 123 && str[loop] > 96)
			|| (str[loop] < 91 && str[loop] > 64))
		{
			loop2 = 0;
			while (loop2 != 12)
			{
				str[loop]++;
				if (str[loop] == 91 || str[loop] == 122)
				{
					str[loop] = str[loop] - 26;
				}
				loop2++;
			}
		}

	}


	return (str);

}
