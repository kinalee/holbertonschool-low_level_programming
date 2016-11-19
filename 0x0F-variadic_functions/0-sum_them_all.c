#include <stdarg.h>

/**
 *sum_them_all - returns the sum of all its parameters
 *@n: number of arguments
 *
 *Return: returns 0, or the sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{

	if (n == 0)
		return (0);

	va_list sum_all;
	unsigned int i;
	int sum;

	sum = 0;

	va_start(sum_all, n);

	for (i = 0; i < n; ++i)
	{
		sum = sum + va_arg(sum_all, int);
	}

	va_end(sum_all);

	return (sum);
}
