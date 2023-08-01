#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to reverse
 * Return: 1 if if its and 0 if not.
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns string length.
 * @s: string
 * Return: length of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}



/**
 * check_pal - checks characters recusively for palindrom
 * @s: string
 * @i: interator
 * @len: string length
 * Return: 1 if palindrom, 0 if not.
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + 1) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
