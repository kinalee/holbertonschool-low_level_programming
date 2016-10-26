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
 * puts_half - prints the last half of a string, followed by a new line
 * @str: given string
 *
 * Return: returns nothing.
 */

void puts_half(char *str)
{
	int l, hl;

	l = _strlen(str);

	if (l % 2 != 0)
	{
		hl = (l - 1) / 2;
	}
	else
	{
		hl = l / 2;
	}

	while (hl < l)
	{
		_putchar(str[hl]);
		++hl;
	}
	_putchar('\n');

}
