#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *main - performs simple arithmetic operations
 *@argc: number of given arguments
 *@argv: pointer of pointer of character of given agrguments
 *
 *Return: returns 0
 */

int main(int argc, char **argv)
{
	int a, b, res;
	char op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = argv[2][0];

	if (op != '+' && op != '-' && op != '*' && op != '/' && op != '%' &&
	    op != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((op == '/' || op == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	res = (*get_op_func)(&op)(a, b);
	printf("%d\n", res);
	return (0);
}
