
#include "holberton.h"


int _strlen(char *s);
/**
 * print_rev - prints a string reversed
 *
 * @s: the string to be printed
 */
void print_rev(char *s)
{
	int temp;

	temp = _strlen(s);
	while (temp != -1)
	{
		_putchar(s[temp]);
		temp--;
	}
	_putchar('\0');
	_putchar('\n');
}

/**
 *_strlen - copied from 0x02
 * @s: the pointer to a string
 *
 * Return: The length of the string
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
