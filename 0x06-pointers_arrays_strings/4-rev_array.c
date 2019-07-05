#include "holberton.h"

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
