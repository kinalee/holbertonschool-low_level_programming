#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Return: retunrs 0
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		++a;
	}
	putchar('\n');
	return (0);
}
