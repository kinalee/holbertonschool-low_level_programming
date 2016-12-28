#include <stdio.h>

/**
 * main - prints first 50 Fibonacci numbers
 * Return: returns 0
 */
int main(void)
{
	long i, cur, prev, fib;

	i = 0;
	cur = fib = 1;
	while (i < 50)
	{
		printf("%ld", fib);
		if (i < 49)
			printf(", ");

		prev = cur;
		cur = fib;
		fib = prev + cur;
		++i;
	}
	printf("\n");
	return (0);
}
