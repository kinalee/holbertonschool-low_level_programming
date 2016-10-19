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

	f = 0;
	p = 1;
	n = 2;
	sum = 2;
	
	while (f < 4000000)
	{		
		f = p + n;
		p = n;
		n = f;

		if (f % 2 == 0)
		{
			sum += f;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
