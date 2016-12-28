#include "holberton.h"

/**
 * print_last_digit - prints last digit of a given number
 * @n: given integer
 * Return: returns the result of the computation
 */
int print_last_digit(int n)
{
	int d;

	d = n % 10;
	if (d < 0)
		d = d * (-1);

	_putchar(d + '0');
	return (d);
}
