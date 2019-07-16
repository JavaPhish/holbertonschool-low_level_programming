#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array using malloc
 * @size: the size of the array
 * @c: the character
 *
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	int loop, siz;
	char *arr;

	siz = size;
	if (size == 0)
		return ('\0');

	arr = malloc(size * sizeof(char));

	for (loop = 0; loop < siz; loop++)
	{
		arr[loop] = c;
	}

	return (arr);

}
