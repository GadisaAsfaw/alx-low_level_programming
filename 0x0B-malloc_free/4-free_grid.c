#include "main.h"
#include <stdlib.h>
/**
 *free_grid - frees a 2D-array
 *@grid: 2D-array/pointer to pointer
 *@height: number of rows
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(*(grid + i));

	}
	free(grid);
}
