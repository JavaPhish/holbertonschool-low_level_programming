#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: the pointer to a string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int temp;

	temp = 0;

	while (s[temp] != '\0')
	{
		temp++;
	}

	return (temp);
}
