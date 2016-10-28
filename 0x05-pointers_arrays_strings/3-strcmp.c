/**
 * _strcmp - compare two given strings
 * @s1: first given value
 * @s2: second given value
 *
 * Return: -15, 15, or 0
 */

int _strcmp(char *s1, char *s2)
{
	if (s1 < s2)
	{
		return (-15);
	}
	else if (s1 > s2)
	{
		return (15);
	}
	else
	{
		return (0);
	}

}
