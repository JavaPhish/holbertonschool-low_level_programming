#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @h: The list
 * @idx: the index
 * @n: the node to add
 *
 * Return: The new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *h;
	int count;

	new_node->n = n;

	if (h == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (temp->prev != NULL)
		temp = temp->prev;

	for (count = 0; count < (int)idx; count++)
	{
		temp = temp->next;
	}

	new_node->next = temp;

	temp = temp->prev;
	temp->next = new_node;

	new_node->prev = temp;

	return (temp);
}
