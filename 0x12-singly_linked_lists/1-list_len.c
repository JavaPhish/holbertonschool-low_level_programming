#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - Returns the length of the nodes within the list
 * @h: The list
 *
 * Return: The amount of nodes in the list
 */
size_t list_len(const list_t *h)
{
	int loop;

	if (!h)
		return (0);

	loop = 1;
	while (h->next != NULL)
	{
		loop++;
		h = h->next;
	}

	return (loop);
}
