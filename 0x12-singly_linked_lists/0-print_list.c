#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints elements of list_t list.
 * @h: list_t list.
 * Return: nodes number in h.
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		n++;
		h = h->next;
	}
	return (n);
}
