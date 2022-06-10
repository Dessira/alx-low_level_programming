#include <stdio.h>
#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to beginning of substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *c = haystack;
		char *p = needle;

		while (*c == *p && *p != '\0')
		{
			c++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (NULL);
}
