#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: given pointer variable
 *
 * Return: returns string length
 */

int _strlen(char *s)
{
	unsigned int length = 0;

	while (s[length] != '\0')
	{
		++length;
	}

	return (length);
}

/**
 * _strspn - gets the length of a prefix substring
 * @s: given string pointer
 * @accept: substring
 *
 * Return: returns number of bytes in the initial segment of s which consist
 *\only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, ls, la, prefix, bool;

	i = prefix = 0;
	ls = _strlen(s);
	la = _strlen(accept);

	while (i < ls)
	{
		j = bool = 0;

		while (j < la)
		{
			if (s[i] == accept[j])
			{
				prefix = prefix + 1;
				bool = 1;
			}

			++j;
		}
		if (bool == 0)
		{
			return (prefix);
		}
		++i;
	}

	return (prefix);
}
