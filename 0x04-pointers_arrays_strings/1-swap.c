/**
 * swap_int - swaps the value of given integers
 * @a: given pointer to an integer 1
 * @b: given pointer to an integer 2
 * Return: returns nothing.
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
