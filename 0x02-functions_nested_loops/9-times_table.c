#include "holberton.h"

/**
 * times_table - Prints the times table to console
 *
 * Return: Null
 */
void times_table(void)
{
	int loop1, loop2, temp;

	for (loop1 = 0; loop1 < 10; loop1++)
	{
		_putchar('0');
		for (loop2 = 1; loop2 < 10; loop2++)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			temp = loop1 * loop2;
			if (temp > 99)
			{
				temp = temp - 100;
				_putchar('1');
			}
			if (temp > 9)
			{
				_putchar(((temp - (temp % 10)) / 10) + 48);
				temp = temp % 10;
			}
			else
			{
				_putchar(' ');
			}
				_putchar(temp + 48);
		}
		_putchar('\n');
	}
}
