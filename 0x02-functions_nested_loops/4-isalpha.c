#include <ctype.h>
#include "holberton.h"

/**
 * _isalpha - checks if the given argument is an alphabet letter
 * @c: the input character/tested character
 *
 * Description: returns the value of 0 or 1, depending on the argument
 * Return: returns 1 for alphabet letters, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
