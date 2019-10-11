#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

hash_node_t *create_node(hash_node_t *prev_node);

/**
 * hash_table_create - Creates a new hash table at the specified size
 * @size: The size of the hash table to create
 *
 * Return: The newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	hash_node_t *start_node;
	int node_iter = 1;

	if (size < 1)
		return (NULL);

	start_node = malloc(sizeof(hash_node_t));

	if (!start_node)
	{
		free(start_node);
		return (NULL);
	}

	new_table = malloc(sizeof(hash_table_t));
	new_table->size = size;
	new_table->array = &start_node;

	for (; node_iter < (int)size - 1; node_iter++)
	{
		start_node = create_node(start_node);
	}

	return (new_table);

}

/**
 * create_node - Creates a new node
 * @prev_node: THe node to add on to
 *
 * Return: The node created
 */
hash_node_t *create_node(hash_node_t *prev_node)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t *));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	prev_node->next = new_node;

	return (prev_node);
}
