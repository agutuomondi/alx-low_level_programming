#include <stddef.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - linear search algorithm
 * @array: array of ints
 * @size: size of array
 * @value: value to search for
 * Return: position or -1 if not found
 *
 */

int linear_search(int *array, size_t size, int value)
{
	size_t a;

	if (array == NULL)
		return (-1);

	for (a = 0; a < size; ++a)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);

		if (array[a] == value)
			return (a);
	}

	return (-1);

}
