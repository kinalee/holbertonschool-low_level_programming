/**
 * _strstr - locates a substring
 * @haystack: given string
 * @needle: given substring
 *
 * Return: returns a pointer to the beginning of the located substring,
 *\or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;

	while (haystack[i] != '\0')
	{
		j = 0;

		while (needle[j] != '\0' && haystack[i] != '\0' &&
		       haystack[i] == needle[j])
		{
			++i;
			++j;
		}

		if (needle[j] == '\0')
		{
			return (&haystack[i - j]);
		}
		++i;
	}
	return (&haystack[i]);
}
