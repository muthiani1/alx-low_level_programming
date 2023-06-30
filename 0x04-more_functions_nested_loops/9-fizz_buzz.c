#include <stdio.h>

/**
 * main - prints numbers 1 to 100. For multiples of 3, prints fizz, for multiples of
 * 5, prints Buzz, anf FizzBuzz for multiples of both.
 *
 * Return: always 0
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
		{
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
