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
	int i, j, ls, la, boole;

	i = 0;
	ls = _strlen(s);
	la = _strlen(accept);

	while (i < ls)
	{
		j = 0;
		boole = 1;

		while (j < la)
		{
			if (s[i] == accept[j])
			{
				boole = 0;
			}

			++j;
		}

		if (boole == 0)
		{
			return (&s[i]);
		}
		++i;
	}
	return (0);
}
