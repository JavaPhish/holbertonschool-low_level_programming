
#include "holberton.h"

/**
 * jack_bauer - prints a full day to console
 *
 * Return: Null
 */
void jack_bauer(void)
{
int loop1, loop2, loop3, loop4;

	for (loop1 = 0; loop1 < 3 ; loop1++)
	{
		for (loop2 = 0; loop2 < 4; loop2++)
		{
			for (loop3 = 0; loop3 < 6; loop3++)
			{
				for (loop4 = 0; loop4 < 10; loop4++)
				{
					_putchar(loop1 + 48);
					_putchar(loop2 + 48);
					_putchar(':');
					_putchar(loop3 + 48);
					_putchar(loop4 + 48);
					_putchar('\n');
				}
			}
		}
	}
}
