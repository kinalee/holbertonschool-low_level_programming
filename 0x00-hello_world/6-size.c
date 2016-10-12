#include <stdio.h>

/**
 * main - the main function
 *
 * Description: It is the main function."
 * Return: Returned 0
 */

int main(void)
{
	char charSize;
	int intSize;
	long longSize;
	long long longLongSize;
	float floatSize;

	printf("Size of a char: %ld byte(s)\n", sizeof(charSize));
	printf("Size of an int: %ld byte(s)\n", sizeof(intSize));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longSize));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(longLongSize));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatSize));

	return (0);
}
