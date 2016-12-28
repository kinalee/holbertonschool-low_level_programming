#include <stdio.h>

/**
 * main - calculates the sum of Fibonacci numbers, before its value exceeds
 * \4,000,000
 * Return: returns 0
 */
int main(void)
{
	int prev, cur, fib, sum;

	sum = 0;
	cur = fib = 1;
	while (fib < 4000000)
	{
		if (fib % 2 == 0)
			sum += fib;

		prev = cur;
		cur = fib;
		fib = prev + cur;
	}
	printf("%d\n", sum);
	return (0);
}
