#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at index
 * @head: The list to delete from
 * @index: The index of the node to be DESTROYED MUAHAHAHA
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *trash_bin;
	unsigned int travel = 0;

	if (!head)
		return (-1);
	if (index == 0 && (*head) == NULL)
		return (-1);
	while ((*head)->prev)
		(*head) = (*head)->prev;
	while (travel < index)
	{
		travel++;
		if ((*head) == NULL)
			return (-1);
		(*head) = (*head)->next;
	}
	trash_bin = (*head);
	if ((*head)->next == NULL && (*head)->prev == NULL)
	{
		free(trash_bin);
		return (1);
	}
	if ((*head)->next == NULL)
	{
		(*head) = (*head)->prev;
		(*head)->next = NULL;
	} else if ((*head)->prev == NULL)
	{
		(*head) = (*head)->next;
		(*head)->prev = NULL;
	} else
	{
		(*head) = (*head)->prev;
		(*head)->next = (*head)->next->next;
		(*head)->next->prev = (*head)->next->prev->prev;
	}
	free(trash_bin);
	return (1);
}
