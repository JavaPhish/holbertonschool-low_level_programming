#include "holberton.h"


/**
 * rev_string - reverses a string in variable
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
	char str[_strlen(s)];
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
