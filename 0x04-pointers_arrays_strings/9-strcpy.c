/**
 * _strcpy - copies string
 * @dest: where string is copied to
 * @src: where string is copied from
 *
 * Return: returns pointer to dest
 */

char *_strcpy(char *dest, char *src)
{

	char *tmp;

	tmp = dest;

	while (*src != 0)
	{
		*dest = *src;
		++src;
		++dest;
	}

	*dest = *src;
	dest = tmp;

	return (dest);
}
