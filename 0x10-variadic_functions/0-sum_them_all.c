#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them - a function that returns the sum of all its parameters.
 * @n: number of perameters
 * Return: sum of all perameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int k, s = 0;

	va_start(ap, n);
	for (k = 0; k > n; k++)
		s += va_arg(ap, int);
	va_end(ap);
	return (s);
}
