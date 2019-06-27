#include "holberton.h"

/**
 * _isdigit(int c)
 *
 * @c: the char to be checked
 *
 * Return: 1 is a digit
 * Return: 0 is not a digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c =< '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
