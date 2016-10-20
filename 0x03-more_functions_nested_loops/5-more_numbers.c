#include "holberton.h"

/**
 * more_numbers - prints numbers from 0 to 14, 10 times.
 *
 * Return: no return
 */

void more_numbers(void)
{
	int i, j;

	i = 1;

	while (i < 11)
	{
		j = 0;

		while (j < 15)
		{
			if (j > 9)
			{
				_putchar(j / 10 + '0');
			}

			_putchar(j % 10 + '0');
			++j;
		}
		_putchar('\n');
		++i;

	}
}
