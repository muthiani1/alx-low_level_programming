#include <stdio.h>

/**
 * main - Prints the sum of the even-valued terms
 *
 * Return: always 0
 */

int main(void)
{
	long int i, j, k, sum;

	i = 1;
	j = 2;
	k = i + j;
	sum = 2;
	while (k < 4000000)
	{
		i = j;
		j = k;
		if (k % 2 == 0)
			sum += k;
		k = i + j;
	}
	printf("%ld\n", sum);
	return (0);
}
