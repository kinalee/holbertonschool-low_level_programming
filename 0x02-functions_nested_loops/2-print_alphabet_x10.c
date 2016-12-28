#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times, in lowercase
 * Return: returns nothing
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char a;

	while (i < 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			++a;
		}
		_putchar('\n');
		++i;
	}
}
