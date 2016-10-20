#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: Where n is the number of times the character \ should be printed
 *
 * Description: If n is 0 or less, the function should only print a \n
 * Return: 0
 */

void print_diagonal(int n)
{
	int i = 0;

	while (i < n)
	{
		int j = 1;

		while (j <= i)
		{
			_putchar(' ');
			++j;
		}

		_putchar('\\');
		_putchar('\n');
		++i;
	}

	if (n <= 0)
		_putchar('\n');
}
