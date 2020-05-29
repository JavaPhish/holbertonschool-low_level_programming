#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - Finds the index of a key within a hash table
 * @key: The key to find
 * @size: The size of the array
 *
 * Return: The index (a number)
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/**
	 * DJB2 returns a giant number so you have to modulo it by the size
	 * to make sure you get a value within your array.
	 */
	return (hash_djb2(key) % size);
}
