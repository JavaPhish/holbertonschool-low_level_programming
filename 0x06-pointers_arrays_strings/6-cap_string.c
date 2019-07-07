#include "holberton.h"

char *cap_string(char *str)
{
	int loop, temp, isNextUpper;

	temp = 0;
	isNextUpper = 0;
	loop = 0;
	while (str[loop] != '\0')
	{
		if (isNextUpper == 1)
		{
			temp = str[loop];
			str[loop] = temp - 32;


			isNextUpper = 0;
		}


		if (str[loop] == ','
			|| str[loop] == ' '
			|| str[loop] == '	'
			|| str[loop] == '\n'
			|| str[loop] == ';'
			|| str[loop] == '.'
			|| str[loop] == '!'
			|| str[loop] == '?'
			|| str[loop] == '"'
			|| str[loop] == '('
			|| str[loop] == ')'
			|| str[loop] == '{'
			|| str[loop] == '}')
		{
			isNextUpper = 1;
		}

		loop++;
	}

	return (str);
}
