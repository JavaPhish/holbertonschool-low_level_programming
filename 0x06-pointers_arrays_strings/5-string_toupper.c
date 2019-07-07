#include "holberton.h"

/**
 * string_toupper - replaces all lower case letters with upper case letters
 *
 * @str: the string to be editted
 * Return: the string
 */
char *string_toupper(char *str)
{
	int loop, temp;

	temp = 0;
	loop = 0;
	while (str[loop] != '\0')
	{
		if (str[loop] > 96 && str[loop] < 123)
		{
			temp = str[loop];
			str[loop] = temp - 32;
		}

		loop++;
	}

	return (str);
}

