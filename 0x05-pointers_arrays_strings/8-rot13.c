/**
 * rot13 - encodes a string using rot13
 * @s: given string/character
 *
 * Return: returns encoded string
 */

char *rot13(char *s)
{
	int i = 0;
	int j;
	char ascii[256];

	while (i < 256)
	{
		ascii[i] = i;
		++i;
	}
	i = 65;
	while (i <= 77)
	{
		ascii[i] = i + 13;
		++i;
	}
	while (i <= 90)
	{
		ascii[i] = i - 13;
		++i;
	}
	i = 97;
	while (i <= 109)
	{
		ascii[i] = i + 13;
		++i;
	}
	while (i <= 122)
	{
		ascii[i] = i - 13;
		++i;
	}
	i = 0;
	while (s[i] != '\0')
	{
		j = s[i];
		s[i] = ascii[j];
		++i;
	}
	return (s);
}
