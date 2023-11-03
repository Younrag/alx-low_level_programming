#include "hash_tables.h"
/**
 * hash_table_delete - delete yo hashes
 * @ht: hash table for deletion
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *next;
	unsigned long int i;

	if ((*ht).size == 0 || !(*ht).array || !ht)
		return;
	for (i = 0; (*ht).size > i; i++)
	{
		while ((*ht).array[i] != NULL)
		{
			next = (*ht).array[i]->next;
			free((*ht).array[i]->key);
			free((*ht).array[i]->value);
			free((*ht).array[i]);
			ht->array[i] = next;
		}
	}
	free((*ht).array);
	free(ht);
}
