#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints elements of listint_t list
 * @h: pointer to the head of list_t list
 * Return: number of nodes in list_t list.
 */

size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (a);
}
