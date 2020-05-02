#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 * @head: the list to free from its digital prison
 *
 * Return: None, noob.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tail;

	while (head->prev)
		head = head->prev;

	while (head)
	{
		tail = head;
		head = head->next;
		free(tail);
	}
}
