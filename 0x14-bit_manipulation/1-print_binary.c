#include "main.h"

/**
 * print_binary - Prints binary representation of number
 * @n: number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i, j, k, l = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}
	i = n;

	while (i != 0)
	{
		l++;
		i = i >> 1;
	}

	for (k = l - 1; k >= 0; k--)
	{
		j = n >> l;
		if (j & 1)
			printf("1");
		else
			printf("0");
	}
}
