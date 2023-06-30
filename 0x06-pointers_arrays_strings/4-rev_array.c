#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers.
 * @a: array.
 * @n: number of an elements of an array.
 * Return: void
 */

void reverse_array(int *a, int n)

{
	int m;
	int h;

	for (m = 0; m < n; m++)
	{
		n--;
		h = a[m];
		a[m] = a[n];
		a[n] = h;
	}
}
