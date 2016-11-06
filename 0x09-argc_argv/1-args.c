#include <stdio.h>
/**
 * main - prints the number of passed arguments
 * @argc: count of the arguments
 * @argv: an array of pointers to the strings which are those arguments
 *
 * Return: returns 0
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);

}
