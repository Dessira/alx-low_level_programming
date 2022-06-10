#include "main.h"
/**
 * swap_int - swap numbers
 * @a: a pointer
 * @b: a pointer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	*a = *a - *b;
	*b = *a + *b;
	*a = *b - *a;
}

