/**
 * _atoi - convert a string to an integer
 * @s : given character pointer
 *
 * Return: returns the result or 0.
 */

int _atoi(char *s)
{
	int i, neg, integer;

	i = neg = integer = 0;

	while (!(s[i] >= '0' && s[i] <= '9'))
	{
		if (s[i] == '-')
		{
			++neg;
		}

		if (s[i] == '\0')
		{
			return (0);
		}
		++i;
	}

	while (s[i] >= '0' && s[i] <= '9' && s[i] != '\0')
	{
		integer = integer * 10 - (s[i] - '0');
		++i;
	}

	if (neg % 2 == 0)
	{
		integer *= -1;
	}

	return (integer);
}
