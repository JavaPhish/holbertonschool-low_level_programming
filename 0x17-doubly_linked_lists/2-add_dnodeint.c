#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_dnodeint - adds a node at the beginning of a list
 * @head: The list to add to
 * @n: The node to add
 *
 * Return: the new node or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_list = malloc(sizeof(dlistint_t));

	new_list->n = (int)n;
	new_list->next = *head;

	*head = new_list;

	return (new_list);
}
