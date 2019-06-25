#include "holberton.h"


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
