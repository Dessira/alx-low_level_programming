#include <stdio.h>
/**
 *
 */
int binary_search(int *array, size_t size, int value)
{
	size_t new_size = size / 2;

	if (size == 0)
		return (-1);
	print("%s", size);

	if (*array[new_size] == value)
	{
		return (14);
	}
	else if (*array[new_size] > value)
	{
		binary_search(array[new_size], new_size, value);
	}
	else if (*array[new_size] < value)
	{
		binary_search(array, new_size, value);
	}
	else
		return (-1);
}
