#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * print_list - Prints all elements of a linked list
 * @h: The list to print
 *
 * Return: The amount of nodes printed
 */
size_t print_list(const list_t *h)
{
	int node_count;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			node_count++;
		}
		h = h->next;

	}
	return (node_count);
}
