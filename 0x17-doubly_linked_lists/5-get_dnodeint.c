#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at an index
 * @head: The list to search
 * @index: the index to return
 *
 * Return: the node at index index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int count = 0;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	for (; count < (int)index; count++)
		head = head->next;

	if (count != ((int)index))
		return (NULL);

	return (head);
}
