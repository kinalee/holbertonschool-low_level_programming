#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 *\followed by a new line
 * @a: given array
 * @n:the number of elements of the array to be printed
 *
 * Return: returns nothing.
 */

void print_array(int *a, int n)
{

	int i = 0;


	if (n != 0)
	{
		while (i < (n - 1))
		{
			printf("%d, ", a[i]);
			++i;
		}

	printf("%d\n", a[n - 1]);


	}

}
