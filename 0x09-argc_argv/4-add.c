#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: count of the arguments
 * @argv: an array of pointers to the strings which are those arguments
 *
 * Return: returns 0, or 1
 */
int main(int argc, char **argv)
{
	int sum, num, i;
	char *arg;

	++argv;
	--argc;

	sum = 0;

	while (argc--)
	{
		i = 0;
		arg = *argv;

		while (arg[i] != '\0')
		{
			if (isdigit(arg[i]))
			{
				++i;
			}
			else
			{
				printf("Error\n");
				return (1);
			}

		}

		num = atoi(*argv);
		sum += num;
		++argv;
	}
	printf("%d\n", sum);
	return (0);
}
