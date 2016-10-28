/**
 * leet - encodes a string into 1337
 * @str: given string/character
 *
 * Return: returns encoded string
 */

char *leet(char *str)
{

	int i;
	int j;
	char lower[6] = "aeotl";
	char upper[6] = "AEOTL";
	char num[6] = "43071";

	i = 0;

	while (str[i] != '\0')
	{
		j = 0;

		while (j < 6)
		{
			if (str[i] == lower[j] || str[i] == upper[j])
			{
				str[i] = num[j];
			}
			++j;
		}
		++i;
	}

	return (str);
}
