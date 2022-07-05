#include "hash_tables.h"

/**
 * hash_table_get - Function that retrieves a value associated with a key
 * @ht: hash table
 * @key: key to be matched
 * Return: value linked to key or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int size = ht->size;
	unsigned long int index = key_index((const unsigned char *)key, size);

	if (strlen(key) == 0 || key == NULL)
		return (NULL);
	if (ht != NULL)
	{
		while (ht->array[index] != NULL)
		{
			if (strcmp(ht->array[index]->key, key) == 0)
			{
				return (ht->array[index]->value);
			}
			ht->array[index] = ht->array[index]->next;
		}
	}
	return (NULL);
}
