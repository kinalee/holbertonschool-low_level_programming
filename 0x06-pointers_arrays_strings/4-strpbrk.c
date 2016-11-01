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
 * _strpbrk - searches a string for any of a set of bytes
 * @s: given string
 * @accept: given substring
 *
 * Return: returns a pointer to the byte in s that matches one of the bytes in
 *\ accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, ls, la, bool;
	char *c;

	i = 0;
	ls = _strlen(s);
	la = _strlen(accept);

	while (i < ls)
	{
		j = bool = 0;

		while (j < la)
		{
			if (s[i] == accept[j])
			{
				bool = 1;
			}

			++j;
		}

		if (bool == 1)
		{
			c = &s[i];
			return (c);
		}
		++i;
	}
	return (&s[i]);
}
