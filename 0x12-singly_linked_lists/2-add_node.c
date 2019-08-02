#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a node to the beginning of a list
 * @head: The list
 * @str: THe string to add
 *
 * Return: The new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_list = malloc(sizeof(list_t));
	int loop;

	loop = 0;
	while (str[loop] != '\0')
		loop++;

	new_list->str = strdup(str);
	new_list->len = loop;
	new_list->next = *head;

	*head = new_list;

	return (new_list);
}
