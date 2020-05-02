#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all values in a dlinked list
 * @head: The list to evaluate
 * Return: The sum, or 0 on failure
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);

	while (head->prev)
		head = head->prev;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
