#include "search_algos.h"

/**
 * advanced_binary_recursive - Recursive binary search algorithm
 * @array: Pointer to first element of [sub]array to search in
 * @low: Lower bound of search range
 * @high: Upper bound of search range
 * @value: Value to search 
 * Return: Index where value is located, or -1 if not present
 */
int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
	size_t i;

	if (low > high)
		return (-1);

	printf("Searching in array: ");
	for (i = low; i < high; i++)
		printf("%d, ", array[i]);

	printf("%d\n", array[i]);

	i = low + (high - low) / 2;

	if (array[i] == value && (i == low || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, low, i, value));
	return (advanced_binary_recursive(array, i + 1, high, value));
}

/**
 * advanced_binary - Function to initiate the recursive binary search
 *  by searching for value in a sorted array of integers.
 * @array: Pointer first element array to search in
 * @size: Number of elements in array
 * @value: Value to search
 * Return: Index where value is located, or -1 if not present
 */

int advanced_binary(int *array, size_t size, int value)
{
	if ((!array) || size == 0)
		return (-1);
	return (advanced_binary_recursive(array, 0, size - 1, value));
}
