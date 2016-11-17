#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform
 *\the operation asked by the user
 *@s: given operator
 *
 *Return: return a pointer to the proper op function
 */

int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;

	while (i < 5)
	{
		if (*ops[i].op == *s)
			return (ops[i].f);
		++i;
	}

	return (NULL);
}
