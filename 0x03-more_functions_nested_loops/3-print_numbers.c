#include "holberton.h"

/**
 * print_numbers - prints numbers 0 to 9
 *
 * Return: no return
 */

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		++i;
	}

	_putchar('\n');
}
