#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a node to the end of a list
 * @head: The start of the list
 * @n: the node to add
 *
 * Return: The new list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_list = malloc(sizeof(listint_t));
	listint_t *temp_list = malloc(sizeof(listint_t));

	temp_list = *head;

	if (!new_list)
		return (NULL);
	if (!temp_list)
		return (NULL);

	while (temp_list->next != NULL)
		temp_list = temp_list->next;

	new_list->n = n;
	temp_list->next = new_list;

	return (new_list);
}
