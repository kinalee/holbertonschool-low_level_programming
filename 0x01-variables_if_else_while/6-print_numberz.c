#include <stdio.h>

/**
 * main - prints all numbers of base 10 starting from 0, only using putchar
 * Return: retunrs 0
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		++num;
	}
	putchar('\n');
	return (0);
}
