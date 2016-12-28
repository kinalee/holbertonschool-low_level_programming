#include "holberton.h"

/**
 * _islower - checks if the given argument is a lowercase letter
 * @c: given character
 * Return: returns 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}
