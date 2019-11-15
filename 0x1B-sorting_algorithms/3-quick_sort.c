#include <stdio.h>
#include "sort.h"
#include <stdlib.h>

void sort(int *array, int low, int high);
int partition(int *array, int low, int high);
int arr_len(int *array);

/**
 * quick_sort - Sorts an array using the quick sort algorithm
 * @array: The array to sort
 * @size: The size of the array to sory
 */
void quick_sort(int *array, size_t size)
{
	sort(array, 0, (int)size - 1);
}

void sort(int *array, int low, int high)
{
	int part = NULL;

	if (low < high)
	{
		part = partition(array, low, high);

		sort(array, low, part - 1);
		sort(array, part + 1, high);
	}
}

int did_swap(int *array, int *prev)
{
	int iter = 0;

	for (iter = 0; array[iter] != '\0'; iter++)
	{
		if (array[iter] != prev[iter])
			return (0);
	}

	return (1);

}

int partition(int *array, int low, int high)
{
	int pivot = array[high];
	int i = low;
	int loop, swap;
	int did_change = 0;

	for (loop = low; loop < high; loop++)
	{
		if (array[loop] < pivot)
		{
			did_change = 1;

			swap = array[loop];
			array[loop] = array[i];
			array[i] = swap;
			i += 1;
		}

	}

	if  (did_change == 1)
	{
		print_array(array, arr_len(array));
		did_change = 0;
	}

	swap = array[i];
	array[i] = array[high];
	array[high] = swap;

	return (i);
}

int arr_len(int *array)
{
	int len = 0;

	while (array[len] != '\0')
		len++;

	return (len);
}
