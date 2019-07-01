#include "holberton.h"

/**
 * _puts - prints a string to the standard output
 * @str: The string to be output
 */
void _puts(char *str)
{
	int temp;

	temp = 0;
	while (str[temp] != '\0')
	{
		_putchar(str[temp]);
		temp++;
	}

	_putchar('\n');
}
