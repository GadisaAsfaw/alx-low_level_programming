#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid - returns pointer to a 2D array
 *@width: number of columns
 *@height: number of rows
 *
 *Return: pointer to 2D-array or NULl if (width or height) is zero
 *        or if program fails
 */
int **alloc_grid(int width, int height)
{
	int **outer;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);

	outer = (int **)malloc(sizeof(int *) * height);
	if (outer == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		outer[i] = (int *)malloc(sizeof(int) * width);
		if (outer[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
		{
			outer[i][j] = 0;
		}
	}
	return (outer);
}
