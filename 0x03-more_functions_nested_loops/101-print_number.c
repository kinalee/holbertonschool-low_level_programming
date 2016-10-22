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

	int temp;
	int exp = 1;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	temp = n;

	while ((temp / 10) > 0)
	{

		temp = temp / 10;
		exp *= 10;
	}

	while (exp > 1)
	{

		_putchar((n / exp) % 10 + '0');
		exp /= 10;
	}

	_putchar(n % 10 + '0');

}
