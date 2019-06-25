#include "holberton.h"

/**
 * print_last_digit - prints the last decimal
 * @i: the number to be printed from
 * Return: the last digit
 */
int print_last_digit(int i)
{
	if (i < 0)
	{
	_putchar(((i % 10) * -1) + 48);
	return ((i % 10) * -1);
	}
	else
	{
	_putchar((i % 10) + 48);
	return (i % 10);
	}
}
