#include "holberton.h"

/**
 * _isupper - returns if a value is uppercase or not
 *
 * @c: the char to be evaluated
 * Return: 1 Is uppercase
 * Return: 0 Is lowercase
 *
 */

int _isupper(int c)
{
	if (c  >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
