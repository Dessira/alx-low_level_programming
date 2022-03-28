#include "main.h"

/**
 * _strspn - function that gets the length of a prefix string
 * @s: string
 * @accept: prefix
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k, bytes;

	bytes = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		k = 0;

		for (j = 0; acccept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				bytes++;
				k = 1;
			}
		}
		if (k == 0)
			return (bytes);
	}
	return (bytes);
}
