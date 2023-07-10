#include <unistd.h>

/**
 * _putchar - character c to stdout
 * @c: character to print
 * Return: 1 
 * return-1 on error and error set appropriatly.
 */

int _putchar(char c)
{
	return (write(1, $c, 1));
}
