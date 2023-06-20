#include <stdio.h>

/**
 * main - Emtry point
 *
 * Return: always (0) success
 */

int main(void)
{
	int i, j, k;

	i = 0;
	while (i < 10)
	{
		j = 1;
		while (j < 10)
		{
			k = 2;
			while (k < 10)
			{
				if (i != j && j != k && k != i && i < j && j < k)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);
					if (i + j + k != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}


	putchar('\n');

	return (0);
}
