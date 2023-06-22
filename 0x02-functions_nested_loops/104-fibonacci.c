#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: always 0
 */

void printLong(long int);

int main(void)
{
        long int i, j, k, l;
         i = 1;
         j = 2;
         k = i + j;
         l = 3;

         while (l < 97)
         {
                 printLong(k);
		 putchar(',');
		 putchar(' ');
                 i = j;
                 j = k;
                 k = i + j;
                 l++;
         }
         printLong(k);
	 putchar('\n');
        return (0);
}

void printLong(long int num)
{
	if (num/10)
		printLong(num/10);

	putchar('0'+ num % 10);
}
