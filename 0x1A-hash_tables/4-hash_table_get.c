#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the table
 * @key: the key we are looking for
 * Return: value associated with the element,
 * or NULL if key couldn’t be foun.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	node = ht->array[index];
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->next;
	if (node == NULL)
		return (NULL);
	return (node->value);
}
