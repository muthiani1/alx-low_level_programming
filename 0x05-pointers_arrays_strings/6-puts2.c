#include "main.h"
#include <string.h>

/**
 * puts2 - Prints every other character of a string
 *
 * @str: string to print
 * return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (!(i % 2) || i == 0)
			putchar(*str);
		i++;
		str++;
	}
	_putchar('\n');
}
