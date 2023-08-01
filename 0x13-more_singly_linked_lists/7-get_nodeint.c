#include "lists.h"

/**
 * get_nodeint_at_index - return the node
 * @head: first node is the linked list
 * @index: index of the node to return.
 * Return: NULL OR POINTER TONODE.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;

	listint_t *temp = head;

	while (temp && a < index)
	{
		temp = temp->next;
		a++;
	}
	return (temp ? temp : NULL);
}
