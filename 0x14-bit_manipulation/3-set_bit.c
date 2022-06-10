#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @index: index
 * @n: integer input
 * Return: 1 on success else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b;

	if (n == NULL)
		return (-1);

	b = 1 << index;
	*n = *n | b;

	return (1);
}
