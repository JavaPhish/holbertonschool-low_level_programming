#include "holberton.h"
#include <stdio.h>


/**
 * print_array - prints up the n values in the array
 * @a: the array to be printed from
 * @n: the number to print up to in the array
 */
void print_array(int *a, int n)
{
	int temp;

	for (temp = 0; temp < n; temp++)
	{

		printf("%d", a[temp]);

		if (temp != n - 1)
		{
			printf("%s", ", ");
		}
		else
		{
			printf("%s", "\n");
		}
	}
}
