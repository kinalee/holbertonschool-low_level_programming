#include <stdio.h>

int main(int argc, char **argv)
{
	while(0 < argc)
	{
		printf("%s", *argv);
		++argv;
		--argc;
	}

	printf("\n");
	return (0);
}
