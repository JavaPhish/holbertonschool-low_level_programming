#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @h: The list
 * @idx: the index
 * @n: the node to add
 *
 * Return: The new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
        dlistint_t *new_node = malloc(sizeof(dlistint_t));
        int count = 1;
        dlistint_t *temp;



        if (*h == NULL)
        {
                free(new_node);
                return (NULL);
        }

        /* Navigate to head */
        while ((*h)->prev != NULL)
                *h = (*h)->prev;

        /* Navigate to index to insert to */
        while (count < (int)idx)
        {
                count++;
                *h = (*h)->next;
        }

        /* Store the nodes surrounding the new node for linking*/
        temp = *h;
        *h = (*h)->next;

        /* Define and assign our new node */
        new_node->n = n;
        new_node->prev = temp;
        new_node->next = (*h);

        temp->next = new_node;
        (*h)->prev = new_node;

        return (new_node);
}
