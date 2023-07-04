#include "main.h"

/**
 * _atoi - Converts a string to an integer
 *
 * @s: string to convert
 * Return: converted integer
 */

int _atoi(char *s)
{
	int d = 0, i = 0, m = 0, n = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			m++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			d = s[i] - '0';
			n = (n * 10) + d;
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
		}
		i++;
	}
	if (m % 2)
		n = -n;

	return (n);
}
