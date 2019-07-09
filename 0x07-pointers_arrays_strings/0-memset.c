#include "holberton.h"

/**
 * _memset - The _memset() function fills the n bytes of the function with b
 * @s: The memory area
 * @b: the constant byte
 * @n: the amount to fill
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int loop, temp;

	temp = n;
	loop = 0;
	while (loop < temp)
	{
		s[loop] = b;

		loop++;
	}

	return (s);
}
