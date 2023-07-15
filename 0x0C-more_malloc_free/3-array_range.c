#include <stdlib.h>
#include "main.h"

/**
 * array_range -  a function that creates an array of integers.
 * @min: minmum valie.
 * @max: maximum value.
 * Return: 0
 */

int *array_range(int min, int max)
{
	int *r;
	int k;

	if (min > max)
		return (NULL);
	r = malloc(sizeof(*r) * ((max - min) + 1));
	if (r == NULL)
		return (NULL);
	for (k = 0; min <= max; k++, min++)
		r[k] = min;
	return (r);
}
