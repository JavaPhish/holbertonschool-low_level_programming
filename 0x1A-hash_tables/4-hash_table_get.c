#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_get - Gets a value from a key in a hash table
 * @ht: The table to search
 * @key: The key to find
 * 
 * Return: The value of the key, or NULL if it wasnt found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *node;

	index = (int)key_index((unsigned char *)key, ht->size);

	if (ht->array[index])
	{
		/* If its the first key, return it */
		if (strcmp(ht->array[index]->key, (char *)key) == 0)
			return (ht->array[index]->value);

		/* Collision, find the right key in this index */
		node = ht->array[index];
		while (node->next != NULL)
		{
			if (strcmp(node->key, (char *)key) == 0)
				return (node->value);

			node = node->next;
		}

		return (node->value);
	}


	return (NULL);
	
}