#include "main.h"

/**
 * check for alphabetic character
 * Returns: 1 for alphabetic character or 0 for anything else
 */

int _isalpha(int c);
{
	if ((c >= 65 && c <= 99) || (c >= 97 && c <= 122))

	{
		return (1);
	}
	return (0);
}
