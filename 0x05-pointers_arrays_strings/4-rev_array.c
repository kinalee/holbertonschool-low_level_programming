/**
 * reverse_array - reverses the content of an array of integers
 * @a: given array
 * @n:the number of elements of the array
 *
 * Return: returns nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;
	int hn;

	hn = n / 2;
	n = n - 1;

	while (i < hn)
	{
		temp = a[i];
		a[i] = a[n - i];
		a[n - i] = temp;

		++i;
	}




}
