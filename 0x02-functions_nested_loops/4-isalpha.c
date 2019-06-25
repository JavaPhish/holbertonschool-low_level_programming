#include "holberton.h"

/**
 * _isalpha - Returns if a char is a alpha value or not
 * @c: the char to be evaluated
 *
 * Return: 0 (not an alpha character)
 * Reutrn: 1 (is an alpha character)
 */
int _isalpha(int c)
{
	if ((c < 91 && c > 64) || (c < 122 && c > 96))
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
