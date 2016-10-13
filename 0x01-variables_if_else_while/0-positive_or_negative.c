#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - the main and essential function to run this program
 * Description: tests if n is greater than, less than, or equal to 0.
 * Return: retunrs 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
       	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
