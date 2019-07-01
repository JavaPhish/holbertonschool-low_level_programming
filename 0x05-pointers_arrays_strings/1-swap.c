#include "holberton.h"



/**
 * swap_int - swaps two values using pointers
 * @a: pointer 1
 * @b: pointer 2
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
