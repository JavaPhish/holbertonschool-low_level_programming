#include "holberton.h"

int _strlen(char *s);
/**
 * rev_string - reverses a string in variable
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
	const int arrayLen = _strlen(s);
	char str[arrayLen];
	int temp;

	temp = 0;
	while (s[temp] != '\0')
	{
		str[temp] = s[temp];
		temp++;
	}

	temp = _strlen(s);
	while (temp != 0)
	{
		s[_strlen(s) - temp] = str[temp - 1];
		temp--;
	}
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
