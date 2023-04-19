#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free a 2 dim array
 * @grid: the array pointer
 * @height: array height
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL && height != 0)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
		free(grid);
	}
}
