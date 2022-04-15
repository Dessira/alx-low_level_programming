#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - function prints strings
 * @separator: string
 * @n: number of elements
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list input;
	unsigned int i;
	char *str;

	if (separator == NULL)
		return;

	va_start(input, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(input, char *);
		if (str == NULL)
		{
			str = "(nil)";
		}
		printf("%s", str);
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(input);
}
