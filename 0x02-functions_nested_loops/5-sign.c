#include "holberton.h"

/**
 * print_sign - determines if a number is greater than, less than or equal to zero
 * @n: the number to be evaluated
 * 
 * Return: 0 (is zero)
 * Return: 1 (Greater than zero)
 * Return: -1 (less than zero)
 */
int print_sign(int n)
{
	if ( n > 0 )
	{
		_putchar('+');
		return (1);
	}
	else
	if ( n < 0 )
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
