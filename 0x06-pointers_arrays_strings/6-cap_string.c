#include "holberton.h"


/**
 * cap_string - capitalizes all words in a string
 * @str: the string to be capitalized
 *
 * Return: The editted string
 */
char *cap_string(char *str)
{
	int loop, loop1, temp, isNextUpper;
	char wordSeps[] = {' ', '	', '\n', ',', ';', '.',
			 '!', '?', '"', '(', ')', '{', '}'};

	temp = 0;
	isNextUpper = 0;
	loop = 0;
	loop1 = 0;
	while (str[loop] != '\0')
	{
		if (isNextUpper == 1 && str[loop] > 96 && str[loop] < 123)
		{
			temp = str[loop];
			str[loop] = temp - 32;


			isNextUpper = 0;
		}
		else
		{
			isNextUpper = 0;
		}

		loop1 = 0;
		while (wordSeps[loop1] != '\0')
		{
			if (str[loop] == wordSeps[loop1])
			{
				isNextUpper = 1;
			}
		loop1++;
		}


		loop++;
	}

	return (str);
}
