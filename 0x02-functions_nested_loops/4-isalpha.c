#include "holberton.h"

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
