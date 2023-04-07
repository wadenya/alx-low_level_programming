#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int y;
	hash_node_t *delet;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (y = 0; y < ht->size; y++)
	{
		while (ht->array[y] != NULL)
		{
			delet = ht->array[y]->next;
			free(ht->array[y]->key);
			free(ht->array[y]->value);
			free(ht->array[y]);
			ht->array[y] = delet;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
