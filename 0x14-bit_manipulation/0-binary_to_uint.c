#include "main.h"

/**
 * binary_to_unit - Converts a binary number to an unsigned int
 * @b: pointer to string
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int numb = 0;

	if (b[i] == '\0')
		return (0);

	while ((b[i] == '1') || (b[i] == '0'))
	{
		numb <<= 1;
		numb += b[i] - '0';
		i++;
	}
	return (numb);
}
