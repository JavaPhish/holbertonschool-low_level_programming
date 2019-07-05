#include "holberton.h"

int strSize(char *str);


/**
 * _strcat - Concatenates two strings together and returns it
 * @dest: the string to be added to
 * @src: the string to be added
 *
 * Return: the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int destSize = strSize(dest);
	int loop;
	int maxSize = strSize(dest) + strSize(src);

	for (loop = 0; loop < maxSize && src[loop] != '\0'; loop++)
		dest[destSize + loop] = src[loop];

	dest[destSize + loop] = '\0';

	return (dest);
}

/**
 * strSize - Returns the size of a string
 * @str: the string to evaluate
 *
 * Return: the length of the string
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
