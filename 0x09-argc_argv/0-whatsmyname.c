#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: count of the arguments
 * @argv: an array of pointers to the strings which are those arguments
 *
 * Return: returns 0
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s", *argv++);
	}

	printf("\n");
	return (0);
}
