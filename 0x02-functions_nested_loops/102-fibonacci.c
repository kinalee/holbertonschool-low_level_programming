#include <stdio.h>

/**
 * main - prints first 50 Fibonacci numbers
 *
 * Return: returns 0
 */



int main(void)
{

	unsigned long f, p, i, n;

	p = 0;
	i = n = 1;

	while (i <= 50)
	{
		f = n + p;

		if (i != 50)
		{
			printf("%lu, ", f);
		}
		else
		{
			printf("%lu\n", f);
		}

		p = n;
		n = f;
		++i;
	}
	return (0);
}
