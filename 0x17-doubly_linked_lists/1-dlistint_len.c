#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - counts the nodes in a double linked list
 * @h: The list to count
 * Return: then number of nodes in a list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int node_count = 0;

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}