#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat, *concat1;

    concat = string_nconcat(NULL, "School !!!", 6);
    concat1 = string_nconcat("Best ", "School !!!", 200);
    printf("%s\n", concat);
    printf("%s\n", concat1);
    free(concat);
    return (0);
}
