#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 * @head: the list to free
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
