#include <stdio.h>
#include "main.h"

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: always 0
 */

int main(void)
{
        unsigned long int i, j, k;
	
	i = 1;
	j = 2;
	k = 3;
	printf("1");
	while (k < 92)
	{
		printf(", %lu",j);
		j = j + i;
		i = j - i;
		k++;
	}

	i1 = i / 10000000000;
	i2 = i % 10000000000;
	j1 = j / 10000000000;
	j2 = j % 10000000000;

	while (k > 91 && k < 100)
	{
		printf(", %lu%lu", (j1 + j2 / 10000000000), j2 % 10000000000);
		j1 = j1 + i1;
		j2 = j2 + i2;
		i1 = j1 - i1;
		i2 = j2 - i2;
		k++;
	}
	return (0);
}
