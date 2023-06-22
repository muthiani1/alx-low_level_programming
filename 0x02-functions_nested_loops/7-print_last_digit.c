#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @i: Number
 * Return: Last digit value
 */

int print_last_digit(int i)
{
	_putchar('0' + abs( i % 10));
	return (abs(i % 10));
}
