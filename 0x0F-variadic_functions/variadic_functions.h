#ifndef VAR_FUNC_H
#define VAR_FUNC_H

/**0. function that returns the sum of all its parameters */
int sum_them_all(const unsigned int n, ...);

/**1. function that prints numbers, followed by a new line. */
void print_numbers(const char *separator, const unsigned int n, ...);

/**2. function that prints strings, followed by a new line. */
void print_strings(const char *separator, const unsigned int n, ...);

/**3.function that prints anything */
void print_all(const char * const format, ...);

/**
 *struct print_types - Struct print_types
 *
 *@c: given character
 *@i: given integer
 *@f: given float
 *@s: given string
 */

typedef struct print_types
{
	char c;
	int i;
	float f;
	char *s;
} p_t;

#endif
