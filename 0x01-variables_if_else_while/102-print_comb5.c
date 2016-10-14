#include <stdio.h>

/**
 *main - the main and essential function to run this program
 *
 *Description: prints all possible combinations of two two-digit numbers.
 *Return: returns 0
 */

int main(void)
{
	int a, b, c, d, x, y;

	a = 0;
	d = b = c = a;
	while (a < 10 && b < 10 && c < 10 && d < 10)
	{
		x = (a * 10) + (b * 1);
		y = (c * 10) + (d * 1);
		if (x < y)
		{
			putchar(a + '0');
			putchar(b + '0');
			putchar(' ');
			putchar(c + '0');
			putchar(d + '0');
			if (a != 9 || b != 8 || c != 9 || d != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
			++d;
			if (d == 10)
			{
				d = 0;
				++c;
			}
			if (c == 10)
			{
				c = 0;
				++b;
			}
			if (b == 10)
			{
				b = 0;
				++a;
			}
	}
	putchar('\n');
	return (0);
}
