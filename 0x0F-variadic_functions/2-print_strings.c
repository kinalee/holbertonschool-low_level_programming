#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - prints strings, followed by a new line
 *@seperator: string to be printed between the strings
 *@n: the number of strings passed to the function
 *
 *Return: returns nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list print_str;
	unsigned int i;
	char *str;

	va_start (print_str, n);

	for (i = 0; i < n; ++i)
	{
		str = va_arg(print_str, char*);

		if (str == NULL)
			printf("(nil)");

		if (i < n - 1)
		{
			printf("%s", str);
			printf("%s", separator);
		}

		else
			printf("%s", str);

	}

	printf("\n");
	va_end (print_str);
}
