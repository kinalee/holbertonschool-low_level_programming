#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except 'q' and 'e'
 * Return: retunrs 0
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'q' && a != 'e')
			putchar(a);

		++a;
	}
	putchar('\n');
	return (0);
}
