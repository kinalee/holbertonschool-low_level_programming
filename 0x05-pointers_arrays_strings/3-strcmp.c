/**
 * _strcmp - compare two given strings
 * @s1: first given value
 * @s2: second given value
 *
 * Return: (s1 - s2) or 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i])
	{
		++i;
	}

	return (s1[i] - s2[i]);
}
