#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar('0' + i);
		if (i != 9)
		{
			putchar(',');
			putchat(' ');
		}
		i++;
	}
	putchar('\n');

	return (0);
}
