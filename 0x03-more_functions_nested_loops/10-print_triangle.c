#include "holberton.h"

/**
 * print_triangle - prints # signs and makes a triangle that 'size' as
 *\ it's lower base
 * @size: given integer/size of the lower base of triangle
 *
 * Return: no return
 */



void print_triangle(int size)
{

	int i = 1;

	while (i <= size)
	{
		int j = size - 1;
		int k = 1;

		while (j >= i)
		{
			_putchar(' ');
			--j;
		}

		while (k <= i)
		{
			_putchar('#');
			++k;
		}

		_putchar('\n');
		++i;
	}

	if (size <= 0)
	{
		_putchar('\n');
	}

}
