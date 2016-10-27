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
		++l;
	}


	return (l);
}

/**
 * _strncat - concatenates two strings, using at most n bytes from src
 * @dest: first string pointer
 * @src: second string pointer
 * @n: less than n numbers of digits will be printed
 *
 * Return: returns concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, l;

	l = _strlen(dest);
	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[l] = src[i];
		++i;
		++l;
	}

	if (i == n && n == '\0')
	{
		dest[l] = '\0';

	}

	return (dest);
}
