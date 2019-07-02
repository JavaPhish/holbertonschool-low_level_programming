#include "holberton.h"

int _strlen(char *s);
/**
 * puts_half - Prints the last half of a number
 * @str: the string to be printed
 */
void puts_half(char *str)
{
	int temp, printNum;

	temp = 0;
	if (_strlen(str) % 2 != 0)
	{
		printNum = (_strlen(str) - 1) / 2;
	}
	else
	{
		printNum = (_strlen(str) / 2);
	}
	while (str[temp] != '\0')
	{
		if (temp > printNum)
		{
			_putchar(str[temp]);
		}
	temp++;
	}

	_putchar('\n');
}

/**
 * _strlen - returns the length of a string
 * @s: the string
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
