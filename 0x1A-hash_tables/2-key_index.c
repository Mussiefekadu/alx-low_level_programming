#include "hash_tables.h"

/**
 * key_index - This returns the index of a key
 * @key: This is the key
 * @size: This is the size of the array of the hash table
 * Return: This is an index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}
