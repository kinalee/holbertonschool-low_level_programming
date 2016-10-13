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

	alpha = 'a';

	while (alpha <= 'z')
	{

		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
		}

		++alpha;
	}

	putchar('\n');

	return (0);
}
