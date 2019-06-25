#include "holberton.h"

int print_last_digit(int i)
{
	_putchar((i % 10) + 48);
	return (i % 10);
}
