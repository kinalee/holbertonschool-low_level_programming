/**
 * cap_string - capitalizes all words of a string
 * @str: given string
 *
 * Return: capitalized string
 */

char *cap_string(char *str)
{
	int i = 1;
	char c;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}

	while (str[i] != '\0')
	{
		c = str[i - 1];
		if ((c == ' ' || c == '\t' || c == '\n' || c == ',' ||
		    c == ';' || c == '.' || c == '!' || c == '?' ||
		    c == '"' || c == '(' || c == ')' || c == '{' ||
		     c == '}') && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;

		}

		++i;
	}

	return (str);
}
