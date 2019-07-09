#include "holberton.h"

/**
 * _memcpy - copies src to dest at n length
 * @dest: to copy to
 * @src: to copy from
 * @n: the amount to copy
 *
 * Return: the copied array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int loop, temp;

	temp = n;
	loop = 0;
	while (loop < temp)
	{
		dest[loop] = src[loop];

		loop++;
	}


	return (dest);
}
