#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * dlistint_len - Returns the size of a doubly linked list
 * @n: The list to get the size from
 *
 * Return: The size (0 if null)
 */
size_t dlistint_len(const dlistint_t *n)
{
	int count = 0;

	if  (n == NULL)
		return (0);

	while (n->prev != NULL)
		n = n->prev;

	while (n != NULL)
	{
		count++;
		n = n->next;
	}

	return (count);
}
