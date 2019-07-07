#include "holberton.h"

/**
 * reverse_array - Reverses an array
 * @a: the array to be reversed
 * @n: The array size
 */
void reverse_array(int *a, int n)
{
	int loop, buffer;

	loop = 0;
	while (loop < n / 2)
	{
		buffer = a[loop];
		a[loop] = a[n - loop - 1];
		a[n - loop - 1] = buffer;
		loop++;
	}
}
