/**
 * _isupper - checks if the given argument is uppercase letter
 * @c: given/tested argument
 *
 * Return: returns 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
