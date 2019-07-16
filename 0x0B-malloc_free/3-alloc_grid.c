#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Creates a grid of ints in mem with malloc
 * @width: x of the grid
 * @height: y of the grid
 *
 * Return: The pointer to the grid
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int loop;

	if (width < 1 || height < 1)
		return (NULL);

	arr = malloc((width) * sizeof(int));

	for (loop = 0; loop < height; loop++)
	{
		arr[loop] = malloc(height * sizeof(int));
	}


	return (arr);

}
