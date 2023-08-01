#include "lists.h"

/**
 * add_nodeint_end - adds a new node
 * of a listint_t list
 * @head: pointer to the address.
 * @n: integer
 * Return: NULL if a function fails,
 * element address if otherwise
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last->next = new;
	}
	return (*head);
}


