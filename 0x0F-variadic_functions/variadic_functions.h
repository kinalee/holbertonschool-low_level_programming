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

#endif

