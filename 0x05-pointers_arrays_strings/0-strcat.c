#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @n: given character/string  pointer
 *
 * Return: returns the length of the string
 */

int _strlen(char *n)
{
	int l = 0;

	while (n[l] != '\0')
	{
		printf("%d", l);
		++l;
	}


	return (l);
}

/**
 * _strcat(char *dest, char *src) - concatenates two strings
 * @dest:first string pointer
 * @src: second string pointer
 *
 * Return: returns concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, l;

	i = 0;
	printf("before\n");
	l = _strlen(dest);
	printf("after\n");

	while (src[i] != '\0')
	{
		dest[l] = src[i];
		++i;
		++l;
	}

	dest[l] = src[i];

	return (dest);

}
