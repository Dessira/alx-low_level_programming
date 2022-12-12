#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - function searches for a value using linear sorting algo
 * @array: pointer to first index
 * @size: size of array
 * @value: value to be searched for
 * Return: index of value found else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t a;

	if (array == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
	}
	return (-1);
}
