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
 * puts2 - only prints even number digits
 * @str: given string
 *
 * Return: returns nothing
 */

void puts2(char *str)
{
	int i, l;

	l = _strlen(str);

	while (i < l)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
