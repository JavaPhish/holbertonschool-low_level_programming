#include <stdio.h>
#include "holberton.h"

/**
 * get_bit - Returns the value of a bit at an index
 * @n: The number to evaluate
 * @index: The index to check
 *
 * Return: The value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	while (n)
	{
		n = ((n >> index) & 1);
		if (index < 64)
			return (n);
	}
	return (-1);
}
