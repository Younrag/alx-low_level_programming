#include "hash_tables.h"
/**
* hash_table_set - adds an element to a hash table.
* @ht: the table to add to
* @key: the key
* @value: the value
* Return: 1 on success, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new = NULL, *temp = NULL;
	char *new_val;

	if (key == NULL || key == '\0' || value == NULL || ht == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, (*ht).size);
	temp = (*ht).array[index];
	while (temp != NULL)
	{
		if (strcmp((*temp).key, key) == 0)
		{
			new_val = strdup(value);
			if (!new_val)
				return (0);
			free((*temp).value);
			(*temp).value = new_val;
			return (1);
		}
		temp = (*temp).next;
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	(*new).key = strdup(key);
	if (!(*new).key)
		free(new), return (0);
	(*new).value = strdup(value);
	if (!(*new).value)
	{
		free((*new).key);
		free(new);
		return (0);
	}
	(*new).next = (*ht).array[index];
	(*ht).array[index] = new;
	return (1);
}
