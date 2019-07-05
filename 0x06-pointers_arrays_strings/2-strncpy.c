#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: to be copied to
 * @src: to copy
 * @n: size
 *
 * Return: copied string
 */
char *_strncpy(char *dest, const char *src, int n)
{
	int loop;

	for (loop = 0; loop < n && src[loop] != '\0'; loop++)
		dest[loop] = src[loop];
	for ( ; loop < n; loop++)
		dest[loop] = '\0';

	return (dest);
}

