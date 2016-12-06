#include "holberton.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: given long int
 * Return: returns nothing
 */
void print_binary(unsigned long int n)
{
	signed long int size;
	int flag = 0;
	char c;

	size = sizeof(unsigned long int) * 8 - 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (size >= 0)
	{
		c = (n >> size) & 1;

		if (flag == 1)
			_putchar(c + '0');
		else
		{
			if (c == 1)
			{
				_putchar(c + '0');
				flag = 1;
			}
		}

		size -= 1;
	}
}
