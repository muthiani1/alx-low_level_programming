#include "main.h"

/**
 * print_number - Prints an integer
 *
 * Return: void
 */

void print_number(int n)
{
	int i = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n == 0)
	{
		_putchar('0');
	}
	while (n / i)
	{
		i *= 10;
	}
	i /= 10;
	while (i > 0)
	{
		_putchar('0' + n / i);
		n = n - ((n / i) * i);
		i /= 10;
	}
}
