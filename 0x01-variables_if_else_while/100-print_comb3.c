#include <stdio.h>

/**
 *main - the main and essential function to run this program
 *
 *Description: print all the possible
 *Return: returns 0
 */

int main(void)
{

	int ones;
	int tens;

	ones = 0;
	tens = 0;

	while (ones < 10 && tens < 10)
	{

		if (ones != tens && tens < ones)
		{

		putchar(tens + '0');
		putchar(ones + '0');

		if (ones != 9 || tens != 8)
		{
			putchar(',');
			putchar(' ');
		}
		}
		++ones;

		if (ones == 10)
		{

			ones = 0;
			++tens;

		}

	}
	putchar('\n');
	return (0);
}
