#include <stdio.h>
/**
 * _isupper - checks for uppercase character.
 * @c: character
 * Return: 0 or 1 depending on output.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
