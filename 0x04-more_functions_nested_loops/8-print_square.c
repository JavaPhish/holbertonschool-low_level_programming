#include "holberton.h"

/**
 * print_square - prints a square with the parameter i as the height/length
 * @size: height and length
 */

void print_square(int size)
{
	int loop1, loop2;

	if (size > 0)
	{
		for (loop1 = 0; loop1 < size; loop1++)
		{
			for (loop2 = 0; loop2 < size; loop2++)
			{
				_putchar('#');
			}

		_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
