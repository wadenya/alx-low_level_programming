#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: is hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int y;
	hash_node_t *printer;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	for (y = 0; y < ht->size; y++)
	{
		printer = ht->array[y];
		while (printer)
		{
			printf("'%s': '%s'", printer->key, printer->value);
			printer = printer->next;
			if (printer)
				printf(", ");
		}
	}
	printf("}\n");
}
