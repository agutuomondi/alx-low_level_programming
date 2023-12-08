#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to head of the list
 * Return: nothing
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	if (head == NULL)
		return;
	while (head->next)
	{
		next = head->next;
		free(head);
		head = next;
	}
	free(head);
}

