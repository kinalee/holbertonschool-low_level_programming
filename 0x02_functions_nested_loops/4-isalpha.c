#include <ctype.h>
#include "holberton.h"

/**
 * _isalpha - checks if the given argument is an alphabet letter
 * @c: the input character/tested character
 *
 * Description: returns the value of 0 or 1, depending on the argument
 * Return: On success 1.
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
