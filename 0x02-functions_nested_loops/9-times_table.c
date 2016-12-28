#include "holberton.h"

/**
 * times_table - prints times table from 0 thru 9
 * Return: returns nothing
 */
void times_table(void)
{
	int i, j, k;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			k = i * j;
			if (k >= 10)
				_putchar((k / 10) + '0');

			_putchar((k % 10) + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (i * (j + 1) < 10)
					_putchar(' ');
			}
			++j;
		}
		_putchar('\n');
		++i;
	}
}
