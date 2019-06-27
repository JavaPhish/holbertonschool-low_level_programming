#include "holberton.h"

/**
 * print_diagonal - prints a diagonal line at specified length
 * @i: length
 */

void print_diagonal(int i)
{
	int loop1, loop2;

	if (i > 0)
	{
		for (loop1 = 0; loop1 <= i; loop1++)
		{
			for (loop2 = 0; loop2 <= loop1; loop2++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}

	_putchar('\n');

}
