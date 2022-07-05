#include "hash_tables.h"

/**
 * key_index - A function that gives you the index of a key
 * @key: given key
 * @size: size of array
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}
