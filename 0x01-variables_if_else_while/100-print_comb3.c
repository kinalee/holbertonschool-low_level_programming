#include <stdio.h>

/**
 *main - prints all possible different combinations of two digits
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
		if (one > ten)
		{
			putchar(ten + '0');
			putchar(one + '0');
			if (i != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		++i;
	}
	putchar('\n');
	return (0);
}
