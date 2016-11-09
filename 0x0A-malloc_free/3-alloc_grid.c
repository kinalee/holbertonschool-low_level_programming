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
	int i;
	int **ary;

	i = 0;

	ary = malloc(sizeof(height));

	while (i < height)
	{
		ary[i] = malloc(sizeof(width));
		++i;
	}

	ary[i] = '\0';
	return (ary);
	free(ary);
}
