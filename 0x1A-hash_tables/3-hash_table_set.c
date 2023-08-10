#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: pointer to the hash table.
 * @key: key to add
 * @value: The value of the key.
 *
 * Return: if failure - 0 Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *n_ht;
	char *val_copy;
	unsigned long int idx, x;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val_copy = strdup(value);
	if (val_copy == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (x = idx; ht->array[x]; x++)
	{
		if (strcmp(ht->array[x]->key, key) == 0)
		{
			free(ht->array[x]->value);
			ht->array[x]->value = val_copy;
			return (1);
		}
	}

	n_ht = malloc(sizeof(hash_node_t));
	if (n_ht == NULL)
	{
		free(val_copy);
		return (0);
	}
	n_ht->key = strdup(key);
	if (n_ht->key == NULL)
	{
		free(n_ht);
		return (0);
	}
	n_ht->value = val_copy;
	n_ht->next = ht->array[idx];
	ht->array[idx] = n_ht;

	return (1);
}
