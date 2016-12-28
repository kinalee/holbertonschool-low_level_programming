#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * Return: returns 0
 */
int main(void)
{
	char a = 'a';
	char A = 'A';

	while (a <= 'z')
	{
		putchar(a);
		++a;
	}
	while (A <= 'Z')
	{
		putchar(A);
		++A;
	}
	putchar('\n');
	return (0);
}
