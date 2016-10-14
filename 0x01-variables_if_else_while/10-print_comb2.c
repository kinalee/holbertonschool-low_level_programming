#include <stdio.h>

/**
 *main - the main and essential function to run this program
 *
 *Description: display 0 to 99 using XX function
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

		putchar(tens + '0');
		putchar(ones + '0');

		if (ones != 9 || tens != 9)
		{
			putchar(',');
			putchar(' ');
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
