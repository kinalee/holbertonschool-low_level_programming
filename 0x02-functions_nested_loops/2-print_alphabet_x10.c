#include "holberton.h"

/**
 * print_alphabet_x10 - prints 10 lines of alphabet letters from a to z
 *
 * Description: using nested loops
 * Return: returns 0
 */


void print_alphabet_x10(void)
{

	int i = 0;
	char a = 'a';

	while (i < 11)
	{
		while (a <= 'z')
		{
			_putchar(a);
			++a;
		}

		a = 'a';
		_putchar('\n');
		++i;
	}
	return;
}
