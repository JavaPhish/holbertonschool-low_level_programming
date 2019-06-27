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
	if ((c > ('0' - 1)) && (c < ('9' - 1)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
