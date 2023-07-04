#include "main.h"

/**
 * puts_half - Prints half of a string
 *
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int length = strlen(str);
	int n;

	if (length % 2)
		n = ((length - 1) / 2) + 1;
	else
		n = length / 2;

	while (n <= length - 1)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
