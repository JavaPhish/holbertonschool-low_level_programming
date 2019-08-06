#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements in a list
 * @h: The list
 *
 * Return: The number or nodes in a list
 */
size_t listint_len(const listint_t *h)
{
	int node_count = 1;

	if (!h)
		return (0);


	if (h->next == NULL)
		return (node_count);

	while (h->next != NULL)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);

}
