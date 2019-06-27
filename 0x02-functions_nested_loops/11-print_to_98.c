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
