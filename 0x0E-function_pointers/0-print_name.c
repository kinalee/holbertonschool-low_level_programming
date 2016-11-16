/**
 *print_name - prints a name
 *@name: name to be printed
 *@f: function pointer of name printing function
 *
 * Return: returns nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
}
