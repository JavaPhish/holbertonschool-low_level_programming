#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Duplicates a string using malloc
 * @str: the string to duplicate
 *
 * Return: a pointer to the string
 */
char *_strdup(char *str)
{
	int loop, strSize;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}



	strSize = 1;
	for (loop = 0; str[loop] != '\0'; loop++)
	{
		strSize++;
	}

	arr = malloc(strSize * (sizeof(char)));

	if (!arr)
	{
		return (NULL);
	}

	for (loop = 0; loop < strSize; loop++)
	{
		arr[loop] = str[loop];
	}

	return (arr);

}
