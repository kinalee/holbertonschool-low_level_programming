#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: size of needed memory
 *
 * Return: returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mall;

	mall = malloc(b);

	if (mall == NULL)
	{
		exit(98);
	}

	return (mall);
}
