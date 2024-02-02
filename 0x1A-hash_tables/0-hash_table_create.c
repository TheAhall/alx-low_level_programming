#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: the size of the table reated
 * Return: the table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = (hash_table_t*)malloc(sizeof(hash_table_t));
	table->size = size;
	table->array = (hash_node_t**)calloc(table->size, sizeof(hash_node_t*));
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;
	return (table);
}
