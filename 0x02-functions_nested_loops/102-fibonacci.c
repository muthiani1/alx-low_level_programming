#include <stdio.h>

/**
 * main - Prints the first 50 fibonacci numbers
 *
 * Return: void
 */

int main(void)
{
	long int i, j, k, l;

	i = 1;
	j = 2;
	k = i + j;
	l = 3;
	printf("1, 2, ");
	while (l < 50)
	{
		printf("%ld, ", k);
		i = j;
		j = k;
		k = i + j;
		l++;
	}
	printf("%ld\n", k);
	return (0);
}
