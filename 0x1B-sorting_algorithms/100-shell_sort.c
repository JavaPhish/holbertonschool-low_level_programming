#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

int arr_len(int *array);

void shell_sort(int *array, size_t size)
{
	int len = (int)size - 1;
	int gap, iter, temp, iter2;

	for (gap = len/2; gap > 0; gap = gap / 2)
	{
		for (iter = gap; iter < len; iter++)
		{
			temp = array[iter];

			for (iter2 = iter; iter2 > gap && array[iter2 - gap] > temp; iter2 = iter2 - gap)
			{
				array[iter2] = array[iter2 - gap];
			}


			array[iter2] = temp;
		}

		print_array(array, arr_len(array));
	}
}


int arr_len(int *array)
{
	int len = 0;

	while (array[len] != '\0')
		len++;

	return (len);
}
