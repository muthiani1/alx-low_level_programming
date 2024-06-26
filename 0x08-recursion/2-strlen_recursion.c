#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int n;

	if (*s == '\0')
		return (0);

	n = _strlen_recursion(s + 1);

	return (n + 1);
}
