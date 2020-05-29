#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates a base of a hash table of a set size
 * @size: The size of the hash table to create
 *
 * Return: The newly created hash table, or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t));

	if (!new_table)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(size * 8);

	if (!new_table->array)
		return (NULL);

	return (new_table);
}
