#include "sort.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * bubble_sort - Sorts a linked list using bubble sort
 * @array: The list to sort
 * @size: The size of the list
 *
 * Return: The sorted list
 */
void bubble_sort(int *array, size_t size)
{
	int *head = *array;

	/* Makes sure the given list was at the start of the list */
	while (array->prev != NULL)
		array = array->prev;

	head = array;

	


}
