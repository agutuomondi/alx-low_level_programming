#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns element number
 * @h: pointer to the lisint_t list head
 * Return: element number in listint_ list
 */

size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
