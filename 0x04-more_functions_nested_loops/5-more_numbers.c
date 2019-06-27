#include "holberton.h"

/**
 * more_numbers - prints numbers 0 - 14 10 times
 */

void more_numbers(void)
{
	int loop1;
	int loop2;

	for (loop1 = 0; loop1 < 10; loop1++)
	{
		for (loop2 = 0; loop2 <= 14; loop2++)
		{
			_printNum(loop2);
		}
	_putchar('\n');
	}
}
