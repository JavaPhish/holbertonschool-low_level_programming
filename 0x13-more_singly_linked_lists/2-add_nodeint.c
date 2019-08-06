#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a list
 * @head: The start of the list
 * @n: The node to add
 *
 * Return: The new list head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_list = malloc(sizeof(listint_t));

	new_list->n = (int)n;
	new_list->next = *head;

	*head = new_list;

	return (new_list);
}
