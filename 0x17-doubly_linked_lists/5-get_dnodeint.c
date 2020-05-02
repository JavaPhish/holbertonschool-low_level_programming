#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the node at a specified index
 * @head: The list to evaluate
 * @index: The index to retrieve
 * Return: The node at index, or NULL on failure (Doesnt exist, etc)
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int traverse = 0;

	if (!head)
		return (NULL);

	while (head->prev)
		head = head->prev;

	while (traverse != index)
	{
		traverse++;
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);

}
