#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main and essential function to run this program
 *
 * Description: display alphabet pattern thru a-z with lower cases
 * \and then upper cases followed by a newline
 * Return: returns 0
 */

int main(void)
{
	char alphaLower;
	char alphaUpper;
	char Z;
	char z;

	alphaLower = 'a';
	z = 'z';
	alphaUpper = 'A';
	Z = 'Z';

	while (alphaLower <= z)
	{

		putchar(alphaLower);
		++alphaLower;
	}

	while (alphaUpper <= Z)
	{

		putchar(alphaUpper);
		++alphaUpper;
	}

	putchar('\n');

	return (0);
}
