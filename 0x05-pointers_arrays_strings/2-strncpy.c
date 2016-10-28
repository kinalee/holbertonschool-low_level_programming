/**
 * _strncpy - copies a string
 * @dest: first string pointer
 * @src: second string pointer
 * @n: less than n numbers of digits will be copied
 *
 * Return: returns copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n && src[i] == '\0')
	{
		dest[i] = '\0';
		++i;
	}
	if (i == n && src[i] == '\0')
	{
		dest[i] = '\0';
	}
	return (dest);
}
