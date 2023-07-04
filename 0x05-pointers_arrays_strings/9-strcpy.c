#include "main.h"

/**
 * _strcpy - Copies string
 *
 * @dest: copy destination
 * @src: copy source
 * Return: pointer to copy destination
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	char *src1 = src;

	while (*src1 != '\0')
	{
		dest[i] = *src1;
		src1++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
