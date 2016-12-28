#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, in reverse order
 * Return: retunrs 0
 */
int main(void)
{
	char z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		--z;
	}
	putchar('\n');
	return (0);
}
