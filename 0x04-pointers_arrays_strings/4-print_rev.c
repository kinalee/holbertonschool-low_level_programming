#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: given pointer variable
 *
 * Return: returns string length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != 0)
	{
		++s;
		++length;
	}

	return (length);
}

/**
 * print_rev - prints given string, in reverse, followed by a new line
 * @s: given string
 *
 * Return: returns nothing
 */

void print_rev(char *s)
{

	int l;

	l = _strlen(s);

	l = l - 1;

	while (l >= 0)
	{
		_putchar(*(s + l));
		--l;
	}
	_putchar('\n');
}
