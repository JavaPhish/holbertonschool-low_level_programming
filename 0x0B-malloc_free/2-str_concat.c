#include <stdio.h>
#include <stdlib.h>


/**
 * str_concat - Concatenates two strings into one
 * @s1: the first string
 * @s2: The second string
 *
 * Return: a pointer to the concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	int str1Size, str2Size, loop;
	char *arr;
	/**
	 * The first two arrays get the size of the two params
	 */
	str1Size = 0;
	if (s1 == NULL)
	{
		s1 = malloc(sizeof(char));
		s1[0] = '\0';
	}
	if (s2 == NULL)
	{
		s2 = malloc(sizeof(char));
		s2[0] = '\0';
	}
	while (s1[str1Size] != '\0')
		str1Size++;
	str2Size = 0;
	while (s2[str2Size] != '\0')
		str2Size++;
	str2Size++;
	/*str2Size needs to be one extra to account for null byte*/
	arr = malloc((str1Size + str2Size) * sizeof(char));
	/* Makes sure theres enough memory*/
	if (!arr)
		return (NULL);
	for (loop = 0; loop < (str1Size + str2Size - 1); loop++)
	{
		if (loop > str1Size - 1)
		{
			arr[loop] = s2[loop - str1Size];
		}
		else
		{
			arr[loop] = s1[loop];
		}
	}
	return (arr);
}
