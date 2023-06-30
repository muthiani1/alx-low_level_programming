#include "main.h"

/**
 * print_number - Prints an integer
 *
 * @n: number to be printed
 * Return: void
 */

void print_number(int n)
{
	unsigned int n1;
	unsigned int i = 1;
	int j = 0;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	n1 = n;
	if (n1 == 0)
	{
		_putchar('0');
	}
	while (n1 / i)
	{
		i *= 10;
		j++;
	}
	while (j > 0)
	{
		i /= 10;
		_putchar('0' + n1 / i);
		n1 = n1 % i;
		j--;
	}
}
