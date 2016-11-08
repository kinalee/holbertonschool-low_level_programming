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

	i = j = 0;

	concat = malloc(sizeof(*s1 + *s2));

	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		++i;
	}

	while (s2[j] != '\0')
	{
		concat[i] = s2[j];
		++j;
		++i;
	}

	concat[i] = s2[j];

	return (concat);
}
