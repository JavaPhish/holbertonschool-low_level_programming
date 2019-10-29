#include "sort.h"

/**
 * insertion_sort_list - Sorts a linked list using insertion sort
 * @list: The list to sort
 *
 * Return: The sorted list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *p, *np, *pp;

	if (!list || !(*list))
		return;
	p = np = (*list)->next;
	for (; p; p = np = p->next)
	{
		if (np->prev->n > np->n)
		{
			pp = p = np->prev;
			for (; pp && np->n < pp->n; pp = np->prev)
			{
				if (np->next)
					np->next->prev = pp;
				pp->next = np->next;
				np->next = pp;
				np->prev = pp->prev;
				if (pp->prev == NULL)
					*list = np;
				else
					pp->prev->next = np;
				pp->prev = np;
				print_list(*list);
			}
		}
		else
			continue;
	}
}
