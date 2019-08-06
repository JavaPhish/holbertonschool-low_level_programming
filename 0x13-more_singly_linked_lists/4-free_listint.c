#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - Frees a linked list entirely
 * @head: The list to free
 */
void free_listint(listint_t *head)
{
	listint_t *next_node;

	while (head->next != NULL)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}

	free(head);
}
