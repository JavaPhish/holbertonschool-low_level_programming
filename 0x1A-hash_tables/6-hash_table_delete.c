#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - Frees an entire hash table
 * @ht: The hash table to free
 *
 * Return: None
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int iter_node = 0;

	if (!ht)
		exit(1);

	for (; iter_node < ht->size; iter_node++)
	{
		if (ht->array[iter_node])
		{
			free_hash_node_t(ht->array[iter_node]);
		}
	}

	free(ht->array);
	free(ht);
}

/**
 * free_hash_node_t - Frees a linked list
 * @head: the list to free from its digital prison
 *
 * Return: None, noob.
 */
void free_hash_node_t(hash_node_t *head)
{
	hash_node_t  *tail;

	if (!head)
		exit(1);

	while (head)
	{
		tail = head;
		head = head->next;
		free(tail->value);
		free(tail->key);
		free(tail);
	}
}
