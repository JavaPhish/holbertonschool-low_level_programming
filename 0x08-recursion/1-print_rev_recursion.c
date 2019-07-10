#include "holberton.h"

/**
 * _print_rev_recursion - Prints a string reversed recursively
 * @s: The string to print
 */
void _print_rev_recursion(char *s)
{

	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
