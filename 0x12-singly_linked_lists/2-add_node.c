#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds new node to the begining of the list
 * @head: original linked list.
 * @str: string to add to node.
 * Return: address of new list or NULL.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int l = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	while (str[l])
		l++;
	temp->len = l;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
