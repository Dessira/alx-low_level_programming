#include "main.h"
/**
 * _memset - function that fills in a constant b
 * @s: pointer
 * @b: constant
 * @n: number of bytes
 * Return: a pointer 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
