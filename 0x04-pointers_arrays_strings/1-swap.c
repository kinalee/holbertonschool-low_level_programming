/**
 * swap_int - swaps the value of given integers
 * @a: given pointer
 * @b: given pointer
 *
 * Return: returns nothing.
 */


void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
