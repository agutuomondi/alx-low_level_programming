#include "hash_tables.h"

/**
 * shash_table_set - Adds an element to a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    shash_node_t *new, *prev, *current;
    char *value_copy;
    unsigned long int index;

    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);

    value_copy = strdup(value);
    if (value_copy == NULL)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);

    prev = NULL;
    current = ht->shead;

    while (current != NULL && strcmp(current->key, key) < 0)
    {
        prev = current;
        current = current->snext;
    }

    if (current != NULL && strcmp(current->key, key) == 0)
    {
        free(value_copy);
        free(current->value);
        current->value = value_copy;
    }
    else
    {
        new = malloc(sizeof(shash_node_t));
        if (new == NULL)
        {
            free(value_copy);
            return (0);
        }

        new->key = strdup(key);
        if (new->key == NULL)
        {
            free(value_copy);
            free(new);
            return (0);
        }

        new->value = value_copy;

        if (prev == NULL)
        {
            new->sprev = NULL;
            new->snext = ht->shead;
            ht->shead = new;
        }
        else
        {
            new->sprev = prev;
            new->snext = prev->snext;
            prev->snext = new;
        }

        if (new->snext == NULL)
            ht->stail = new;
        else
            new->snext->sprev = new;

        ht->array[index] = new;
    }

    return (1);
}
