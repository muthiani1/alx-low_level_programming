#include "main.h"

/**
 * print_square - Prints a square
 *
 * @size: Size of the square
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size == 0)
		_putchar('\n');
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		i++;
		_putchar('\n');
	}
}
