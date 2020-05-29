#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates a value in a hash table
 * @value: The value to add or update
 * @key: The key to update or add
 * @ht: The table
 *
 * Return: 1 on succes, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *new_node;

	if (strlen(key) == 0)
		return (0);

	index = (int)key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		new_node = malloc(sizeof(hash_node_t));
		if (!new_node)
			return (0);
		new_node->key = (char *)key;
		new_node->value = (char *)value;
		new_node->next = NULL;
		ht->array[index] = new_node;
	}
	else if (strcmp(ht->array[index]->key, (char *)key) == 0)
	{
		ht->array[index]->value = (char *)value;
	}
	else
	{
		new_node = malloc(sizeof(hash_node_t));
		if (!new_node)
			return (0);
		new_node->key = (char *)key;
		new_node->value = (char *)value;
		ht->array[index] = new_node;

		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}

	return (1);
}
