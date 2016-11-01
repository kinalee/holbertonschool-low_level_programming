#include <stdio.h>
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
	int i, j, k;

	i = 0;
	
	if (*needle == '\0')
	{
		return(0);
	}

	while (haystack[i] != '\0')
	{
		j = 0;
		k = i;

		while (needle[j] != '\0' && haystack[k] != '\0' &&
		       haystack[k] == needle[j])
		{
				++j;
				++k;
		}

		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
		++i;
	}

	return (0);
}
