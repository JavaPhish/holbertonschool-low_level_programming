#include "holberton.h"

/**
 * print_numbers - prints 0 through 9 using only two putchars
 *
 *
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + 48);
	}

	_putchar('\n');
}
