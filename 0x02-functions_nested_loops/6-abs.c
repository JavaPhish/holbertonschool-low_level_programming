#include "holberton.h"

/**
 * _abs - will always return a numbers absolute value
 * @i: the number to be evaluated
 * Return: the absolute value
 */
int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
