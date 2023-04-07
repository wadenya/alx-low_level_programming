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
	char flg = 0;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	for (y = 0; y < ht->size; y++)
	{
		printer = ht->array[y];
		while (printer != NULL)
		{
			if (flg == 1)
				printf(", ");
			printf("'%s': '%s'", printer->key, printer->value);
			flg = 1;
			printer = printer->next;
		}
	}
	printf("}\n");
}
