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

	i = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ary = malloc(height * sizeof(int *));

	if (ary == NULL)
	{
		free(ary);
		return (NULL);
	}
	while (i < height)
	{
		ary[i] = malloc(width * sizeof(int));

		if (ary[i] == NULL)
		{
			while (i >= 0)
			{
				free(ary[i]);
				--i;
			}
			free(ary);
		}
		j = 0;
		while (j < width)
		{
			ary[i][j] = 0;
			++j;
		}
		++i;
	}
	return (ary);
}
