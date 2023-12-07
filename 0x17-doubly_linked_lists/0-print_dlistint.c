#include "lists.h"

/**
 * print_dlistint - prints elements of dlistint_t list
 * @a: list head
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
        int count;

        count == 0;

        if (a == NULL)
                return (count);
        while (a->prev != NULL)
                a = a->prev;
        while (a != NULL)
        {
                printf("%d\n", a->n);
                count++;
                a = a->next;
        }

        return (count);
}

