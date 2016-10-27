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
 * _strcat - concatenates two strings
 * @dest:first string pointer
 * @src: second string pointer
 *
 * Return: returns concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, l;

	i = 0;
	l = _strlen(dest);

	while (src[i] != '\0')
	{
		dest[l] = src[i];
		++i;
		++l;
	}

	dest[l] = src[i];

	return (dest);

}
