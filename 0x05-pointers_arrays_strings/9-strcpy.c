#include "holberton.h"

/**
 * _strcpy - copies source to destination
 * @dest: to be copied to
 * @src: to be copied from
 */
char *_strcpy(char *dest, char *src)
{
	int temp;

	temp = 0;
	while (src[temp] != '\0')
	{
		dest[temp] = src[temp];
		temp++;
	}

	return dest;
}
