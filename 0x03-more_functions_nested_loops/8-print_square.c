#include "holberton.h"

/**
 * print_square - prints # signs, 'size' times 'size' rows
 * @size: given integer/size of the square
 * Return: returns nothing
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			++j;
		}
		_putchar('\n');
		++i;
	}
}
