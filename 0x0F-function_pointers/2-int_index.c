#include "function_pointers.h"

/**
 * int_index - search for integer in an arrray.
 * @array: array of integer.
 * @size: array size.
 * @cmp: pointer to a function
 * Return: <=0 --1 if no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
