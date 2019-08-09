#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - Prints an int in binary notation
 * @n: The number to print
 */
void print_binary(unsigned long int n)
{
	int loop, original_number;

	original_number = n;

	if (n < 1)
		_putchar('0');
	else
	{

		loop = 1;
		while (loop <= original_number)
			loop = loop * 2;

		loop = loop / 2;
		_putchar('1');
		original_number = original_number - loop;

		while (loop > 1)
		{
			loop = loop / 2;
			if (loop > original_number)
			{
				_putchar('0');
			}
			else
			{
				original_number = original_number - loop;
				_putchar('1');
			}
		}
	}
}
