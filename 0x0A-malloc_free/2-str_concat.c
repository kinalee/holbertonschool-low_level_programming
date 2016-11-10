#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first given pointer to a char
 * @s2: second given pointer to a char
 *
 * Return: returns a pointer to a newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	i = j = 0;

	while (s1[i] != '\0')
	{
		++i;
	}

	while (s2[j] != '\0')
	{
		++j;
	}

	++j;

	concat = malloc((i + j) * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}

	i = j = 0;

	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		++i;
	}

	while (s2[j] != '\0')
	{
		concat[i] = s2[j];
		++i;
		++j;
	}

	concat[i] = '\0';

	return (concat);
}
