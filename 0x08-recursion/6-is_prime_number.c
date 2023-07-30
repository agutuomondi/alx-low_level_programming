#include "main.h"

int actual_prime(int n, int i);

/**
 * actual_prime - calculate if its a prime
 * @n: input
 * @i: divisor
 * Return: 1 if n is a prime number, 0 if not.
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}

/**
 * is_prime_number - say if an integer is a prime number.
 * @n: number to evaluate
 * Return: 11 if n ia a prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
