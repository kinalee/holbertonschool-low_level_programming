#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - print numbers with a follwing comma and a space thru 98
 * @n: given integer/tested integer
 *
 * Return: no return
 */

void print_to_98(int n)
{


	while (n < 98)
	{
		printf("%d, ", n);
		++n;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		--n;
	}

	printf("98\n");
}
