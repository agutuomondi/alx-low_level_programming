#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end.
 * @head: head of the linked list.
 * @str: string to store the list.
 * Return: head address.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current_node;
	size_t m;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	for (m = 0; str[m]; m++)
		;
	new_node->len = m;
	new_node->next = NULL;
	current_node = *head;

	if (current_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}
	return (*head);
}
