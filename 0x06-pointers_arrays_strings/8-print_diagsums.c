#include <stdio.h>
#include <string.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a
 *\square matrix of integers.
 * @a: given integer array
 * @size: size of matrix
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{

	int i, j, k, sum1, sum2;

	i = sum1 = 0;
	k = size;

	while (k > 0)
	{
		sum1 = sum1 + a[i];
		i = i + (size + 1);
		--k;
	}

	j = size - 1;
	sum2 = 0;
	k = size;

	while (k > 0)
	{
		sum2 = sum2 + a[j];
		j = j + (size - 1);
		--k;
	}

	printf("%d, %d\n", sum1, sum2);

}
