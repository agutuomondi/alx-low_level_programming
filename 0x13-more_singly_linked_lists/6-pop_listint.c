#include "lists.h"

/**
 * pop_listint - deletes linked list head node
 * @head: pointer to the first element.
 * Return: 0 if list is empty, data inside
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
