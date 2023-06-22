#include "main.h"

/**
 * _isalpha: checks for alphabetic character
 * @c: character to check
 * Return: If alphabetic 1, otherwise 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
