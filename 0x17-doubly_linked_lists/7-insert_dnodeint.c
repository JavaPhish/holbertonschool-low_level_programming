#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a node at a given index
 * @h: The list to insert into
 * @idx: The index of the list to insert to
 * @n: The value of the new node
 * Return: The address of the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	unsigned int travel = 1;

	if (!*h)
		return (NULL);

	while ((*h)->prev)
		(*h) = (*h)->prev;

	while (travel < idx)
	{
		travel++;
		if (!(*h)->next)
			return (NULL);

		(*h) = (*h)->next;
	}

	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;

	new_node->next = (*h)->next;
	new_node->prev = (*h);
	(*h)->next = new_node;
	new_node->next->prev = new_node;

	return (new_node);
}
