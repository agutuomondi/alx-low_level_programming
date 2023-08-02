#include "lists.h"

/**
 * insert_nodeint_at_index - inseet new node
 * @head: pinter to the first node
 * @idx: indext where node is added
 * @n: data to insert in a new node
 * Return: NULL or pointer to a new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int b;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = (NULL);

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (b = 0; temp && b < idx; b++)
	{
		if (b == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
