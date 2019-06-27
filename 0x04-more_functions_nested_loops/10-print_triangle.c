#include "holberton.h"


/**
 * print_triangle - prints a triangle starting at the right hand corner
 *
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int loop1, loop2, loop3;

	if (size > 0)
	{

		for (loop1 = 0; loop1 <= size; loop1++)
		{

			for (loop3 = 0; loop3 <= size - loop1; loop3++)
			{
				_putchar(' ');
			}
			for (loop2 = 0; loop2 + loop3 <= size  ; loop2++)
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
