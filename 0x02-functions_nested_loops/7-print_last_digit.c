#include "holberton.h"

/**
 * print_last_digit - prints the last decimal
 * @i: the number to be printed from
 * Return: the last digit
 */
int print_last_digit(int i)
{
	_putchar((i % 10) + 48);
	_putchar('\n');
	return (i % 10);
}
