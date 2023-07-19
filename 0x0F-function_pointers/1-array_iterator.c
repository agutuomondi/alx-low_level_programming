#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function given as a parameter
 * @array: the array
 * @size: the size of array
 * @action: a pointer to a function
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
