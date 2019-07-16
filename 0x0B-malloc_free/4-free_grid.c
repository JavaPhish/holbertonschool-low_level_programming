#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees the previously made grid
 * @grid: The grid to free
 * @height: its height
 *
 */
void free_grid(int **grid, int height)
{
	int loop;

	for (loop = 0; loop < height; loop++)
	{
		free(grid[loop]);
	}
}
