/**
 * _memset - fills given bytes of memory with a constant byte
 * @s: given character pointer
 * @b: given constant byte
 * @n: amount of bytes should be changed
 *
 * Return: returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		++i;
	}

	return (s);
}
