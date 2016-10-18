#include <ctype.h>
#include "holberton.h"

/**
 * _islower - checks if the given argument is a lowercase letter
 * @c: the input character/tested character
 *
 * Description: returns the value of 0 or 1, depending on the argument
 * Return: returns 1 for lower case letters, 1 otherwise
 */

int _islower(int c)
{

	if (islower(c))
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
