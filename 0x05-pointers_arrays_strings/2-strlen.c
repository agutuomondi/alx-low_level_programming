#include "main.h"

/**
 * _strlen - function that prints a string, followed by a new line
 * @s:-string to be checked
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int string_length = 0;
		while (s[string_length])
			string_length++;
	return (string_length);
}

