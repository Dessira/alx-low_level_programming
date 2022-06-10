#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: a string.
 *Return: The integer value of the comverted string.
 */

int _atoi(char *s)
{
	int i = 1;
	unsigned int j = 0;

	do {

		if (*s == '-')
			i *= -1;

		else if (*s >= '0' && *s <= '9')
			j = (j * 10) + (*s - '0');

		else if (j > 0)
			break;
	} while (*s++);

	return (j * i);
}
