#include "holberton.h"

/**
 * print_most_numbers - prints number 0 - 9 but excludes 2 and 4
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		if (!(i == 2) && !(i == 4))
		{
			_putchar(i + 48);
		}
	}
	_putchar('\n');
}
