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

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}

	while (src[i] == '\0')
	{
		if (i == n)
		{
			dest[i] = '\0';
			break;
		}
		else
		{
			dest[i] = '\0';
			++i;
		}
	}

	return (dest);

}
