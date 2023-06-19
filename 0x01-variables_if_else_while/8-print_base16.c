#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always  0 (success)
 */

int main(void)
{
	char i, c;

	i = '0';
	c = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
