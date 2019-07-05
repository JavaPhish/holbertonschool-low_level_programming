#include "holberton.h"

int strSize(char *str);


/**
 *_strncat - concatenates a string at specified length
 * @dest: to be copied to
 * @src: to be copied from
 * @n: size
 * Return: the concatenated string
 */
char *_strncat(char *dest, const char *src, int n)
{
	int destSize = strSize(dest);
	int loop;

	for (loop = 0; loop < n && src[loop] != '\0'; loop++)
		dest[destSize + loop] = src[loop];

	dest[destSize + loop] = '\0';

	return (dest);
}
/**
 * strSize - the size of a string
 * @str: the string to be evaluated
 *
 * Return: the size
 */
int strSize(char *str)
{
	int loop = 0;

	while (str[loop] != '\0')
	{
		loop++;
	}

	return (loop);
}
