/**
 * _prime_num - checks if n is a prime number
 * @two: divides n. starts with two
 * @n: given integer
 *
 * Return: 0 or -1
 */

int _prime_num(int two, int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == two)
	{
		return (1);
	}
	if (n % two == 0)
	{
		return (0);
	}

		return (_prime_num(two + 1, n));


}

/**
 * is_prime_number - returns 1 if a number is a prime number, 0 otherwise
 * @n: given integer
 *
 * Return: the value of function _prime_num
 */

int is_prime_number(int n)
{
	return (_prime_num(2, n));
}
