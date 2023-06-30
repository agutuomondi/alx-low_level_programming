#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @x: pointer to string.
 * Return: char.
 */

char *string_toupper(char *x)
{
	int y;

	y = 0;
	while (x[y] != '\0')
	{
		if (x[y] >= 97 && x[y] <= 122)
			x[y] = x[y] - 32;
		y++;
	}
	return (x);
}

