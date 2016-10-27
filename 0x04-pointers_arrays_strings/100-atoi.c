/**
 * _atoi - convert a string to an integer
 * @s : given character pointer
 *
 * Return: returns the result or 0.
 */

int _atoi(char *s)
{
	int i, j, neg, integer;
	char s2[50];

	i = j = neg = integer = 0;

	while (!(s[i] >= '0' && s[i] <= '9'))
	{
		if (s[i] == '-')
		{
			++neg;
		}
		++i;
		if (s[i] == '\0')
		{
			return (0);
		}

	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		s2[j] = s[i];
		++j;
		++i;
	}

	s2[j] = '\0';
	j = 0;

	while (s2[j] != '\0')
	{
		integer = integer * 10 + (s2[j] - '0');
		++j;
	}
	if (neg % 2 != 0)
	{
		integer *= -1;
	}
	return (integer);
}
