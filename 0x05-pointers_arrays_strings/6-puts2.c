#include "holberton.h"


/**
 * puts2 - outputs every other character in a string
 * @str: The string to be outputted
 */
void puts2(char *str)
{
	int temp;

	temp = 0;
	while (str[temp] != '\0')
	{
		if (str[temp] % 2 == 0)
		{
			_putchar(str[temp]);
		}
		temp++;
	}
	_putchar('\n');
}
