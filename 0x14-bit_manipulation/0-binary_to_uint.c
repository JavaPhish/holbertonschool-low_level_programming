#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * binary_to_uint - Converts binary to an unsigned int
 * @b: The binary to convert
 *
 * Return: The unsigned int value of b
*/
unsigned int binary_to_uint(const char *b)
{
	int loop, bit_tracker;
	unsigned int final;
	int flippy_doo[] = {0, 1, 2, 4, 8, 16, 32, 64, 128};

	bit_tracker = 0;
	final = 0;

	if (!b)
		return (0);

	for (loop = 0; b[loop] != '\0';)
	{
		if (b[loop] == '1' || b[loop] == '0')
			loop++;
		else
			return (0);
	}

	for (; loop >= 0; loop--)
	{

		if (b[loop] == '1')
		{
			printf("Add %d to final\n", (int)flippy_doo[bit_tracker]);
			final = final + flippy_doo[bit_tracker];
		}

		bit_tracker++;
		if (bit_tracker > 8)
			bit_tracker = 1;
	}

	return (final);
}

