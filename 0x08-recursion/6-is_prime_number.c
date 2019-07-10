#include "holberton.h"
#include <stdio.h>

int primeCheck(int n, int x);

/**
 * is_prime_number - uses recursion to find a prime number
 * @n: The number to check
 *
 * Return: if its prime or not
 */
int is_prime_number(int n)
{
	int out;

	out = primeCheck(n, n / 2);

	if (out == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


/**
 * primeCheck - checks if the number is prime
 * @n: the number to be prime
 * @x: Half the number
 *
 * Return: THe output
 */
int primeCheck(int n, int x)
{
	if (x == 1)
	{
		return (1);
	}
	else
	{
		if (n % x == 0)
			return (0);
		else
			return (primeCheck(n, x - 1));
	}
}

