#include "holberton.h"

/**
 * get_bit - Returns the value of the bit at index
 * @n: The bits to check
 * @index: The bit to evaluate
 *
 * Return: The value
 */
int get_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask 1 << index;

	while (index < 64)
	{
		*n = (*n | mask);
		return (10;
	}

}
