#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	int d = 0;
	unsigned long int index;

	if (ht == NULL || (*ht).array == NULL)
	{
		return;
	}
	printf("{");
	for (index = 0; index < (*ht).size; index++)
	{
		temp = (*ht).array[index];
		while (temp != NULL)
		{
			if (d == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", (*temp).key, (*temp).value);
			temp = (*temp).next;
			d = 1;
		}
	}
	printf("}\n");
}
