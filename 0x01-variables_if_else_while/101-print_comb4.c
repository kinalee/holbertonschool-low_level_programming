#include <stdio.h>

/**
 *main - prints all possible different combinations of three digits
 *Return: returns 0
 */
int main(void)
{
	int i, one, ten, hund;

	i = 0;

	while (i < 1000)
	{
		one = i % 10;
		ten = (i / 10) % 10;
		hund = i / 100;
		if (ten > hund && one > ten)
		{
			putchar(hund + '0');
			putchar(ten + '0');
			putchar(one + '0');
			if (i != 789)
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
