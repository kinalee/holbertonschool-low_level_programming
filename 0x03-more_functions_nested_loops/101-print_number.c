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

	long num = n;
	long temp;
	long exp = 1;

	if (num < 0)
	{
		num *= -1;
		_putchar('-');
	}

	temp = num;

	while ((temp / 10) > 0)
	{

		temp = temp / 10;
		exp *= 10;
	}

	while (exp > 0)
	{

		_putchar((num / exp) % 10 + '0');
		exp /= 10;
	}

}
