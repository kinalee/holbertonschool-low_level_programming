#include "holberton.h"

/**
 * print_line - draws a straight line
 * @n: given integer
 *
 * Description: prints n times of underscore
 * Return: no return
 */

void print_line(int n)
{

	int i = 1;

	while (i <= n)
	{

		_putchar('_');
		++i;
	}

	_putchar('\n');

}
