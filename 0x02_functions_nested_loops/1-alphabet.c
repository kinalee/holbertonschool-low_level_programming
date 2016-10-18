#include "holberton.h"

/**
 * print_alphabet - prints lowercase alphabet letters from a to z
 *
 * Description: prints alphabets letters using while loop
 * Return: no return
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
