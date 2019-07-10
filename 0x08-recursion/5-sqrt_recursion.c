#include "holberton.h"

int root(int n, int increment);


/**
 * _sqrt_recursion - recursively finds the square root
 * @n: The number to find the square root of
 *
 * Return: The square root
 */
int _sqrt_recursion(int n)
{
	return (root(n, 1));
}

/**
 * root - uses a second parameter to return the square root for other method
 * @n: THe number from sqrt_recur
 * @increment: The number to start from
 *
 * Return: The square root
 */
int root(int n, int increment)
{
	if (n > increment * increment)
	{
		return (root(n, increment + 1));
	}
	else if (increment * increment == n)
	{
		return (increment);
	}
	else
	{
		return (-1);
	}
}
