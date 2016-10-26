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
 * rev_string - prints given string, in reverse, followed by a new line
 * @s: given string
 *
 * Return: returns nothing
 */

void rev_string(char *s)
{

	int l, i, b;
	char a;

	l = _strlen(s);
	i = 0;

	while (i < l / 2)
	{
		b = l - 1 - i;
		a = s[i];
		s[i] = s[b];
		s[b] = a;
		++i;
	}
}
