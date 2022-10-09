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
	size_t i;

	if (*array == 0)
		return (-1);

	for(i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, *array);
		if (*array == value)
		{
			return (i);
		}
		array = array + 1;
	}
	return (-1);
}
