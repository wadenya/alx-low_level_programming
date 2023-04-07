#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the array
 * Return: NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int y;

	hash_table_t *new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(size * sizeof(hash_node_t *));
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (y = 0; y < size; y++)
		new_table->array[y] = NULL;
	return (new_table);
}
