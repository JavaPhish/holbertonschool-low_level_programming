#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_bit - Returns the value of the bit at index
 * @n: The bits to check
 * @index: The bit to evaluate
 *
 * Return: The value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	while (index < 64)
	{
		*n = (*n | mask);
		return (1);
	}
	return (-1);
}
