#include "holberton.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: given integer
 * Return: returns nothing
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n > 15 || n < 0)
		return;

	i = 0;
	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			k = i * j;
			if (k > 99)
				_putchar(k / 100 + '0');

			if (k > 9)
				_putchar((k / 10) % 10 + '0');

			_putchar(k % 10 + '0');

			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
				if (i * (j + 1) < 10)
					_putchar(' ');

				if (i * (j + 1) < 100)
					_putchar(' ');
			}
			++j;
		}
		_putchar('\n');
		++i;
	}
}
