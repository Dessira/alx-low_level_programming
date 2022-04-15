#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - function returns the sum of its parameters
 * @n: number of inputs
 * Return: 0 or sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list input;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(input, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(input, const unsigned int);
	}
	va_end((input);

	return (sum);
}
