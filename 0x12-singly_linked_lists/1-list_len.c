#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - show number of elements in a list.
 * @h: linked list.
 * Return: Number of elements of a list.
 */

size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		h = h->next;
		c++;
	}
	return (c);
}
