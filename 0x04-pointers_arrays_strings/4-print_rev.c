#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: given string
 * Return: length of the given string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		++i;

	return (i);
}

/**
 * print_rev - prints given string, in reverse, followed by a new line
 * @s: given string
 * Return: returns nothing
 */
void print_rev(char *s)
{
	int i;

	i = _strlen(s);
	--i;

	while (i >= 0)
	{
		_putchar(s[i]);
		--i;
	}
	_putchar('\n');
}
