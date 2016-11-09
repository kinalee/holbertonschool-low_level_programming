#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *\which contains a copy of the string given as a parameter
 * @str: given pointer to a character
 *
 * Return: returns a pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	int i;
	char *copied_str;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	copied_str = malloc(i * sizeof(char));

	if (copied_str == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (str[i] != '\0')
	{
		copied_str[i] = str[i];
		i++;
	}

	return (copied_str);
}
