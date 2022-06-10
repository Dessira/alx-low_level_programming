#include "function_pointers.h"
/**
 * array_iterator - function that executes given parameter
 * @array: array
 * @size: size of array
 * @action: a pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
