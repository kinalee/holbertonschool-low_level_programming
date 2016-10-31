/**
 * _strchr - returns a pointer to the first occurrence of the character c in
 *\ the string s
 * @s: given string
 * @c: given character
 *
 * Return: Returns a pointer to the first occurrence of the character c in the
 *\string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i, length;
	char *a;

	i = length = 0;

	while (s[length] != '\0')
	{
		++length;
	}

	while (i < length)
	{
		if (s[i] == c)
		{
			a = &s[i];

			return (a);
		}

		++i;
	}

	return ('\0');
}
