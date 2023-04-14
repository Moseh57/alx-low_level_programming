#include "main.h"
#include <stdlib.h>
/**
 * free_grid - a function that frees a 2d array previously created
 * @grid: the array in question
 * @height: the height of the array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

