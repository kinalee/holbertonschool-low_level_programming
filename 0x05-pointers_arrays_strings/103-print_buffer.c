#include <stdio.h>
#include <ctype.h>

/**
 * _isprint - printfs a character or dot depending on the status of argument
 * @c: given character
 *
 * Return: returns nothing.
 */

void _isprint(char c)
{
	if (isprint(c))
	{
		printf("%c", c);
	}
	else
	{
		printf(".");
	}
}


/**
 * print_buffer - prints a buffer
 * @b: given string
 * @size: functions prints the content of size bytes of the buffer pointed by b
 *
 * Return: returns nothing
 */

void print_buffer(char *b, int size)
{
	int i, j, k;

	i = j = 0;
	if (size <= 0)
	{
		printf("\n");
	}
	else
		while (i < size)
		{
			printf("%08x: ", i);
			k = 0;
			while (k < 5)
			{
				if (j < size)
				{
					printf("%02x%02x ", b[j], b[j + 1]);
				}
				else
				{
					printf("     ");
				}
				j = j + 2;
				++k;
			}
			k = 0;
			while (k < 10 && i < size)
			{
				_isprint(*(b + i));
				++k;
				++i;
			}
			printf("\n");
		}
}
