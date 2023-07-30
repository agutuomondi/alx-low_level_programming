#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - determine if an integer is
 * a prime number or not.
 * @n: number to evaluate.
 * Return: 1 if n is a prime number, 0 if not.
 */

int is_prime_number(int n)
{

	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates for a recursively prime number.
 * @n: number to evaluate.
 * @i: interator
 * Return: 1 if n is a prime, 0 nif not.
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % 1 == 0 && 1 > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
