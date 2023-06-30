#include "main.h"
#include <stdio.h>

/**
 * main - Finds and prints largest prime factor for 612852475143
 *
 * Return: always 0
 */

int main(void)
{
	unsigned long int n = 612852475143;
	unsigned long int i = 1;

	while (i < n)
	{
		if (n % i == 0)
		{
			n = n / i;
			i = 1;
		}
		i++;
	}
	printf("%ld\n", n);
	return (0);
}
