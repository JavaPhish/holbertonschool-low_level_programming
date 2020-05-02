#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds a new doubly linked node at end
 * @head: the list to add the new node to
 * @n: The value of the new node
 * Return: The address of the new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* Create a new node if the list is empty */
	if (*head == NULL)
	{
		(*head) = malloc(sizeof(dlistint_t));
		(*head)->n = n;
		(*head)->prev = NULL;
		(*head)->next = NULL;

		return (*head);
	}

	/* Navigate to the end of the list */
	while ((*head)->next)
	(*head) = (*head)->next;

	/* Malloc and make sure it didnt fail */
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	/*
	 *Assign and navigate to the new node
	 *(Then return its position)
	 */
	(*head)->next = new_node;
	new_node->prev = (*head);
	(*head) = (*head)->next;

	(*head)->n = n;

	return (*head);
}
