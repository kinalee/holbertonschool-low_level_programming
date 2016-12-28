#include <stdio.h>

/**
 *main - prints numbers from 0 to 99
 *Return: returns 0
 */
int main(void)
{
	int i, one, ten;

	i = 0;
	while (i < 100)
	{
		one = i % 10;
		ten = i / 10;
		putchar(ten + '0');
		putchar(one + '0');

		if (i != 99)
		{
			putchar(',');
			putchar(' ');
		}

		++i;
	}
	putchar('\n');
	return (0);
}
