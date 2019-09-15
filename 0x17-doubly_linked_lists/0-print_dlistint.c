#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * print_dlistint - Prints all contents of a list
 * @h: the list to print contents from
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
