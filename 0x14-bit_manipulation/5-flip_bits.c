#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: integer input
 * @m: integer input
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;

	i = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			i++;
		m = m >> 1;
		n = n >> 1;

	}
	return (i);
}
