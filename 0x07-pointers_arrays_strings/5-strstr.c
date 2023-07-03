#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: string to be searched.
 * @needle: substring to be located.
 * Return: apointer to the begining - if substring id located.
 * NULL - if the substring is not located.
 */

char *_strstr(char *haystack, char *needle)
{

	int m;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		m = 0;
		if (haystack[m] == needle[m])
		{
			do {
				if (needle[m + 1] == '\0')
					return (haystack);
				m++;
			} while (haystack[m] == needle[m]);
		}
		haystack++;
	}
	return ('\0');
}
