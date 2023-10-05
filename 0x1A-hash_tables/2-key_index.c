#include "hash_tables.h"

/**
 * key_index - Index at which a value
 *      pair should be stored in array of hash table.
 * @key: The value to get the index of.
 * @size: The size array of the hash table.
 *
 * Return: Index of the value
 * Description: Use the djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
