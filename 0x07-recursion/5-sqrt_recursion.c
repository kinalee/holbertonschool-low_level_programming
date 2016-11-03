/**
 * _sqrt - compares start * start and n
 * @start: always starts with zero
 * @n: given integer
 *
 * Return: -1 or start
 */
int _sqrt(int start, int n)
{
	if (start * start == n)
	{
		return (start);
	}
	if (start * start > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(start + 1, n));
	}

}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: given integer
 *
 * Return: returns the value of _sqrt function
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(0, n));
}
