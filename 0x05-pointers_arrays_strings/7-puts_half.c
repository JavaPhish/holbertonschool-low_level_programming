#include "holberton.h"

/**
 * puts_half - Prints the last half of a number
 * @str: the string to be printed
 */
void puts_half(char *str)
{
	int temp, printNum;

	if (_strlen(str) % 2 != 0)
	{
		printNum = (_strlen(str) - 1) / 2;
	}
	while (str[temp] != '\0')
	{
		if (temp >= printNum)
		{
		_putchar(str[temp]);
		}
	temp++;
	}

	_putchar('\n');
}
