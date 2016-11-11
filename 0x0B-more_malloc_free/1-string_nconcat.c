#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: given pointer to a char 1
 * @s2: given pointer to a char 2
 *
 * Return: returns a pointer to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; ++i)
		;
	for (j = 0; s2[j] != '\0'; ++j)
		;
	if (j > n)
	{
		concat = malloc((i + n + 1) * sizeof(char));
	}
	else
	{
		concat = malloc((i + j + 1) * sizeof(char));
		n = j + 1;
	}

	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; ++i)
	{
		concat[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0' && n != 0; ++i, ++j, --n)
	{
		concat[i] = s2[j];
	}

	concat[i] = '\0';
	return (concat);
}
