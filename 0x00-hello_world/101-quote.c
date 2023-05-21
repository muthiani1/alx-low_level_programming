#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 * Print a quote without using printf or puts.
 *
 * Return: 1
 */

int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, quote, strlen(quote));
	return (1);
}
