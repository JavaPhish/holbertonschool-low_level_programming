#include "holberton.h"

int _strlen(char *s);
/**
 * rev_string - reverses a string in variable
 * @s: The string to be reversed
 */

void rev_string(char *s)
{
	char i;
	int temp;

	temp = 0;
	while (temp < _strlen(s) / 2)
	{
		i = s[temp];
		s[temp] = s[_strlen(s) - temp - 1];
		s[_strlen(s) - temp - 1] = i;
		temp++;
	}

	i++;
}
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
