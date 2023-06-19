#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always (0) success
 */

int main(void)
{
	char i = '0';
	
	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');

	return (0);
}
