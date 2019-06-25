#include "holberton.h"

/**
 * print_to_98 - Prints all numbers to 98 regardless of start
 * @n: the starting number
 * Return: Null
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
	printNum(n);
	if (n != 98)
	{
		_putchar(',');
		_putchar(' ');
	}
	n++;
	}
	_putchar('\n');
}

void printNum(int i)
{
	if (i > 99)
	{
		_putchar(i / 100);
		i = i - ((i / 100) * 100);
	}

	if (i < 0)
	{
		if (-i > 9)
		{
			_putchar('-');
			_putchar((-i / 10) + 48);
			_putchar((-i % 10) + 48);
		}
		else
		{
			_putchar(-i + 48);
		}

	}
	else if (i > 9)
	{
		_putchar((i / 10) + 48);
		_putchar((i % 10) + 48);
	}
	else
	{
		_putchar(i + 48);
	}
}
