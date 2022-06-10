#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - function prints anything
 * @format: argument types
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list input;
	int n = 0, i = 0;
	char *s = ", ";
	char *str;

	va_start(input, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n  == (i - 1))
		{
			s = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(input, int), s);
			break;
		case 'i':
			printf("%d%s", va_arg(input, int), s);
			break;
		case 'f':
			printf("%f%s", va_arg(input, double), s);
			break;
		case 's':
			str = va_arg(input, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, s);
			break;
		}
		n++;
	}
	printf("\n");

	va_end(input);
}
