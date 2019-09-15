#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data in a linked list
 * @head: The list to add
 *
 * Return: The sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}


	return (sum);
}
