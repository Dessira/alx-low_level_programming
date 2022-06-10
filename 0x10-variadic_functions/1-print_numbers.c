#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - function prints numbers and a new line
 * @separator: string
 * @n: number of elements
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list input;
	unsigned int i;

	va_start(input, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(input, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(input);
}
