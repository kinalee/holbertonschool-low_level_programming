#include "holberton.h"
/**
 * print_rev - prints given string, in reverse, followed by a new line
 * @s: given string
 *
 * Return: returns nothing
 */


void print_rev(char *s)
{

	int i = 0;

	while (*s != 0)
	{
		++i;
		++s;
	}

	while (i >= 0)
	{
		_putchar(*s);
		--s;
		--i;
	}
	_putchar('\n');
}
