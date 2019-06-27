#include "holberton.h"

/**
 * print_number - will print an integer
 * @i: number to print
 */

void print_number(int i)
{

	if (i < 0)
	{
	_putchar('-');
	i = -i;
	}

	if (i > 999)
	{
		_putchar((i / 1000) + 48);
		i = i - (i / 1000);
	}

	if (i > 99)
	{
	_putchar((i / 100) + 48);
	i = i - (i / 100);
	}
	if (i > 9)
	{
	_putchar((i / 10) + 48);
	}

	_putchar((i % 10) + 48);
}
