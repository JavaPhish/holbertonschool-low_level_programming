#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of a doubly linked list
 * @head: The list to add a new node to
 * @n: The new nodes n value
 * Return: The new nodes address, OR null on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = (int)n;

	if (*head != NULL)
		(*head)->prev = new_node;

	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
