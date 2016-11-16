#include <stdlib.h>

/**
 *array_iterator - executes a function given as
 *a parameter on each element of an array
 *@array: given integer array
 *@size: size of the array
 *@action: pointer to the function
 *
 * Return: returns nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; ++i)
		action(array[i]);
}
