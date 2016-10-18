#include "holberton.h"
#include <stdio.h>

/**
 * add - add two given integers and returns the sum
 *
 * Return: result of the fuction
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
