#include <stdio.h>

/**
 * main - Emtry point
 *
 * Return: always (0) success
 */

int main(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (i != j && i < j)
			{
				putchar('0' + i);
				putchar('0' + j);
				if (i + j != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
	i++;
	}
	putchar('\n');

	return (0);
}
