#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sums of both diagonals in a square array
 * @a: The array
 * @size: THe size of the array
 */
void print_diagsums(int *a, int size)
{


	int loop, temp, added;

	loop = 0;
	temp = 0;
	added = 0;
	while (loop < size * size)
	{
		added = added + a[loop + temp];
		loop = loop + size;
		temp++;
	}

	printf("%d%s", added, ", ");

	added = 0;
	while (loop > -1)
	{
		added = added + a[loop - temp];
		loop = loop - size;
		temp--;
	}

	printf("%d", added);
	putchar('\n');
}
