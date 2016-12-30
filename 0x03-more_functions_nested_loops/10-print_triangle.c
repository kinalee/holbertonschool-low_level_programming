#include "holberton.h"

/**
 * print_triangle - prints # signs and makes a triangle that 'size' as
 *\ it's lower base
 * @size: size of the lower base of triangle
 * Return: returns nothing
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');

	i = 0;
	while (i < size)
	{
		k = i;
		while (size - k > 1)
		{
			_putchar(' ');
			++k;
		}
		j = 0;
		while (j <= i)
		{
			_putchar('#');
			++j;
		}
		_putchar('\n');
		++i;
	}
}
