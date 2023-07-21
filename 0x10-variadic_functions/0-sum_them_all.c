#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of perameters
 * Return: sum of all perameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int k, sum = 0;

	va_start(list, n);
	for (k = 0; k < n; k++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
