#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - Prints an int in binary notation
 * @n: The number to print
 */
void print_binary(unsigned long int n)
{
	int loop;

	if (n < 1)
		_putchar('0');
	else
	{

		loop = 1;
		while (loop <= (int)n)
			loop = loop * 2;

		loop = loop / 2;
		_putchar('1');
		n = n - loop;

		while (loop > 1)
		{
			loop = loop / 2;
			if (loop > (int)n)
			{
				_putchar('0');
			}
			else
			{
				n = n - loop;
				_putchar('1');
			}
		}
	}
}
