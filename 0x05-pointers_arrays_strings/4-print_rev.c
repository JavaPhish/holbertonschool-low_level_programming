#include "holberton.h"

/**
 * print_rev - prints a string reversed
 *
 * @s: the string to be printed
 */
void print_rev(char *s)
{
	int temp;

	temp = _strlen(s);
	while (temp != 0)
	{
		_putchar(s[temp]);
		temp--;
	}
	_putchar('\n');
}
