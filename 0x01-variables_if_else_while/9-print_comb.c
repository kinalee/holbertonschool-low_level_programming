#include <stdio.h>

/**
 * main - the main and essential function to run this program
 *
 * Description: printing numbers in ascending order with a following comma
 * Return: retunrs 0
 */

int main(void)
{

	int num;
	int nine;

	num = 0;
	nine = 9;

	while (num < 10)
	{
		putchar(num + '0');

		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}

		++num;
			
	}

	putchar('\n');
	return (0);
}
