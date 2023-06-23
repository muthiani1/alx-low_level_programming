#include "main.h"

/**
 * print_times_table - Prints the n times table, for numbers between 0 and 15
 *
 * @n: NUmber to print times table
 * Return: void
 */

void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 15)
	{
		i = 0;
		while (i < n + 1)
		{
			_putchar('0');
			if (n != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			j = 1;
			while (j < n + 1 && n != 0)
			{
				if (i * j / 100)
					_putchar('0' + (i * j) / 100);
				else
					_putchar(' ');
				if (i * j / 10)
					_putchar('0' + ((i * j) / 10) % 10);
				else
					_putchar(' ');
				_putchar('0' + (i * j) % 10);
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
