#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all elements of the list
 * @h: The list to print through
 *
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	int node_count = 0;

	if (!h)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}

	printf("%d\n", h->n);
	node_count++;

	return (node_count);

}
