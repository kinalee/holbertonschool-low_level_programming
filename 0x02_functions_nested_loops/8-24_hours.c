#include "holberton.h"

/**
 * jack_bauer - prints every minute
 *
 * Return: no return
 */

void jack_bauer(void)
{

	int i, j;
	int a, b, c, d;

	i = j = 0;

	while (i < 24)
	{
		a = i / 10;
		b = i % 10;

		while (j < 60)
		{

			c = j / 10;
			d = j % 10;

			_putchar(a + '0');
			_putchar(b + '0');
			_putchar(':');
			_putchar(c + '0');
			_putchar(d + '0');
			_putchar('\n');

			++j;
		}

		++i;
		j = 0;
	}


}
