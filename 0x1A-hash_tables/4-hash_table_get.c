#include "hash_tables.h"
/**
* hash_table_get - gets a hash table
* @ht: the hast table retieving from
* @key: the key for retrieving
* Return: Value, NULL if key not found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *Head;

	if (*key == '\0' || key == NULL || ht == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, (*ht).size);
	Head = (*ht).array[index];
	while (Head != NULL)
	{
		if (strcmp((*Head).key, key) == 0)
			return ((*Head).value);
		Head = (*Head).next;
	}
	return (NULL);
}
