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
	char alpha;

	alpha = 'z';

	while (alpha >= 'a')
	{

		putchar(alpha);
		--alpha;
	}

	putchar('\n');

	return (0);
}
