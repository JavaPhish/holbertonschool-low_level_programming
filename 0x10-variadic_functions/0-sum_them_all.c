#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all provided ints
 * @n: The ints provided
 *
 * Return: The sum or 0 if n = 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	int loop;

	if (n)
	{
		if (n == 0)
			return (0);

		va_start(args, n);

		for (loop = 0; loop < (int)n; loop++)
			sum += va_arg(args, int);
		va_end(args);

		return (sum);
	}

	return (0);

}
