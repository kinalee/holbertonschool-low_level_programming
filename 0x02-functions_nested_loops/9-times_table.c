#include "holberton.h"

/**
 * times_table - prints times table from 0 thru 9
 *
 * Return: no return
 */

void times_table(void)
{

	int i, j, k;
	int a, b, c;

	i = 0;
	j = 1;

	while (i < 10)
	{
		k = 0 * i;
		_putchar(k + '0');

		while (j < 10)
		{
			a = i * j;
			b = a / 10;
			c = a % 10;

			_putchar(',');
			_putchar(' ');

			if (a < 10)
			{
				_putchar(' ');
			}
			if (a >= 10)
			{
				_putchar(b + '0');

			}
			_putchar(c + '0');
			++j;

		}
		_putchar('\n');
		++i;
		j = 1;

	}
}
