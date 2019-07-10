#include "holberton.h"

/**
 * _puts_recursion - Recursively prints a string to console and then a newline
 * @s: The string to print
 */
void _puts_recursion(char *s)
{
	int temp;

	temp = 0;
	if (s[temp] != '\0')
	{
		_putchar(s[temp]);
		temp++;
		_puts_recursion(&s[temp]);
	}
	else
	{
		_putchar('\n');
	}
}
