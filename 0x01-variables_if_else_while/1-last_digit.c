#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - the main and essential function to run this program
 * Description: tests if the last digit of n is greater than, less than 6
 *
 * \but not zero, or 0.
 * Return: retunrs 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	else if (n % 10 < 6 && n % 10 != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}

	return (0);
}
