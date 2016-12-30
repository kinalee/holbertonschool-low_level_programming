#include <stdio.h>

/**
 * main - prints the largest prime factor of 612852475143
 * Return: returns 0
 */
int main(void)
{
	long i = 2;
	long num = 612852475143;

	while (i < num)
	{
		if (num % i == 0)
			num /= i;

		else
			++i;
	}
	printf("%ld\n", i);
	return (0);
}
