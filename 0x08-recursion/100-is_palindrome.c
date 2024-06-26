#include "main.h"
#include <string.h>

/**
 * helper - function
 *
 * @str: pointer 1
 * @strev: pointer 2
 * Return: integer
 */

int helper(char *str, char *strev)
{
	if (*str == '\0')
		return (1);
	if (*str == *strev)
		return (helper(str + 1, strev - 1));
	return (0);
}

/**
 * is_palindrome -  checks if a string is a palindrome or not
 *
 * @s: string to check
 * Return: 1 (True) 0 (False)
 */

int is_palindrome(char *s)
{
	int len = 0;
	char *strrev;

	len = strlen(s);

	if (len <= 1)
		return (1);
	strrev = s + (len - 1);
	return (helper(s, strrev));
}
