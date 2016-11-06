#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers
 * @argc: count of the arguments
 * @argv: an array of pointers to the strings which are those arguments
 *
 * Return: returns 0 or 1
 */
int main(int argc, char **argv)
{
	int first, second;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	first = atoi(argv[1]);
	second = atoi(argv[2]);

	printf("%d\n", first * second);

	return (0);
}
