#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_all - prints anything - char, int, float, or string
 *@format: a list of types of arguments passed to the function
 *
 *Return: returns nothing
 */

void print_all(const char * const format, ...)
{
	va_list print;
	int i = 0;
	char type;
	p_t types;

	va_start(print, format);
	while (format != NULL && format[i] != '\0')
	{
		type = format[i];
		switch (type)
		{
		case 'c':
			types.c = va_arg(print, int);
			printf("%c", types.c);
			break;
		case 'i':
			types.i = va_arg(print, int);
			printf("%i", types.i);
			break;
		case 'f':
			types.f = va_arg(print, double);
			printf("%f", types.f);
			break;
		case 's':
			types.s = va_arg(print, char *);
			if (types.s == NULL || types.s[0] == '\0')
				types.s = "(nil)";
			printf("%s", types.s);
			break;
		default:
			break;
		}
		if (format[i + 1] != '\0' && (type == 'c' || type == 'i' ||
					      type == 'f' || type == 's'))
			printf(", ");

		++i;
	}

	va_end(print);
	printf("\n");
}
