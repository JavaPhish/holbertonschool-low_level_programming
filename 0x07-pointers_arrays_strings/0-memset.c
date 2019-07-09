#include "holberton.h"

char *_memset(char *s, char b, unsigned int n)
{
	int loop, temp;

	temp = n;
	loop = 0;
	while (loop < temp)
	{
		s[loop] = b;

		loop++;
	}

	return s;
}
