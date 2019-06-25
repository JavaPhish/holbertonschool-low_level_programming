#include "holberton.h"

/**
 * printAlphabet - prints the alphabet using only two putchars
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char counter = 'a';

	for (; counter <= 'z'; counter++)
	{
		_putchar(counter);
	}
	_putchar('\n');
}

