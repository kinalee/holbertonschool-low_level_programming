#include <stdio.h>

/**
 * main - the main and essential function to run this program
 *
 * Description: printing hexadecial number pattern from 0-f
 * Return: retunrs 0
 */

int main(void)
{

	int d;
	char h;

	d = 0;
	h = 'a';

	while (d < 10)
	{
		putchar(d + '0');
		++d;
	}

	while (h < 'g')
	{
		putchar(h);
		++h;
	}

	putchar('\n');
	return (0);
}
