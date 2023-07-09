#include "main.h"

/**
 * _isupper - uppercase latters
 * @c: char to check
 * Return: for uppercase return 1, else return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);

	return (0);
}
