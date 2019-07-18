#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: String one
 * @s2: String two
 * @n: The max letter to print to in s2
 *
 * Return: The pointer to the string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int byte_need, loop, max, loop1;
	char *concat_string;

	max = n;

	if (s1 == NULL)
	{
		free(s1);
		s1 = malloc(sizeof(char));
			s1[0] = '\0';
	}

	if (s2 == NULL)
	{
		free(s2);
		s2 = malloc(sizeof(char));
		s2[0] = '\0';
	}


	byte_need = 0;
	byte_need = byte_need + (int)sizeof(s1) * (int)sizeof(char);
	byte_need = byte_need + max;

	concat_string = malloc(byte_need);

	if (!concat_string)
		return (NULL);

	for (loop = 0; loop <= (int)sizeof(s1) + 1; loop++)
		concat_string[loop] = s1[loop];

	for (loop1 = 0; loop1 < max && loop1 < (int)sizeof(s2); loop1++)
		concat_string[loop + loop1] = s2[loop1];

	concat_string[loop + loop1] = '\0';

	return (concat_string);
}
