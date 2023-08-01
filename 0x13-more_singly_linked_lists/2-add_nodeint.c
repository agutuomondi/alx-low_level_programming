#include"lists.h"

/**
 * add_nodeint - adds a new node
 * @head: pointer to the address
 * @n: integer
 * Return: NULL if function fails,
 * address if otherwise
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
