#include "holberton.h"

/**
 * print_line - prints n underscore(s)
 * @n: given integer
 * Return: returns nothing
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		++i;
	}
	_putchar('\n');
}
