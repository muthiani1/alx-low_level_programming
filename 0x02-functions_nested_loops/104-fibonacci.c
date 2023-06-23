#include <stdio.h>
#include "main.h"

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: always 0
 */

int main(void)
{
        unsigned long int i, j, k, l;
	
	i = 1;
	j = 2;
	k = i + j;
	l = 3;
	printf("1, 2, ");
	while (l < 98)
	{
		i = j;
		j = k;
		k = i + j;
		printf("%lu, ",k);
		l++;
	}
	printf("%lu\n", k);

	return (0);
}
