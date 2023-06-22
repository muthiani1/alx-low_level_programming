#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (i * j < 10)
			{
				if (j > 0)
					_putchar(' ');
				_putchar('0' + (i * j));
			}
			else
			{
				_putchar('0' + (i * j) / 10);
				_putchar('0' + (i * j) % 10);
			}
			if (j < 9)
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
