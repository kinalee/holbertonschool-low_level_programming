#include <stdio.h>
#include "holberton.h"

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 *\ starting with 1 and 2
 *
 * Description: not allowed to use long long or malloc
 * Return: returns 0
 */

int main(void)
{
	long f1, f2, n1, n2, p1, p2, i;

	n1 = 0;
	n2 = 1;
	p1 = 0;
	p2 = 0;
	i = 1;

	while (i < 99)
	{
		f1 = p1 + n1;
		f2 = p2 + n2;
		if (f2 > 999999999999999999)
		{
			++f1;
			f2 = f2 % 1000000000000000000;
		}
		p2 = n2;
		n2 = f2;
		p1 = n1;
		n1 = f1;
		if (f1 != 0)
		{
			printf("%ld", f1);

			if (i != 98)
			{
				printf("%018ld, ", f2);
			}
			else
				printf("%018ld", f2);
		}
		else
		{
			printf("%ld, ", f2);
		}
		++i;
	}
	printf("\n");
	return (0);
}
