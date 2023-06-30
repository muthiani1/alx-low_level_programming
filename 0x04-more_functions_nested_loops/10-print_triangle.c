#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size fo Triangle to print
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	i = 1;
	while (i <= size)
	{
		j = 0;
		while(j < size - i)
		{
			_putchar(' ');
			j++;
		}
		k = 0;
		while (k < i)
		{
			_putchar('#');
			k++;
		}
		_putchar('\n');
		i++;
	}
}
