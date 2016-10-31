/**
 * _memcpy - copies memory area
 * @dest: characters/string copied to
 * @src: charcters/string copied from
 * @n: amount of bytes
 *
 * Return: returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		++i;
	}
	return (dest);
}
