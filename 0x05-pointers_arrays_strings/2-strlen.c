#include "main.h"

/**
 * _strlen - Returns the length of a string
 *
 * @s: String pointer
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}

	return (i);
}
