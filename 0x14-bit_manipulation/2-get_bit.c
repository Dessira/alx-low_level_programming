#include "main.h"

/**
 * get_bit - Returns the value of a bit
 * @n: number
 * @index: index
 * Returns: Value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int b;

	b = (n >> index) & 1;

	if ((b == 1) || (b == 0))
		return (b);
	else
		return (-1);
}
