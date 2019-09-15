#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_dnodeint_end - adds a new node at the end
 * @head: The list to add to
 * @n: The node to add
 *
 * Return: THe address of the new element or null if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *head_temp = *head;

	if (!new_node)
		return (NULL);
	if (head == NULL)
		return (NULL);

	new_node->n = (int)n;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (head_temp->next != NULL)
		head_temp = head_temp->next;

	head_temp->next = new_node;
	new_node->prev = head_temp;

	return (new_node);
}
