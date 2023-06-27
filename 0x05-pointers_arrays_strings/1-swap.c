#include "main.h"

/**
 * swap_int -  function that swaps the values of two integers
 * @a: swaps and stores adress of b
 * @b: swaps and stores adress of a
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
