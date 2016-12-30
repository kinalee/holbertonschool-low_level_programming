/**
 * _isdigit - checks if given argument is a digit
 * @c: given integer
 * Return: returns 0 or 1
 */
int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
