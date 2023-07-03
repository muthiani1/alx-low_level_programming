#include "main.h"

/**
 * print_rev - Prints a string in reverse
 *
 * @s: string to print
 * Return: void
 */

void print_rev(char *s)
{
	int length = strlen(s);

	while (length > -1)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}
