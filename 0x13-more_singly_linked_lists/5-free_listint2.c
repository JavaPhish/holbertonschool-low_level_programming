#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

void free_listint(listint_t *head);

/**
 * free_listint2 - Sets all elements to null
 * @head: The list to free
 */
void free_listint2(listint_t **head)
{
	listint_t *start_node, *head_temp;

	head_temp = *head;

	start_node = head_temp->next;
	free_listint(start_node);
	head = NULL;
}


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
