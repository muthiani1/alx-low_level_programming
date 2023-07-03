#include "main.h"

/**
 * print_array - Prints n elements of an array
 *
 * @a: array
 * @n: number of elements
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n - 1)
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("%d\n", a[n - 1]);
}
