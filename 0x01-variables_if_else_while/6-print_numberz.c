#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main and essential function to run this program
 *
 * Description: display alphabet pattern thru a-z with a newline
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
