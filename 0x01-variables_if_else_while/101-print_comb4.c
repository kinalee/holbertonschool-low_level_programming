#include <stdio.h>

/**
 *main - the main and essential function to run this program
 *
 *Description: print all the possible combinations for 3 digit code, however,
 *\eliminate duplicated comb. - i.e. 012, 120, 102, 021, 201, 210
 *\are considered same
 *Return: returns 0
 */

int main(void)
{

	int a, b, c;

	a = 0;
	b = 0;
	c = 0;
	while (a < 10 && b < 10 && c < 10)
	{
		if (a < b && b < c)
		{
			putchar(a + '0');
			putchar(b + '0');
			putchar(c + '0');

			if (a != 7 || b != 8 || c != 9)
			{
				putchar(',');
				putchar(' ');
			}

		}

		++c;

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
