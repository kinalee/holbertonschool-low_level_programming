#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: count of the arguments
 * @argv: an array of pointers to the strings which are those arguments
 *
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;


	while (argc--)
	{
		printf("%s\n", argv[i]);
		++i;
	}

	return (0);

}
