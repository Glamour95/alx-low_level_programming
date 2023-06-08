#include "hash_tables.h"

/**
 * key_index - Returns the index at which the key/value pair
 *             should be stored in the array of a hash table.
 * @key: The key string.
 * @size: The size of the array of the hash table.
 *
 * Return: The index of the key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_val, index;

	hash_val = hash_djb2(key);
	index = hash_val % size;

	return (index);
}
