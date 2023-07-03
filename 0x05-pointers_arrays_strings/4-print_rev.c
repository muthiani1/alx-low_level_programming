#include "main.h"

/**
 * print_rev - Prints a string in reverse
 *
 * @s: string to print
 * Return: void
 */

void print_rev(char *s)
{
	char *s1 = s;

	while (*s1 != '\0')
	{
		s1++;
	}
	while (s1 >= s)
	{
		_putchar(*s1);
		s1--;
	}
	_putchar('\n');
}
