#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * selection_sort - Sorts an array using selection sort
 * @array: The array to sort
 * @size: The size of the array to sort
 */
void selection_sort(int *array, size_t size)
{
	int iter,  min_iter, swap_temp, did_swap, min;


	for (iter = 0; iter < (int)size; iter++)
	{
		min = iter;
		for (min_iter = iter; min_iter < (int)size; min_iter++)
		{

			if (array[min_iter] < array[min])
			{
				min = min_iter;
				did_swap = 1;
			}
		}

		if (did_swap == 1)
		{
			swap_temp = array[min];
			array[min] = array[iter];
			array[iter] = swap_temp;

			print_array(array, size);
			did_swap = 0;
		}

	}

}
