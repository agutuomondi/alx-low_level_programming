#include "main.h"

/**
 * _rev_array -  a function that reverses the content of an array of integers.
 * @a: pointer to array.
 * @n: number of an elements of an array.
 * Retutn: void
 */

void reverse_array(int *a, int n)

{
	int temporary, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		temporary = a[counter];
		a[counter++] = a[n];
		a[n--] = temporary,
	}
}
