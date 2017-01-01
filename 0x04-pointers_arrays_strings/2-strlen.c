/**
 * _strlen - returns the length of a string
 * @s: given string
 * Return: length of the given string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		++i;

	return (i);
}
