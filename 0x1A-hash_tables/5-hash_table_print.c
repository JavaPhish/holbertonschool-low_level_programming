#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to print
 *
 * Return: Nun
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int iter_node = 0, nodes_printed = 0;
	char *key, *value;

	if (ht != NULL)
	{

		printf("{");
		while (iter_node < ht->size)
		{
			if (ht->array[iter_node])
			{
				if (nodes_printed != 0)
					printf(", ");
				key = ht->array[iter_node]->key;
				value = ht->array[iter_node]->value;
				printf("\'%s\': \'%s\'", key, value);
				nodes_printed++;
			}

			iter_node++;
		}
		printf("}\n");
	}
}
