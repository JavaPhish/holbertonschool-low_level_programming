#include <stdio.h>
#include "holberton.h"

/**
 * clear_bit - Sets the value at index to 0
 * @n: The bit to set
 * @index: The index to set
 *
 * Return: 1 if successful, otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index < 64)
	{
		*n = (*n & ~mask);
		return (1);
	}
		return (-1);
}
