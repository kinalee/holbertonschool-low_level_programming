#include "holberton.h"

/**
 * add - add two given integers and returns the sum
 *
 * Return: result of the fuction
 */

void print_to_98(int n)
{

	int a, b, c;

	if (n < 98)
	{
		b = n / 10;
		c = n % 10;

		if (n > 9)
		{
		_putchar(b + '0');
		}

		_putchar(c + '0');
		_putchar(',');
		_putchar(' ');
/*
		++n;
*/
	}
	if (n > 98)
	{
		a = n / 100;
		b = (n / 10) % 10;
		c = n % 10;

		if (n > 100)
		{
			_putchar(a + '0');
		}
		_putchar(b + '0');
		_putchar(c + '0');
		_putchar(',');
		_putchar(' ');
/*

 */		--n;
	}

	_putchar('9' + '0');
	_putchar('8' + '0');
	_putchar('\n');

}
