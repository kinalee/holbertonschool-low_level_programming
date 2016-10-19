#include <stdio.h>

/**
 * main - calculates the sum of Fibonacci numbers, before its value exceeds
 * \4,000,000
 *
 * Return: returns 0
 */


int main(void)
{

	unsigned long i, f, p, n, sum;

	f = 0;
	n = 1;
	p = sum = 0;

	while (i < 4000000)
	{
		if (f % 2 == 0)
		{
			sum = f + sum;
		}
		
		f = p + n;
		p = n;
		n = f;
		++i;

	}
	printf("%lu\n", sum);
	return (0);
}
