#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - This is node of a hash table
 * @key: we have the key
 * The key is unique in the HashTable
 * @value: Value corresponding to a string
 * @next: Pointer to next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - the hashtable data structure
 * @size: The size of de array
 * @array: An array at size
 * Each cell of array is a pointer to the first node of a linked list,
 * bcos we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

/**
 * struct shash_node_s - Node that is sorted hash table
 * @key: The string
 * The string is unique in HashTable
 * @value: The value corresponding to a key
 * @next: Pointer to the next node of the List
 * @sprev: Pointer to the key of the sorted linked list
 * @snext: Pointer to the next key of the sorted linked list
 */
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - get the hash table data structure
 * @size: size of the array
 * @array: the array of size at size
 * Each cell of array is a pointer to de first node of a linked list,
 * bcos we want our HashTable to use a Chaining collision handling
 * @shead: pointer to the first key of the sorted linked list
 * @stail: A pointer to de last key of the sorted linked list
 */
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);
