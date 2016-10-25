#include "holberton.h"

/**
 * _puts - prints a string followed by a new line to stdout.
 * @str: given string
 *
 * Return: returns nothing.
 */

void _puts(char *str)
{


	int i = 0;
	char c;

	while (*(str + i) != 0)
	{
		c = *(str + i);
		_putchar(c);
		++i;
	}

	_putchar('\n');

}
