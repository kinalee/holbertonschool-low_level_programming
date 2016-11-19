#include <stdio.h>
#include <stdarg.h>

/**
 *print_numbers - prints numbers, followed by a new line
 *@seperator: string to be printed between numbers
 *@n: the number of integers passed to the function
 *
 *Return: returns nothing
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list print_num;
	unsigned int i;

	va_start(print_num, n);

	for (i = 0; i < n; ++i)
	{

		printf("%d", va_arg(print_num, unsigned int));

		if (i < n - 1)
		{

			if (seperator == NULL)
				return;
			else
			printf("%s", seperator);
		}

	}

	va_end(print_num);
	printf("\n");
}
