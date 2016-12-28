#include "holberton.h"

/**
 * print_alphabet - prints alphabet in lowercase
 * Return: returns nothing
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		++a;
	}
	_putchar('\n');
}
