#include <stdio.h>

/**
 * main - the main and essential function to run this program
 *
 * Description: display 0-9 with a newline
 * Return: retunrs 0
 */

int main(void)
{

	int num;

	num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		++num;
	}

	putchar('\n');
	return (0);
}
