/**
 *int_index - function that searches for an integer
 *@array: given integer array
 *@size: size of the array
 *@cmp: given function pointer
 *
 *Return: returns the index of the first element for which
 *\the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; ++i)
	{
		cmp(array[i]);

		if (cmp(array[i]) != 0)
			return (i);

		if (cmp(array[i]) == 0 && i == 4)
			return (-1);
	}

	return (-1);
}
