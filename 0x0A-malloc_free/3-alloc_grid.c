#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a newly created 2d integers grid
 * @width: width of grid
 * @height: height of grid
 *
 * Return: returns a pointer to a newly created 2d integers grid
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ary;

	i = j = 0;

	ary = malloc(height * sizeof(int *));

	while (i < height)
	{
		ary[i] = malloc(width * sizeof(int));

		j = 0;

		while (j < width)
		{
			ary[i][j] = 0;
			++j;
		}

		++i;
	}

	return (ary);
	free(ary);
}
