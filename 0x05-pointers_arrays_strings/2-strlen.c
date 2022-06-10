#include "main.h"
/**
 * _strlen - counts string length
 * @s: string pointer
 * Return: 0
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (s[len])
	{
		len++;
	}
	return (len);
}
