#include "holberton.h"

/**
 * print_number - print given integers
 * @n: given/tested integer
 *
 * Description: Only use _putchar to print
 * Return: no return
 */

void print_number(int n)
{
	if (n >= 0 && n < 10)
	{
		_putchar(n + '0');
	}
	if (n >= 10 && n < 100)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	if (n >= 100 && n < 1000)
	{
		_putchar(n / 100 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
	if (n >= 1000 && n < 10000)
	{
		_putchar(n / 1000 + '0');
		_putchar((n / 100) % 10 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');

	}
	if (n < 0 && n > -100)
	{
		n *= -1;
		_putchar('-');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}

}
