#include "main.h"
#include <stdio.h>

/**
 * print_binary - a function that prints the binary representation
 * @n: number to print
 */

void print_binary(unsigned long int n)
{
int j, count = 0;
unsigned long int current;

for (j = 63; j >= 0; j--)
{
current = n >> j;

if (current & 1)
{
putchar('1');
count++;
}
else if (count)
putchar('0');
}
if (!count)
putchar('0');
}
