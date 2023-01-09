#include "hash_tables.h"

/**
 * key_index - function that returns the index of a key
 *
 * @key: the specific key to find index of
 * @size: the size of our hash table
 *
 * Return: the index of the key to search for
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2 % size);
}
