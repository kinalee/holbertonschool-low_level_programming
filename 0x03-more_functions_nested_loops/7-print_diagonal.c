#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: the number of the character '\' should be printed
 * Return: returns nothing
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			++j;
		}
		_putchar('\\');
		_putchar('\n');
		++i;
	}
}
