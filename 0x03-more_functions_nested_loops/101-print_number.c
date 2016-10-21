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

	long a = n;
	
	if (a >= 0 && a < 10)
	{
		_putchar(a + '0');
	}
	if (a >= 10 && a < 100)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	if (a >= 100 && a < 1000)
	{
		_putchar(a / 100 + '0');
		_putchar((a / 10) % 10 + '0');
		_putchar(a % 10 + '0');
	}
	if (a >= 1000 && a < 10000)
	{
		_putchar(n / 1000 + '0');
		_putchar((n / 100) % 10 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');

	}
	if (a < 0 && a > -100)
	{
		a *= -1;
		_putchar('-');
		_putchar(a / 10 + '0');
		_putchar(a % 10 + '0');
	}

}
