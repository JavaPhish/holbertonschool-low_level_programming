#include "holberton.h"

/**
 * _isdigit - returns if its a number or not
 *
 * @c: the char to be checked
 *
 * Return: 1 is a digit
 *
 */
int _isdigit(int c)
{
	if ((c > 47) && (c < 58))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
