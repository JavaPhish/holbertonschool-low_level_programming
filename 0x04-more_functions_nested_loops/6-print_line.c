#include "holberton.h"

/**
 * print_line - prints a line a i length
 *
 * @i: the length of the line
 */
void print_line(int i)
{

	for (; i > 0; i--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
