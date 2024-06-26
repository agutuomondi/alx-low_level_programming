#include "search_algos.h"

/**
 * linear_skip - Searches algorithm in sorted singly
 *               linked list of integers using linear skip.
 * @list: pointer to head of linked list to search.
 * @value: value to search for.
 * Return: If the value is not present or the head of list is NULL, NULL.
 *         Otherwise, a pointer to first node where value is located.
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *jump;

	if (!list)
		return (NULL);

	for (node = jump = list; jump->next != NULL && jump->n < value;)
	{
		node = jump;
		if (jump->express != NULL)
		{
			jump = jump->express;
			printf("Value checked at index [%ld] = [%d]\n",
					jump->index, jump->n);
		}
		else
		{
			while (jump->next != NULL)
				jump = jump->next;
		}

	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);
	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	return (node->n == value ? node : NULL);
}
