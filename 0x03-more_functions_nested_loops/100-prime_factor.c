#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: returns 0
 */


int main(void)
{

	long num = 612852475143;
	long d = 2;
	long max;

	while (1)
	{
		if (num % d != 0)
		{
			d += 1;
		}

		else
		{
			max = num;
			num = num / d;
			if (num == 1)
			{
				printf("%ld\n", max);
				break;
			}
		}
	}

	return (0);
}
