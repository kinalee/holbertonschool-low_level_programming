#include "holberton.h"

/**
 * _palindrome - checks if a given string is a palindrome
 * @s: pointer to the given character
 * @rev: reversed given string
 *
 * Return: returns 0 or 1
 */

int _palindrome(char *s, char *rev)
{
	if (*s == '\0')
	{
		return (1);
	}

	if (*s != *rev)
	{
		return (0);
	}

	++s;
	--rev;
	return (_palindrome(s, rev));
}

/**
 * _revstr - reverses given string
 * @s: given pointer to a character
 *
 * Return: returns the pointer of the given string
 */
char *_revstr(char *s)
{
	if (*s != '\0')
	{
		return (_revstr(s + 1));
	}
	return (s - 1);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: given pointer to a character
 *
 * Return: returns 0 or 1
 */

int is_palindrome(char *s)
{
	char *rev;

	if (s != '\0')
	{
		rev = _revstr(s);
	}

	return (_palindrome(s, rev));
}
