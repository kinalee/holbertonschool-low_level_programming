#include <stdio.h>

/**
 * main - calculates the sum of Fibonacci numbers, before its value exceeds
 * \4,000,000
 *
 * Return: returns 0
 */


int main(void)
{

	unsigned long f, p, n, sum;

	n = 1;
	p = sum = 0;

	while (1)
	{

		f = p + n;
		if (f > 4000000)
		{
			break;
		}
		sum = f + sum;
		p = n;
		n = f;
	}
	printf("%lu\n", sum);
	return (0);
}
