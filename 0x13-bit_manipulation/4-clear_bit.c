/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the given long int
 * @index: given index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 4))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
