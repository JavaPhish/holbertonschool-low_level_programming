#include "holberton.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times using embedded for loops
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int printAmount = 10;
	int loop1;
	int loop2;

	for (loop1 = 1; loop1 <= printAmount; loop1++)
	{
		for (loop2 = 'a'; loop2 <= 'z'; loop2++)
		{
			_putchar(loop2);
		}
			_putchar('\n');
	}
}
