#include "main.h"

/**
 * clear_bit - Sets value of bit to 0
 * @n: integer pointer
 * @n: index
 * Return: 1 on success else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b;

	if (n == NULL)
		return (-1);

	b = 1 << index;

	if ((b | *n) == *n)
		*n = *n ^ b;

	return (1);
}
